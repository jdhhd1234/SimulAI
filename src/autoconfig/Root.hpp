#pragma once

#include "src/autoconfig/UtilitySystem.hpp"
#include "src/autoconfig/UtilitySystemMagic.hpp"
#include <variant>
#include <cstddef>

struct RootConfig {
    USA_ID usa_id;
    UtilityUSAConfig uSA;
    MAGIC_ID magic_id;
    UtilityMagicConfig magic;
};

enum class UtilityID
{
    USA,
    Magic
};

static constexpr size_t struct_member_count = 4;