#include "vector_init.hpp"
#include "src/autoconfig/Root.hpp"
#include "src/autoconfig/UtilitySystem.hpp"
#include "src/autoconfig/UtilitySystemMagic.hpp"
#include "src/main/State/state.hpp"

void VectorCls::VectorInit(WorldState& WS)
{
    WS.Countries.resize(struct_member_count);
    WS.Countries[1].Root.resize(struct_member_count);
}
