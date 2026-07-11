#pragma once

#include "src/autoconfig/UtilitySystem.hpp"
#include "src/autoconfig/UtilitySystemMagic.hpp"
#include <vector>
#include <cstddef>

struct RootConfig {
    USA_ID usa_id;
    UtilityUSAConfig uSA;
    MAGIC_ID magic_id;
    UtilityMagicConfig magic;
};

static constexpr size_t struct_member_count = 4;