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
            if (ImGui::TreeNode("government_sigmoid_result"))
            {
                ImGui::Text("government_sigmoid_result_president: %s", root.uSA.government_sigmoid_result.president.c_str());
                ImGui::Text("government_sigmoid_result_vice_president: %s", root.uSA.government_sigmoid_result.vice_president.c_str());
                ImGui::Text("government_sigmoid_result_ruling_party: %s", root.uSA.government_sigmoid_result.ruling_party.c_str());
                ImGui::Text("government_sigmoid_result_executive_departments: %d", root.uSA.government_sigmoid_result.executive_departments);
                ImGui::Text("government_sigmoid_result_executive_departments_min: %.4f", root.uSA.government_sigmoid_result.executive_departments_min);
                ImGui::Text("government_sigmoid_result_executive_departments_max: %.4f", root.uSA.government_sigmoid_result.executive_departments_max);
                ImGui::Text("government_sigmoid_result_executive_departments_norm: %.4f", root.uSA.government_sigmoid_result.executive_departments_norm);
                ImGui::Text("government_sigmoid_result_executive_departments_sigmoid: %.4f", root.uSA.government_sigmoid_result.executive_departments_sigmoid);
                ImGui::Text("government_sigmoid_result_house_seats: %d", root.uSA.government_sigmoid_result.house_seats);
                ImGui::Text("government_sigmoid_result_house_seats_min: %.4f", root.uSA.government_sigmoid_result.house_seats_min);
                ImGui::Text("government_sigmoid_result_house_seats_max: %.4f", root.uSA.government_sigmoid_result.house_seats_max);
                ImGui::Text("government_sigmoid_result_house_seats_norm: %.4f", root.uSA.government_sigmoid_result.house_seats_norm);
                ImGui::Text("government_sigmoid_result_house_seats_sigmoid: %.4f", root.uSA.government_sigmoid_result.house_seats_sigmoid);
                ImGui::Text("government_sigmoid_result_senate_seats: %d", root.uSA.government_sigmoid_result.senate_seats);
                ImGui::Text("government_sigmoid_result_senate_seats_min: %.4f", root.uSA.government_sigmoid_result.senate_seats_min);
                ImGui::Text("government_sigmoid_result_senate_seats_max: %.4f", root.uSA.government_sigmoid_result.senate_seats_max);
                ImGui::Text("government_sigmoid_result_senate_seats_norm: %.4f", root.uSA.government_sigmoid_result.senate_seats_norm);
                ImGui::Text("government_sigmoid_result_senate_seats_sigmoid: %.4f", root.uSA.government_sigmoid_result.senate_seats_sigmoid);
                ImGui::Text("government_sigmoid_result_supreme_court_justices: %d", root.uSA.government_sigmoid_result.supreme_court_justices);
                ImGui::Text("government_sigmoid_result_supreme_court_justices_min: %.4f", root.uSA.government_sigmoid_result.supreme_court_justices_min);
                ImGui::Text("government_sigmoid_result_supreme_court_justices_max: %.4f", root.uSA.government_sigmoid_result.supreme_court_justices_max);
                ImGui::Text("government_sigmoid_result_supreme_court_justices_norm: %.4f", root.uSA.government_sigmoid_result.supreme_court_justices_norm);
                ImGui::Text("government_sigmoid_result_supreme_court_justices_sigmoid: %.4f", root.uSA.government_sigmoid_result.supreme_court_justices_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("demography_highbest"))
            {
                ImGui::Text("demography_highbest_population: %d", root.uSA.demography_highbest.population);
                ImGui::Text("demography_highbest_population_min: %.4f", root.uSA.demography_highbest.population_min);
                ImGui::Text("demography_highbest_population_max: %.4f", root.uSA.demography_highbest.population_max);
                ImGui::Text("demography_highbest_population_norm: %.4f", root.uSA.demography_highbest.population_norm);
                ImGui::Text("demography_highbest_population_sigmoid: %.4f", root.uSA.demography_highbest.population_sigmoid);
                ImGui::Text("demography_highbest_population_growth_rate: %.4f", root.uSA.demography_highbest.population_growth_rate);
                ImGui::Text("demography_highbest_population_growth_rate_min: %.4f", root.uSA.demography_highbest.population_growth_rate_min);
                ImGui::Text("demography_highbest_population_growth_rate_max: %.4f", root.uSA.demography_highbest.population_growth_rate_max);
                ImGui::Text("demography_highbest_population_growth_rate_norm: %.4f", root.uSA.demography_highbest.population_growth_rate_norm);
                ImGui::Text("demography_highbest_population_growth_rate_sigmoid: %.4f", root.uSA.demography_highbest.population_growth_rate_sigmoid);
                ImGui::Text("demography_highbest_population_density: %.4f", root.uSA.demography_highbest.population_density);
                ImGui::Text("demography_highbest_population_density_min: %.4f", root.uSA.demography_highbest.population_density_min);
                ImGui::Text("demography_highbest_population_density_max: %.4f", root.uSA.demography_highbest.population_density_max);
                ImGui::Text("demography_highbest_population_density_norm: %.4f", root.uSA.demography_highbest.population_density_norm);
                ImGui::Text("demography_highbest_population_density_sigmoid: %.4f", root.uSA.demography_highbest.population_density_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("demography_lowbest"))
            {
                ImGui::Text("demography_lowbest_deaths: %d", root.uSA.demography_lowbest.deaths);
                ImGui::Text("demography_lowbest_deaths_min: %.4f", root.uSA.demography_lowbest.deaths_min);
                ImGui::Text("demography_lowbest_deaths_max: %.4f", root.uSA.demography_lowbest.deaths_max);
                ImGui::Text("demography_lowbest_deaths_norm: %.4f", root.uSA.demography_lowbest.deaths_norm);
                ImGui::Text("demography_lowbest_deaths_sigmoid: %.4f", root.uSA.demography_lowbest.deaths_sigmoid);
                ImGui::Text("demography_lowbest_death_rate: %.4f", root.uSA.demography_lowbest.death_rate);
                ImGui::Text("demography_lowbest_death_rate_min: %.4f", root.uSA.demography_lowbest.death_rate_min);
                ImGui::Text("demography_lowbest_death_rate_max: %.4f", root.uSA.demography_lowbest.death_rate_max);
                ImGui::Text("demography_lowbest_death_rate_norm: %.4f", root.uSA.demography_lowbest.death_rate_norm);
                ImGui::Text("demography_lowbest_death_rate_sigmoid: %.4f", root.uSA.demography_lowbest.death_rate_sigmoid);
                ImGui::Text("demography_lowbest_median_age: %.4f", root.uSA.demography_lowbest.median_age);
                ImGui::Text("demography_lowbest_median_age_min: %.4f", root.uSA.demography_lowbest.median_age_min);
                ImGui::Text("demography_lowbest_median_age_max: %.4f", root.uSA.demography_lowbest.median_age_max);
                ImGui::Text("demography_lowbest_median_age_norm: %.4f", root.uSA.demography_lowbest.median_age_norm);
                ImGui::Text("demography_lowbest_median_age_sigmoid: %.4f", root.uSA.demography_lowbest.median_age_sigmoid);
                ImGui::Text("demography_lowbest_infant_mortality: %.4f", root.uSA.demography_lowbest.infant_mortality);
                ImGui::Text("demography_lowbest_infant_mortality_min: %.4f", root.uSA.demography_lowbest.infant_mortality_min);
                ImGui::Text("demography_lowbest_infant_mortality_max: %.4f", root.uSA.demography_lowbest.infant_mortality_max);
                ImGui::Text("demography_lowbest_infant_mortality_norm: %.4f", root.uSA.demography_lowbest.infant_mortality_norm);
                ImGui::Text("demography_lowbest_infant_mortality_sigmoid: %.4f", root.uSA.demography_lowbest.infant_mortality_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("economy_highbest"))
            {
                ImGui::Text("economy_highbest_gdp_current: %.4f", root.uSA.economy_highbest.gdp_current);
                ImGui::Text("economy_highbest_gdp_current_min: %.4f", root.uSA.economy_highbest.gdp_current_min);
                ImGui::Text("economy_highbest_gdp_current_max: %.4f", root.uSA.economy_highbest.gdp_current_max);
                ImGui::Text("economy_highbest_gdp_current_norm: %.4f", root.uSA.economy_highbest.gdp_current_norm);
                ImGui::Text("economy_highbest_gdp_current_sigmoid: %.4f", root.uSA.economy_highbest.gdp_current_sigmoid);
                ImGui::Text("economy_highbest_gdp_real_growth: %.4f", root.uSA.economy_highbest.gdp_real_growth);
                ImGui::Text("economy_highbest_gdp_real_growth_min: %.4f", root.uSA.economy_highbest.gdp_real_growth_min);
                ImGui::Text("economy_highbest_gdp_real_growth_max: %.4f", root.uSA.economy_highbest.gdp_real_growth_max);
                ImGui::Text("economy_highbest_gdp_real_growth_norm: %.4f", root.uSA.economy_highbest.gdp_real_growth_norm);
                ImGui::Text("economy_highbest_gdp_real_growth_sigmoid: %.4f", root.uSA.economy_highbest.gdp_real_growth_sigmoid);
                ImGui::Text("economy_highbest_gdp_per_capita: %d", root.uSA.economy_highbest.gdp_per_capita);
                ImGui::Text("economy_highbest_gdp_per_capita_min: %.4f", root.uSA.economy_highbest.gdp_per_capita_min);
                ImGui::Text("economy_highbest_gdp_per_capita_max: %.4f", root.uSA.economy_highbest.gdp_per_capita_max);
                ImGui::Text("economy_highbest_gdp_per_capita_norm: %.4f", root.uSA.economy_highbest.gdp_per_capita_norm);
                ImGui::Text("economy_highbest_gdp_per_capita_sigmoid: %.4f", root.uSA.economy_highbest.gdp_per_capita_sigmoid);
                ImGui::Text("economy_highbest_labor_force: %d", root.uSA.economy_highbest.labor_force);
                ImGui::Text("economy_highbest_labor_force_min: %.4f", root.uSA.economy_highbest.labor_force_min);
                ImGui::Text("economy_highbest_labor_force_max: %.4f", root.uSA.economy_highbest.labor_force_max);
                ImGui::Text("economy_highbest_labor_force_norm: %.4f", root.uSA.economy_highbest.labor_force_norm);
                ImGui::Text("economy_highbest_labor_force_sigmoid: %.4f", root.uSA.economy_highbest.labor_force_sigmoid);
                ImGui::Text("economy_highbest_labor_force_participation: %.4f", root.uSA.economy_highbest.labor_force_participation);
                ImGui::Text("economy_highbest_labor_force_participation_min: %.4f", root.uSA.economy_highbest.labor_force_participation_min);
                ImGui::Text("economy_highbest_labor_force_participation_max: %.4f", root.uSA.economy_highbest.labor_force_participation_max);
                ImGui::Text("economy_highbest_labor_force_participation_norm: %.4f", root.uSA.economy_highbest.labor_force_participation_norm);
                ImGui::Text("economy_highbest_labor_force_participation_sigmoid: %.4f", root.uSA.economy_highbest.labor_force_participation_sigmoid);
                ImGui::Text("economy_highbest_employed: %d", root.uSA.economy_highbest.employed);
                ImGui::Text("economy_highbest_employed_min: %.4f", root.uSA.economy_highbest.employed_min);
                ImGui::Text("economy_highbest_employed_max: %.4f", root.uSA.economy_highbest.employed_max);
                ImGui::Text("economy_highbest_employed_norm: %.4f", root.uSA.economy_highbest.employed_norm);
                ImGui::Text("economy_highbest_employed_sigmoid: %.4f", root.uSA.economy_highbest.employed_sigmoid);
                ImGui::Text("economy_highbest_median_household_income: %d", root.uSA.economy_highbest.median_household_income);
                ImGui::Text("economy_highbest_median_household_income_min: %.4f", root.uSA.economy_highbest.median_household_income_min);
                ImGui::Text("economy_highbest_median_household_income_max: %.4f", root.uSA.economy_highbest.median_household_income_max);
                ImGui::Text("economy_highbest_median_household_income_norm: %.4f", root.uSA.economy_highbest.median_household_income_norm);
                ImGui::Text("economy_highbest_median_household_income_sigmoid: %.4f", root.uSA.economy_highbest.median_household_income_sigmoid);
                ImGui::Text("economy_highbest_federal_revenue: %.4f", root.uSA.economy_highbest.federal_revenue);
                ImGui::Text("economy_highbest_federal_revenue_min: %.4f", root.uSA.economy_highbest.federal_revenue_min);
                ImGui::Text("economy_highbest_federal_revenue_max: %.4f", root.uSA.economy_highbest.federal_revenue_max);
                ImGui::Text("economy_highbest_federal_revenue_norm: %.4f", root.uSA.economy_highbest.federal_revenue_norm);
                ImGui::Text("economy_highbest_federal_revenue_sigmoid: %.4f", root.uSA.economy_highbest.federal_revenue_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("economy_lowbest"))
            {
                ImGui::Text("economy_lowbest_inflation_rate: %.4f", root.uSA.economy_lowbest.inflation_rate);
                ImGui::Text("economy_lowbest_inflation_rate_min: %.4f", root.uSA.economy_lowbest.inflation_rate_min);
                ImGui::Text("economy_lowbest_inflation_rate_max: %.4f", root.uSA.economy_lowbest.inflation_rate_max);
                ImGui::Text("economy_lowbest_inflation_rate_norm: %.4f", root.uSA.economy_lowbest.inflation_rate_norm);
                ImGui::Text("economy_lowbest_inflation_rate_sigmoid: %.4f", root.uSA.economy_lowbest.inflation_rate_sigmoid);
                ImGui::Text("economy_lowbest_unemployment_rate: %.4f", root.uSA.economy_lowbest.unemployment_rate);
                ImGui::Text("economy_lowbest_unemployment_rate_min: %.4f", root.uSA.economy_lowbest.unemployment_rate_min);
                ImGui::Text("economy_lowbest_unemployment_rate_max: %.4f", root.uSA.economy_lowbest.unemployment_rate_max);
                ImGui::Text("economy_lowbest_unemployment_rate_norm: %.4f", root.uSA.economy_lowbest.unemployment_rate_norm);
                ImGui::Text("economy_lowbest_unemployment_rate_sigmoid: %.4f", root.uSA.economy_lowbest.unemployment_rate_sigmoid);
                ImGui::Text("economy_lowbest_unemployed: %d", root.uSA.economy_lowbest.unemployed);
                ImGui::Text("economy_lowbest_unemployed_min: %.4f", root.uSA.economy_lowbest.unemployed_min);
                ImGui::Text("economy_lowbest_unemployed_max: %.4f", root.uSA.economy_lowbest.unemployed_max);
                ImGui::Text("economy_lowbest_unemployed_norm: %.4f", root.uSA.economy_lowbest.unemployed_norm);
                ImGui::Text("economy_lowbest_unemployed_sigmoid: %.4f", root.uSA.economy_lowbest.unemployed_sigmoid);
                ImGui::Text("economy_lowbest_poverty_rate: %.4f", root.uSA.economy_lowbest.poverty_rate);
                ImGui::Text("economy_lowbest_poverty_rate_min: %.4f", root.uSA.economy_lowbest.poverty_rate_min);
                ImGui::Text("economy_lowbest_poverty_rate_max: %.4f", root.uSA.economy_lowbest.poverty_rate_max);
                ImGui::Text("economy_lowbest_poverty_rate_norm: %.4f", root.uSA.economy_lowbest.poverty_rate_norm);
                ImGui::Text("economy_lowbest_poverty_rate_sigmoid: %.4f", root.uSA.economy_lowbest.poverty_rate_sigmoid);
                ImGui::Text("economy_lowbest_gini_index: %.4f", root.uSA.economy_lowbest.gini_index);
                ImGui::Text("economy_lowbest_gini_index_min: %.4f", root.uSA.economy_lowbest.gini_index_min);
                ImGui::Text("economy_lowbest_gini_index_max: %.4f", root.uSA.economy_lowbest.gini_index_max);
                ImGui::Text("economy_lowbest_gini_index_norm: %.4f", root.uSA.economy_lowbest.gini_index_norm);
                ImGui::Text("economy_lowbest_gini_index_sigmoid: %.4f", root.uSA.economy_lowbest.gini_index_sigmoid);
                ImGui::Text("economy_lowbest_federal_spending: %.4f", root.uSA.economy_lowbest.federal_spending);
                ImGui::Text("economy_lowbest_federal_spending_min: %.4f", root.uSA.economy_lowbest.federal_spending_min);
                ImGui::Text("economy_lowbest_federal_spending_max: %.4f", root.uSA.economy_lowbest.federal_spending_max);
                ImGui::Text("economy_lowbest_federal_spending_norm: %.4f", root.uSA.economy_lowbest.federal_spending_norm);
                ImGui::Text("economy_lowbest_federal_spending_sigmoid: %.4f", root.uSA.economy_lowbest.federal_spending_sigmoid);
                ImGui::Text("economy_lowbest_budget_balance: %.4f", root.uSA.economy_lowbest.budget_balance);
                ImGui::Text("economy_lowbest_budget_balance_min: %.4f", root.uSA.economy_lowbest.budget_balance_min);
                ImGui::Text("economy_lowbest_budget_balance_max: %.4f", root.uSA.economy_lowbest.budget_balance_max);
                ImGui::Text("economy_lowbest_budget_balance_norm: %.4f", root.uSA.economy_lowbest.budget_balance_norm);
                ImGui::Text("economy_lowbest_budget_balance_sigmoid: %.4f", root.uSA.economy_lowbest.budget_balance_sigmoid);
                ImGui::Text("economy_lowbest_public_debt: %.4f", root.uSA.economy_lowbest.public_debt);
                ImGui::Text("economy_lowbest_public_debt_min: %.4f", root.uSA.economy_lowbest.public_debt_min);
                ImGui::Text("economy_lowbest_public_debt_max: %.4f", root.uSA.economy_lowbest.public_debt_max);
                ImGui::Text("economy_lowbest_public_debt_norm: %.4f", root.uSA.economy_lowbest.public_debt_norm);
                ImGui::Text("economy_lowbest_public_debt_sigmoid: %.4f", root.uSA.economy_lowbest.public_debt_sigmoid);
                ImGui::Text("economy_lowbest_household_debt: %.4f", root.uSA.economy_lowbest.household_debt);
                ImGui::Text("economy_lowbest_household_debt_min: %.4f", root.uSA.economy_lowbest.household_debt_min);
                ImGui::Text("economy_lowbest_household_debt_max: %.4f", root.uSA.economy_lowbest.household_debt_max);
                ImGui::Text("economy_lowbest_household_debt_norm: %.4f", root.uSA.economy_lowbest.household_debt_norm);
                ImGui::Text("economy_lowbest_household_debt_sigmoid: %.4f", root.uSA.economy_lowbest.household_debt_sigmoid);
                ImGui::Text("economy_lowbest_exports: %.4f", root.uSA.economy_lowbest.exports);
                ImGui::Text("economy_lowbest_exports_min: %.4f", root.uSA.economy_lowbest.exports_min);
                ImGui::Text("economy_lowbest_exports_max: %.4f", root.uSA.economy_lowbest.exports_max);
                ImGui::Text("economy_lowbest_exports_norm: %.4f", root.uSA.economy_lowbest.exports_norm);
                ImGui::Text("economy_lowbest_exports_sigmoid: %.4f", root.uSA.economy_lowbest.exports_sigmoid);
                ImGui::Text("economy_lowbest_imports: %.4f", root.uSA.economy_lowbest.imports);
                ImGui::Text("economy_lowbest_imports_min: %.4f", root.uSA.economy_lowbest.imports_min);
                ImGui::Text("economy_lowbest_imports_max: %.4f", root.uSA.economy_lowbest.imports_max);
                ImGui::Text("economy_lowbest_imports_norm: %.4f", root.uSA.economy_lowbest.imports_norm);
                ImGui::Text("economy_lowbest_imports_sigmoid: %.4f", root.uSA.economy_lowbest.imports_sigmoid);
                ImGui::Text("economy_lowbest_trade_balance: %.4f", root.uSA.economy_lowbest.trade_balance);
                ImGui::Text("economy_lowbest_trade_balance_min: %.4f", root.uSA.economy_lowbest.trade_balance_min);
                ImGui::Text("economy_lowbest_trade_balance_max: %.4f", root.uSA.economy_lowbest.trade_balance_max);
                ImGui::Text("economy_lowbest_trade_balance_norm: %.4f", root.uSA.economy_lowbest.trade_balance_norm);
                ImGui::Text("economy_lowbest_trade_balance_sigmoid: %.4f", root.uSA.economy_lowbest.trade_balance_sigmoid);
                ImGui::Text("economy_lowbest_corporate_tax_rate: %.4f", root.uSA.economy_lowbest.corporate_tax_rate);
                ImGui::Text("economy_lowbest_corporate_tax_rate_min: %.4f", root.uSA.economy_lowbest.corporate_tax_rate_min);
                ImGui::Text("economy_lowbest_corporate_tax_rate_max: %.4f", root.uSA.economy_lowbest.corporate_tax_rate_max);
                ImGui::Text("economy_lowbest_corporate_tax_rate_norm: %.4f", root.uSA.economy_lowbest.corporate_tax_rate_norm);
                ImGui::Text("economy_lowbest_corporate_tax_rate_sigmoid: %.4f", root.uSA.economy_lowbest.corporate_tax_rate_sigmoid);
                ImGui::Text("economy_lowbest_personal_tax_top_rate: %.4f", root.uSA.economy_lowbest.personal_tax_top_rate);
                ImGui::Text("economy_lowbest_personal_tax_top_rate_min: %.4f", root.uSA.economy_lowbest.personal_tax_top_rate_min);
                ImGui::Text("economy_lowbest_personal_tax_top_rate_max: %.4f", root.uSA.economy_lowbest.personal_tax_top_rate_max);
                ImGui::Text("economy_lowbest_personal_tax_top_rate_norm: %.4f", root.uSA.economy_lowbest.personal_tax_top_rate_norm);
                ImGui::Text("economy_lowbest_personal_tax_top_rate_sigmoid: %.4f", root.uSA.economy_lowbest.personal_tax_top_rate_sigmoid);
                ImGui::Text("economy_lowbest_policy_rate: %.4f", root.uSA.economy_lowbest.policy_rate);
                ImGui::Text("economy_lowbest_policy_rate_min: %.4f", root.uSA.economy_lowbest.policy_rate_min);
                ImGui::Text("economy_lowbest_policy_rate_max: %.4f", root.uSA.economy_lowbest.policy_rate_max);
                ImGui::Text("economy_lowbest_policy_rate_norm: %.4f", root.uSA.economy_lowbest.policy_rate_norm);
                ImGui::Text("economy_lowbest_policy_rate_sigmoid: %.4f", root.uSA.economy_lowbest.policy_rate_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("government_highbest"))
            {
                ImGui::Text("government_highbest_approval_rating: %.4f", root.uSA.government_highbest.approval_rating);
                ImGui::Text("government_highbest_approval_rating_min: %.4f", root.uSA.government_highbest.approval_rating_min);
                ImGui::Text("government_highbest_approval_rating_max: %.4f", root.uSA.government_highbest.approval_rating_max);
                ImGui::Text("government_highbest_approval_rating_norm: %.4f", root.uSA.government_highbest.approval_rating_norm);
                ImGui::Text("government_highbest_approval_rating_sigmoid: %.4f", root.uSA.government_highbest.approval_rating_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("government_lowbest"))
            {
                ImGui::Text("government_lowbest_federal_employees: %d", root.uSA.government_lowbest.federal_employees);
                ImGui::Text("government_lowbest_federal_employees_min: %.4f", root.uSA.government_lowbest.federal_employees_min);
                ImGui::Text("government_lowbest_federal_employees_max: %.4f", root.uSA.government_lowbest.federal_employees_max);
                ImGui::Text("government_lowbest_federal_employees_norm: %.4f", root.uSA.government_lowbest.federal_employees_norm);
                ImGui::Text("government_lowbest_federal_employees_sigmoid: %.4f", root.uSA.government_lowbest.federal_employees_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("military_highbest"))
            {
                ImGui::Text("military_highbest_defense_budget: %.4f", root.uSA.military_highbest.defense_budget);
                ImGui::Text("military_highbest_defense_budget_min: %.4f", root.uSA.military_highbest.defense_budget_min);
                ImGui::Text("military_highbest_defense_budget_max: %.4f", root.uSA.military_highbest.defense_budget_max);
                ImGui::Text("military_highbest_defense_budget_norm: %.4f", root.uSA.military_highbest.defense_budget_norm);
                ImGui::Text("military_highbest_defense_budget_sigmoid: %.4f", root.uSA.military_highbest.defense_budget_sigmoid);
                ImGui::Text("military_highbest_active_personnel: %d", root.uSA.military_highbest.active_personnel);
                ImGui::Text("military_highbest_active_personnel_min: %.4f", root.uSA.military_highbest.active_personnel_min);
                ImGui::Text("military_highbest_active_personnel_max: %.4f", root.uSA.military_highbest.active_personnel_max);
                ImGui::Text("military_highbest_active_personnel_norm: %.4f", root.uSA.military_highbest.active_personnel_norm);
                ImGui::Text("military_highbest_active_personnel_sigmoid: %.4f", root.uSA.military_highbest.active_personnel_sigmoid);
                ImGui::Text("military_highbest_reserve_personnel: %d", root.uSA.military_highbest.reserve_personnel);
                ImGui::Text("military_highbest_reserve_personnel_min: %.4f", root.uSA.military_highbest.reserve_personnel_min);
                ImGui::Text("military_highbest_reserve_personnel_max: %.4f", root.uSA.military_highbest.reserve_personnel_max);
                ImGui::Text("military_highbest_reserve_personnel_norm: %.4f", root.uSA.military_highbest.reserve_personnel_norm);
                ImGui::Text("military_highbest_reserve_personnel_sigmoid: %.4f", root.uSA.military_highbest.reserve_personnel_sigmoid);
                ImGui::Text("military_highbest_national_guard_personnel: %d", root.uSA.military_highbest.national_guard_personnel);
                ImGui::Text("military_highbest_national_guard_personnel_min: %.4f", root.uSA.military_highbest.national_guard_personnel_min);
                ImGui::Text("military_highbest_national_guard_personnel_max: %.4f", root.uSA.military_highbest.national_guard_personnel_max);
                ImGui::Text("military_highbest_national_guard_personnel_norm: %.4f", root.uSA.military_highbest.national_guard_personnel_norm);
                ImGui::Text("military_highbest_national_guard_personnel_sigmoid: %.4f", root.uSA.military_highbest.national_guard_personnel_sigmoid);
                ImGui::Text("military_highbest_army_personnel: %d", root.uSA.military_highbest.army_personnel);
                ImGui::Text("military_highbest_army_personnel_min: %.4f", root.uSA.military_highbest.army_personnel_min);
                ImGui::Text("military_highbest_army_personnel_max: %.4f", root.uSA.military_highbest.army_personnel_max);
                ImGui::Text("military_highbest_army_personnel_norm: %.4f", root.uSA.military_highbest.army_personnel_norm);
                ImGui::Text("military_highbest_army_personnel_sigmoid: %.4f", root.uSA.military_highbest.army_personnel_sigmoid);
                ImGui::Text("military_highbest_navy_personnel: %d", root.uSA.military_highbest.navy_personnel);
                ImGui::Text("military_highbest_navy_personnel_min: %.4f", root.uSA.military_highbest.navy_personnel_min);
                ImGui::Text("military_highbest_navy_personnel_max: %.4f", root.uSA.military_highbest.navy_personnel_max);
                ImGui::Text("military_highbest_navy_personnel_norm: %.4f", root.uSA.military_highbest.navy_personnel_norm);
                ImGui::Text("military_highbest_navy_personnel_sigmoid: %.4f", root.uSA.military_highbest.navy_personnel_sigmoid);
                ImGui::Text("military_highbest_air_force_personnel: %d", root.uSA.military_highbest.air_force_personnel);
                ImGui::Text("military_highbest_air_force_personnel_min: %.4f", root.uSA.military_highbest.air_force_personnel_min);
                ImGui::Text("military_highbest_air_force_personnel_max: %.4f", root.uSA.military_highbest.air_force_personnel_max);
                ImGui::Text("military_highbest_air_force_personnel_norm: %.4f", root.uSA.military_highbest.air_force_personnel_norm);
                ImGui::Text("military_highbest_air_force_personnel_sigmoid: %.4f", root.uSA.military_highbest.air_force_personnel_sigmoid);
                ImGui::Text("military_highbest_marine_personnel: %d", root.uSA.military_highbest.marine_personnel);
                ImGui::Text("military_highbest_marine_personnel_min: %.4f", root.uSA.military_highbest.marine_personnel_min);
                ImGui::Text("military_highbest_marine_personnel_max: %.4f", root.uSA.military_highbest.marine_personnel_max);
                ImGui::Text("military_highbest_marine_personnel_norm: %.4f", root.uSA.military_highbest.marine_personnel_norm);
                ImGui::Text("military_highbest_marine_personnel_sigmoid: %.4f", root.uSA.military_highbest.marine_personnel_sigmoid);
                ImGui::Text("military_highbest_space_force_personnel: %d", root.uSA.military_highbest.space_force_personnel);
                ImGui::Text("military_highbest_space_force_personnel_min: %.4f", root.uSA.military_highbest.space_force_personnel_min);
                ImGui::Text("military_highbest_space_force_personnel_max: %.4f", root.uSA.military_highbest.space_force_personnel_max);
                ImGui::Text("military_highbest_space_force_personnel_norm: %.4f", root.uSA.military_highbest.space_force_personnel_norm);
                ImGui::Text("military_highbest_space_force_personnel_sigmoid: %.4f", root.uSA.military_highbest.space_force_personnel_sigmoid);
                ImGui::Text("military_highbest_nuclear_warheads: %d", root.uSA.military_highbest.nuclear_warheads);
                ImGui::Text("military_highbest_nuclear_warheads_min: %.4f", root.uSA.military_highbest.nuclear_warheads_min);
                ImGui::Text("military_highbest_nuclear_warheads_max: %.4f", root.uSA.military_highbest.nuclear_warheads_max);
                ImGui::Text("military_highbest_nuclear_warheads_norm: %.4f", root.uSA.military_highbest.nuclear_warheads_norm);
                ImGui::Text("military_highbest_nuclear_warheads_sigmoid: %.4f", root.uSA.military_highbest.nuclear_warheads_sigmoid);
                ImGui::Text("military_highbest_carriers: %d", root.uSA.military_highbest.carriers);
                ImGui::Text("military_highbest_carriers_min: %.4f", root.uSA.military_highbest.carriers_min);
                ImGui::Text("military_highbest_carriers_max: %.4f", root.uSA.military_highbest.carriers_max);
                ImGui::Text("military_highbest_carriers_norm: %.4f", root.uSA.military_highbest.carriers_norm);
                ImGui::Text("military_highbest_carriers_sigmoid: %.4f", root.uSA.military_highbest.carriers_sigmoid);
                ImGui::Text("military_highbest_destroyers: %d", root.uSA.military_highbest.destroyers);
                ImGui::Text("military_highbest_destroyers_min: %.4f", root.uSA.military_highbest.destroyers_min);
                ImGui::Text("military_highbest_destroyers_max: %.4f", root.uSA.military_highbest.destroyers_max);
                ImGui::Text("military_highbest_destroyers_norm: %.4f", root.uSA.military_highbest.destroyers_norm);
                ImGui::Text("military_highbest_destroyers_sigmoid: %.4f", root.uSA.military_highbest.destroyers_sigmoid);
                ImGui::Text("military_highbest_submarines: %d", root.uSA.military_highbest.submarines);
                ImGui::Text("military_highbest_submarines_min: %.4f", root.uSA.military_highbest.submarines_min);
                ImGui::Text("military_highbest_submarines_max: %.4f", root.uSA.military_highbest.submarines_max);
                ImGui::Text("military_highbest_submarines_norm: %.4f", root.uSA.military_highbest.submarines_norm);
                ImGui::Text("military_highbest_submarines_sigmoid: %.4f", root.uSA.military_highbest.submarines_sigmoid);
                ImGui::Text("military_highbest_tanks: %d", root.uSA.military_highbest.tanks);
                ImGui::Text("military_highbest_tanks_min: %.4f", root.uSA.military_highbest.tanks_min);
                ImGui::Text("military_highbest_tanks_max: %.4f", root.uSA.military_highbest.tanks_max);
                ImGui::Text("military_highbest_tanks_norm: %.4f", root.uSA.military_highbest.tanks_norm);
                ImGui::Text("military_highbest_tanks_sigmoid: %.4f", root.uSA.military_highbest.tanks_sigmoid);
                ImGui::Text("military_highbest_armored_vehicles: %d", root.uSA.military_highbest.armored_vehicles);
                ImGui::Text("military_highbest_armored_vehicles_min: %.4f", root.uSA.military_highbest.armored_vehicles_min);
                ImGui::Text("military_highbest_armored_vehicles_max: %.4f", root.uSA.military_highbest.armored_vehicles_max);
                ImGui::Text("military_highbest_armored_vehicles_norm: %.4f", root.uSA.military_highbest.armored_vehicles_norm);
                ImGui::Text("military_highbest_armored_vehicles_sigmoid: %.4f", root.uSA.military_highbest.armored_vehicles_sigmoid);
                ImGui::Text("military_highbest_fighter_aircraft: %d", root.uSA.military_highbest.fighter_aircraft);
                ImGui::Text("military_highbest_fighter_aircraft_min: %.4f", root.uSA.military_highbest.fighter_aircraft_min);
                ImGui::Text("military_highbest_fighter_aircraft_max: %.4f", root.uSA.military_highbest.fighter_aircraft_max);
                ImGui::Text("military_highbest_fighter_aircraft_norm: %.4f", root.uSA.military_highbest.fighter_aircraft_norm);
                ImGui::Text("military_highbest_fighter_aircraft_sigmoid: %.4f", root.uSA.military_highbest.fighter_aircraft_sigmoid);
                ImGui::Text("military_highbest_bombers: %d", root.uSA.military_highbest.bombers);
                ImGui::Text("military_highbest_bombers_min: %.4f", root.uSA.military_highbest.bombers_min);
                ImGui::Text("military_highbest_bombers_max: %.4f", root.uSA.military_highbest.bombers_max);
                ImGui::Text("military_highbest_bombers_norm: %.4f", root.uSA.military_highbest.bombers_norm);
                ImGui::Text("military_highbest_bombers_sigmoid: %.4f", root.uSA.military_highbest.bombers_sigmoid);
                ImGui::Text("military_highbest_attack_helicopters: %d", root.uSA.military_highbest.attack_helicopters);
                ImGui::Text("military_highbest_attack_helicopters_min: %.4f", root.uSA.military_highbest.attack_helicopters_min);
                ImGui::Text("military_highbest_attack_helicopters_max: %.4f", root.uSA.military_highbest.attack_helicopters_max);
                ImGui::Text("military_highbest_attack_helicopters_norm: %.4f", root.uSA.military_highbest.attack_helicopters_norm);
                ImGui::Text("military_highbest_attack_helicopters_sigmoid: %.4f", root.uSA.military_highbest.attack_helicopters_sigmoid);
                ImGui::Text("military_highbest_transport_aircraft: %d", root.uSA.military_highbest.transport_aircraft);
                ImGui::Text("military_highbest_transport_aircraft_min: %.4f", root.uSA.military_highbest.transport_aircraft_min);
                ImGui::Text("military_highbest_transport_aircraft_max: %.4f", root.uSA.military_highbest.transport_aircraft_max);
                ImGui::Text("military_highbest_transport_aircraft_norm: %.4f", root.uSA.military_highbest.transport_aircraft_norm);
                ImGui::Text("military_highbest_transport_aircraft_sigmoid: %.4f", root.uSA.military_highbest.transport_aircraft_sigmoid);
                ImGui::Text("military_highbest_military_bases_overseas: %d", root.uSA.military_highbest.military_bases_overseas);
                ImGui::Text("military_highbest_military_bases_overseas_min: %.4f", root.uSA.military_highbest.military_bases_overseas_min);
                ImGui::Text("military_highbest_military_bases_overseas_max: %.4f", root.uSA.military_highbest.military_bases_overseas_max);
                ImGui::Text("military_highbest_military_bases_overseas_norm: %.4f", root.uSA.military_highbest.military_bases_overseas_norm);
                ImGui::Text("military_highbest_military_bases_overseas_sigmoid: %.4f", root.uSA.military_highbest.military_bases_overseas_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("resources_highbest"))
            {
                ImGui::Text("resources_highbest_oil_reserves_billion_barrels: %.4f", root.uSA.resources_highbest.oil_reserves_billion_barrels);
                ImGui::Text("resources_highbest_oil_reserves_billion_barrels_min: %.4f", root.uSA.resources_highbest.oil_reserves_billion_barrels_min);
                ImGui::Text("resources_highbest_oil_reserves_billion_barrels_max: %.4f", root.uSA.resources_highbest.oil_reserves_billion_barrels_max);
                ImGui::Text("resources_highbest_oil_reserves_billion_barrels_norm: %.4f", root.uSA.resources_highbest.oil_reserves_billion_barrels_norm);
                ImGui::Text("resources_highbest_oil_reserves_billion_barrels_sigmoid: %.4f", root.uSA.resources_highbest.oil_reserves_billion_barrels_sigmoid);
                ImGui::Text("resources_highbest_gas_reserves_tcf: %.4f", root.uSA.resources_highbest.gas_reserves_tcf);
                ImGui::Text("resources_highbest_gas_reserves_tcf_min: %.4f", root.uSA.resources_highbest.gas_reserves_tcf_min);
                ImGui::Text("resources_highbest_gas_reserves_tcf_max: %.4f", root.uSA.resources_highbest.gas_reserves_tcf_max);
                ImGui::Text("resources_highbest_gas_reserves_tcf_norm: %.4f", root.uSA.resources_highbest.gas_reserves_tcf_norm);
                ImGui::Text("resources_highbest_gas_reserves_tcf_sigmoid: %.4f", root.uSA.resources_highbest.gas_reserves_tcf_sigmoid);
                ImGui::Text("resources_highbest_coal_reserves_billion_short_tons: %.4f", root.uSA.resources_highbest.coal_reserves_billion_short_tons);
                ImGui::Text("resources_highbest_coal_reserves_billion_short_tons_min: %.4f", root.uSA.resources_highbest.coal_reserves_billion_short_tons_min);
                ImGui::Text("resources_highbest_coal_reserves_billion_short_tons_max: %.4f", root.uSA.resources_highbest.coal_reserves_billion_short_tons_max);
                ImGui::Text("resources_highbest_coal_reserves_billion_short_tons_norm: %.4f", root.uSA.resources_highbest.coal_reserves_billion_short_tons_norm);
                ImGui::Text("resources_highbest_coal_reserves_billion_short_tons_sigmoid: %.4f", root.uSA.resources_highbest.coal_reserves_billion_short_tons_sigmoid);
                ImGui::Text("resources_highbest_oil_production_bpd: %d", root.uSA.resources_highbest.oil_production_bpd);
                ImGui::Text("resources_highbest_oil_production_bpd_min: %.4f", root.uSA.resources_highbest.oil_production_bpd_min);
                ImGui::Text("resources_highbest_oil_production_bpd_max: %.4f", root.uSA.resources_highbest.oil_production_bpd_max);
                ImGui::Text("resources_highbest_oil_production_bpd_norm: %.4f", root.uSA.resources_highbest.oil_production_bpd_norm);
                ImGui::Text("resources_highbest_oil_production_bpd_sigmoid: %.4f", root.uSA.resources_highbest.oil_production_bpd_sigmoid);
                ImGui::Text("resources_highbest_natural_gas_production_bcf_day: %.4f", root.uSA.resources_highbest.natural_gas_production_bcf_day);
                ImGui::Text("resources_highbest_natural_gas_production_bcf_day_min: %.4f", root.uSA.resources_highbest.natural_gas_production_bcf_day_min);
                ImGui::Text("resources_highbest_natural_gas_production_bcf_day_max: %.4f", root.uSA.resources_highbest.natural_gas_production_bcf_day_max);
                ImGui::Text("resources_highbest_natural_gas_production_bcf_day_norm: %.4f", root.uSA.resources_highbest.natural_gas_production_bcf_day_norm);
                ImGui::Text("resources_highbest_natural_gas_production_bcf_day_sigmoid: %.4f", root.uSA.resources_highbest.natural_gas_production_bcf_day_sigmoid);
                ImGui::Text("resources_highbest_coal_production_million_short_tons: %.4f", root.uSA.resources_highbest.coal_production_million_short_tons);
                ImGui::Text("resources_highbest_coal_production_million_short_tons_min: %.4f", root.uSA.resources_highbest.coal_production_million_short_tons_min);
                ImGui::Text("resources_highbest_coal_production_million_short_tons_max: %.4f", root.uSA.resources_highbest.coal_production_million_short_tons_max);
                ImGui::Text("resources_highbest_coal_production_million_short_tons_norm: %.4f", root.uSA.resources_highbest.coal_production_million_short_tons_norm);
                ImGui::Text("resources_highbest_coal_production_million_short_tons_sigmoid: %.4f", root.uSA.resources_highbest.coal_production_million_short_tons_sigmoid);
                ImGui::Text("resources_highbest_electricity_generation_twh: %.4f", root.uSA.resources_highbest.electricity_generation_twh);
                ImGui::Text("resources_highbest_electricity_generation_twh_min: %.4f", root.uSA.resources_highbest.electricity_generation_twh_min);
                ImGui::Text("resources_highbest_electricity_generation_twh_max: %.4f", root.uSA.resources_highbest.electricity_generation_twh_max);
                ImGui::Text("resources_highbest_electricity_generation_twh_norm: %.4f", root.uSA.resources_highbest.electricity_generation_twh_norm);
                ImGui::Text("resources_highbest_electricity_generation_twh_sigmoid: %.4f", root.uSA.resources_highbest.electricity_generation_twh_sigmoid);
                ImGui::Text("resources_highbest_renewable_share: %.4f", root.uSA.resources_highbest.renewable_share);
                ImGui::Text("resources_highbest_renewable_share_min: %.4f", root.uSA.resources_highbest.renewable_share_min);
                ImGui::Text("resources_highbest_renewable_share_max: %.4f", root.uSA.resources_highbest.renewable_share_max);
                ImGui::Text("resources_highbest_renewable_share_norm: %.4f", root.uSA.resources_highbest.renewable_share_norm);
                ImGui::Text("resources_highbest_renewable_share_sigmoid: %.4f", root.uSA.resources_highbest.renewable_share_sigmoid);
                ImGui::Text("resources_highbest_nuclear_share: %.4f", root.uSA.resources_highbest.nuclear_share);
                ImGui::Text("resources_highbest_nuclear_share_min: %.4f", root.uSA.resources_highbest.nuclear_share_min);
                ImGui::Text("resources_highbest_nuclear_share_max: %.4f", root.uSA.resources_highbest.nuclear_share_max);
                ImGui::Text("resources_highbest_nuclear_share_norm: %.4f", root.uSA.resources_highbest.nuclear_share_norm);
                ImGui::Text("resources_highbest_nuclear_share_sigmoid: %.4f", root.uSA.resources_highbest.nuclear_share_sigmoid);
                ImGui::Text("resources_highbest_forest_area_km2: %d", root.uSA.resources_highbest.forest_area_km2);
                ImGui::Text("resources_highbest_forest_area_km2_min: %.4f", root.uSA.resources_highbest.forest_area_km2_min);
                ImGui::Text("resources_highbest_forest_area_km2_max: %.4f", root.uSA.resources_highbest.forest_area_km2_max);
                ImGui::Text("resources_highbest_forest_area_km2_norm: %.4f", root.uSA.resources_highbest.forest_area_km2_norm);
                ImGui::Text("resources_highbest_forest_area_km2_sigmoid: %.4f", root.uSA.resources_highbest.forest_area_km2_sigmoid);
                ImGui::Text("resources_highbest_farmland_million_acres: %.4f", root.uSA.resources_highbest.farmland_million_acres);
                ImGui::Text("resources_highbest_farmland_million_acres_min: %.4f", root.uSA.resources_highbest.farmland_million_acres_min);
                ImGui::Text("resources_highbest_farmland_million_acres_max: %.4f", root.uSA.resources_highbest.farmland_million_acres_max);
                ImGui::Text("resources_highbest_farmland_million_acres_norm: %.4f", root.uSA.resources_highbest.farmland_million_acres_norm);
                ImGui::Text("resources_highbest_farmland_million_acres_sigmoid: %.4f", root.uSA.resources_highbest.farmland_million_acres_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("resources_lowbest"))
            {
                ImGui::Text("resources_lowbest_freshwater_withdrawal_bcm: %.4f", root.uSA.resources_lowbest.freshwater_withdrawal_bcm);
                ImGui::Text("resources_lowbest_freshwater_withdrawal_bcm_min: %.4f", root.uSA.resources_lowbest.freshwater_withdrawal_bcm_min);
                ImGui::Text("resources_lowbest_freshwater_withdrawal_bcm_max: %.4f", root.uSA.resources_lowbest.freshwater_withdrawal_bcm_max);
                ImGui::Text("resources_lowbest_freshwater_withdrawal_bcm_norm: %.4f", root.uSA.resources_lowbest.freshwater_withdrawal_bcm_norm);
                ImGui::Text("resources_lowbest_freshwater_withdrawal_bcm_sigmoid: %.4f", root.uSA.resources_lowbest.freshwater_withdrawal_bcm_sigmoid);
                ImGui::Text("resources_lowbest_co2_emissions_mt: %.4f", root.uSA.resources_lowbest.co2_emissions_mt);
                ImGui::Text("resources_lowbest_co2_emissions_mt_min: %.4f", root.uSA.resources_lowbest.co2_emissions_mt_min);
                ImGui::Text("resources_lowbest_co2_emissions_mt_max: %.4f", root.uSA.resources_lowbest.co2_emissions_mt_max);
                ImGui::Text("resources_lowbest_co2_emissions_mt_norm: %.4f", root.uSA.resources_lowbest.co2_emissions_mt_norm);
                ImGui::Text("resources_lowbest_co2_emissions_mt_sigmoid: %.4f", root.uSA.resources_lowbest.co2_emissions_mt_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("infrastructure_highbest"))
            {
                ImGui::Text("infrastructure_highbest_land_area_km2: %d", root.uSA.infrastructure_highbest.land_area_km2);
                ImGui::Text("infrastructure_highbest_land_area_km2_min: %.4f", root.uSA.infrastructure_highbest.land_area_km2_min);
                ImGui::Text("infrastructure_highbest_land_area_km2_max: %.4f", root.uSA.infrastructure_highbest.land_area_km2_max);
                ImGui::Text("infrastructure_highbest_land_area_km2_norm: %.4f", root.uSA.infrastructure_highbest.land_area_km2_norm);
                ImGui::Text("infrastructure_highbest_land_area_km2_sigmoid: %.4f", root.uSA.infrastructure_highbest.land_area_km2_sigmoid);
                ImGui::Text("infrastructure_highbest_total_area_km2: %d", root.uSA.infrastructure_highbest.total_area_km2);
                ImGui::Text("infrastructure_highbest_total_area_km2_min: %.4f", root.uSA.infrastructure_highbest.total_area_km2_min);
                ImGui::Text("infrastructure_highbest_total_area_km2_max: %.4f", root.uSA.infrastructure_highbest.total_area_km2_max);
                ImGui::Text("infrastructure_highbest_total_area_km2_norm: %.4f", root.uSA.infrastructure_highbest.total_area_km2_norm);
                ImGui::Text("infrastructure_highbest_total_area_km2_sigmoid: %.4f", root.uSA.infrastructure_highbest.total_area_km2_sigmoid);
                ImGui::Text("infrastructure_highbest_coastline_km: %d", root.uSA.infrastructure_highbest.coastline_km);
                ImGui::Text("infrastructure_highbest_coastline_km_min: %.4f", root.uSA.infrastructure_highbest.coastline_km_min);
                ImGui::Text("infrastructure_highbest_coastline_km_max: %.4f", root.uSA.infrastructure_highbest.coastline_km_max);
                ImGui::Text("infrastructure_highbest_coastline_km_norm: %.4f", root.uSA.infrastructure_highbest.coastline_km_norm);
                ImGui::Text("infrastructure_highbest_coastline_km_sigmoid: %.4f", root.uSA.infrastructure_highbest.coastline_km_sigmoid);
                ImGui::Text("infrastructure_highbest_road_km: %d", root.uSA.infrastructure_highbest.road_km);
                ImGui::Text("infrastructure_highbest_road_km_min: %.4f", root.uSA.infrastructure_highbest.road_km_min);
                ImGui::Text("infrastructure_highbest_road_km_max: %.4f", root.uSA.infrastructure_highbest.road_km_max);
                ImGui::Text("infrastructure_highbest_road_km_norm: %.4f", root.uSA.infrastructure_highbest.road_km_norm);
                ImGui::Text("infrastructure_highbest_road_km_sigmoid: %.4f", root.uSA.infrastructure_highbest.road_km_sigmoid);
                ImGui::Text("infrastructure_highbest_rail_km: %d", root.uSA.infrastructure_highbest.rail_km);
                ImGui::Text("infrastructure_highbest_rail_km_min: %.4f", root.uSA.infrastructure_highbest.rail_km_min);
                ImGui::Text("infrastructure_highbest_rail_km_max: %.4f", root.uSA.infrastructure_highbest.rail_km_max);
                ImGui::Text("infrastructure_highbest_rail_km_norm: %.4f", root.uSA.infrastructure_highbest.rail_km_norm);
                ImGui::Text("infrastructure_highbest_rail_km_sigmoid: %.4f", root.uSA.infrastructure_highbest.rail_km_sigmoid);
                ImGui::Text("infrastructure_highbest_airports: %d", root.uSA.infrastructure_highbest.airports);
                ImGui::Text("infrastructure_highbest_airports_min: %.4f", root.uSA.infrastructure_highbest.airports_min);
                ImGui::Text("infrastructure_highbest_airports_max: %.4f", root.uSA.infrastructure_highbest.airports_max);
                ImGui::Text("infrastructure_highbest_airports_norm: %.4f", root.uSA.infrastructure_highbest.airports_norm);
                ImGui::Text("infrastructure_highbest_airports_sigmoid: %.4f", root.uSA.infrastructure_highbest.airports_sigmoid);
                ImGui::Text("infrastructure_highbest_major_ports: %d", root.uSA.infrastructure_highbest.major_ports);
                ImGui::Text("infrastructure_highbest_major_ports_min: %.4f", root.uSA.infrastructure_highbest.major_ports_min);
                ImGui::Text("infrastructure_highbest_major_ports_max: %.4f", root.uSA.infrastructure_highbest.major_ports_max);
                ImGui::Text("infrastructure_highbest_major_ports_norm: %.4f", root.uSA.infrastructure_highbest.major_ports_norm);
                ImGui::Text("infrastructure_highbest_major_ports_sigmoid: %.4f", root.uSA.infrastructure_highbest.major_ports_sigmoid);
                ImGui::Text("infrastructure_highbest_electricity_access_pct: %.4f", root.uSA.infrastructure_highbest.electricity_access_pct);
                ImGui::Text("infrastructure_highbest_electricity_access_pct_min: %.4f", root.uSA.infrastructure_highbest.electricity_access_pct_min);
                ImGui::Text("infrastructure_highbest_electricity_access_pct_max: %.4f", root.uSA.infrastructure_highbest.electricity_access_pct_max);
                ImGui::Text("infrastructure_highbest_electricity_access_pct_norm: %.4f", root.uSA.infrastructure_highbest.electricity_access_pct_norm);
                ImGui::Text("infrastructure_highbest_electricity_access_pct_sigmoid: %.4f", root.uSA.infrastructure_highbest.electricity_access_pct_sigmoid);
                ImGui::Text("infrastructure_highbest_safe_water_access_pct: %.4f", root.uSA.infrastructure_highbest.safe_water_access_pct);
                ImGui::Text("infrastructure_highbest_safe_water_access_pct_min: %.4f", root.uSA.infrastructure_highbest.safe_water_access_pct_min);
                ImGui::Text("infrastructure_highbest_safe_water_access_pct_max: %.4f", root.uSA.infrastructure_highbest.safe_water_access_pct_max);
                ImGui::Text("infrastructure_highbest_safe_water_access_pct_norm: %.4f", root.uSA.infrastructure_highbest.safe_water_access_pct_norm);
                ImGui::Text("infrastructure_highbest_safe_water_access_pct_sigmoid: %.4f", root.uSA.infrastructure_highbest.safe_water_access_pct_sigmoid);
                ImGui::Text("infrastructure_highbest_fixed_broadband_subscriptions: %d", root.uSA.infrastructure_highbest.fixed_broadband_subscriptions);
                ImGui::Text("infrastructure_highbest_fixed_broadband_subscriptions_min: %.4f", root.uSA.infrastructure_highbest.fixed_broadband_subscriptions_min);
                ImGui::Text("infrastructure_highbest_fixed_broadband_subscriptions_max: %.4f", root.uSA.infrastructure_highbest.fixed_broadband_subscriptions_max);
                ImGui::Text("infrastructure_highbest_fixed_broadband_subscriptions_norm: %.4f", root.uSA.infrastructure_highbest.fixed_broadband_subscriptions_norm);
                ImGui::Text("infrastructure_highbest_fixed_broadband_subscriptions_sigmoid: %.4f", root.uSA.infrastructure_highbest.fixed_broadband_subscriptions_sigmoid);
                ImGui::Text("infrastructure_highbest_mobile_subscriptions: %d", root.uSA.infrastructure_highbest.mobile_subscriptions);
                ImGui::Text("infrastructure_highbest_mobile_subscriptions_min: %.4f", root.uSA.infrastructure_highbest.mobile_subscriptions_min);
                ImGui::Text("infrastructure_highbest_mobile_subscriptions_max: %.4f", root.uSA.infrastructure_highbest.mobile_subscriptions_max);
                ImGui::Text("infrastructure_highbest_mobile_subscriptions_norm: %.4f", root.uSA.infrastructure_highbest.mobile_subscriptions_norm);
                ImGui::Text("infrastructure_highbest_mobile_subscriptions_sigmoid: %.4f", root.uSA.infrastructure_highbest.mobile_subscriptions_sigmoid);
                ImGui::Text("infrastructure_highbest_housing_units: %d", root.uSA.infrastructure_highbest.housing_units);
                ImGui::Text("infrastructure_highbest_housing_units_min: %.4f", root.uSA.infrastructure_highbest.housing_units_min);
                ImGui::Text("infrastructure_highbest_housing_units_max: %.4f", root.uSA.infrastructure_highbest.housing_units_max);
                ImGui::Text("infrastructure_highbest_housing_units_norm: %.4f", root.uSA.infrastructure_highbest.housing_units_norm);
                ImGui::Text("infrastructure_highbest_housing_units_sigmoid: %.4f", root.uSA.infrastructure_highbest.housing_units_sigmoid);
                ImGui::Text("infrastructure_highbest_data_centers: %d", root.uSA.infrastructure_highbest.data_centers);
                ImGui::Text("infrastructure_highbest_data_centers_min: %.4f", root.uSA.infrastructure_highbest.data_centers_min);
                ImGui::Text("infrastructure_highbest_data_centers_max: %.4f", root.uSA.infrastructure_highbest.data_centers_max);
                ImGui::Text("infrastructure_highbest_data_centers_norm: %.4f", root.uSA.infrastructure_highbest.data_centers_norm);
                ImGui::Text("infrastructure_highbest_data_centers_sigmoid: %.4f", root.uSA.infrastructure_highbest.data_centers_sigmoid);
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("education_highbest"))
            {
                ImGui::Text("education_highbest_literacy_rate: %.4f", root.uSA.education_highbest.literacy_rate);
                ImGui::Text("education_highbest_literacy_rate_min: %.4f", root.uSA.education_highbest.literacy_rate_min);
                ImGui::Text("education_highbest_literacy_rate_max: %.4f", root.uSA.education_highbest.literacy_rate_max);
                ImGui::Text("education_highbest_literacy_rate_norm: %.4f", root.uSA.education_highbest.literacy_rate_norm);
                ImGui::Text("education_highbest_literacy_rate_sigmoid: %.4f", root.uSA.education_highbest.literacy_rate_sigmoid);
                ImGui::Text("education_highbest_education_spending_pct_gdp: %.4f", root.uSA.education_highbest.education_spending_pct_gdp);
                ImGui::Text("education_highbest_education_spending_pct_gdp_min: %.4f", root.uSA.education_highbest.education_spending_pct_gdp_min);
                ImGui::Text("education_highbest_education_spending_pct_gdp_max: %.4f", root.uSA.education_highbest.education_spending_pct_gdp_max);
                ImGui::Text("education_highbest_education_spending_pct_gdp_norm: %.4f", root.uSA.education_highbest.education_spending_pct_gdp_norm);
                ImGui::Text("education_highbest_education_spending_pct_gdp_sigmoid: %.4f", root.uSA.education_highbest.education_spending_pct_gdp_sigmoid);
                ImGui::Text("education_highbest_school_life_expectancy: %.4f", root.uSA.education_highbest.school_life_expectancy);
                ImGui::Text("education_highbest_school_life_expectancy_min: %.4f", root.uSA.education_highbest.school_life_expectancy_min);
                ImGui::Text("education_highbest_school_life_expectancy_max: %.4f", root.uSA.education_highbest.school_life_expectancy_max);
                ImGui::Text("education_highbest_school_life_expectancy_norm: %.4f", root.uSA.education_highbest.school_life_expectancy_norm);
                ImGui::Text("education_highbest_school_life_expectancy_sigmoid: %.4f", root.uSA.education_highbest.school_life_expectancy_sigmoid);
                ImGui::Text("education_highbest_high_school_graduation_rate: %.4f", root.uSA.education_highbest.high_school_graduation_rate);
                ImGui::Text("education_highbest_high_school_graduation_rate_min: %.4f", root.uSA.education_highbest.high_school_graduation_rate_min);
                ImGui::Text("education_highbest_high_school_graduation_rate_max: %.4f", root.uSA.education_highbest.high_school_graduation_rate_max);
                ImGui::Text("education_highbest_high_school_graduation_rate_norm: %.4f", root.uSA.education_highbest.high_school_graduation_rate_norm);
                ImGui::Text("education_highbest_high_school_graduation_rate_sigmoid: %.4f", root.uSA.education_highbest.high_school_graduation_rate_sigmoid);
                ImGui::Text("education_highbest_tertiary_attainment_pct: %.4f", root.uSA.education_highbest.tertiary_attainment_pct);
                ImGui::Text("education_highbest_tertiary_attainment_pct_min: %.4f", root.uSA.education_highbest.tertiary_attainment_pct_min);
                ImGui::Text("education_highbest_tertiary_attainment_pct_max: %.4f", root.uSA.education_highbest.tertiary_attainment_pct_max);
                ImGui::Text("education_highbest_tertiary_attainment_pct_norm: %.4f", root.uSA.education_highbest.tertiary_attainment_pct_norm);
                ImGui::Text("education_highbest_tertiary_attainment_pct_sigmoid: %.4f", root.uSA.education_highbest.tertiary_attainment_pct_sigmoid);
                ImGui::Text("education_highbest_public_school_students: %d", root.uSA.education_highbest.public_school_students);
                ImGui::Text("education_highbest_public_school_students_min: %.4f", root.uSA.education_highbest.public_school_students_min);
                ImGui::Text("education_highbest_public_school_students_max: %.4f", root.uSA.education_highbest.public_school_students_max);
                ImGui::Text("education_highbest_public_school_students_norm: %.4f", root.uSA.education_highbest.public_school_students_norm);
                ImGui::Text("education_highbest_public_school_students_sigmoid: %.4f", root.uSA.education_highbest.public_school_students_sigmoid);
                ImGui::Text("education_highbest_college_students: %d", root.uSA.education_highbest.college_students);
                ImGui::Text("education_highbest_college_students_min: %.4f", root.uSA.education_highbest.college_students_min);
                ImGui::Text("education_highbest_college_students_max: %.4f", root.uSA.education_highbest.college_students_max);
                ImGui::Text("education_highbest_college_students_norm: %.4f", root.uSA.education_highbest.college_students_norm);
                ImGui::Text("education_highbest_college_students_sigmoid: %.4f", root.uSA.education_highbest.college_students_sigmoid);
                ImGui::Text("education_highbest_stem_graduates_yearly: %d", root.uSA.education_highbest.stem_graduates_yearly);
                ImGui::Text("education_highbest_stem_graduates_yearly_min: %.4f", root.uSA.education_highbest.stem_graduates_yearly_min);
                ImGui::Text("education_highbest_stem_graduates_yearly_max: %.4f", root.uSA.education_highbest.stem_graduates_yearly_max);
                ImGui::Text("education_highbest_stem_graduates_yearly_norm: %.4f", root.uSA.education_highbest.stem_graduates_yearly_norm);
                ImGui::Text("education_highbest_stem_graduates_yearly_sigmoid: %.4f", root.uSA.education_highbest.stem_graduates_yearly_sigmoid);
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
