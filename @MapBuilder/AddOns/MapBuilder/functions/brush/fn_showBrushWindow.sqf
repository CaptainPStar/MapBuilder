/*
    Function:       MB_fnc_showBrushWindow
    Author:         NeoArmageddon
    Description:    Called when loading in the brush window
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
params ["_paneCtrl"];

private _brusherCtrl = (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT);
uiNamespace setVariable ["MB_Brush.contentCtrl", _brusherCtrl];

[_brusherCtrl] call mb_fnc_brusherUpdateFileList;
["First"] call mb_fnc_brusherUpdateTemplateList;
