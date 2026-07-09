#pragma once
#include <vector>
#include "src/autoconfig/Root.hpp"

struct Country
{
    std::string name;
    std::vector<RootConfig> Root;
    bool is_leaf;
};

struct WorldState
{
    std::vector<Country> Countries;
};