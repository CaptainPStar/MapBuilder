/*
    Function:       MB_fnc_uiPaneClose
    Author:         Adanteh
    Description:    Closes a pane/window with some stuff
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_closeCtrl"];

private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _closeCtrl);
private _paneID = _paneCtrl getVariable ["id", ""];
ctrlDelete _paneCtrl;

private _currentPanes = +(uiNamespace getVariable ["MB_allPanes", []]);
_currentPanes deleteAt (_currentPanes find (toLower _paneID));
uiNamespace setVariable ["MB_allPanes", _currentPanes];

[["ui.setting", _paneID, "enabled"], 0] call MB_fnc_uiSetSetting;
