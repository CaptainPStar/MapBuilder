/*
    Function:       MB_fnc_uiPaneToggle
    Author:         Adanteh
    Description:    Opens/closes one of the UI panes
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_ctrl"];

// -- Bypass scripted check, so we don't get stuck in an endless loop
if (_ctrl getVariable ["checkbypass", false]) exitWith {
    _ctrl setVariable ["checkbypass", false];
};

private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _ctrl);
private _collapsed = _paneCtrl getVariable ["collapsed", false];
private _flying = _paneCtrl getVariable ["flying", false];
private _openingPane = _collapsed;

private _paneID = _paneCtrl getVariable ["id", ""];
if (_paneID == "") exitWith {
    ["Pane has missing data. Please reload the UI", "error"] call MB_fnc_uiLogOutput;
};

private _ySize  = 0;
if (_openingPane) then {
    _ySize = [["ui.setting", _paneID, "sizeY"], _ySize] call MB_fnc_uiGetSetting;
};

private _contentCtrl = _paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT;
[_contentCtrl, _ySize] call MB_fnc_uiAdjustContentCtrl;

// -- Run some extra fancy code (Makes it easier to extend mapBuilder)
private _paneCtrlClass = ctrlClassName _paneCtrl;
private _code = getText (configFile >> _paneCtrlClass >> "MapBuilder" >> "collapseCode");
if (_code != "") then {
    _code = compile _code;
    _return = [_paneCtrl] call _code;
};

_paneCtrl setVariable ["collapsed", !_openingPane];
[["ui.setting", _paneID, "collapsed"], !_openingPane] call MB_fnc_uiSetSetting;
"MB_fnc_uiPanesShift" call BIS_fnc_recompile;
if !(_flying) then {
    [_paneCtrl] call MB_fnc_uiPanesShift;
};
