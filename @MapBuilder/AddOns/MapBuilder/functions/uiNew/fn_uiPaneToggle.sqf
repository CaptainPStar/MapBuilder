/*
    Function:       MB_fnc_uiPaneToggle
    Author:         Adanteh
    Description:    Opens/closes one of the UI panes
*/
#include "mb/MapBuilder/ui/mbdefinesNew.hpp"

params ["_ctrl"];
_headerCtrl = ctrlParentControlsGroup _ctrl;
_paneCtrl = ctrlParentControlsGroup _headerCtrl;
private _collapsed = _paneCtrl getVariable ["collapsed", false];
private _flying = _paneCtrl getVariable ["flying", false];
private _openingPane = _collapsed;

private _paneID = _paneCtrl getVariable ["id", ""];
if (_paneID == "") exitWith {
    ["Pane has missing data. Please reload the UI", "error"] call MB_fnc_uiLogOutput;
};
private _contentCtrl = _headerCtrl controlsGroupCtrl __IDC_PANE_CONTENT;
private _contentPos = ctrlPosition _contentCtrl;
private _panePos = ctrlPosition _paneCtrl;
if (_openingPane) then {
    private _oldSize = [["ui.setting", _paneID, "sizeY"], 0] call MB_fnc_uiGetSetting;
    _contentPos set [3, _oldSize];
    _panePos set [3, _oldSize + __GUI_PANE_HEADER_H]
} else {
    _contentPos set [3, 0];
    _panePos set [3, __GUI_PANE_HEADER_H];
};

// -- Run some extra fancy code (Makes it easier to extend mapBuilder)
private _paneCtrlClass = ctrlClassName _paneCtrl;
private _code = getText (configFile >> _paneCtrlClass >> "MapBuilder" >> "collapseCode");
if (_code != "") then {
    _code = compile _code;
    _return = [_paneCtrl] call _code;
};


private _animateTime = ["ui.setting.animateTime", 0] call MB_fnc_uiGetSetting;
_panePos ctrlCommit 0;
_contentPos ctrlCommit _animateTime;
_paneCtrl setVariable ["collapsed", !_openingPane];
_ctrl cbSetChecked _openingPane;

[["ui.setting", _paneID, "collapsed"], !_openingPane] call MB_fnc_uiSetSetting;

if !(_flying) then {
    [_paneCtrl] call MB_fnc_uiPaneShift;
};
