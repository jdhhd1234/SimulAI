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

struct resources_HighBest_sigmoid_result_Part02Config {
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

struct infrastructure_HighBest_sigmoid_result_Part01Config {
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
 };

struct infrastructure_HighBest_sigmoid_result_Part02Config {
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
    resources_HighBest_sigmoid_result_Part02Config resources_highbest_sigmoid_result_part02;
    resources_LowBest_sigmoid_resultConfig resources_lowbest_sigmoid_result;
    infrastructure_HighBest_sigmoid_result_Part01Config infrastructure_highbest_sigmoid_result_part01;
    infrastructure_HighBest_sigmoid_result_Part02Config infrastructure_highbest_sigmoid_result_part02;
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
