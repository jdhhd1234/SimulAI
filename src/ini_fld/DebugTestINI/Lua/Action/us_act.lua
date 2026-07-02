local action_us = require("ActionUSA")

function action_us.BorderSecurity:Condition(world, country)
    action_us.BorderSecurity:Execute(world, country)
end