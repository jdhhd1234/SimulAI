#pragma once
#include <string>
#include <iostream>
 //structName kingdom_infoMagic
struct kingdom_infoMagic {
    std::string name = "Kingdom of Arcanelle";
    int founded_year = 742;
    std::string capital = "Lumenthal";
    std::string ruling_house = "HouseVeyrathorn";
    std::string current_monarch = "QueesoldeVeyrathorn III";
    std::string government_type = "Magocracy";
};
 //structName government_HighBest_sigmoid_resultMagic
struct government_HighBest_sigmoid_resultMagic {
    float approval_rating = 63.50;
    float approval_rating_min = 0.0f;
    float approval_rating_max = 100.0f;
    float approval_rating_norm = 0.635f;
    float approval_rating_sigmoid = 0.6536f;
};
 //structName government_LowBest_sigmoid_resultMagic
struct government_LowBest_sigmoid_resultMagic {
    float tax_burden_index = 41.20;
    float tax_burden_index_min = 0.0f;
    float tax_burden_index_max = 100.0f;
    float tax_burden_index_norm = 0.412f;
    float tax_burden_index_sigmoid = 0.6016f;
};
 //structName magic_HighBest_sigmoid_resultMagic
struct magic_HighBest_sigmoid_resultMagic {
    float mana_saturation = 78.30;
    float mana_saturation_min = 0.0f;
    float mana_saturation_max = 100.0f;
    float mana_saturation_norm = 0.783f;
    float mana_saturation_sigmoid = 0.6863f;
};
 //structName magic_LowBest_sigmoid_resultMagic
struct magic_LowBest_sigmoid_resultMagic {
    int forbidden_magic_incidents = 12;
    float forbidden_magic_incidents_min = 0.0f;
    float forbidden_magic_incidents_max = 500.0f;
    float forbidden_magic_incidents_norm = 0.024f;
    float forbidden_magic_incidents_sigmoid = 0.506f;
};
 //structName population_LowBest_sigmoid_resultMagic
struct population_LowBest_sigmoid_resultMagic {
    int total_population = 1850000;
    float total_population_min = 0.0f;
    float total_population_max = 5000000.0f;
    float total_population_norm = 0.37f;
    float total_population_sigmoid = 0.5915f;
};
 //structName population_HighBest_sigmoid_resultMagic
struct population_HighBest_sigmoid_resultMagic {
    float mage_population_ratio = 14.70;
    float mage_population_ratio_min = 0.0f;
    float mage_population_ratio_max = 100.0f;
    float mage_population_ratio_norm = 0.147f;
    float mage_population_ratio_sigmoid = 0.5367f;
};
 //structName economy_HighBest_sigmoid_resultMagic
struct economy_HighBest_sigmoid_resultMagic {
    double gdp_gold_standard = 2340000000;
    float gdp_gold_standard_min = 0.0f;
    float gdp_gold_standard_max = 10000000000.0f;
    float gdp_gold_standard_norm = 0.234f;
    float gdp_gold_standard_sigmoid = 0.5582f;
};
 //structName economy_LowBest_sigmoid_resultMagic
struct economy_LowBest_sigmoid_resultMagic {
    float inflation_rate = 3.40;
    float inflation_rate_min = -10.0f;
    float inflation_rate_max = 50.0f;
    float inflation_rate_norm = 0.2233f;
    float inflation_rate_sigmoid = 0.5556f;
};
 //structName military_HighBest_sigmoid_resultMagic
struct military_HighBest_sigmoid_resultMagic {
    float royal_battlemage_corps_strength = 71.00;
    float royal_battlemage_corps_strength_min = 0.0f;
    float royal_battlemage_corps_strength_max = 100.0f;
    float royal_battlemage_corps_strength_norm = 0.71f;
    float royal_battlemage_corps_strength_sigmoid = 0.6704f;
};
 //structName military_LowBest_sigmoid_resultMagic
struct military_LowBest_sigmoid_resultMagic {
    int border_conflict_frequency = 8;
    float border_conflict_frequency_min = 0.0f;
    float border_conflict_frequency_max = 100.0f;
    float border_conflict_frequency_norm = 0.08f;
    float border_conflict_frequency_sigmoid = 0.52f;
};
 //structName environment_HighBest_sigmoid_resultMagic
struct environment_HighBest_sigmoid_resultMagic {
    float starwood_forest_health = 69.50;
    float starwood_forest_health_min = 0.0f;
    float starwood_forest_health_max = 100.0f;
    float starwood_forest_health_norm = 0.695f;
    float starwood_forest_health_sigmoid = 0.6671f;
};
 //structName environment_LowBest_sigmoid_resultMagic
struct environment_LowBest_sigmoid_resultMagic {
    float leyline_instability = 22.00;
    float leyline_instability_min = 0.0f;
    float leyline_instability_max = 100.0f;
    float leyline_instability_norm = 0.22f;
    float leyline_instability_sigmoid = 0.5548f;
};
 //structName diplomacy_HighBest_sigmoid_resultMagic
struct diplomacy_HighBest_sigmoid_resultMagic {
    float neighboring_realms_relations = 58.90;
    float neighboring_realms_relations_min = 0.0f;
    float neighboring_realms_relations_max = 100.0f;
    float neighboring_realms_relations_norm = 0.589f;
    float neighboring_realms_relations_sigmoid = 0.6431f;
};
 //structName diplomacy_LowBest_sigmoid_resultMagic
struct diplomacy_LowBest_sigmoid_resultMagic {
    int active_trade_disputes = 3;
    float active_trade_disputes_min = 0.0f;
    float active_trade_disputes_max = 50.0f;
    float active_trade_disputes_norm = 0.06f;
    float active_trade_disputes_sigmoid = 0.515f;
};
 //structName culture_HighBest_sigmoid_resultMagic
struct culture_HighBest_sigmoid_resultMagic {
    float festival_of_stars_attendance = 88.00;
    float festival_of_stars_attendance_min = 0.0f;
    float festival_of_stars_attendance_max = 100.0f;
    float festival_of_stars_attendance_norm = 0.88f;
    float festival_of_stars_attendance_sigmoid = 0.7068f;
};
 //structName infrastructure_HighBest_sigmoid_resultMagic
struct infrastructure_HighBest_sigmoid_resultMagic {
    float teleportation_network_coverage = 44.60;
    float teleportation_network_coverage_min = 0.0f;
    float teleportation_network_coverage_max = 100.0f;
    float teleportation_network_coverage_norm = 0.446f;
    float teleportation_network_coverage_sigmoid = 0.6097f;
};
 //structName infrastructure_LowBest_sigmoid_resultMagic
struct infrastructure_LowBest_sigmoid_resultMagic {
    int crumbling_ward_sites = 17;
    float crumbling_ward_sites_min = 0.0f;
    float crumbling_ward_sites_max = 200.0f;
    float crumbling_ward_sites_norm = 0.085f;
    float crumbling_ward_sites_sigmoid = 0.5212f;
};
struct UtilityMagicConfig {
    kingdom_infoMagic kingdom_info; 
    government_HighBest_sigmoid_resultMagic government_highbest_sigmoid_result; 
    government_LowBest_sigmoid_resultMagic government_lowbest_sigmoid_result; 
    magic_HighBest_sigmoid_resultMagic magic_highbest_sigmoid_result; 
    magic_LowBest_sigmoid_resultMagic magic_lowbest_sigmoid_result; 
    population_LowBest_sigmoid_resultMagic population_lowbest_sigmoid_result; 
    population_HighBest_sigmoid_resultMagic population_highbest_sigmoid_result; 
    economy_HighBest_sigmoid_resultMagic economy_highbest_sigmoid_result; 
    economy_LowBest_sigmoid_resultMagic economy_lowbest_sigmoid_result; 
    military_HighBest_sigmoid_resultMagic military_highbest_sigmoid_result; 
    military_LowBest_sigmoid_resultMagic military_lowbest_sigmoid_result; 
    environment_HighBest_sigmoid_resultMagic environment_highbest_sigmoid_result; 
    environment_LowBest_sigmoid_resultMagic environment_lowbest_sigmoid_result; 
    diplomacy_HighBest_sigmoid_resultMagic diplomacy_highbest_sigmoid_result; 
    diplomacy_LowBest_sigmoid_resultMagic diplomacy_lowbest_sigmoid_result; 
    culture_HighBest_sigmoid_resultMagic culture_highbest_sigmoid_result; 
    infrastructure_HighBest_sigmoid_resultMagic infrastructure_highbest_sigmoid_result; 
    infrastructure_LowBest_sigmoid_resultMagic infrastructure_lowbest_sigmoid_result; 
};

namespace Magic_Set {
    namespace kingdom_infoMagic_ID {
        enum class kingdom_info {
            NAME,
            FOUNDED_YEAR,
            CAPITAL,
            RULING_HOUSE,
            CURRENT_MONARCH,
            GOVERNMENT_TYPE,
            MagicCount
        };
    }

    namespace government_HighBest_sigmoid_resultMagic_ID {
        enum class government_HighBest_sigmoid_result {
            APPROVAL_RATING,
            MagicCount
        };
    }

    namespace government_LowBest_sigmoid_resultMagic_ID {
        enum class government_LowBest_sigmoid_result {
            TAX_BURDEN_INDEX,
            MagicCount
        };
    }

    namespace magic_HighBest_sigmoid_resultMagic_ID {
        enum class magic_HighBest_sigmoid_result {
            MANA_SATURATION,
            MagicCount
        };
    }

    namespace magic_LowBest_sigmoid_resultMagic_ID {
        enum class magic_LowBest_sigmoid_result {
            FORBIDDEN_MAGIC_INCIDENTS,
            MagicCount
        };
    }

    namespace population_LowBest_sigmoid_resultMagic_ID {
        enum class population_LowBest_sigmoid_result {
            TOTAL_POPULATION,
            MagicCount
        };
    }

    namespace population_HighBest_sigmoid_resultMagic_ID {
        enum class population_HighBest_sigmoid_result {
            MAGE_POPULATION_RATIO,
            MagicCount
        };
    }

    namespace economy_HighBest_sigmoid_resultMagic_ID {
        enum class economy_HighBest_sigmoid_result {
            GDP_GOLD_STANDARD,
            MagicCount
        };
    }

    namespace economy_LowBest_sigmoid_resultMagic_ID {
        enum class economy_LowBest_sigmoid_result {
            INFLATION_RATE,
            MagicCount
        };
    }

    namespace military_HighBest_sigmoid_resultMagic_ID {
        enum class military_HighBest_sigmoid_result {
            ROYAL_BATTLEMAGE_CORPS_STRENGTH,
            MagicCount
        };
    }

    namespace military_LowBest_sigmoid_resultMagic_ID {
        enum class military_LowBest_sigmoid_result {
            BORDER_CONFLICT_FREQUENCY,
            MagicCount
        };
    }

    namespace environment_HighBest_sigmoid_resultMagic_ID {
        enum class environment_HighBest_sigmoid_result {
            STARWOOD_FOREST_HEALTH,
            MagicCount
        };
    }

    namespace environment_LowBest_sigmoid_resultMagic_ID {
        enum class environment_LowBest_sigmoid_result {
            LEYLINE_INSTABILITY,
            MagicCount
        };
    }

    namespace diplomacy_HighBest_sigmoid_resultMagic_ID {
        enum class diplomacy_HighBest_sigmoid_result {
            NEIGHBORING_REALMS_RELATIONS,
            MagicCount
        };
    }

    namespace diplomacy_LowBest_sigmoid_resultMagic_ID {
        enum class diplomacy_LowBest_sigmoid_result {
            ACTIVE_TRADE_DISPUTES,
            MagicCount
        };
    }

    namespace culture_HighBest_sigmoid_resultMagic_ID {
        enum class culture_HighBest_sigmoid_result {
            FESTIVAL_OF_STARS_ATTENDANCE,
            MagicCount
        };
    }

    namespace infrastructure_HighBest_sigmoid_resultMagic_ID {
        enum class infrastructure_HighBest_sigmoid_result {
            TELEPORTATION_NETWORK_COVERAGE,
            MagicCount
        };
    }

    namespace infrastructure_LowBest_sigmoid_resultMagic_ID {
        enum class infrastructure_LowBest_sigmoid_result {
            CRUMBLING_WARD_SITES,
            MagicCount
        };
    }

}

