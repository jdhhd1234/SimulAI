from dataclasses import field
from pydantic.dataclasses import dataclass
from typing import Dict, Any

import builder as build

@dataclass
class FormulaConfig:
    key: str
    value: str
    weight_value: float
    formula_type: Dict[str, Any] = field(default_factory=dict)