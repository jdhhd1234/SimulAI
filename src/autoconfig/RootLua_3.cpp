#include "RootLua.hpp"
#include <sol/sol.hpp>
#include "src/autoconfig/Root.hpp"

void LuaAuto::BindRootConfig_3(sol::state& lua)
{
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