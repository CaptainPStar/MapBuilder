/*
    Function:       MB_fnc_uiGetSetting
    Author:         Adanteh
    Description:    Gets a UI setting from the UI settings file
*/

// TODO: IMO This should be written in files with IO, preferably in Json type stuff
params ["_settingToGet", ["_return", 0]];

if (_settingToGet isEqualType []) then {
    _settingToGet = _settingToGet joinString ".";
};

private _value = profileNamespace getVariable _settingToGet;
if (isNil "_value") then {

    // -- Special handling for UI pane config classes. If profile value does not exist, get the default value out of our UI configs
    if (_return isEqualTo "cfg") then {
        private _class = _settingToGet splitString ".";
        private _cfg = (configFile >> "MapBuilder" >> "Panes" >> (_class select 2) >> (_class select 3));
        _return = call {
            if (isNumber _cfg) exitWith { getNumber _cfg };
            if (isText _cfg) exitWith { getText _cfg };
            if (isArray _cfg) exitWith { getArray _cfg };
            0;
        };
    };
} else {
    _return = _value;
};

_return;
