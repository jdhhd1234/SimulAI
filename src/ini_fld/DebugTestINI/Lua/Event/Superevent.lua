
local SuperEvent = {}

function SuperEvent.EcnomicCrisis(world)
    local usaRoot = GetRoot(world, 0)
    return usaRoot.uSA.economy_highbest_sigmoid_result.gdp_current - 1000000000000
end

return SuperEvent