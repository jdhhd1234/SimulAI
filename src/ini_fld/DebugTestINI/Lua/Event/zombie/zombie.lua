
local Zombie = {}

Zombie.Scenario = {
    initial_zombies = 2,
    transmission = "airborne",
    fatality_rate = 0.05,
    aggression = 1.0,
    intelligence = 0.0,
    weak_until_population = 200000,

    base_infection_rate = 0.01,
    base_power = 100.0
}

Zombie.State = {
    zombie_count = Zombie.Scenario.initial_zombies
}

function Zombie.update_infection(world, data)
    data = data or Zombie.State

    local usaRoot = GetRoot(world, 0)

    local population_count = usaRoot.uSA.demography_highbest_sigmoid_result.population

    local zombie_count = data.zombie_count or 0

    local airborne_bonus = 1.0
    if Zombie.Scenario.transmission == "airborne" then
        airborne_bonus = 3.0
    end

    local infection_rate =
        Zombie.Scenario.base_infection_rate * airborne_bonus

    local new_infected =
        population_count * infection_rate * (zombie_count / population_count)

    local deaths =
        new_infected * Zombie.Scenario.fatality_rate

    local new_zombies =
        new_infected - deaths

    data.zombie_count = data.zombie_count + new_zombies

    return {
        new_infected = new_infected,
        deaths = deaths,
        new_zombies = new_zombies,
        total_zombies = data.zombie_count
    }
end

function Zombie.calculate_zombie_power(data)
    data = data or Zombie.State

    local zombie_count = data.zombie_count or 0
    local power = Zombie.Scenario.base_power

    -- 난폭성 증가
    power = power * (1.0 + Zombie.Scenario.aggression)

    -- 이성 상실
    power = power * (1.0 - Zombie.Scenario.intelligence * 0.2)

    -- 20만 이하일 때 전투력 약화
    if zombie_count < Zombie.Scenario.weak_until_population then
        local ratio = zombie_count / Zombie.Scenario.weak_until_population
        power = power * ratio
    end

    return power
end

function Zombie.update(world)
    local infection_result = Zombie.update_infection(world, Zombie.State)
    local power = Zombie.calculate_zombie_power(Zombie.State)

    return {
        infection = infection_result,
        zombie_power = power
    }
end

return Zombie