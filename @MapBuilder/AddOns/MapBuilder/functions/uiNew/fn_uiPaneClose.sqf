/*
    Function:       MB_fnc_uiPaneClose
    Author:         Adanteh
    Description:    Closes a pane/window with some stuff
*/
#include "\mb\MapBuilder\ui\mbdefinesNew.hpp"

params ["_paneID"];

private _currentPanes = +(uiNamespace getVariable ["MB_allPanes", []]);
private _paneIndex = _currentPanes find (toLower _paneID);
if (_paneIndex == -1) exitWith { // -- Already closed
    0
};

private _paneCtrl = _currentPanes select _paneIndex;
[_paneCtrl] call MB_fnc_uiRemovePaneFromSidebar;
ctrlDelete _paneCtrl;

[["ui.setting", _paneID, "enabled"], 0] call MB_fnc_uiSetSetting;
