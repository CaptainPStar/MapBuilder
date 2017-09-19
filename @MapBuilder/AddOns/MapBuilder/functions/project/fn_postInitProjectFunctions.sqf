



// -- Autosaving
private _autosaveEnabled = (["general.autosave.enabled", 0] call MB_fnc_uiGetSetting) > 0;
if (_autosaveEnabled) then {
    [true] call MB_fnc_toggleAutosave
};

["add", ["general", "Map Builder - General", "Autosave", [
    "Enabled",
    "Enable the autosaving",
    "MB_CtrlSettingCheckbox",
    { missionNamespace getVariable ["MB_autosaveEnabled", false] },
    { true },
    { [true] call MB_fnc_toggleAutosave; },
    []
]]] call MB_fnc_settingsWindow;

["add", ["general", "Map Builder - General", "Autosave", [
    "Interval",
    "Time to autosave",
    "MB_CtrlSettingSlider",
    { ["general.autosave.interval", (30*60)] call MB_fnc_uiGetSetting },
    { true },
    { ["general.autosave.interval", _this select 1] call MB_fnc_uiSetSetting },
    [[5*60, 120*60], [60, 10*60]]
]]] call MB_fnc_settingsWindow;
