
local current_dir = debug.getinfo(1).source:match("@?(.*[/\\])")
if current_dir then
    package.path = current_dir .. "?.lua;" .. package.path
end

local superevent = require("Lua.Event.superevent")

function MainRunningEvent(world)
    print(superevent.EcnomicCrisis(world)) -- 이제 정상 작동합니다.
end