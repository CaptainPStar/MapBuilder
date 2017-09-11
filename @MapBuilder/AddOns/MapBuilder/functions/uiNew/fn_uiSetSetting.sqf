/*
    Function:       MB_fnc_uiSetSetting
    Author:         Adanteh
    Description:    Sets a UI setting to the UI settings file
    Example:        [["ui.setting", 'library', "enabled"], 0] call MB_fnc_uiSetSetting;
*/

params ["_settingToSet", "_value"];

if (_settingToSet isEqualType []) then {
    _settingToSet = _settingToSet joinString ".";
};

profileNamespace setVariable [_settingToSet, _value];
saveProfileNamespace;

0;
