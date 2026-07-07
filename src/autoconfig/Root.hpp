#pragma once

#include "src/autoconfig/UtilitySystem.hpp"
#include "src/autoconfig/UtilitySystemMagic.hpp"
#include <vector>
#include <cstddef>

struct RootConfig {
    UtilityUSAConfig uSA;
    UtilityMagicConfig magic;
};

static constexpr size_t member_count = 2;