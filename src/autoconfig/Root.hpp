#pragma once

#include "UtilitySystem.hpp"
#include "UtilitySystemMagic.hpp"
#include <vector>
#include <cstddef>

struct RootConfig {
    UtilityUSAConfig uSA;
    UtilityMagicConfig magic;
};

static constexpr size_t member_count = 2;