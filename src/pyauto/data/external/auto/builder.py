import formuladata as fordata
import math
import re
import configparser

lua_code = []
lua_code.append("local M = {}\n\n")

def Clamp(lua_code: list[str]):
    lua_code.append("-- Clamp\n")
    lua_code.append("function M.clamp(value, min_val, max_val)\n")
    lua_code.append("    if value < min_val then return min_val end\n")
    lua_code.append("    if value > max_val then return max_val end\n")
    lua_code.append("    return value\n")
    lua_code.append("end\n\n")

def Normalize(lua_code: list[str]):
    lua_code.append("-- Normalize\n")
    lua_code.append("function M.normalize(value, min_val, max_val)\n")
    lua_code.append("    if min_val == max_val then return 0.0 end\n")
    lua_code.append("    return (value - min_val) / (max_val - min_val)\n")
    lua_code.append("end\n\n")
    
def Linear(lua_code: list[str]):
    lua_code.append("-- Linear\n")
    lua_code.append("function M.linear(x, slope, intercept)\n")
    lua_code.append("    slope = slope or 1.0\n")
    lua_code.append("    intercept = intercept or 0.0\n")
    lua_code.append("    return slope * x + intercept\n")
    lua_code.append("end\n\n")

def Sigmoid(lua_code: list[str]):
    lua_code.append("-- Sigmoid\n")
    lua_code.append("function M.sigmoid(x)\n")
    lua_code.append("    if x >= 0 then\n")
    lua_code.append("        local z = math.exp(-x)\n")
    lua_code.append("        return 1 / (1 + z)\n")
    lua_code.append("    else\n")
    lua_code.append("        local z = math.exp(x)\n")
    lua_code.append("        return z / (1 + z)\n")
    lua_code.append("    end\n")
    lua_code.append("end\n\n")
    
def Pow(lua_code: list[str]):
    lua_code.append("-- Pow\n")
    lua_code.append("function M.pow(base, exponent)\n")
    lua_code.append("    return base ^ exponent\n")
    lua_code.append("end\n\n")
    
def Sqrt(lua_code: list[str]):
    lua_code.append("-- Sqrt\n")
    lua_code.append("function M.sqrt(x)\n")
    lua_code.append("    return math.sqrt(x)\n")
    lua_code.append("end\n\n")
    
def Log(lua_code: list[str]):
    lua_code.append("-- Log\n")
    lua_code.append("function M.log(x, base)\n")
    lua_code.append("    if base then\n")
    lua_code.append("        return math.log(x) / math.log(base)\n")
    lua_code.append("    else\n")
    lua_code.append("        return math.log(x)\n")
    lua_code.append("    end\n")
    lua_code.append("end\n\n")
    
def Exp(lua_code: list[str]):
    lua_code.append("-- Exp\n")
    lua_code.append("function M.exp(x)\n")
    lua_code.append("    return math.exp(x)\n")
    lua_code.append("end\n\n")

def Lerp(lua_code: list[str]):
    lua_code.append("-- Lerp\n")
    lua_code.append("function M.lerp(start, end_val, t)\n")
    lua_code.append("    return start + (end_val - start) * t\n")
    lua_code.append("end\n\n")
    
def Abs(lua_code: list[str]):
    lua_code.append("-- Abs\n")
    lua_code.append("function M.abs(x)\n")
    lua_code.append("    return math.abs(x)\n")
    lua_code.append("end\n\n")

lua_code.append("return M\n")