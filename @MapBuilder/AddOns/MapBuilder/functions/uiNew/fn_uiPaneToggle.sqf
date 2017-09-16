/*
    Function:       MB_fnc_uiPaneToggle
    Author:         Adanteh
    Description:    Opens/closes one of the UI panes
    Example:        [_paneCtrl] call MB_fnc_uiPaneToggle;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_ctrl", ["_direct", false]];

// -- Bypass scripted check, so we don't get stuck in an endless loop
if (_ctrl getVariable ["checkbypass", false]) exitWith {
    _ctrl setVariable ["checkbypass", false];
};

private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _ctrl);
if (_direct) then {
    _paneCtrl = _ctrl;
};

private _collapsed = _paneCtrl getVariable ["collapsed", false];
private _floating = _paneCtrl getVariable ["floating", false];
private _openingPane = _collapsed;

private _paneID = _paneCtrl getVariable ["id", ""];
if (_paneID == "") exitWith {
    ["Pane has missing data. Please reload the UI", "error"] call MB_fnc_uiLogOutput;
};

private _ySize  = 0;
if (_openingPane) then { // -- Get the old height, if no height is set get the default size from config
    _ySize = [["ui.setting", _paneID, "sizeY"], -1] call MB_fnc_uiGetSetting;
    if (_ySize == -1) then {
        _ySize = [(configFile >> (ctrlClassName (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT)) >> "h")] call MB_fnc_uiGetCfgSize;
        [["ui.setting", _paneID, "sizeY"], _ySize] call MB_fnc_uiSetSetting;
    };
};

private _contentCtrl = _paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT;
[_contentCtrl, _ySize] call MB_fnc_uiAdjustContentCtrl;

// -- Run some extra fancy code (Makes it easier to extend mapBuilder)
_paneCtrl setVariable ["collapsed", !_openingPane];
private _code = getText (configFile >> "MapBuilder" >> "Panes" >> _paneID >> "onCollapse");
if (_code != "") then {
    _code = compile _code;
    _return = [_paneCtrl] call _code;
};

[["ui.setting", _paneID, "collapsed"], parsenumber (!_openingPane)] call MB_fnc_uiSetSetting;
if !(_floating) then {
    [_paneCtrl getVariable ["parent", controlNull]] call MB_fnc_uiPanesShift;
};
