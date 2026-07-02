#include "vector_init.hpp"
#include "src/main/State/state.hpp"

void VectorCls::VectorInit(WorldState& WS)
{
    WS.Countries.resize(member_count);
    WS.Countries[1].Root.resize(member_count);
}