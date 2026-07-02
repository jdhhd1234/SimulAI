-- Auto Generated Action Lua
-- Do Not Edit Manually

local Actions = {}

Actions.ManaTaxCut = {
    tax_rate_change = -3.00,
    duration_months = 12,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

Actions.LeylineTariffIncrease = {
    tariff_rate_change = 6.00,
    target_import_share = 0.15,
    duration_months = 12,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

Actions.RoyalWeddingFestival = {
    one_time_budget = 8000000,
    duration_months = 1,
    approval_rating_boost = 4.50,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

Actions.TradeDisputeArbitration = {
    annual_budget = 5000000,
    duration_months = 6,
    disputes_resolved_target = 3,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

Actions.NobleTaxReform = {
    tax_rate_change = 4.00,
    duration_months = 12,
    affected_estates = 220,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

Actions.WardInfrastructureRepair = {
    annual_budget = 22000000,
    duration_months = 18,
    sites_repaired_target = 17,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

Actions.GrandTournamentDecree = {
    one_time_budget = 6000000,
    duration_months = 2,
    festival_attendance_target = 92.00,

    Condition = function(world, country)
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
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
        return true
    end,

    Utility = function(world, country)
        return 0.0
    end,

    Execute = function(world, country)
    end,

    After = function(world, country)
    end,
}

return Actions
