/*
    Function:       MB_fnc_uiPaneClose
    Author:         Adanteh
    Description:    Closes a pane/window with some stuff
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_closeCtrl"];

private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _closeCtrl);

if (true) exitWith {
    hint "Closing not supported, because ctrlDelete makes the game crash";
};
//ctrlDelete _paneCtrl;

private _paneID = _paneCtrl getVariable ["id", ""];
systemChat str [_paneCtrl, _paneID];
private _currentPanes = +(uiNamespace getVariable ["MB_allPanes", []]);
_currentPanes deleteAt (_currentPanes find _paneID);
uiNamespace setVariable ["MB_allPanes", _currentPanes];

[["ui.setting", _paneID, "enabled"], 0] call MB_fnc_uiSetSetting;

true;
