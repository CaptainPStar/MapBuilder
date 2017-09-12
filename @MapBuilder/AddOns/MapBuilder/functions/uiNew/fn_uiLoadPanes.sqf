/*
    Function:       MB_fnc_uiLoadPanes
    Author:         Adanteh
    Description:    Loads in all the panes
    Example:        [] call MB_fnc_uiLoadPanes;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

private _cfg = (configFile >> "MapBuilder" >> "Panes");
["right"] call MB_fnc_uiSidebarCreate;
{
    private _paneID = configName _x;
    private _enabled = ([["ui.setting", _paneID, "enabled"], getNumber (_x >> "enabled")] call MB_fnc_uiGetSetting) > 0;
    if (_enabled) then {
        [_paneID] call MB_fnc_uiPaneOpen;
    };
} forEach ("getNumber (_x >> 'scope') >= 2" configClasses _cfg);
