## Global Rules

- Do not create fictional facts.
    
- Do not create arbitrary scores.
    
- Do not create values without justification.
    
- Lua files must reference variables defined in ini files.
    
- Use simple names.
    
- Maintain consistency between all files.
    

---

## index.ini

Purpose:  
Represents the current state of a country.

Allowed:

- Economic indicators
    
- Population data
    
- Government data
    
- Military data
    
- Military equipment data
    
- Natural resources
    
- Infrastructure
    
- Education
    
- Health
    
- Technology
    

Requirements:

- Every variable must have an initial value.
    
- Use real-world values when available.
    
- If no reliable value exists, use a small set of simulation variables only.
    

Forbidden:

- Arbitrary scores such as:
    
    - ResearchPower=92
        
    - AICapability=91
        
    - CyberOffense=88
        

unless explicitly requested.

Target:

- At least 20 variables when sufficient information exists.
    
- Do not invent additional variables just to reach 20.
    

---

## action.ini

Purpose:  
Defines presidential actions only.

Requirements:

- Each action is written as a section.
    
- Define parameters only.
    
- No calculations.
    
- No effects.
    
- No predicted outcomes.

- Do not depend on variable names
    

Example:

[TaxCut]

tax_rate_change=-5  
duration_months=12

Forbidden:

GDP_gain=10  
research_bonus=5  
military_power_gain=8

These belong in formula.lua.

---

## formula.lua

Purpose:  
Contains all calculation logic.

Requirements:

- Read variables from index.ini.
    
- Read action parameters from action.ini.
    
- Apply changes to the world state.
    
- Only calculation logic is allowed.

- Write down hardcoding in formula.lua
    

Forbidden:

- New country data
    
- New action definitions
    
- Hardcoded fictional statistics
    

---

## Superevent.lua

Purpose:  
Large-scale national or global events.

Examples:

- World War
    
- Financial Crisis
    
- Pandemic
    
- Civil War
    
- Alien Invasion
    

Requirements:

- Use existing variables from index.ini.
    

---

## event.lua

Purpose:  
Small and medium-scale events.

Examples:

- Strike
    
- Election
    
- Local disaster
    
- Industrial accident
    

Requirements:

- May be triggered by Superevent.lua.
    
- Must use existing variables from index.ini.
    

---

## Architecture

index.ini  
→ defines state

action.ini  
→ defines actions

formula.lua  
→ calculates effects

event.lua  
→ creates local events

Superevent.lua  
→ creates major events