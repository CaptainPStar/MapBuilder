/*
    Function:       MB_fnc_toggleAutosave
    Author:         Adanteh
    Description:    Toggles autosaving for projects
    Example:        [true] call MB_fnc_toggleAutosave;
*/

params [["_toggle", true]];

if (_toggle) then {

    MB_autosaveEnabled = true;
    if ((missionNamespace getVariable ["MB_autosaveHandle", -1]) != -1) then {
        private _interval = ["general.autosave.interval", (30*60)] call MB_fnc_uiGetSetting;
        MB_autosaveHandle = [{

            // -- Update the interval time
            private _interval = ["general.autosave.interval", (30*60)] call MB_fnc_uiGetSetting;
            _x set [1, _interval];

            ["autosave"] call MB_fnc_saveProject;
        }, _interval, []] call MB_fnc_addPerFrameHandler;
    };
    ["general.autosave.enabled", 1] call MB_fnc_uiSetSetting;

} else {

    private _handle = missionNamespace getVariable ["MB_autosaveHandle", -1];
    if (_handle != -1) then {
        [_handle] call MB_fnc_removePerFrameHandler;
    };
    MB_autosaveHandle = -1;
    MB_autosaveEnabled = false;
    ["general.autosave.enabled", 0] call MB_fnc_uiSetSetting;

};
