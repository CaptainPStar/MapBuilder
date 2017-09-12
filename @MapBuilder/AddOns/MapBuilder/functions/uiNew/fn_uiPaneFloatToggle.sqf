/*
    Function:       MB_fnc_uiPaneFloatToggle
    Author:         Adanteh
    Description:    Toggles a pane to either be part of a sidebar, or moving freely (Floating)
                    Seeing we can't move existing controls into, or out of control groups, we need to create a duplicate and restore all the current settings
                    (Not triggering any of the scripted events on the buttons and the likes)
                    For attached panes, we need to change the width to that of a sidebar
                    When detaching panes we need to change to their last width when they were floating
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_paneCtrl"];

private _floating = _paneCtrl getVariable ["floating", false];
private _paneID = _paneCtrl getVariable ["id", ""];
private _attaching = _floating;

// -- If it's floating now, we should make it not floating
[["ui.setting", _paneID, "floating"], parseNumber (!_floating)] call MB_fnc_uiSetSetting;

private _sidebarID = "right";
if (_attaching) then {
    [["ui.setting", _paneID, "sidebar"], _sidebarID] call MB_fnc_uiSetSetting;
};

private _paneCtrlNew = [_paneID, false, true] call MB_fnc_uiPaneOpen;

private "_sidebarCtrl";
if (_attaching) then {
    _sidebarCtrl = uiNamespace getVariable ["MB_sidebar" + _sidebarID, controlNull];
    private _posY = ((ctrlPosition _paneCtrl) select 1) - ((ctrlPosition _sidebarCtrl) select 1);
    private _posCtrl = ctrlPosition _paneCtrlNew;
    _posCtrl set [1, _posY];
    _paneCtrlNew ctrlSetPosition _posCtrl;
    _paneCtrlNew ctrlCommit 0;
} else {
    _sidebarCtrl = _paneCtrl getVariable ["parent", controlNull];
    [_paneCtrl] call MB_fnc_uiRemovePaneFromSidebar;
};

[_sidebarCtrl] call MB_fnc_uiPanesShift;

_paneCtrlnew
