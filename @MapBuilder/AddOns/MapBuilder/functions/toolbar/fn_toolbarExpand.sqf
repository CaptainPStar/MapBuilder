/*
    Function:       MB_fnc_toolbarExpand
    Author:         Adanteh
    Description:    Handles expanding and retracting the left bar
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_mode", "expand"], ["_args", []]];
switch (toLower _mode) do {
    case "retract": {
        private _sidebar = uiNamespace getVariable ["MB.Toolbar.contentCtrl", controlNull];
        if (_sidebar getVariable ["locked", false]) exitWith {
            false
        };
        private _pos = ctrlPosition _sidebar;
        _pos set [2, GRID_TOOLBAR_X(2)];
        _sidebar ctrlSetPosition _pos;
        _sidebar ctrlCommit 0.1;
    };

    case "expand": {
        private _ctrl = _args param [0, controlNull];
        private _sidebar = uiNamespace getVariable ["MB.Toolbar.contentCtrl", controlNull];
        private _pos = ctrlPosition _sidebar;
        _pos set [2, GRID_TOOLBAR_X(2) + __GUI_PANE_W];
        _sidebar ctrlSetPosition _pos;
        _sidebar ctrlCommit 0.1;
    };

    case "init": {
        private _locked = (["ui.setting.sidebar.locked", 0] call MB_fnc_uiGetSetting) > 0;
        if (_locked) then {
            private _sidebar = uiNamespace getVariable ["MB.Toolbar.contentCtrl", controlNull];
            _sidebar getVariable ["locked", _locked];
            (_sidebar controlsGroupCtrl __IDC_BUTTON_1) cbSetChecked true;
            ["expand"] call MB_fnc_toolbarExpand;
        };
    };

    case "lock": {
        private _sidebar = uiNamespace getVariable ["MB.Toolbar.contentCtrl", controlNull];
        private _locked = _sidebar getVariable ["locked", false];
        _sidebar setVariable ["locked", !_locked];
        ["ui.setting.sidebar.locked", parsenumber (!_locked)] call MB_fnc_uiSetSetting;
        ctrlSetFocus __GUI_VIEWPORT;
    };

    case "populate": {

    };
};
