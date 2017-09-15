/*
    Function:       MB_fnc_parseToCode
    Author:         Adanteh
    Description:    Handles code or string input and converts it to a function. Gets functions from missionnamespace
*/

params [["_code", {}, [{}, ""]]];
if (_code isEqualType {}) exitWith { _code };
if !(_code isEqualType "") exitWith { { false } };

private _function = uiNamespace getVariable _code;
if (!(isNil "_function") && { _function isEqualType {} }) exitWith {
    _function
};

_code = compile _code;
_code;
