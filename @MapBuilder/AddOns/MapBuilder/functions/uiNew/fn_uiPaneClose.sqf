/*
    Function:       MB_fnc_uiPaneClose
    Author:         Adanteh
    Description:    Closes a pane/window with some stuff
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_closeCtrl"];

private _paneCtrl = ctrlParentControlsGroup (ctrlParentControlsGroup _closeCtrl);
_paneCtrl ctrlShow false;

if (false) then {
    // ctrlDelete _paneCtrl; // For some reason this is crashing the game, so for now we just hide them
    private _paneID = _paneCtrl getVariable ["id", ""];
    private _currentPanes = +(uiNamespace getVariable ["MB_allPanes", []]);
    _currentPanes deleteAt (_currentPanes find _paneID);
    uiNamespace setVariable ["MB_allPanes", _currentPanes];
};

[["ui.setting", _paneID, "enabled"], 0] call MB_fnc_uiSetSetting;

true;
