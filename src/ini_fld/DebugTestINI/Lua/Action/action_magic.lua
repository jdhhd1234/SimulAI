-- Auto Generated Action Lua
-- Do Not Edit Manually

local Actions = {}

local function GetMagic(world, index_number)
    return GetRoot(world, index_number).magic
end

local function Sigmoid(norm, k)
    return 1.0 / (1.0 + math.exp(-k * (norm - 0.5)))
end

local function Clamp(value, min_value, max_value)
    if value < min_value then
        return min_value
    end

    if value > max_value then
        return max_value
    end

    return value
end

local function RecomputeMetric(group, field_name)
    local min_name = field_name .. "_min"
    local max_name = field_name .. "_max"
    local norm_name = field_name .. "_norm"
    local sigmoid_name = field_name .. "_sigmoid"
    local min_value = group[min_name]
    local max_value = group[max_name]
    local current_value = group[field_name]

    if min_value == nil or max_value == nil or current_value == nil then
        return
    end

    current_value = Clamp(current_value, min_value, max_value)
    group[field_name] = current_value

    if max_value == min_value then
        group[norm_name] = 0.0
    else
        group[norm_name] = (current_value - min_value) / (max_value - min_value)
    end

    group[sigmoid_name] = Sigmoid(group[norm_name], 10.0)
end

local function ShiftMetric(group, field_name, delta)
    if group[field_name] == nil then
        return
    end

    group[field_name] = group[field_name] + delta
    RecomputeMetric(group, field_name)
end

local function GetScore(group, field_name)
    local sigmoid_value = group[field_name .. "_sigmoid"]
    if sigmoid_value ~= nil then
        return sigmoid_value
    end

    local norm_value = group[field_name .. "_norm"]
    if norm_value ~= nil then
        return norm_value
    end

    return 0.0
end

local function HighBestNeed(group, field_name)
    return 1.0 - GetScore(group, field_name)
end

local function LowBestNeed(group, field_name)
    return GetScore(group, field_name)
end

local function Average(...)
    local values = { ... }
    local total = 0.0

    for i = 1, #values do
        total = total + values[i]
    end

    return total / #values
end

Actions.ManaTaxCut = {
    tax_rate_change = -3.00,
    duration_months = 12,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating") > 0.0
            or LowBestNeed(magic.government_lowbest_sigmoid_result, "tax_burden_index") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating"),
            LowBestNeed(magic.government_lowbest_sigmoid_result, "tax_burden_index")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        local relief_strength = math.abs(Actions.ManaTaxCut.tax_rate_change)
        ShiftMetric(magic.government_highbest_sigmoid_result, "approval_rating", relief_strength * 0.20)
        ShiftMetric(magic.government_lowbest_sigmoid_result, "tax_burden_index", -relief_strength)
    end,

    After = function(world, country)
    end,
}

Actions.LeylineTariffIncrease = {
    tariff_rate_change = 6.00,
    target_import_share = 0.15,
    duration_months = 12,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.diplomacy_lowbest_sigmoid_result, "active_trade_disputes") < 1.0
            or HighBestNeed(magic.diplomacy_highbest_sigmoid_result, "neighboring_realms_relations") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            1.0 - LowBestNeed(magic.diplomacy_lowbest_sigmoid_result, "active_trade_disputes"),
            1.0 - HighBestNeed(magic.diplomacy_highbest_sigmoid_result, "neighboring_realms_relations")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.diplomacy_lowbest_sigmoid_result, "active_trade_disputes", math.ceil(Actions.LeylineTariffIncrease.target_import_share * 10.0))
        ShiftMetric(magic.diplomacy_highbest_sigmoid_result, "neighboring_realms_relations", -Actions.LeylineTariffIncrease.tariff_rate_change * 0.35)
    end,

    After = function(world, country)
    end,
}

Actions.TeleportNetworkAct = {
    annual_budget = 90000000,
    duration_months = 24,
    portal_nodes_target = 150,
    ward_gate_projects = 40,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.infrastructure_highbest_sigmoid_result, "teleportation_network_coverage") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.infrastructure_highbest_sigmoid_result, "teleportation_network_coverage")
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        local coverage_gain = Actions.TeleportNetworkAct.portal_nodes_target * 0.08
            + Actions.TeleportNetworkAct.ward_gate_projects * 0.15
        ShiftMetric(magic.infrastructure_highbest_sigmoid_result, "teleportation_network_coverage", coverage_gain)
    end,

    After = function(world, country)
    end,
}

Actions.BattlemageExpansion = {
    annual_budget = 65000000,
    duration_months = 24,
    recruit_target = 3000,
    dragon_wing_target = 4,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.military_highbest_sigmoid_result, "royal_battlemage_corps_strength") > 0.0
            or LowBestNeed(magic.military_lowbest_sigmoid_result, "border_conflict_frequency") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            HighBestNeed(magic.military_highbest_sigmoid_result, "royal_battlemage_corps_strength"),
            LowBestNeed(magic.military_lowbest_sigmoid_result, "border_conflict_frequency")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(
            magic.military_highbest_sigmoid_result,
            "royal_battlemage_corps_strength",
            Actions.BattlemageExpansion.recruit_target / 200.0 + Actions.BattlemageExpansion.dragon_wing_target * 2.0
        )
        ShiftMetric(magic.military_lowbest_sigmoid_result, "border_conflict_frequency", -1.0)
    end,

    After = function(world, country)
    end,
}

Actions.ArcaneAcademyFunding = {
    annual_budget = 40000000,
    duration_months = 36,
    scholarship_slots = 2000,
    research_grants = 150,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.population_highbest_sigmoid_result, "mage_population_ratio") > 0.0
            or HighBestNeed(magic.economy_highbest_sigmoid_result, "gdp_gold_standard") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            HighBestNeed(magic.population_highbest_sigmoid_result, "mage_population_ratio"),
            HighBestNeed(magic.economy_highbest_sigmoid_result, "gdp_gold_standard")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.population_highbest_sigmoid_result, "mage_population_ratio", Actions.ArcaneAcademyFunding.scholarship_slots / 1000.0)
        ShiftMetric(magic.economy_highbest_sigmoid_result, "gdp_gold_standard", Actions.ArcaneAcademyFunding.research_grants * 500000.0)
    end,

    After = function(world, country)
    end,
}

Actions.ForbiddenMagicCrackdown = {
    annual_budget = 20000000,
    duration_months = 18,
    inspector_recruit_target = 500,
    raid_operations_target = 200,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.magic_lowbest_sigmoid_result, "forbidden_magic_incidents") > 0.0
            or HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            LowBestNeed(magic.magic_lowbest_sigmoid_result, "forbidden_magic_incidents"),
            HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(
            magic.magic_lowbest_sigmoid_result,
            "forbidden_magic_incidents",
            -math.max(1.0, Actions.ForbiddenMagicCrackdown.raid_operations_target / 100.0)
        )
        ShiftMetric(magic.government_highbest_sigmoid_result, "approval_rating", 0.50)
    end,

    After = function(world, country)
    end,
}

Actions.StarwoodConservationDecree = {
    annual_budget = 15000000,
    duration_months = 24,
    protected_area_km2 = 1200,
    ranger_recruit_target = 300,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.environment_highbest_sigmoid_result, "starwood_forest_health") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.environment_highbest_sigmoid_result, "starwood_forest_health")
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        local forest_gain = Actions.StarwoodConservationDecree.protected_area_km2 / 400.0
            + Actions.StarwoodConservationDecree.ranger_recruit_target / 300.0
        ShiftMetric(magic.environment_highbest_sigmoid_result, "starwood_forest_health", forest_gain)
    end,

    After = function(world, country)
    end,
}

Actions.LeylineStabilizationProject = {
    annual_budget = 35000000,
    duration_months = 18,
    stabilization_nodes = 80,
    mana_saturation_target_change = 5.00,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.environment_lowbest_sigmoid_result, "leyline_instability") > 0.0
            or HighBestNeed(magic.magic_highbest_sigmoid_result, "mana_saturation") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            LowBestNeed(magic.environment_lowbest_sigmoid_result, "leyline_instability"),
            HighBestNeed(magic.magic_highbest_sigmoid_result, "mana_saturation")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.environment_lowbest_sigmoid_result, "leyline_instability", -Actions.LeylineStabilizationProject.stabilization_nodes / 20.0)
        ShiftMetric(magic.magic_highbest_sigmoid_result, "mana_saturation", Actions.LeylineStabilizationProject.mana_saturation_target_change)
    end,

    After = function(world, country)
    end,
}

Actions.RoyalWeddingFestival = {
    one_time_budget = 8000000,
    duration_months = 1,
    approval_rating_boost = 4.50,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating") > 0.0
            or HighBestNeed(magic.culture_highbest_sigmoid_result, "festival_of_stars_attendance") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating"),
            HighBestNeed(magic.culture_highbest_sigmoid_result, "festival_of_stars_attendance")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.government_highbest_sigmoid_result, "approval_rating", Actions.RoyalWeddingFestival.approval_rating_boost)
        ShiftMetric(magic.culture_highbest_sigmoid_result, "festival_of_stars_attendance", 2.0)
    end,

    After = function(world, country)
    end,
}

Actions.DiplomaticEnvoyMission = {
    annual_budget = 12000000,
    duration_months = 6,
    target_realms = 5,
    relations_target_change = 8.00,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.diplomacy_highbest_sigmoid_result, "neighboring_realms_relations") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.diplomacy_highbest_sigmoid_result, "neighboring_realms_relations")
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.diplomacy_highbest_sigmoid_result, "neighboring_realms_relations", Actions.DiplomaticEnvoyMission.relations_target_change)
    end,

    After = function(world, country)
    end,
}

Actions.TradeDisputeArbitration = {
    annual_budget = 5000000,
    duration_months = 6,
    disputes_resolved_target = 3,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.diplomacy_lowbest_sigmoid_result, "active_trade_disputes") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.diplomacy_lowbest_sigmoid_result, "active_trade_disputes")
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.diplomacy_lowbest_sigmoid_result, "active_trade_disputes", -Actions.TradeDisputeArbitration.disputes_resolved_target)
    end,

    After = function(world, country)
    end,
}

Actions.NobleTaxReform = {
    tax_rate_change = 4.00,
    duration_months = 12,
    affected_estates = 220,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.government_lowbest_sigmoid_result, "tax_burden_index") < 1.0
            or HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            1.0 - LowBestNeed(magic.government_lowbest_sigmoid_result, "tax_burden_index"),
            1.0 - HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.government_lowbest_sigmoid_result, "tax_burden_index", Actions.NobleTaxReform.tax_rate_change)
        ShiftMetric(magic.government_highbest_sigmoid_result, "approval_rating", -1.0)
    end,

    After = function(world, country)
    end,
}

Actions.WardInfrastructureRepair = {
    annual_budget = 22000000,
    duration_months = 18,
    sites_repaired_target = 17,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return LowBestNeed(magic.infrastructure_lowbest_sigmoid_result, "crumbling_ward_sites") > 0.0
            or HighBestNeed(magic.infrastructure_highbest_sigmoid_result, "teleportation_network_coverage") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            LowBestNeed(magic.infrastructure_lowbest_sigmoid_result, "crumbling_ward_sites"),
            HighBestNeed(magic.infrastructure_highbest_sigmoid_result, "teleportation_network_coverage")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.infrastructure_lowbest_sigmoid_result, "crumbling_ward_sites", -Actions.WardInfrastructureRepair.sites_repaired_target)
        ShiftMetric(magic.infrastructure_highbest_sigmoid_result, "teleportation_network_coverage", 2.0)
    end,

    After = function(world, country)
    end,
}

Actions.GrandTournamentDecree = {
    one_time_budget = 6000000,
    duration_months = 2,
    festival_attendance_target = 92.00,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.culture_highbest_sigmoid_result, "festival_of_stars_attendance") > 0.0
            or HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            HighBestNeed(magic.culture_highbest_sigmoid_result, "festival_of_stars_attendance"),
            HighBestNeed(magic.government_highbest_sigmoid_result, "approval_rating")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.culture_highbest_sigmoid_result, "festival_of_stars_attendance", 4.0)
        ShiftMetric(magic.government_highbest_sigmoid_result, "approval_rating", 1.0)
    end,

    After = function(world, country)
    end,
}

Actions.EmergencyConscription = {
    annual_budget = 45000000,
    duration_months = 6,
    conscript_target = 10000,
    border_conflict_reduction_target = 3,

    Condition = function(world, country)
        local magic = GetMagic(world, country)
        return HighBestNeed(magic.military_highbest_sigmoid_result, "royal_battlemage_corps_strength") > 0.0
            or LowBestNeed(magic.military_lowbest_sigmoid_result, "border_conflict_frequency") > 0.0
    end,

    Utility = function(world, country)
        local magic = GetMagic(world, country)
        return Average(
            HighBestNeed(magic.military_highbest_sigmoid_result, "royal_battlemage_corps_strength"),
            LowBestNeed(magic.military_lowbest_sigmoid_result, "border_conflict_frequency")
        )
    end,

    Execute = function(world, country)
        local magic = GetMagic(world, country)
        ShiftMetric(magic.military_highbest_sigmoid_result, "royal_battlemage_corps_strength", Actions.EmergencyConscription.conscript_target / 2000.0)
        ShiftMetric(magic.military_lowbest_sigmoid_result, "border_conflict_frequency", -Actions.EmergencyConscription.border_conflict_reduction_target)
        ShiftMetric(magic.government_highbest_sigmoid_result, "approval_rating", -2.0)
    end,

    After = function(world, country)
    end,
}

return Actions
