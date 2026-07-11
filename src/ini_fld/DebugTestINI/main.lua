
local current_dir = debug.getinfo(1).source:match("@?(.*[/\\])")
if current_dir then
    package.path = current_dir .. "?.lua;" .. package.path
end

local superevent = require("Lua.Event.superevent")
local Zombie = require("Lua.Event.zombie.zombie")

function MainRunningEvent(world)
    print(USA.country.country_name)
end