#include "RootLua.hpp"
#include <sol/sol.hpp>
#include "src/autoconfig/Root.hpp"

void LuaAuto::BindRootConfig_2(sol::state& lua)
{
    lua.new_usertype<population_HighBest_sigmoid_resultMagic>("population_HighBest_sigmoid_resultMagic",
        "mage_population_ratio", &population_HighBest_sigmoid_resultMagic::mage_population_ratio,
        "mage_population_ratio_min", &population_HighBest_sigmoid_resultMagic::mage_population_ratio_min,
        "mage_population_ratio_max", &population_HighBest_sigmoid_resultMagic::mage_population_ratio_max,
        "mage_population_ratio_norm", &population_HighBest_sigmoid_resultMagic::mage_population_ratio_norm,
        "mage_population_ratio_sigmoid", &population_HighBest_sigmoid_resultMagic::mage_population_ratio_sigmoid
    );

    lua.new_usertype<economy_HighBest_sigmoid_resultMagic>("economy_HighBest_sigmoid_resultMagic",
        "gdp_gold_standard", &economy_HighBest_sigmoid_resultMagic::gdp_gold_standard,
        "gdp_gold_standard_min", &economy_HighBest_sigmoid_resultMagic::gdp_gold_standard_min,
        "gdp_gold_standard_max", &economy_HighBest_sigmoid_resultMagic::gdp_gold_standard_max,
        "gdp_gold_standard_norm", &economy_HighBest_sigmoid_resultMagic::gdp_gold_standard_norm,
        "gdp_gold_standard_sigmoid", &economy_HighBest_sigmoid_resultMagic::gdp_gold_standard_sigmoid
    );

    lua.new_usertype<economy_LowBest_sigmoid_resultMagic>("economy_LowBest_sigmoid_resultMagic",
        "inflation_rate", &economy_LowBest_sigmoid_resultMagic::inflation_rate,
        "inflation_rate_min", &economy_LowBest_sigmoid_resultMagic::inflation_rate_min,
        "inflation_rate_max", &economy_LowBest_sigmoid_resultMagic::inflation_rate_max,
        "inflation_rate_norm", &economy_LowBest_sigmoid_resultMagic::inflation_rate_norm,
        "inflation_rate_sigmoid", &economy_LowBest_sigmoid_resultMagic::inflation_rate_sigmoid
    );

    lua.new_usertype<military_HighBest_sigmoid_resultMagic>("military_HighBest_sigmoid_resultMagic",
        "royal_battlemage_corps_strength", &military_HighBest_sigmoid_resultMagic::royal_battlemage_corps_strength,
        "royal_battlemage_corps_strength_min", &military_HighBest_sigmoid_resultMagic::royal_battlemage_corps_strength_min,
        "royal_battlemage_corps_strength_max", &military_HighBest_sigmoid_resultMagic::royal_battlemage_corps_strength_max,
        "royal_battlemage_corps_strength_norm", &military_HighBest_sigmoid_resultMagic::royal_battlemage_corps_strength_norm,
        "royal_battlemage_corps_strength_sigmoid", &military_HighBest_sigmoid_resultMagic::royal_battlemage_corps_strength_sigmoid
    );

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

}