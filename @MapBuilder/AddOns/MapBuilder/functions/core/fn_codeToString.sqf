/*
    Function:       MB_fnc_codeToString
    Author:         Adanteh
    Description:    Stringifies a block of code
*/

params ["_code"];

if (_code isEqualType "") exitWith { _code };
_code = str(_code);
_code = _code select [1, count _code -2];
_code
