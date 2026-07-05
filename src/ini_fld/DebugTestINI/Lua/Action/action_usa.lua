-- Auto Generated Action Lua
-- Do Not Edit Manually

local Actions = {}

local function GetUSA(world, index_number)
    return GetRoot(world, index_number).uSA
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

    group[sigmoid_name] = 1.0 / (1.0 + math.exp(-group[norm_name]))
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

Actions.TaxCut = {
    tax_rate_change = -2.00,
    duration_months = 12,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.health_highbest_sigmoid_result, "insured_rate") > 0.0
            or HighBestNeed(usa.education_highbest_sigmoid_result, "tertiary_attainment_pct") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.health_highbest_sigmoid_result, "insured_rate"),
            HighBestNeed(usa.education_highbest_sigmoid_result, "tertiary_attainment_pct")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        local relief_strength = math.abs(Actions.TaxCut.tax_rate_change)
        ShiftMetric(usa.health_highbest_sigmoid_result, "insured_rate", relief_strength * 0.10)
        ShiftMetric(usa.education_highbest_sigmoid_result, "tertiary_attainment_pct", relief_strength * 0.08)
    end,

    After = function(world, country)
    end,
}

Actions.TariffIncrease = {
    tariff_rate_change = 5.00,
    target_import_share = 0.18,
    duration_months = 12,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return LowBestNeed(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt") > 0.0
            or HighBestNeed(usa.technology_highbest_sigmoid_result, "cloud_market_size") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            LowBestNeed(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt"),
            1.0 - HighBestNeed(usa.technology_highbest_sigmoid_result, "cloud_market_size")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt", -Actions.TariffIncrease.target_import_share * 100.0)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "cloud_market_size", -Actions.TariffIncrease.tariff_rate_change * 1600000000.0)
    end,

    After = function(world, country)
    end,
}

Actions.InfrastructureAct = {
    annual_budget = 120000000000,
    duration_months = 24,
    road_km_target = 25000,
    bridge_projects = 3500,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "road_km") > 0.0
            or HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "road_km"),
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "road_km", Actions.InfrastructureAct.road_km_target)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports", math.floor(Actions.InfrastructureAct.bridge_projects / 250))
    end,

    After = function(world, country)
    end,
}

Actions.DefenseExpansion = {
    annual_budget = 55000000000,
    duration_months = 24,
    recruit_target = 25000,
    ship_target = 6,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.technology_highbest_sigmoid_result, "space_launches_yearly") > 0.0
            or HighBestNeed(usa.technology_highbest_sigmoid_result, "patents_granted_yearly") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.technology_highbest_sigmoid_result, "space_launches_yearly"),
            HighBestNeed(usa.technology_highbest_sigmoid_result, "patents_granted_yearly")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "space_launches_yearly", Actions.DefenseExpansion.ship_target)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "patents_granted_yearly", math.floor(Actions.DefenseExpansion.recruit_target / 250))
    end,

    After = function(world, country)
    end,
}

Actions.EnergyPermit = {
    oil_bpd_change = 250000,
    gas_bcf_day_change = 1.50,
    duration_months = 18,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "electricity_access_pct") > 0.0
            or LowBestNeed(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt") < 1.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "electricity_access_pct"),
            1.0 - LowBestNeed(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt", Actions.EnergyPermit.oil_bpd_change / 10000.0)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "electricity_access_pct", Actions.EnergyPermit.gas_bcf_day_change * 0.20)
    end,

    After = function(world, country)
    end,
}

Actions.ImmigrationReform = {
    annual_net_migration_change = 350000,
    visa_cap_change = 200000,
    duration_months = 24,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.education_highbest_sigmoid_result, "college_students") > 0.0
            or HighBestNeed(usa.technology_highbest_sigmoid_result, "ai_private_investment") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.education_highbest_sigmoid_result, "college_students"),
            HighBestNeed(usa.technology_highbest_sigmoid_result, "ai_private_investment")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.education_highbest_sigmoid_result, "college_students", Actions.ImmigrationReform.visa_cap_change)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "ai_private_investment", Actions.ImmigrationReform.annual_net_migration_change * 10000.0)
    end,

    After = function(world, country)
    end,
}

Actions.EducationGrant = {
    annual_budget = 45000000000,
    duration_months = 24,
    graduation_rate_change = 1.20,
    stem_slots = 150000,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.education_highbest_sigmoid_result, "education_spending_pct_gdp") > 0.0
            or HighBestNeed(usa.education_highbest_sigmoid_result, "high_school_graduation_rate") > 0.0
            or HighBestNeed(usa.education_highbest_sigmoid_result, "stem_graduates_yearly") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.education_highbest_sigmoid_result, "education_spending_pct_gdp"),
            HighBestNeed(usa.education_highbest_sigmoid_result, "high_school_graduation_rate"),
            HighBestNeed(usa.education_highbest_sigmoid_result, "stem_graduates_yearly")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.education_highbest_sigmoid_result, "education_spending_pct_gdp", Actions.EducationGrant.annual_budget / 100000000000.0)
        ShiftMetric(usa.education_highbest_sigmoid_result, "high_school_graduation_rate", Actions.EducationGrant.graduation_rate_change)
        ShiftMetric(usa.education_highbest_sigmoid_result, "stem_graduates_yearly", Actions.EducationGrant.stem_slots)
    end,

    After = function(world, country)
    end,
}

Actions.HealthSubsidy = {
    annual_budget = 60000000000,
    duration_months = 24,
    insured_rate_change = 1.50,
    drug_price_change = -3.00,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.health_highbest_sigmoid_result, "insured_rate") > 0.0
            or LowBestNeed(usa.health_lowbest_sigmoid_result, "maternal_mortality") > 0.0
            or LowBestNeed(usa.health_lowbest_sigmoid_result, "obesity_rate") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.health_highbest_sigmoid_result, "insured_rate"),
            LowBestNeed(usa.health_lowbest_sigmoid_result, "maternal_mortality"),
            LowBestNeed(usa.health_lowbest_sigmoid_result, "obesity_rate")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.health_highbest_sigmoid_result, "insured_rate", Actions.HealthSubsidy.insured_rate_change)
        ShiftMetric(usa.health_lowbest_sigmoid_result, "maternal_mortality", Actions.HealthSubsidy.drug_price_change * 0.20)
        ShiftMetric(usa.health_lowbest_sigmoid_result, "obesity_rate", Actions.HealthSubsidy.drug_price_change * 0.10)
    end,

    After = function(world, country)
    end,
}

Actions.ChipAct = {
    annual_budget = 30000000000,
    duration_months = 36,
    fab_projects = 8,
    rnd_budget = 12000000000,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.technology_highbest_sigmoid_result, "rnd_spending") > 0.0
            or HighBestNeed(usa.technology_highbest_sigmoid_result, "ai_private_investment") > 0.0
            or HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part02, "data_centers") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.technology_highbest_sigmoid_result, "rnd_spending"),
            HighBestNeed(usa.technology_highbest_sigmoid_result, "ai_private_investment"),
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part02, "data_centers")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "rnd_spending", Actions.ChipAct.rnd_budget)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "ai_private_investment", Actions.ChipAct.annual_budget * 0.10)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part02, "data_centers", Actions.ChipAct.fab_projects * 25)
    end,

    After = function(world, country)
    end,
}

Actions.BorderSecurity = {
    annual_budget = 25000000000,
    duration_months = 24,
    patrol_hires = 8000,
    detention_capacity = 15000,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports") > 0.0
            or HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "airports") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports"),
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "airports")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports", math.floor(Actions.BorderSecurity.patrol_hires / 2000))
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "airports", math.floor(Actions.BorderSecurity.detention_capacity / 5000))
    end,

    After = function(world, country)
    end,
}

Actions.HousingCredit = {
    annual_budget = 40000000000,
    duration_months = 24,
    unit_target = 800000,
    permit_streamline = 1,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part02, "housing_units") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part02, "housing_units")
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part02, "housing_units", Actions.HousingCredit.unit_target)
    end,

    After = function(world, country)
    end,
}

Actions.EmergencyOilRelease = {
    barrels_release = 60000000,
    duration_days = 90,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return LowBestNeed(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return LowBestNeed(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt")
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.resources_lowbest_sigmoid_result, "co2_emissions_mt", -Actions.EmergencyOilRelease.barrels_release / 2000000.0)
    end,

    After = function(world, country)
    end,
}

Actions.TradeDeal = {
    export_change_pct = 2.50,
    import_change_pct = 1.20,
    duration_months = 24,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.technology_highbest_sigmoid_result, "cloud_market_size") > 0.0
            or HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.technology_highbest_sigmoid_result, "cloud_market_size"),
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.technology_highbest_sigmoid_result, "cloud_market_size", Actions.TradeDeal.export_change_pct * 1500000000.0)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "major_ports", math.ceil(Actions.TradeDeal.import_change_pct))
    end,

    After = function(world, country)
    end,
}

Actions.DisasterRelief = {
    emergency_budget = 50000000000,
    duration_months = 12,
    state_count = 5,

    Condition = function(world, country)
        local usa = GetUSA(world, country)
        return HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "safe_water_access_pct") > 0.0
            or HighBestNeed(usa.health_highbest_sigmoid_result, "insured_rate") > 0.0
    end,

    Utility = function(world, country)
        local usa = GetUSA(world, country)
        return Average(
            HighBestNeed(usa.infrastructure_highbest_sigmoid_result_part01, "safe_water_access_pct"),
            HighBestNeed(usa.health_highbest_sigmoid_result, "insured_rate")
        )
    end,

    Execute = function(world, country)
        local usa = GetUSA(world, country)
        ShiftMetric(usa.infrastructure_highbest_sigmoid_result_part01, "safe_water_access_pct", Actions.DisasterRelief.state_count * 0.15)
        ShiftMetric(usa.health_highbest_sigmoid_result, "insured_rate", 0.25)
    end,

    After = function(world, country)
    end,
}

return Actions
