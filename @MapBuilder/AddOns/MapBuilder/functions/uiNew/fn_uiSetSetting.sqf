/*
    Function:       MB_fnc_uiSetSetting
    Author:         Adanteh
    Description:    Sets a UI setting to the UI settings file
*/

params ["_settingToSet", "_value"];

if (isNil "_value") exitWith { };
if (_settingToSet isEqualType []) then {
    _settingToSet = _settingToSet joinString ".";
};

profileNamespace setVariable [_settingToSet, _value];
saveProfileNamespace;

0;
