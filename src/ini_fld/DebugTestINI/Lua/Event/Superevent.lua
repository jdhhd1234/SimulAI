
local SuperEvent = {}

function SuperEvent.SimpleEcnomicCrisis(world)
    local usaRoot = GetRoot(world, 0)

    usaRoot.uSA.economy_highbest_sigmoid_result.gdp_current = usaRoot.uSA.economy_highbest_sigmoid_result.gdp_current - 1000000000000
    usaRoot.uSA.economy_highbest_sigmoid_result.gdp_real_growth = usaRoot.uSA.economy_highbest_sigmoid_result.gdp_real_growth - 1.0
    usaRoot.uSA.economy_highbest_sigmoid_result.federal_revenue = usaRoot.uSA.economy_highbest_sigmoid_result.federal_revenue - 100000 

    return {
        usaRoot.uSA.economy_highbest_sigmoid_result.gdp_current,
        usaRoot.uSA.economy_highbest_sigmoid_result.gdp_real_growth
    }
end

return SuperEvent