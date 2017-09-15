/*
    Function:       MB_fnc_uiSetSetting
    Author:         Adanteh
    Description:    Sets a UI setting to the UI settings file
    Example:        [["ui.setting", 'library', "enabled"], 0] call MB_fnc_uiSetSetting;
*/

params ["_settingToSet", "_value", ["_save", true]];

if (_settingToSet isEqualType []) then {
    _settingToSet = _settingToSet joinString ".";
};

if (isNil "_value") then {
    profileNamespace setVariable [_settingToSet, nil];
} else {
    profileNamespace setVariable [_settingToSet, _value];
};

if (_save) then {
    saveProfileNamespace;
};

0;
