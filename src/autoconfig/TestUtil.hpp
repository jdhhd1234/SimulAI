#pragma once

struct UtilityID;
struct WorldState;

namespace UtiliRead {
    template <typename T>
    constexpr T VecIndexWrapper(const WorldState& WS, UtilityID& id);
}