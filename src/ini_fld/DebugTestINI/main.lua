
local current_dir = debug.getinfo(1).source:match("@?(.*[/\\])")
if current_dir then
    package.path = current_dir .. "?.lua;" .. package.path
end

local superevent = require("Lua.Event.superevent")
local Zombie = require("Lua.Event.zombie.zombie")

function MainRunningEvent(world)
    local usaRoot = GetRoot(world, 0)
    local result = Zombie.update(world)

    print("[DEBUG Lua] infection.total_zombies: ", result.infection.total_zombies)
    print("[DEBUG Lua] zombie_power: ", result.zombie_power)

    local supevent = superevent.SimpleEcnomicCrisis(world)

    print("[DEBUG Lua] gdp_current: ", supevent[1])
    print("[DEBUG Lua] gdp_real_growth: ", supevent[2])
end