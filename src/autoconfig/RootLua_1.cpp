#include "RootLua.hpp"
#include <sol/sol.hpp>
#include "src/autoconfig/Root.hpp"

void LuaAuto::BindRootConfig_1(sol::state& lua)
{
    lua.new_usertype<kingdom_infoMagic>("kingdom_infoMagic",
        "name", &kingdom_infoMagic::name,
        "founded_year", &kingdom_infoMagic::founded_year,
        "capital", &kingdom_infoMagic::capital,
        "ruling_house", &kingdom_infoMagic::ruling_house,
        "current_monarch", &kingdom_infoMagic::current_monarch,
        "government_type", &kingdom_infoMagic::government_type
    );

    lua.new_usertype<government_HighBest_sigmoid_resultMagic>("government_HighBest_sigmoid_resultMagic",
        "approval_rating", &government_HighBest_sigmoid_resultMagic::approval_rating,
        "approval_rating_min", &government_HighBest_sigmoid_resultMagic::approval_rating_min,
        "approval_rating_max", &government_HighBest_sigmoid_resultMagic::approval_rating_max,
        "approval_rating_norm", &government_HighBest_sigmoid_resultMagic::approval_rating_norm,
        "approval_rating_sigmoid", &government_HighBest_sigmoid_resultMagic::approval_rating_sigmoid
    );

    lua.new_usertype<government_LowBest_sigmoid_resultMagic>("government_LowBest_sigmoid_resultMagic",
        "tax_burden_index", &government_LowBest_sigmoid_resultMagic::tax_burden_index,
        "tax_burden_index_min", &government_LowBest_sigmoid_resultMagic::tax_burden_index_min,
        "tax_burden_index_max", &government_LowBest_sigmoid_resultMagic::tax_burden_index_max,
        "tax_burden_index_norm", &government_LowBest_sigmoid_resultMagic::tax_burden_index_norm,
        "tax_burden_index_sigmoid", &government_LowBest_sigmoid_resultMagic::tax_burden_index_sigmoid
    );

    lua.new_usertype<magic_HighBest_sigmoid_resultMagic>("magic_HighBest_sigmoid_resultMagic",
        "mana_saturation", &magic_HighBest_sigmoid_resultMagic::mana_saturation,
        "mana_saturation_min", &magic_HighBest_sigmoid_resultMagic::mana_saturation_min,
        "mana_saturation_max", &magic_HighBest_sigmoid_resultMagic::mana_saturation_max,
        "mana_saturation_norm", &magic_HighBest_sigmoid_resultMagic::mana_saturation_norm,
        "mana_saturation_sigmoid", &magic_HighBest_sigmoid_resultMagic::mana_saturation_sigmoid
    );

    lua.new_usertype<magic_LowBest_sigmoid_resultMagic>("magic_LowBest_sigmoid_resultMagic",
        "forbidden_magic_incidents", &magic_LowBest_sigmoid_resultMagic::forbidden_magic_incidents,
        "forbidden_magic_incidents_min", &magic_LowBest_sigmoid_resultMagic::forbidden_magic_incidents_min,
        "forbidden_magic_incidents_max", &magic_LowBest_sigmoid_resultMagic::forbidden_magic_incidents_max,
        "forbidden_magic_incidents_norm", &magic_LowBest_sigmoid_resultMagic::forbidden_magic_incidents_norm,
        "forbidden_magic_incidents_sigmoid", &magic_LowBest_sigmoid_resultMagic::forbidden_magic_incidents_sigmoid
    );

    lua.new_usertype<population_LowBest_sigmoid_resultMagic>("population_LowBest_sigmoid_resultMagic",
        "total_population", &population_LowBest_sigmoid_resultMagic::total_population,
        "total_population_min", &population_LowBest_sigmoid_resultMagic::total_population_min,
        "total_population_max", &population_LowBest_sigmoid_resultMagic::total_population_max,
        "total_population_norm", &population_LowBest_sigmoid_resultMagic::total_population_norm,
        "total_population_sigmoid", &population_LowBest_sigmoid_resultMagic::total_population_sigmoid
    );

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

}