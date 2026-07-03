#include "RootLua.hpp"
#include <sol/sol.hpp>
#include "src/autoconfig/Root.hpp"

void LuaAuto::BindRootConfig_2(sol::state& lua)
{
    lua.new_usertype<military_LowBest_sigmoid_resultMagic>("military_LowBest_sigmoid_resultMagic",
        "border_conflict_frequency", &military_LowBest_sigmoid_resultMagic::border_conflict_frequency,
        "border_conflict_frequency_min", &military_LowBest_sigmoid_resultMagic::border_conflict_frequency_min,
        "border_conflict_frequency_max", &military_LowBest_sigmoid_resultMagic::border_conflict_frequency_max,
        "border_conflict_frequency_norm", &military_LowBest_sigmoid_resultMagic::border_conflict_frequency_norm,
        "border_conflict_frequency_sigmoid", &military_LowBest_sigmoid_resultMagic::border_conflict_frequency_sigmoid
    );

    lua.new_usertype<environment_HighBest_sigmoid_resultMagic>("environment_HighBest_sigmoid_resultMagic",
        "starwood_forest_health", &environment_HighBest_sigmoid_resultMagic::starwood_forest_health,
        "starwood_forest_health_min", &environment_HighBest_sigmoid_resultMagic::starwood_forest_health_min,
        "starwood_forest_health_max", &environment_HighBest_sigmoid_resultMagic::starwood_forest_health_max,
        "starwood_forest_health_norm", &environment_HighBest_sigmoid_resultMagic::starwood_forest_health_norm,
        "starwood_forest_health_sigmoid", &environment_HighBest_sigmoid_resultMagic::starwood_forest_health_sigmoid
    );

    lua.new_usertype<environment_LowBest_sigmoid_resultMagic>("environment_LowBest_sigmoid_resultMagic",
        "leyline_instability", &environment_LowBest_sigmoid_resultMagic::leyline_instability,
        "leyline_instability_min", &environment_LowBest_sigmoid_resultMagic::leyline_instability_min,
        "leyline_instability_max", &environment_LowBest_sigmoid_resultMagic::leyline_instability_max,
        "leyline_instability_norm", &environment_LowBest_sigmoid_resultMagic::leyline_instability_norm,
        "leyline_instability_sigmoid", &environment_LowBest_sigmoid_resultMagic::leyline_instability_sigmoid
    );

    lua.new_usertype<diplomacy_HighBest_sigmoid_resultMagic>("diplomacy_HighBest_sigmoid_resultMagic",
        "neighboring_realms_relations", &diplomacy_HighBest_sigmoid_resultMagic::neighboring_realms_relations,
        "neighboring_realms_relations_min", &diplomacy_HighBest_sigmoid_resultMagic::neighboring_realms_relations_min,
        "neighboring_realms_relations_max", &diplomacy_HighBest_sigmoid_resultMagic::neighboring_realms_relations_max,
        "neighboring_realms_relations_norm", &diplomacy_HighBest_sigmoid_resultMagic::neighboring_realms_relations_norm,
        "neighboring_realms_relations_sigmoid", &diplomacy_HighBest_sigmoid_resultMagic::neighboring_realms_relations_sigmoid
    );

    lua.new_usertype<diplomacy_LowBest_sigmoid_resultMagic>("diplomacy_LowBest_sigmoid_resultMagic",
        "active_trade_disputes", &diplomacy_LowBest_sigmoid_resultMagic::active_trade_disputes,
        "active_trade_disputes_min", &diplomacy_LowBest_sigmoid_resultMagic::active_trade_disputes_min,
        "active_trade_disputes_max", &diplomacy_LowBest_sigmoid_resultMagic::active_trade_disputes_max,
        "active_trade_disputes_norm", &diplomacy_LowBest_sigmoid_resultMagic::active_trade_disputes_norm,
        "active_trade_disputes_sigmoid", &diplomacy_LowBest_sigmoid_resultMagic::active_trade_disputes_sigmoid
    );

    lua.new_usertype<culture_HighBest_sigmoid_resultMagic>("culture_HighBest_sigmoid_resultMagic",
        "festival_of_stars_attendance", &culture_HighBest_sigmoid_resultMagic::festival_of_stars_attendance,
        "festival_of_stars_attendance_min", &culture_HighBest_sigmoid_resultMagic::festival_of_stars_attendance_min,
        "festival_of_stars_attendance_max", &culture_HighBest_sigmoid_resultMagic::festival_of_stars_attendance_max,
        "festival_of_stars_attendance_norm", &culture_HighBest_sigmoid_resultMagic::festival_of_stars_attendance_norm,
        "festival_of_stars_attendance_sigmoid", &culture_HighBest_sigmoid_resultMagic::festival_of_stars_attendance_sigmoid
    );

    lua.new_usertype<infrastructure_HighBest_sigmoid_resultMagic>("infrastructure_HighBest_sigmoid_resultMagic",
        "teleportation_network_coverage", &infrastructure_HighBest_sigmoid_resultMagic::teleportation_network_coverage,
        "teleportation_network_coverage_min", &infrastructure_HighBest_sigmoid_resultMagic::teleportation_network_coverage_min,
        "teleportation_network_coverage_max", &infrastructure_HighBest_sigmoid_resultMagic::teleportation_network_coverage_max,
        "teleportation_network_coverage_norm", &infrastructure_HighBest_sigmoid_resultMagic::teleportation_network_coverage_norm,
        "teleportation_network_coverage_sigmoid", &infrastructure_HighBest_sigmoid_resultMagic::teleportation_network_coverage_sigmoid
    );

    lua.new_usertype<infrastructure_LowBest_sigmoid_resultMagic>("infrastructure_LowBest_sigmoid_resultMagic",
        "crumbling_ward_sites", &infrastructure_LowBest_sigmoid_resultMagic::crumbling_ward_sites,
        "crumbling_ward_sites_min", &infrastructure_LowBest_sigmoid_resultMagic::crumbling_ward_sites_min,
        "crumbling_ward_sites_max", &infrastructure_LowBest_sigmoid_resultMagic::crumbling_ward_sites_max,
        "crumbling_ward_sites_norm", &infrastructure_LowBest_sigmoid_resultMagic::crumbling_ward_sites_norm,
        "crumbling_ward_sites_sigmoid", &infrastructure_LowBest_sigmoid_resultMagic::crumbling_ward_sites_sigmoid
    );

    lua.new_usertype<UtilityMagicConfig>("UtilityMagicConfig",
        "kingdom_info", &UtilityMagicConfig::kingdom_info,
        "government_highbest_sigmoid_result", &UtilityMagicConfig::government_highbest_sigmoid_result,
        "government_lowbest_sigmoid_result", &UtilityMagicConfig::government_lowbest_sigmoid_result,
        "magic_highbest_sigmoid_result", &UtilityMagicConfig::magic_highbest_sigmoid_result,
        "magic_lowbest_sigmoid_result", &UtilityMagicConfig::magic_lowbest_sigmoid_result,
        "population_lowbest_sigmoid_result", &UtilityMagicConfig::population_lowbest_sigmoid_result,
        "population_highbest_sigmoid_result", &UtilityMagicConfig::population_highbest_sigmoid_result,
        "economy_highbest_sigmoid_result", &UtilityMagicConfig::economy_highbest_sigmoid_result,
        "economy_lowbest_sigmoid_result", &UtilityMagicConfig::economy_lowbest_sigmoid_result,
        "military_highbest_sigmoid_result", &UtilityMagicConfig::military_highbest_sigmoid_result,
        "military_lowbest_sigmoid_result", &UtilityMagicConfig::military_lowbest_sigmoid_result,
        "environment_highbest_sigmoid_result", &UtilityMagicConfig::environment_highbest_sigmoid_result,
        "environment_lowbest_sigmoid_result", &UtilityMagicConfig::environment_lowbest_sigmoid_result,
        "diplomacy_highbest_sigmoid_result", &UtilityMagicConfig::diplomacy_highbest_sigmoid_result,
        "diplomacy_lowbest_sigmoid_result", &UtilityMagicConfig::diplomacy_lowbest_sigmoid_result,
        "culture_highbest_sigmoid_result", &UtilityMagicConfig::culture_highbest_sigmoid_result,
        "infrastructure_highbest_sigmoid_result", &UtilityMagicConfig::infrastructure_highbest_sigmoid_result,
        "infrastructure_lowbest_sigmoid_result", &UtilityMagicConfig::infrastructure_lowbest_sigmoid_result
    );

    lua.new_usertype<RootConfig>("RootConfig",
        "uSA", &RootConfig::uSA,
        "magic", &RootConfig::magic
    );

}