#pragma once
#include <string>
#include <iostream>
struct kingdom_infoConfig {
    std::string name = "";
     int founded_year = 0;
     std::string capital = "";
     std::string ruling_house = "";
     std::string current_monarch = "";
     std::string government_type = "";
 };

struct government_HighBest_sigmoid_resultConfig {
    float approval_rating = 0;
     float approval_rating_min = 0;
     float approval_rating_max = 0;
 };

struct government_LowBest_sigmoid_resultConfig {
    float tax_burden_index = 0;
     float tax_burden_index_min = 0;
     float tax_burden_index_max = 0;
 };

struct magic_HighBest_sigmoid_resultConfig {
    float mana_saturation = 0;
     float mana_saturation_min = 0;
     float mana_saturation_max = 0;
 };

struct magic_LowBest_sigmoid_resultConfig {
    int forbidden_magic_incidents = 0;
     int forbidden_magic_incidents_min = 0;
     int forbidden_magic_incidents_max = 0;
 };

struct population_LowBest_sigmoid_resultConfig {
    int total_population = 0;
     int total_population_min = 0;
     int total_population_max = 0;
 };

struct population_HighBest_sigmoid_resultConfig {
    float mage_population_ratio = 0;
     float mage_population_ratio_min = 0;
     float mage_population_ratio_max = 0;
 };

struct economy_HighBest_sigmoid_resultConfig {
    double gdp_gold_standard = 0;
     int gdp_gold_standard_min = 0;
     double gdp_gold_standard_max = 0;
 };

struct economy_LowBest_sigmoid_resultConfig {
    float inflation_rate = 0;
     float inflation_rate_min = 0;
     float inflation_rate_max = 0;
 };

struct military_HighBest_sigmoid_resultConfig {
    float royal_battlemage_corps_strength = 0;
     float royal_battlemage_corps_strength_min = 0;
     float royal_battlemage_corps_strength_max = 0;
 };

struct military_LowBest_sigmoid_resultConfig {
    int border_conflict_frequency = 0;
     int border_conflict_frequency_min = 0;
     int border_conflict_frequency_max = 0;
 };

struct environment_HighBest_sigmoid_resultConfig {
    float starwood_forest_health = 0;
     float starwood_forest_health_min = 0;
     float starwood_forest_health_max = 0;
 };

struct environment_LowBest_sigmoid_resultConfig {
    float leyline_instability = 0;
     float leyline_instability_min = 0;
     float leyline_instability_max = 0;
 };

struct diplomacy_HighBest_sigmoid_resultConfig {
    float neighboring_realms_relations = 0;
     float neighboring_realms_relations_min = 0;
     float neighboring_realms_relations_max = 0;
 };

struct diplomacy_LowBest_sigmoid_resultConfig {
    int active_trade_disputes = 0;
     int active_trade_disputes_min = 0;
     int active_trade_disputes_max = 0;
 };

struct culture_HighBest_sigmoid_resultConfig {
    float festival_of_stars_attendance = 0;
     float festival_of_stars_attendance_min = 0;
     float festival_of_stars_attendance_max = 0;
 };

struct infrastructure_HighBest_sigmoid_resultConfig {
    float teleportation_network_coverage = 0;
     float teleportation_network_coverage_min = 0;
     float teleportation_network_coverage_max = 0;
 };

struct infrastructure_LowBest_sigmoid_resultConfig {
    int crumbling_ward_sites = 0;
     int crumbling_ward_sites_min = 0;
     int crumbling_ward_sites_max = 0;
 };

struct MainConfig {
    kingdom_infoConfig kingdom_info;
    government_HighBest_sigmoid_resultConfig government_highbest_sigmoid_result;
    government_LowBest_sigmoid_resultConfig government_lowbest_sigmoid_result;
    magic_HighBest_sigmoid_resultConfig magic_highbest_sigmoid_result;
    magic_LowBest_sigmoid_resultConfig magic_lowbest_sigmoid_result;
    population_LowBest_sigmoid_resultConfig population_lowbest_sigmoid_result;
    population_HighBest_sigmoid_resultConfig population_highbest_sigmoid_result;
    economy_HighBest_sigmoid_resultConfig economy_highbest_sigmoid_result;
    economy_LowBest_sigmoid_resultConfig economy_lowbest_sigmoid_result;
    military_HighBest_sigmoid_resultConfig military_highbest_sigmoid_result;
    military_LowBest_sigmoid_resultConfig military_lowbest_sigmoid_result;
    environment_HighBest_sigmoid_resultConfig environment_highbest_sigmoid_result;
    environment_LowBest_sigmoid_resultConfig environment_lowbest_sigmoid_result;
    diplomacy_HighBest_sigmoid_resultConfig diplomacy_highbest_sigmoid_result;
    diplomacy_LowBest_sigmoid_resultConfig diplomacy_lowbest_sigmoid_result;
    culture_HighBest_sigmoid_resultConfig culture_highbest_sigmoid_result;
    infrastructure_HighBest_sigmoid_resultConfig infrastructure_highbest_sigmoid_result;
    infrastructure_LowBest_sigmoid_resultConfig infrastructure_lowbest_sigmoid_result;
};

// --- [ 2. Action enum class ] ---
enum class ActionType
{
    ManaTaxCut,
    LeylineTariffIncrease,
    TeleportNetworkAct,
    BattlemageExpansion,
    ArcaneAcademyFunding,
    ForbiddenMagicCrackdown,
    StarwoodConservationDecree,
    LeylineStabilizationProject,
    RoyalWeddingFestival,
    DiplomaticEnvoyMission,
    TradeDisputeArbitration,
    NobleTaxReform,
    WardInfrastructureRepair,
    GrandTournamentDecree,
    EmergencyConscription
};
struct MainConfigEnumClass {
   ActionType AT;};
