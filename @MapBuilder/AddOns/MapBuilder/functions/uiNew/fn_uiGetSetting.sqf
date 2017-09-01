/*
    Function:       MB_fnc_uiGetSetting
    Author:         Adanteh
    Description:    Gets a UI setting from the UI settings file
*/

// TODO: IMO This should be written in files with IO, preferably in Json type stuff
params ["_settingToGet", "_defaultReturn"];

if (_settingToGet isEqualType []) then {
    _settingToGet = _settingToGet joinString ".";
};

private _return = profileNamespace getVariable _settingToGet;
if (isNil "_return") then { // -- Prefer this over default return, easier to add additional reporting/marshalling to default returns
    _return = _defaultReturn;
};
_return;
