/*
    Function:       MB_fnc_showBrushWindow
    Author:         NeoArmageddon
    Description:    Called when loading in the brush window
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
params ["_paneCtrl"];

systemChat str ["Brusher", _this];

private _brusherCtrl = (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT);
uiNamespace setVariable ["MB_BrushContent", _brusherCtrl];

[] call mb_fnc_brusherUpdateFileList;
["First"] call mb_fnc_brusherUpdateTemplateList;
