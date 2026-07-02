#pragma once
#include <string>
#include <iostream>
struct countryConfig {
    std::string country_name = "";
     int year = 0;
     std::string capital = "";
     std::string currency = "";
     int states = 0;
     int states_min = 0;
     int states_max = 0;
     int territories = 0;
     int territories_min = 0;
     int territories_max = 0;
     int time_zones = 0;
     int time_zones_min = 0;
     int time_zones_max = 0;
 };

struct government_sigmoid_resultConfig {
    std::string president = "";
     std::string vice_president = "";
     std::string ruling_party = "";
     int executive_departments = 0;
     int executive_departments_min = 0;
     int executive_departments_max = 0;
     int house_seats = 0;
     int house_seats_min = 0;
     int house_seats_max = 0;
     int senate_seats = 0;
     int senate_seats_min = 0;
     int senate_seats_max = 0;
     int supreme_court_justices = 0;
     int supreme_court_justices_min = 0;
     int supreme_court_justices_max = 0;
 };

struct demography_HighBest_sigmoid_resultConfig {
    int population = 0;
     int population_min = 0;
     int population_max = 0;
     float population_growth_rate = 0;
     float population_growth_rate_min = 0;
     float population_growth_rate_max = 0;
     float population_density = 0;
     float population_density_min = 0;
     float population_density_max = 0;
     int births = 0;
     int births_min = 0;
     int births_max = 0;
     float birth_rate = 0;
     float birth_rate_min = 0;
     float birth_rate_max = 0;
     float fertility_rate = 0;
     float fertility_rate_min = 0;
     float fertility_rate_max = 0;
     float life_expectancy = 0;
     float life_expectancy_min = 0;
     float life_expectancy_max = 0;
     float life_expectancy_male = 0;
     float life_expectancy_male_min = 0;
     float life_expectancy_male_max = 0;
     float life_expectancy_female = 0;
     float life_expectancy_female_min = 0;
     float life_expectancy_female_max = 0;
     float urban_population_pct = 0;
     float urban_population_pct_min = 0;
     float urban_population_pct_max = 0;
     float male_pct = 0;
     float male_pct_min = 0;
     float male_pct_max = 0;
     float female_pct = 0;
     float female_pct_min = 0;
     float female_pct_max = 0;
     float age_under_18_pct = 0;
     float age_under_18_pct_min = 0;
     float age_under_18_pct_max = 0;
     float age_18_64_pct = 0;
     float age_18_64_pct_min = 0;
     float age_18_64_pct_max = 0;
     float age_65_plus_pct = 0;
     float age_65_plus_pct_min = 0;
     float age_65_plus_pct_max = 0;
     int net_migration = 0;
     int net_migration_min = 0;
     int net_migration_max = 0;
     int households = 0;
     int households_min = 0;
     int households_max = 0;
     float homeownership_rate = 0;
     float homeownership_rate_min = 0;
     float homeownership_rate_max = 0;
 };

struct demography_LowBest_sigmoid_resultConfig {
    int deaths = 0;
     int deaths_min = 0;
     int deaths_max = 0;
     float death_rate = 0;
     float death_rate_min = 0;
     float death_rate_max = 0;
     float median_age = 0;
     float median_age_min = 0;
     float median_age_max = 0;
     float infant_mortality = 0;
     float infant_mortality_min = 0;
     float infant_mortality_max = 0;
 };

struct economy_HighBest_sigmoid_resultConfig {
    double gdp_current = 0;
     int gdp_current_min = 0;
     double gdp_current_max = 0;
     float gdp_real_growth = 0;
     float gdp_real_growth_min = 0;
     float gdp_real_growth_max = 0;
     int gdp_per_capita = 0;
     int gdp_per_capita_min = 0;
     int gdp_per_capita_max = 0;
     int labor_force = 0;
     int labor_force_min = 0;
     int labor_force_max = 0;
     float labor_force_participation = 0;
     float labor_force_participation_min = 0;
     float labor_force_participation_max = 0;
     int employed = 0;
     int employed_min = 0;
     int employed_max = 0;
     int median_household_income = 0;
     int median_household_income_min = 0;
     int median_household_income_max = 0;
     double federal_revenue = 0;
     int federal_revenue_min = 0;
     double federal_revenue_max = 0;
     double foreign_exchange_reserves = 0;
     int foreign_exchange_reserves_min = 0;
     double foreign_exchange_reserves_max = 0;
     double fdi_inflow = 0;
     int fdi_inflow_min = 0;
     double fdi_inflow_max = 0;
     float services_share = 0;
     float services_share_min = 0;
     float services_share_max = 0;
     float industry_share = 0;
     float industry_share_min = 0;
     float industry_share_max = 0;
     float agriculture_share = 0;
     float agriculture_share_min = 0;
     float agriculture_share_max = 0;
     float manufacturing_share = 0;
     float manufacturing_share_min = 0;
     float manufacturing_share_max = 0;
     float minimum_wage_federal = 0;
     float minimum_wage_federal_min = 0;
     float minimum_wage_federal_max = 0;
     float union_membership_rate = 0;
     float union_membership_rate_min = 0;
     float union_membership_rate_max = 0;
 };

struct economy_LowBest_sigmoid_resultConfig {
    float inflation_rate = 0;
     float inflation_rate_min = 0;
     float inflation_rate_max = 0;
     float unemployment_rate = 0;
     float unemployment_rate_min = 0;
     float unemployment_rate_max = 0;
     int unemployed = 0;
     int unemployed_min = 0;
     int unemployed_max = 0;
     float poverty_rate = 0;
     float poverty_rate_min = 0;
     float poverty_rate_max = 0;
     float gini_index = 0;
     float gini_index_min = 0;
     float gini_index_max = 0;
     double federal_spending = 0;
     int federal_spending_min = 0;
     double federal_spending_max = 0;
     double budget_balance = 0;
     double budget_balance_min = 0;
     double budget_balance_max = 0;
     double public_debt = 0;
     int public_debt_min = 0;
     double public_debt_max = 0;
     double household_debt = 0;
     int household_debt_min = 0;
     double household_debt_max = 0;
     double exports = 0;
     int exports_min = 0;
     double exports_max = 0;
     double imports = 0;
     int imports_min = 0;
     double imports_max = 0;
     double trade_balance = 0;
     double trade_balance_min = 0;
     double trade_balance_max = 0;
     float corporate_tax_rate = 0;
     float corporate_tax_rate_min = 0;
     float corporate_tax_rate_max = 0;
     float personal_tax_top_rate = 0;
     float personal_tax_top_rate_min = 0;
     float personal_tax_top_rate_max = 0;
     float policy_rate = 0;
     float policy_rate_min = 0;
     float policy_rate_max = 0;
 };

struct government_HighBest_sigmoid_resultConfig {
    float approval_rating = 0;
     float approval_rating_min = 0;
     float approval_rating_max = 0;
 };

struct government_LowBest_sigmoid_resultConfig {
    int federal_employees = 0;
     int federal_employees_min = 0;
     int federal_employees_max = 0;
 };

struct military_HighBest_sigmoid_resultConfig {
    double defense_budget = 0;
     int defense_budget_min = 0;
     double defense_budget_max = 0;
     int active_personnel = 0;
     int active_personnel_min = 0;
     int active_personnel_max = 0;
     int reserve_personnel = 0;
     int reserve_personnel_min = 0;
     int reserve_personnel_max = 0;
     int national_guard_personnel = 0;
     int national_guard_personnel_min = 0;
     int national_guard_personnel_max = 0;
     int army_personnel = 0;
     int army_personnel_min = 0;
     int army_personnel_max = 0;
     int navy_personnel = 0;
     int navy_personnel_min = 0;
     int navy_personnel_max = 0;
     int air_force_personnel = 0;
     int air_force_personnel_min = 0;
     int air_force_personnel_max = 0;
     int marine_personnel = 0;
     int marine_personnel_min = 0;
     int marine_personnel_max = 0;
     int space_force_personnel = 0;
     int space_force_personnel_min = 0;
     int space_force_personnel_max = 0;
     int nuclear_warheads = 0;
     int nuclear_warheads_min = 0;
     int nuclear_warheads_max = 0;
     int carriers = 0;
     int carriers_min = 0;
     int carriers_max = 0;
     int destroyers = 0;
     int destroyers_min = 0;
     int destroyers_max = 0;
     int submarines = 0;
     int submarines_min = 0;
     int submarines_max = 0;
     int tanks = 0;
     int tanks_min = 0;
     int tanks_max = 0;
     int armored_vehicles = 0;
     int armored_vehicles_min = 0;
     int armored_vehicles_max = 0;
     int fighter_aircraft = 0;
     int fighter_aircraft_min = 0;
     int fighter_aircraft_max = 0;
     int bombers = 0;
     int bombers_min = 0;
     int bombers_max = 0;
     int attack_helicopters = 0;
     int attack_helicopters_min = 0;
     int attack_helicopters_max = 0;
     int transport_aircraft = 0;
     int transport_aircraft_min = 0;
     int transport_aircraft_max = 0;
     int military_bases_overseas = 0;
     int military_bases_overseas_min = 0;
     int military_bases_overseas_max = 0;
 };

struct resources_HighBest_sigmoid_resultConfig {
    float oil_reserves_billion_barrels = 0;
     float oil_reserves_billion_barrels_min = 0;
     float oil_reserves_billion_barrels_max = 0;
     float gas_reserves_tcf = 0;
     float gas_reserves_tcf_min = 0;
     float gas_reserves_tcf_max = 0;
     float coal_reserves_billion_short_tons = 0;
     float coal_reserves_billion_short_tons_min = 0;
     float coal_reserves_billion_short_tons_max = 0;
     int oil_production_bpd = 0;
     int oil_production_bpd_min = 0;
     int oil_production_bpd_max = 0;
     float natural_gas_production_bcf_day = 0;
     float natural_gas_production_bcf_day_min = 0;
     float natural_gas_production_bcf_day_max = 0;
     float coal_production_million_short_tons = 0;
     float coal_production_million_short_tons_min = 0;
     float coal_production_million_short_tons_max = 0;
     float electricity_generation_twh = 0;
     float electricity_generation_twh_min = 0;
     float electricity_generation_twh_max = 0;
     float renewable_share = 0;
     float renewable_share_min = 0;
     float renewable_share_max = 0;
     float nuclear_share = 0;
     float nuclear_share_min = 0;
     float nuclear_share_max = 0;
     int forest_area_km2 = 0;
     int forest_area_km2_min = 0;
     int forest_area_km2_max = 0;
     float farmland_million_acres = 0;
     float farmland_million_acres_min = 0;
     float farmland_million_acres_max = 0;
 };

struct resources_LowBest_sigmoid_resultConfig {
    float freshwater_withdrawal_bcm = 0;
     float freshwater_withdrawal_bcm_min = 0;
     float freshwater_withdrawal_bcm_max = 0;
     float co2_emissions_mt = 0;
     float co2_emissions_mt_min = 0;
     float co2_emissions_mt_max = 0;
 };

struct infrastructure_HighBest_sigmoid_resultConfig {
    int land_area_km2 = 0;
     int land_area_km2_min = 0;
     int land_area_km2_max = 0;
     int total_area_km2 = 0;
     int total_area_km2_min = 0;
     int total_area_km2_max = 0;
     int coastline_km = 0;
     int coastline_km_min = 0;
     int coastline_km_max = 0;
     int road_km = 0;
     int road_km_min = 0;
     int road_km_max = 0;
     int rail_km = 0;
     int rail_km_min = 0;
     int rail_km_max = 0;
     int airports = 0;
     int airports_min = 0;
     int airports_max = 0;
     int major_ports = 0;
     int major_ports_min = 0;
     int major_ports_max = 0;
     float electricity_access_pct = 0;
     float electricity_access_pct_min = 0;
     float electricity_access_pct_max = 0;
     float safe_water_access_pct = 0;
     float safe_water_access_pct_min = 0;
     float safe_water_access_pct_max = 0;
     int fixed_broadband_subscriptions = 0;
     int fixed_broadband_subscriptions_min = 0;
     int fixed_broadband_subscriptions_max = 0;
     int mobile_subscriptions = 0;
     int mobile_subscriptions_min = 0;
     int mobile_subscriptions_max = 0;
     int housing_units = 0;
     int housing_units_min = 0;
     int housing_units_max = 0;
     int data_centers = 0;
     int data_centers_min = 0;
     int data_centers_max = 0;
 };

struct education_HighBest_sigmoid_resultConfig {
    float literacy_rate = 0;
     float literacy_rate_min = 0;
     float literacy_rate_max = 0;
     float education_spending_pct_gdp = 0;
     float education_spending_pct_gdp_min = 0;
     float education_spending_pct_gdp_max = 0;
     float school_life_expectancy = 0;
     float school_life_expectancy_min = 0;
     float school_life_expectancy_max = 0;
     float high_school_graduation_rate = 0;
     float high_school_graduation_rate_min = 0;
     float high_school_graduation_rate_max = 0;
     float tertiary_attainment_pct = 0;
     float tertiary_attainment_pct_min = 0;
     float tertiary_attainment_pct_max = 0;
     int public_school_students = 0;
     int public_school_students_min = 0;
     int public_school_students_max = 0;
     int college_students = 0;
     int college_students_min = 0;
     int college_students_max = 0;
     int stem_graduates_yearly = 0;
     int stem_graduates_yearly_min = 0;
     int stem_graduates_yearly_max = 0;
 };

struct health_HighBest_sigmoid_resultConfig {
    float health_spending_pct_gdp = 0;
     float health_spending_pct_gdp_min = 0;
     float health_spending_pct_gdp_max = 0;
     float insured_rate = 0;
     float insured_rate_min = 0;
     float insured_rate_max = 0;
     float physicians_per_1000 = 0;
     float physicians_per_1000_min = 0;
     float physicians_per_1000_max = 0;
     float hospital_beds_per_1000 = 0;
     float hospital_beds_per_1000_min = 0;
     float hospital_beds_per_1000_max = 0;
     int nurses = 0;
     int nurses_min = 0;
     int nurses_max = 0;
     int hospital_count = 0;
     int hospital_count_min = 0;
     int hospital_count_max = 0;
 };

struct health_LowBest_sigmoid_resultConfig {
    float obesity_rate = 0;
     float obesity_rate_min = 0;
     float obesity_rate_max = 0;
     float maternal_mortality = 0;
     float maternal_mortality_min = 0;
     float maternal_mortality_max = 0;
 };

struct technology_HighBest_sigmoid_resultConfig {
    double rnd_spending = 0;
     int rnd_spending_min = 0;
     double rnd_spending_max = 0;
     float rnd_share_gdp = 0;
     float rnd_share_gdp_min = 0;
     float rnd_share_gdp_max = 0;
     float internet_users_pct = 0;
     float internet_users_pct_min = 0;
     float internet_users_pct_max = 0;
     float smartphone_users_pct = 0;
     float smartphone_users_pct_min = 0;
     float smartphone_users_pct_max = 0;
     double cloud_market_size = 0;
     int cloud_market_size_min = 0;
     double cloud_market_size_max = 0;
     double ai_private_investment = 0;
     int ai_private_investment_min = 0;
     double ai_private_investment_max = 0;
     int space_launches_yearly = 0;
     int space_launches_yearly_min = 0;
     int space_launches_yearly_max = 0;
     int patents_granted_yearly = 0;
     int patents_granted_yearly_min = 0;
     int patents_granted_yearly_max = 0;
 };

struct MainConfig {
    countryConfig country;
    government_sigmoid_resultConfig government_sigmoid_result;
    demography_HighBest_sigmoid_resultConfig demography_highbest_sigmoid_result;
    demography_LowBest_sigmoid_resultConfig demography_lowbest_sigmoid_result;
    economy_HighBest_sigmoid_resultConfig economy_highbest_sigmoid_result;
    economy_LowBest_sigmoid_resultConfig economy_lowbest_sigmoid_result;
    government_HighBest_sigmoid_resultConfig government_highbest_sigmoid_result;
    government_LowBest_sigmoid_resultConfig government_lowbest_sigmoid_result;
    military_HighBest_sigmoid_resultConfig military_highbest_sigmoid_result;
    resources_HighBest_sigmoid_resultConfig resources_highbest_sigmoid_result;
    resources_LowBest_sigmoid_resultConfig resources_lowbest_sigmoid_result;
    infrastructure_HighBest_sigmoid_resultConfig infrastructure_highbest_sigmoid_result;
    education_HighBest_sigmoid_resultConfig education_highbest_sigmoid_result;
    health_HighBest_sigmoid_resultConfig health_highbest_sigmoid_result;
    health_LowBest_sigmoid_resultConfig health_lowbest_sigmoid_result;
    technology_HighBest_sigmoid_resultConfig technology_highbest_sigmoid_result;
};

// --- [ 2. Action enum class ] ---
enum class ActionType
{
    TaxCut,
    TariffIncrease,
    InfrastructureAct,
    DefenseExpansion,
    EnergyPermit,
    ImmigrationReform,
    EducationGrant,
    HealthSubsidy,
    ChipAct,
    BorderSecurity,
    HousingCredit,
    EmergencyOilRelease,
    TradeDeal,
    DisasterRelief
};
struct MainConfigEnumClass {
   ActionType AT;};
