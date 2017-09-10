/*
    Function:       MB_fnc_uiPaneFloatToggle
    Author:         Adanteh
    Description:    Toggles a pane to either be part of a sidebar, or moving freely (Floating)
                    Seeing we can't move existing controls into, or out of control groups, we need to create a duplicate and restore all the current settings
                    (Not triggering any of the scripted events on the buttons and the likes)
                    For attached panes, we need to change the width to that of a sidebar
                    When detaching panes we need to change to their last width when they were floating
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_paneCtrl"];

private _floating = _paneCtrl getVariable ["floating", false];
private _paneID = uiNamespace getVariable ["id", ""];
private _attaching = _floating;

// -- If it's floating now, we should make it not floating
[["ui.setting", _paneID, "floating"], parseNumber !_floating] call MB_fnc_uiSetSetting;

if (_attaching) then {
    private _sidebarID = "right";
    [["ui.setting", _paneID, "sidebar"], _sidebarID] call MB_fnc_uiSetSetting;
    [_paneCtrl] call MB_fnc_uiPanesShift;
} else {
    [_paneCtrl] call MB_fnc_uiRemovePaneFromSidebar;
};

private _paneCtrlNew = [_paneID, false, true] call MB_fnc_uiPaneOpen;
