#pragma once
#include <imgui.h>
#include "src/autoconfig/Root.hpp"

class RootConfigImGui {
public:
    void Draw(RootConfig& root)
    {
        if (ImGui::TreeNode("USA"))
        {
            if (ImGui::TreeNode("country"))
            {
                ImGui::Text("country_country_name: %s", root.uSA.country.country_name.c_str());
                ImGui::Text("country_year: %d", root.uSA.country.year);
                ImGui::Text("country_capital: %s", root.uSA.country.capital.c_str());
                ImGui::Text("country_currency: %s", root.uSA.country.currency.c_str());
                ImGui::Text("country_states: %d", root.uSA.country.states);
                ImGui::Text("country_states_min: %.4f", root.uSA.country.states_min);
                ImGui::Text("country_states_max: %.4f", root.uSA.country.states_max);
                ImGui::Text("country_states_norm: %.4f", root.uSA.country.states_norm);
                ImGui::Text("country_states_sigmoid: %.4f", root.uSA.country.states_sigmoid);
                ImGui::Text("country_territories: %d", root.uSA.country.territories);
                ImGui::Text("country_territories_min: %.4f", root.uSA.country.territories_min);
                ImGui::Text("country_territories_max: %.4f", root.uSA.country.territories_max);
                ImGui::Text("country_territories_norm: %.4f", root.uSA.country.territories_norm);
                ImGui::Text("country_territories_sigmoid: %.4f", root.uSA.country.territories_sigmoid);
                ImGui::Text("country_time_zones: %d", root.uSA.country.time_zones);
                ImGui::Text("country_time_zones_min: %.4f", root.uSA.country.time_zones_min);
                ImGui::Text("country_time_zones_max: %.4f", root.uSA.country.time_zones_max);
                ImGui::Text("country_time_zones_norm: %.4f", root.uSA.country.time_zones_norm);
                ImGui::Text("country_time_zones_sigmoid: %.4f", root.uSA.country.time_zones_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("resources_highbest_sigmoid_result_part02"))
            {
                ImGui::Text("resources_highbest_sigmoid_result_part02_farmland_million_acres: %.4f", root.uSA.resources_highbest_sigmoid_result_part02.farmland_million_acres);
                ImGui::Text("resources_highbest_sigmoid_result_part02_farmland_million_acres_min: %.4f", root.uSA.resources_highbest_sigmoid_result_part02.farmland_million_acres_min);
                ImGui::Text("resources_highbest_sigmoid_result_part02_farmland_million_acres_max: %.4f", root.uSA.resources_highbest_sigmoid_result_part02.farmland_million_acres_max);
                ImGui::Text("resources_highbest_sigmoid_result_part02_farmland_million_acres_norm: %.4f", root.uSA.resources_highbest_sigmoid_result_part02.farmland_million_acres_norm);
                ImGui::Text("resources_highbest_sigmoid_result_part02_farmland_million_acres_sigmoid: %.4f", root.uSA.resources_highbest_sigmoid_result_part02.farmland_million_acres_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("resources_lowbest_sigmoid_result"))
            {
                ImGui::Text("resources_lowbest_sigmoid_result_freshwater_withdrawal_bcm: %.4f", root.uSA.resources_lowbest_sigmoid_result.freshwater_withdrawal_bcm);
                ImGui::Text("resources_lowbest_sigmoid_result_freshwater_withdrawal_bcm_min: %.4f", root.uSA.resources_lowbest_sigmoid_result.freshwater_withdrawal_bcm_min);
                ImGui::Text("resources_lowbest_sigmoid_result_freshwater_withdrawal_bcm_max: %.4f", root.uSA.resources_lowbest_sigmoid_result.freshwater_withdrawal_bcm_max);
                ImGui::Text("resources_lowbest_sigmoid_result_freshwater_withdrawal_bcm_norm: %.4f", root.uSA.resources_lowbest_sigmoid_result.freshwater_withdrawal_bcm_norm);
                ImGui::Text("resources_lowbest_sigmoid_result_freshwater_withdrawal_bcm_sigmoid: %.4f", root.uSA.resources_lowbest_sigmoid_result.freshwater_withdrawal_bcm_sigmoid);
                ImGui::Text("resources_lowbest_sigmoid_result_co2_emissions_mt: %.4f", root.uSA.resources_lowbest_sigmoid_result.co2_emissions_mt);
                ImGui::Text("resources_lowbest_sigmoid_result_co2_emissions_mt_min: %.4f", root.uSA.resources_lowbest_sigmoid_result.co2_emissions_mt_min);
                ImGui::Text("resources_lowbest_sigmoid_result_co2_emissions_mt_max: %.4f", root.uSA.resources_lowbest_sigmoid_result.co2_emissions_mt_max);
                ImGui::Text("resources_lowbest_sigmoid_result_co2_emissions_mt_norm: %.4f", root.uSA.resources_lowbest_sigmoid_result.co2_emissions_mt_norm);
                ImGui::Text("resources_lowbest_sigmoid_result_co2_emissions_mt_sigmoid: %.4f", root.uSA.resources_lowbest_sigmoid_result.co2_emissions_mt_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("infrastructure_highbest_sigmoid_result_part01"))
            {
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_land_area_km2: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.land_area_km2);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_land_area_km2_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.land_area_km2_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_land_area_km2_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.land_area_km2_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_land_area_km2_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.land_area_km2_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_land_area_km2_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.land_area_km2_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_total_area_km2: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.total_area_km2);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_total_area_km2_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.total_area_km2_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_total_area_km2_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.total_area_km2_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_total_area_km2_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.total_area_km2_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_total_area_km2_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.total_area_km2_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_coastline_km: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.coastline_km);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_coastline_km_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.coastline_km_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_coastline_km_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.coastline_km_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_coastline_km_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.coastline_km_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_coastline_km_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.coastline_km_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_road_km: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.road_km);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_road_km_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.road_km_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_road_km_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.road_km_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_road_km_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.road_km_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_road_km_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.road_km_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_rail_km: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.rail_km);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_rail_km_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.rail_km_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_rail_km_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.rail_km_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_rail_km_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.rail_km_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_rail_km_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.rail_km_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_airports: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.airports);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_airports_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.airports_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_airports_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.airports_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_airports_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.airports_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_airports_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.airports_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_major_ports: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.major_ports);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_major_ports_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.major_ports_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_major_ports_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.major_ports_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_major_ports_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.major_ports_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_major_ports_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.major_ports_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_electricity_access_pct: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.electricity_access_pct);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_electricity_access_pct_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.electricity_access_pct_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_electricity_access_pct_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.electricity_access_pct_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_electricity_access_pct_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.electricity_access_pct_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_electricity_access_pct_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.electricity_access_pct_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_safe_water_access_pct: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.safe_water_access_pct);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_safe_water_access_pct_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.safe_water_access_pct_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_safe_water_access_pct_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.safe_water_access_pct_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_safe_water_access_pct_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.safe_water_access_pct_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_safe_water_access_pct_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.safe_water_access_pct_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_fixed_broadband_subscriptions: %d", root.uSA.infrastructure_highbest_sigmoid_result_part01.fixed_broadband_subscriptions);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_fixed_broadband_subscriptions_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.fixed_broadband_subscriptions_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_fixed_broadband_subscriptions_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.fixed_broadband_subscriptions_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_fixed_broadband_subscriptions_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.fixed_broadband_subscriptions_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part01_fixed_broadband_subscriptions_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part01.fixed_broadband_subscriptions_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("infrastructure_highbest_sigmoid_result_part02"))
            {
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_mobile_subscriptions: %d", root.uSA.infrastructure_highbest_sigmoid_result_part02.mobile_subscriptions);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_mobile_subscriptions_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.mobile_subscriptions_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_mobile_subscriptions_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.mobile_subscriptions_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_mobile_subscriptions_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.mobile_subscriptions_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_mobile_subscriptions_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.mobile_subscriptions_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_housing_units: %d", root.uSA.infrastructure_highbest_sigmoid_result_part02.housing_units);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_housing_units_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.housing_units_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_housing_units_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.housing_units_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_housing_units_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.housing_units_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_housing_units_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.housing_units_sigmoid);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_data_centers: %d", root.uSA.infrastructure_highbest_sigmoid_result_part02.data_centers);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_data_centers_min: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.data_centers_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_data_centers_max: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.data_centers_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_data_centers_norm: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.data_centers_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_part02_data_centers_sigmoid: %.4f", root.uSA.infrastructure_highbest_sigmoid_result_part02.data_centers_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("education_highbest_sigmoid_result"))
            {
                ImGui::Text("education_highbest_sigmoid_result_literacy_rate: %.4f", root.uSA.education_highbest_sigmoid_result.literacy_rate);
                ImGui::Text("education_highbest_sigmoid_result_literacy_rate_min: %.4f", root.uSA.education_highbest_sigmoid_result.literacy_rate_min);
                ImGui::Text("education_highbest_sigmoid_result_literacy_rate_max: %.4f", root.uSA.education_highbest_sigmoid_result.literacy_rate_max);
                ImGui::Text("education_highbest_sigmoid_result_literacy_rate_norm: %.4f", root.uSA.education_highbest_sigmoid_result.literacy_rate_norm);
                ImGui::Text("education_highbest_sigmoid_result_literacy_rate_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.literacy_rate_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_education_spending_pct_gdp: %.4f", root.uSA.education_highbest_sigmoid_result.education_spending_pct_gdp);
                ImGui::Text("education_highbest_sigmoid_result_education_spending_pct_gdp_min: %.4f", root.uSA.education_highbest_sigmoid_result.education_spending_pct_gdp_min);
                ImGui::Text("education_highbest_sigmoid_result_education_spending_pct_gdp_max: %.4f", root.uSA.education_highbest_sigmoid_result.education_spending_pct_gdp_max);
                ImGui::Text("education_highbest_sigmoid_result_education_spending_pct_gdp_norm: %.4f", root.uSA.education_highbest_sigmoid_result.education_spending_pct_gdp_norm);
                ImGui::Text("education_highbest_sigmoid_result_education_spending_pct_gdp_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.education_spending_pct_gdp_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_school_life_expectancy: %.4f", root.uSA.education_highbest_sigmoid_result.school_life_expectancy);
                ImGui::Text("education_highbest_sigmoid_result_school_life_expectancy_min: %.4f", root.uSA.education_highbest_sigmoid_result.school_life_expectancy_min);
                ImGui::Text("education_highbest_sigmoid_result_school_life_expectancy_max: %.4f", root.uSA.education_highbest_sigmoid_result.school_life_expectancy_max);
                ImGui::Text("education_highbest_sigmoid_result_school_life_expectancy_norm: %.4f", root.uSA.education_highbest_sigmoid_result.school_life_expectancy_norm);
                ImGui::Text("education_highbest_sigmoid_result_school_life_expectancy_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.school_life_expectancy_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_high_school_graduation_rate: %.4f", root.uSA.education_highbest_sigmoid_result.high_school_graduation_rate);
                ImGui::Text("education_highbest_sigmoid_result_high_school_graduation_rate_min: %.4f", root.uSA.education_highbest_sigmoid_result.high_school_graduation_rate_min);
                ImGui::Text("education_highbest_sigmoid_result_high_school_graduation_rate_max: %.4f", root.uSA.education_highbest_sigmoid_result.high_school_graduation_rate_max);
                ImGui::Text("education_highbest_sigmoid_result_high_school_graduation_rate_norm: %.4f", root.uSA.education_highbest_sigmoid_result.high_school_graduation_rate_norm);
                ImGui::Text("education_highbest_sigmoid_result_high_school_graduation_rate_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.high_school_graduation_rate_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_tertiary_attainment_pct: %.4f", root.uSA.education_highbest_sigmoid_result.tertiary_attainment_pct);
                ImGui::Text("education_highbest_sigmoid_result_tertiary_attainment_pct_min: %.4f", root.uSA.education_highbest_sigmoid_result.tertiary_attainment_pct_min);
                ImGui::Text("education_highbest_sigmoid_result_tertiary_attainment_pct_max: %.4f", root.uSA.education_highbest_sigmoid_result.tertiary_attainment_pct_max);
                ImGui::Text("education_highbest_sigmoid_result_tertiary_attainment_pct_norm: %.4f", root.uSA.education_highbest_sigmoid_result.tertiary_attainment_pct_norm);
                ImGui::Text("education_highbest_sigmoid_result_tertiary_attainment_pct_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.tertiary_attainment_pct_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_public_school_students: %d", root.uSA.education_highbest_sigmoid_result.public_school_students);
                ImGui::Text("education_highbest_sigmoid_result_public_school_students_min: %.4f", root.uSA.education_highbest_sigmoid_result.public_school_students_min);
                ImGui::Text("education_highbest_sigmoid_result_public_school_students_max: %.4f", root.uSA.education_highbest_sigmoid_result.public_school_students_max);
                ImGui::Text("education_highbest_sigmoid_result_public_school_students_norm: %.4f", root.uSA.education_highbest_sigmoid_result.public_school_students_norm);
                ImGui::Text("education_highbest_sigmoid_result_public_school_students_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.public_school_students_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_college_students: %d", root.uSA.education_highbest_sigmoid_result.college_students);
                ImGui::Text("education_highbest_sigmoid_result_college_students_min: %.4f", root.uSA.education_highbest_sigmoid_result.college_students_min);
                ImGui::Text("education_highbest_sigmoid_result_college_students_max: %.4f", root.uSA.education_highbest_sigmoid_result.college_students_max);
                ImGui::Text("education_highbest_sigmoid_result_college_students_norm: %.4f", root.uSA.education_highbest_sigmoid_result.college_students_norm);
                ImGui::Text("education_highbest_sigmoid_result_college_students_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.college_students_sigmoid);
                ImGui::Text("education_highbest_sigmoid_result_stem_graduates_yearly: %d", root.uSA.education_highbest_sigmoid_result.stem_graduates_yearly);
                ImGui::Text("education_highbest_sigmoid_result_stem_graduates_yearly_min: %.4f", root.uSA.education_highbest_sigmoid_result.stem_graduates_yearly_min);
                ImGui::Text("education_highbest_sigmoid_result_stem_graduates_yearly_max: %.4f", root.uSA.education_highbest_sigmoid_result.stem_graduates_yearly_max);
                ImGui::Text("education_highbest_sigmoid_result_stem_graduates_yearly_norm: %.4f", root.uSA.education_highbest_sigmoid_result.stem_graduates_yearly_norm);
                ImGui::Text("education_highbest_sigmoid_result_stem_graduates_yearly_sigmoid: %.4f", root.uSA.education_highbest_sigmoid_result.stem_graduates_yearly_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("health_highbest_sigmoid_result"))
            {
                ImGui::Text("health_highbest_sigmoid_result_health_spending_pct_gdp: %.4f", root.uSA.health_highbest_sigmoid_result.health_spending_pct_gdp);
                ImGui::Text("health_highbest_sigmoid_result_health_spending_pct_gdp_min: %.4f", root.uSA.health_highbest_sigmoid_result.health_spending_pct_gdp_min);
                ImGui::Text("health_highbest_sigmoid_result_health_spending_pct_gdp_max: %.4f", root.uSA.health_highbest_sigmoid_result.health_spending_pct_gdp_max);
                ImGui::Text("health_highbest_sigmoid_result_health_spending_pct_gdp_norm: %.4f", root.uSA.health_highbest_sigmoid_result.health_spending_pct_gdp_norm);
                ImGui::Text("health_highbest_sigmoid_result_health_spending_pct_gdp_sigmoid: %.4f", root.uSA.health_highbest_sigmoid_result.health_spending_pct_gdp_sigmoid);
                ImGui::Text("health_highbest_sigmoid_result_insured_rate: %.4f", root.uSA.health_highbest_sigmoid_result.insured_rate);
                ImGui::Text("health_highbest_sigmoid_result_insured_rate_min: %.4f", root.uSA.health_highbest_sigmoid_result.insured_rate_min);
                ImGui::Text("health_highbest_sigmoid_result_insured_rate_max: %.4f", root.uSA.health_highbest_sigmoid_result.insured_rate_max);
                ImGui::Text("health_highbest_sigmoid_result_insured_rate_norm: %.4f", root.uSA.health_highbest_sigmoid_result.insured_rate_norm);
                ImGui::Text("health_highbest_sigmoid_result_insured_rate_sigmoid: %.4f", root.uSA.health_highbest_sigmoid_result.insured_rate_sigmoid);
                ImGui::Text("health_highbest_sigmoid_result_physicians_per_1000: %.4f", root.uSA.health_highbest_sigmoid_result.physicians_per_1000);
                ImGui::Text("health_highbest_sigmoid_result_physicians_per_1000_min: %.4f", root.uSA.health_highbest_sigmoid_result.physicians_per_1000_min);
                ImGui::Text("health_highbest_sigmoid_result_physicians_per_1000_max: %.4f", root.uSA.health_highbest_sigmoid_result.physicians_per_1000_max);
                ImGui::Text("health_highbest_sigmoid_result_physicians_per_1000_norm: %.4f", root.uSA.health_highbest_sigmoid_result.physicians_per_1000_norm);
                ImGui::Text("health_highbest_sigmoid_result_physicians_per_1000_sigmoid: %.4f", root.uSA.health_highbest_sigmoid_result.physicians_per_1000_sigmoid);
                ImGui::Text("health_highbest_sigmoid_result_hospital_beds_per_1000: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_beds_per_1000);
                ImGui::Text("health_highbest_sigmoid_result_hospital_beds_per_1000_min: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_beds_per_1000_min);
                ImGui::Text("health_highbest_sigmoid_result_hospital_beds_per_1000_max: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_beds_per_1000_max);
                ImGui::Text("health_highbest_sigmoid_result_hospital_beds_per_1000_norm: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_beds_per_1000_norm);
                ImGui::Text("health_highbest_sigmoid_result_hospital_beds_per_1000_sigmoid: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_beds_per_1000_sigmoid);
                ImGui::Text("health_highbest_sigmoid_result_nurses: %d", root.uSA.health_highbest_sigmoid_result.nurses);
                ImGui::Text("health_highbest_sigmoid_result_nurses_min: %.4f", root.uSA.health_highbest_sigmoid_result.nurses_min);
                ImGui::Text("health_highbest_sigmoid_result_nurses_max: %.4f", root.uSA.health_highbest_sigmoid_result.nurses_max);
                ImGui::Text("health_highbest_sigmoid_result_nurses_norm: %.4f", root.uSA.health_highbest_sigmoid_result.nurses_norm);
                ImGui::Text("health_highbest_sigmoid_result_nurses_sigmoid: %.4f", root.uSA.health_highbest_sigmoid_result.nurses_sigmoid);
                ImGui::Text("health_highbest_sigmoid_result_hospital_count: %d", root.uSA.health_highbest_sigmoid_result.hospital_count);
                ImGui::Text("health_highbest_sigmoid_result_hospital_count_min: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_count_min);
                ImGui::Text("health_highbest_sigmoid_result_hospital_count_max: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_count_max);
                ImGui::Text("health_highbest_sigmoid_result_hospital_count_norm: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_count_norm);
                ImGui::Text("health_highbest_sigmoid_result_hospital_count_sigmoid: %.4f", root.uSA.health_highbest_sigmoid_result.hospital_count_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("health_lowbest_sigmoid_result"))
            {
                ImGui::Text("health_lowbest_sigmoid_result_obesity_rate: %.4f", root.uSA.health_lowbest_sigmoid_result.obesity_rate);
                ImGui::Text("health_lowbest_sigmoid_result_obesity_rate_min: %.4f", root.uSA.health_lowbest_sigmoid_result.obesity_rate_min);
                ImGui::Text("health_lowbest_sigmoid_result_obesity_rate_max: %.4f", root.uSA.health_lowbest_sigmoid_result.obesity_rate_max);
                ImGui::Text("health_lowbest_sigmoid_result_obesity_rate_norm: %.4f", root.uSA.health_lowbest_sigmoid_result.obesity_rate_norm);
                ImGui::Text("health_lowbest_sigmoid_result_obesity_rate_sigmoid: %.4f", root.uSA.health_lowbest_sigmoid_result.obesity_rate_sigmoid);
                ImGui::Text("health_lowbest_sigmoid_result_maternal_mortality: %.4f", root.uSA.health_lowbest_sigmoid_result.maternal_mortality);
                ImGui::Text("health_lowbest_sigmoid_result_maternal_mortality_min: %.4f", root.uSA.health_lowbest_sigmoid_result.maternal_mortality_min);
                ImGui::Text("health_lowbest_sigmoid_result_maternal_mortality_max: %.4f", root.uSA.health_lowbest_sigmoid_result.maternal_mortality_max);
                ImGui::Text("health_lowbest_sigmoid_result_maternal_mortality_norm: %.4f", root.uSA.health_lowbest_sigmoid_result.maternal_mortality_norm);
                ImGui::Text("health_lowbest_sigmoid_result_maternal_mortality_sigmoid: %.4f", root.uSA.health_lowbest_sigmoid_result.maternal_mortality_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("technology_highbest_sigmoid_result"))
            {
                ImGui::Text("technology_highbest_sigmoid_result_rnd_spending: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_spending);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_spending_min: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_spending_min);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_spending_max: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_spending_max);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_spending_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_spending_norm);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_spending_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_spending_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_share_gdp: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_share_gdp);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_share_gdp_min: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_share_gdp_min);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_share_gdp_max: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_share_gdp_max);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_share_gdp_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_share_gdp_norm);
                ImGui::Text("technology_highbest_sigmoid_result_rnd_share_gdp_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.rnd_share_gdp_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_internet_users_pct: %.4f", root.uSA.technology_highbest_sigmoid_result.internet_users_pct);
                ImGui::Text("technology_highbest_sigmoid_result_internet_users_pct_min: %.4f", root.uSA.technology_highbest_sigmoid_result.internet_users_pct_min);
                ImGui::Text("technology_highbest_sigmoid_result_internet_users_pct_max: %.4f", root.uSA.technology_highbest_sigmoid_result.internet_users_pct_max);
                ImGui::Text("technology_highbest_sigmoid_result_internet_users_pct_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.internet_users_pct_norm);
                ImGui::Text("technology_highbest_sigmoid_result_internet_users_pct_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.internet_users_pct_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_smartphone_users_pct: %.4f", root.uSA.technology_highbest_sigmoid_result.smartphone_users_pct);
                ImGui::Text("technology_highbest_sigmoid_result_smartphone_users_pct_min: %.4f", root.uSA.technology_highbest_sigmoid_result.smartphone_users_pct_min);
                ImGui::Text("technology_highbest_sigmoid_result_smartphone_users_pct_max: %.4f", root.uSA.technology_highbest_sigmoid_result.smartphone_users_pct_max);
                ImGui::Text("technology_highbest_sigmoid_result_smartphone_users_pct_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.smartphone_users_pct_norm);
                ImGui::Text("technology_highbest_sigmoid_result_smartphone_users_pct_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.smartphone_users_pct_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_cloud_market_size: %.4f", root.uSA.technology_highbest_sigmoid_result.cloud_market_size);
                ImGui::Text("technology_highbest_sigmoid_result_cloud_market_size_min: %.4f", root.uSA.technology_highbest_sigmoid_result.cloud_market_size_min);
                ImGui::Text("technology_highbest_sigmoid_result_cloud_market_size_max: %.4f", root.uSA.technology_highbest_sigmoid_result.cloud_market_size_max);
                ImGui::Text("technology_highbest_sigmoid_result_cloud_market_size_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.cloud_market_size_norm);
                ImGui::Text("technology_highbest_sigmoid_result_cloud_market_size_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.cloud_market_size_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_ai_private_investment: %.4f", root.uSA.technology_highbest_sigmoid_result.ai_private_investment);
                ImGui::Text("technology_highbest_sigmoid_result_ai_private_investment_min: %.4f", root.uSA.technology_highbest_sigmoid_result.ai_private_investment_min);
                ImGui::Text("technology_highbest_sigmoid_result_ai_private_investment_max: %.4f", root.uSA.technology_highbest_sigmoid_result.ai_private_investment_max);
                ImGui::Text("technology_highbest_sigmoid_result_ai_private_investment_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.ai_private_investment_norm);
                ImGui::Text("technology_highbest_sigmoid_result_ai_private_investment_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.ai_private_investment_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_space_launches_yearly: %d", root.uSA.technology_highbest_sigmoid_result.space_launches_yearly);
                ImGui::Text("technology_highbest_sigmoid_result_space_launches_yearly_min: %.4f", root.uSA.technology_highbest_sigmoid_result.space_launches_yearly_min);
                ImGui::Text("technology_highbest_sigmoid_result_space_launches_yearly_max: %.4f", root.uSA.technology_highbest_sigmoid_result.space_launches_yearly_max);
                ImGui::Text("technology_highbest_sigmoid_result_space_launches_yearly_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.space_launches_yearly_norm);
                ImGui::Text("technology_highbest_sigmoid_result_space_launches_yearly_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.space_launches_yearly_sigmoid);
                ImGui::Text("technology_highbest_sigmoid_result_patents_granted_yearly: %d", root.uSA.technology_highbest_sigmoid_result.patents_granted_yearly);
                ImGui::Text("technology_highbest_sigmoid_result_patents_granted_yearly_min: %.4f", root.uSA.technology_highbest_sigmoid_result.patents_granted_yearly_min);
                ImGui::Text("technology_highbest_sigmoid_result_patents_granted_yearly_max: %.4f", root.uSA.technology_highbest_sigmoid_result.patents_granted_yearly_max);
                ImGui::Text("technology_highbest_sigmoid_result_patents_granted_yearly_norm: %.4f", root.uSA.technology_highbest_sigmoid_result.patents_granted_yearly_norm);
                ImGui::Text("technology_highbest_sigmoid_result_patents_granted_yearly_sigmoid: %.4f", root.uSA.technology_highbest_sigmoid_result.patents_granted_yearly_sigmoid);
                ImGui::TreePop();
            }
            ImGui::TreePop();
        }

        if (ImGui::TreeNode("Magic"))
        {
            if (ImGui::TreeNode("kingdom_info"))
            {
                ImGui::Text("kingdom_info_name: %s", root.magic.kingdom_info.name.c_str());
                ImGui::Text("kingdom_info_founded_year: %d", root.magic.kingdom_info.founded_year);
                ImGui::Text("kingdom_info_capital: %s", root.magic.kingdom_info.capital.c_str());
                ImGui::Text("kingdom_info_ruling_house: %s", root.magic.kingdom_info.ruling_house.c_str());
                ImGui::Text("kingdom_info_current_monarch: %s", root.magic.kingdom_info.current_monarch.c_str());
                ImGui::Text("kingdom_info_government_type: %s", root.magic.kingdom_info.government_type.c_str());
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("government_highbest_sigmoid_result"))
            {
                ImGui::Text("government_highbest_sigmoid_result_approval_rating: %.4f", root.magic.government_highbest_sigmoid_result.approval_rating);
                ImGui::Text("government_highbest_sigmoid_result_approval_rating_min: %.4f", root.magic.government_highbest_sigmoid_result.approval_rating_min);
                ImGui::Text("government_highbest_sigmoid_result_approval_rating_max: %.4f", root.magic.government_highbest_sigmoid_result.approval_rating_max);
                ImGui::Text("government_highbest_sigmoid_result_approval_rating_norm: %.4f", root.magic.government_highbest_sigmoid_result.approval_rating_norm);
                ImGui::Text("government_highbest_sigmoid_result_approval_rating_sigmoid: %.4f", root.magic.government_highbest_sigmoid_result.approval_rating_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("government_lowbest_sigmoid_result"))
            {
                ImGui::Text("government_lowbest_sigmoid_result_tax_burden_index: %.4f", root.magic.government_lowbest_sigmoid_result.tax_burden_index);
                ImGui::Text("government_lowbest_sigmoid_result_tax_burden_index_min: %.4f", root.magic.government_lowbest_sigmoid_result.tax_burden_index_min);
                ImGui::Text("government_lowbest_sigmoid_result_tax_burden_index_max: %.4f", root.magic.government_lowbest_sigmoid_result.tax_burden_index_max);
                ImGui::Text("government_lowbest_sigmoid_result_tax_burden_index_norm: %.4f", root.magic.government_lowbest_sigmoid_result.tax_burden_index_norm);
                ImGui::Text("government_lowbest_sigmoid_result_tax_burden_index_sigmoid: %.4f", root.magic.government_lowbest_sigmoid_result.tax_burden_index_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("magic_highbest_sigmoid_result"))
            {
                ImGui::Text("magic_highbest_sigmoid_result_mana_saturation: %.4f", root.magic.magic_highbest_sigmoid_result.mana_saturation);
                ImGui::Text("magic_highbest_sigmoid_result_mana_saturation_min: %.4f", root.magic.magic_highbest_sigmoid_result.mana_saturation_min);
                ImGui::Text("magic_highbest_sigmoid_result_mana_saturation_max: %.4f", root.magic.magic_highbest_sigmoid_result.mana_saturation_max);
                ImGui::Text("magic_highbest_sigmoid_result_mana_saturation_norm: %.4f", root.magic.magic_highbest_sigmoid_result.mana_saturation_norm);
                ImGui::Text("magic_highbest_sigmoid_result_mana_saturation_sigmoid: %.4f", root.magic.magic_highbest_sigmoid_result.mana_saturation_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("magic_lowbest_sigmoid_result"))
            {
                ImGui::Text("magic_lowbest_sigmoid_result_forbidden_magic_incidents: %d", root.magic.magic_lowbest_sigmoid_result.forbidden_magic_incidents);
                ImGui::Text("magic_lowbest_sigmoid_result_forbidden_magic_incidents_min: %.4f", root.magic.magic_lowbest_sigmoid_result.forbidden_magic_incidents_min);
                ImGui::Text("magic_lowbest_sigmoid_result_forbidden_magic_incidents_max: %.4f", root.magic.magic_lowbest_sigmoid_result.forbidden_magic_incidents_max);
                ImGui::Text("magic_lowbest_sigmoid_result_forbidden_magic_incidents_norm: %.4f", root.magic.magic_lowbest_sigmoid_result.forbidden_magic_incidents_norm);
                ImGui::Text("magic_lowbest_sigmoid_result_forbidden_magic_incidents_sigmoid: %.4f", root.magic.magic_lowbest_sigmoid_result.forbidden_magic_incidents_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("population_lowbest_sigmoid_result"))
            {
                ImGui::Text("population_lowbest_sigmoid_result_total_population: %d", root.magic.population_lowbest_sigmoid_result.total_population);
                ImGui::Text("population_lowbest_sigmoid_result_total_population_min: %.4f", root.magic.population_lowbest_sigmoid_result.total_population_min);
                ImGui::Text("population_lowbest_sigmoid_result_total_population_max: %.4f", root.magic.population_lowbest_sigmoid_result.total_population_max);
                ImGui::Text("population_lowbest_sigmoid_result_total_population_norm: %.4f", root.magic.population_lowbest_sigmoid_result.total_population_norm);
                ImGui::Text("population_lowbest_sigmoid_result_total_population_sigmoid: %.4f", root.magic.population_lowbest_sigmoid_result.total_population_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("population_highbest_sigmoid_result"))
            {
                ImGui::Text("population_highbest_sigmoid_result_mage_population_ratio: %.4f", root.magic.population_highbest_sigmoid_result.mage_population_ratio);
                ImGui::Text("population_highbest_sigmoid_result_mage_population_ratio_min: %.4f", root.magic.population_highbest_sigmoid_result.mage_population_ratio_min);
                ImGui::Text("population_highbest_sigmoid_result_mage_population_ratio_max: %.4f", root.magic.population_highbest_sigmoid_result.mage_population_ratio_max);
                ImGui::Text("population_highbest_sigmoid_result_mage_population_ratio_norm: %.4f", root.magic.population_highbest_sigmoid_result.mage_population_ratio_norm);
                ImGui::Text("population_highbest_sigmoid_result_mage_population_ratio_sigmoid: %.4f", root.magic.population_highbest_sigmoid_result.mage_population_ratio_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("economy_highbest_sigmoid_result"))
            {
                ImGui::Text("economy_highbest_sigmoid_result_gdp_gold_standard: %.4f", root.magic.economy_highbest_sigmoid_result.gdp_gold_standard);
                ImGui::Text("economy_highbest_sigmoid_result_gdp_gold_standard_min: %.4f", root.magic.economy_highbest_sigmoid_result.gdp_gold_standard_min);
                ImGui::Text("economy_highbest_sigmoid_result_gdp_gold_standard_max: %.4f", root.magic.economy_highbest_sigmoid_result.gdp_gold_standard_max);
                ImGui::Text("economy_highbest_sigmoid_result_gdp_gold_standard_norm: %.4f", root.magic.economy_highbest_sigmoid_result.gdp_gold_standard_norm);
                ImGui::Text("economy_highbest_sigmoid_result_gdp_gold_standard_sigmoid: %.4f", root.magic.economy_highbest_sigmoid_result.gdp_gold_standard_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("economy_lowbest_sigmoid_result"))
            {
                ImGui::Text("economy_lowbest_sigmoid_result_inflation_rate: %.4f", root.magic.economy_lowbest_sigmoid_result.inflation_rate);
                ImGui::Text("economy_lowbest_sigmoid_result_inflation_rate_min: %.4f", root.magic.economy_lowbest_sigmoid_result.inflation_rate_min);
                ImGui::Text("economy_lowbest_sigmoid_result_inflation_rate_max: %.4f", root.magic.economy_lowbest_sigmoid_result.inflation_rate_max);
                ImGui::Text("economy_lowbest_sigmoid_result_inflation_rate_norm: %.4f", root.magic.economy_lowbest_sigmoid_result.inflation_rate_norm);
                ImGui::Text("economy_lowbest_sigmoid_result_inflation_rate_sigmoid: %.4f", root.magic.economy_lowbest_sigmoid_result.inflation_rate_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("military_highbest_sigmoid_result"))
            {
                ImGui::Text("military_highbest_sigmoid_result_royal_battlemage_corps_strength: %.4f", root.magic.military_highbest_sigmoid_result.royal_battlemage_corps_strength);
                ImGui::Text("military_highbest_sigmoid_result_royal_battlemage_corps_strength_min: %.4f", root.magic.military_highbest_sigmoid_result.royal_battlemage_corps_strength_min);
                ImGui::Text("military_highbest_sigmoid_result_royal_battlemage_corps_strength_max: %.4f", root.magic.military_highbest_sigmoid_result.royal_battlemage_corps_strength_max);
                ImGui::Text("military_highbest_sigmoid_result_royal_battlemage_corps_strength_norm: %.4f", root.magic.military_highbest_sigmoid_result.royal_battlemage_corps_strength_norm);
                ImGui::Text("military_highbest_sigmoid_result_royal_battlemage_corps_strength_sigmoid: %.4f", root.magic.military_highbest_sigmoid_result.royal_battlemage_corps_strength_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("military_lowbest_sigmoid_result"))
            {
                ImGui::Text("military_lowbest_sigmoid_result_border_conflict_frequency: %d", root.magic.military_lowbest_sigmoid_result.border_conflict_frequency);
                ImGui::Text("military_lowbest_sigmoid_result_border_conflict_frequency_min: %.4f", root.magic.military_lowbest_sigmoid_result.border_conflict_frequency_min);
                ImGui::Text("military_lowbest_sigmoid_result_border_conflict_frequency_max: %.4f", root.magic.military_lowbest_sigmoid_result.border_conflict_frequency_max);
                ImGui::Text("military_lowbest_sigmoid_result_border_conflict_frequency_norm: %.4f", root.magic.military_lowbest_sigmoid_result.border_conflict_frequency_norm);
                ImGui::Text("military_lowbest_sigmoid_result_border_conflict_frequency_sigmoid: %.4f", root.magic.military_lowbest_sigmoid_result.border_conflict_frequency_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("environment_highbest_sigmoid_result"))
            {
                ImGui::Text("environment_highbest_sigmoid_result_starwood_forest_health: %.4f", root.magic.environment_highbest_sigmoid_result.starwood_forest_health);
                ImGui::Text("environment_highbest_sigmoid_result_starwood_forest_health_min: %.4f", root.magic.environment_highbest_sigmoid_result.starwood_forest_health_min);
                ImGui::Text("environment_highbest_sigmoid_result_starwood_forest_health_max: %.4f", root.magic.environment_highbest_sigmoid_result.starwood_forest_health_max);
                ImGui::Text("environment_highbest_sigmoid_result_starwood_forest_health_norm: %.4f", root.magic.environment_highbest_sigmoid_result.starwood_forest_health_norm);
                ImGui::Text("environment_highbest_sigmoid_result_starwood_forest_health_sigmoid: %.4f", root.magic.environment_highbest_sigmoid_result.starwood_forest_health_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("environment_lowbest_sigmoid_result"))
            {
                ImGui::Text("environment_lowbest_sigmoid_result_leyline_instability: %.4f", root.magic.environment_lowbest_sigmoid_result.leyline_instability);
                ImGui::Text("environment_lowbest_sigmoid_result_leyline_instability_min: %.4f", root.magic.environment_lowbest_sigmoid_result.leyline_instability_min);
                ImGui::Text("environment_lowbest_sigmoid_result_leyline_instability_max: %.4f", root.magic.environment_lowbest_sigmoid_result.leyline_instability_max);
                ImGui::Text("environment_lowbest_sigmoid_result_leyline_instability_norm: %.4f", root.magic.environment_lowbest_sigmoid_result.leyline_instability_norm);
                ImGui::Text("environment_lowbest_sigmoid_result_leyline_instability_sigmoid: %.4f", root.magic.environment_lowbest_sigmoid_result.leyline_instability_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("diplomacy_highbest_sigmoid_result"))
            {
                ImGui::Text("diplomacy_highbest_sigmoid_result_neighboring_realms_relations: %.4f", root.magic.diplomacy_highbest_sigmoid_result.neighboring_realms_relations);
                ImGui::Text("diplomacy_highbest_sigmoid_result_neighboring_realms_relations_min: %.4f", root.magic.diplomacy_highbest_sigmoid_result.neighboring_realms_relations_min);
                ImGui::Text("diplomacy_highbest_sigmoid_result_neighboring_realms_relations_max: %.4f", root.magic.diplomacy_highbest_sigmoid_result.neighboring_realms_relations_max);
                ImGui::Text("diplomacy_highbest_sigmoid_result_neighboring_realms_relations_norm: %.4f", root.magic.diplomacy_highbest_sigmoid_result.neighboring_realms_relations_norm);
                ImGui::Text("diplomacy_highbest_sigmoid_result_neighboring_realms_relations_sigmoid: %.4f", root.magic.diplomacy_highbest_sigmoid_result.neighboring_realms_relations_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("diplomacy_lowbest_sigmoid_result"))
            {
                ImGui::Text("diplomacy_lowbest_sigmoid_result_active_trade_disputes: %d", root.magic.diplomacy_lowbest_sigmoid_result.active_trade_disputes);
                ImGui::Text("diplomacy_lowbest_sigmoid_result_active_trade_disputes_min: %.4f", root.magic.diplomacy_lowbest_sigmoid_result.active_trade_disputes_min);
                ImGui::Text("diplomacy_lowbest_sigmoid_result_active_trade_disputes_max: %.4f", root.magic.diplomacy_lowbest_sigmoid_result.active_trade_disputes_max);
                ImGui::Text("diplomacy_lowbest_sigmoid_result_active_trade_disputes_norm: %.4f", root.magic.diplomacy_lowbest_sigmoid_result.active_trade_disputes_norm);
                ImGui::Text("diplomacy_lowbest_sigmoid_result_active_trade_disputes_sigmoid: %.4f", root.magic.diplomacy_lowbest_sigmoid_result.active_trade_disputes_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("culture_highbest_sigmoid_result"))
            {
                ImGui::Text("culture_highbest_sigmoid_result_festival_of_stars_attendance: %.4f", root.magic.culture_highbest_sigmoid_result.festival_of_stars_attendance);
                ImGui::Text("culture_highbest_sigmoid_result_festival_of_stars_attendance_min: %.4f", root.magic.culture_highbest_sigmoid_result.festival_of_stars_attendance_min);
                ImGui::Text("culture_highbest_sigmoid_result_festival_of_stars_attendance_max: %.4f", root.magic.culture_highbest_sigmoid_result.festival_of_stars_attendance_max);
                ImGui::Text("culture_highbest_sigmoid_result_festival_of_stars_attendance_norm: %.4f", root.magic.culture_highbest_sigmoid_result.festival_of_stars_attendance_norm);
                ImGui::Text("culture_highbest_sigmoid_result_festival_of_stars_attendance_sigmoid: %.4f", root.magic.culture_highbest_sigmoid_result.festival_of_stars_attendance_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("infrastructure_highbest_sigmoid_result"))
            {
                ImGui::Text("infrastructure_highbest_sigmoid_result_teleportation_network_coverage: %.4f", root.magic.infrastructure_highbest_sigmoid_result.teleportation_network_coverage);
                ImGui::Text("infrastructure_highbest_sigmoid_result_teleportation_network_coverage_min: %.4f", root.magic.infrastructure_highbest_sigmoid_result.teleportation_network_coverage_min);
                ImGui::Text("infrastructure_highbest_sigmoid_result_teleportation_network_coverage_max: %.4f", root.magic.infrastructure_highbest_sigmoid_result.teleportation_network_coverage_max);
                ImGui::Text("infrastructure_highbest_sigmoid_result_teleportation_network_coverage_norm: %.4f", root.magic.infrastructure_highbest_sigmoid_result.teleportation_network_coverage_norm);
                ImGui::Text("infrastructure_highbest_sigmoid_result_teleportation_network_coverage_sigmoid: %.4f", root.magic.infrastructure_highbest_sigmoid_result.teleportation_network_coverage_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("infrastructure_lowbest_sigmoid_result"))
            {
                ImGui::Text("infrastructure_lowbest_sigmoid_result_crumbling_ward_sites: %d", root.magic.infrastructure_lowbest_sigmoid_result.crumbling_ward_sites);
                ImGui::Text("infrastructure_lowbest_sigmoid_result_crumbling_ward_sites_min: %.4f", root.magic.infrastructure_lowbest_sigmoid_result.crumbling_ward_sites_min);
                ImGui::Text("infrastructure_lowbest_sigmoid_result_crumbling_ward_sites_max: %.4f", root.magic.infrastructure_lowbest_sigmoid_result.crumbling_ward_sites_max);
                ImGui::Text("infrastructure_lowbest_sigmoid_result_crumbling_ward_sites_norm: %.4f", root.magic.infrastructure_lowbest_sigmoid_result.crumbling_ward_sites_norm);
                ImGui::Text("infrastructure_lowbest_sigmoid_result_crumbling_ward_sites_sigmoid: %.4f", root.magic.infrastructure_lowbest_sigmoid_result.crumbling_ward_sites_sigmoid);
                ImGui::TreePop();
            }
            ImGui::TreePop();
        }

    }
};
