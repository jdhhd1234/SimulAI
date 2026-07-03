-- Auto Generated Action Lua
-- Do Not Edit Manually

local Actions = {}

Actions.TaxCut = {
    tax_rate_change = -2.00,
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

Actions.TariffIncrease = {
    tariff_rate_change = 5.00,
    target_import_share = 0.18,
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

Actions.InfrastructureAct = {
    annual_budget = 120000000000,
    duration_months = 24,
    road_km_target = 25000,
    bridge_projects = 3500,

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

Actions.DefenseExpansion = {
    annual_budget = 55000000000,
    duration_months = 24,
    recruit_target = 25000,
    ship_target = 6,

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

Actions.EnergyPermit = {
    oil_bpd_change = 250000,
    gas_bcf_day_change = 1.50,
    duration_months = 18,

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

Actions.ImmigrationReform = {
    annual_net_migration_change = 350000,
    visa_cap_change = 200000,
    duration_months = 24,

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

Actions.EducationGrant = {
    annual_budget = 45000000000,
    duration_months = 24,
    graduation_rate_change = 1.20,
    stem_slots = 150000,

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

Actions.HealthSubsidy = {
    annual_budget = 60000000000,
    duration_months = 24,
    insured_rate_change = 1.50,
    drug_price_change = -3.00,

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

Actions.ChipAct = {
    annual_budget = 30000000000,
    duration_months = 36,
    fab_projects = 8,
    rnd_budget = 12000000000,

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

Actions.BorderSecurity = {
    annual_budget = 25000000000,
    duration_months = 24,
    patrol_hires = 8000,
    detention_capacity = 15000,

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

Actions.HousingCredit = {
    annual_budget = 40000000000,
    duration_months = 24,
    unit_target = 800000,
    permit_streamline = 1,

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

Actions.EmergencyOilRelease = {
    barrels_release = 60000000,
    duration_days = 90,

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

Actions.TradeDeal = {
    export_change_pct = 2.50,
    import_change_pct = 1.20,
    duration_months = 24,

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

Actions.DisasterRelief = {
    emergency_budget = 50000000000,
    duration_months = 12,
    state_count = 5,

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
