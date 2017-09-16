/*
    Function:       MB_fnc_useFencer
    Author:         NeoArmageddon/Adanteh
    Description:    Uses the fencer tool
    Example:        ["copy"] call MB_fnc_useFencer
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
#define __CTRLFENCER(var1) (_fencerCtrl controlsGroupCtrl var1)

params [["_mode", "refresh"], ["_args", []]];

private _return = true;
switch (toLower _mode) do {
    case "onload": {
        private _fencerCtrl = (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT);
        uiNamespace setVariable ["MB_FencerContent", _fencerCtrl];
        ["loadsettings"] call MB_fnc_useFencer;
        MB_FencerActive = true;
    };

    case "collapse": {

    };

    // -- Load in all the fencer settings from profile
    case "loadsettings": {
        private _fencerCtrl = uiNamespace getVariable ["MB_FencerContent", controlNull];
        private _offset = __CTRLFENCER(170410);
        private _terrainAlign = __CTRLFENCER(170411);
        private _libraryMode = __CTRLFENCER(170412);

        _offset ctrlSetText (["ui.fencer.offset", "0.0"] call MB_fnc_uiGetSetting);
        _terrainAlign ctrlSetChecked ((["ui.fencer.terrainAlign", 0] call MB_fnc_uiGetSetting) > 0);
        _libraryMode ctrlSetChecked ((["ui.fencer.libraryMode", 0] call MB_fnc_uiGetSetting) > 0);
    };


    // -- The pane is closed
    case "close": {
        MB_FencerActive = false;
        ['deletepreview'] call MB_fnc_useFencer;
    };

    // -- Delete the preview
    case "deletepreview": {
        if !(isNull MB_FencerPreview) then {
    		deletevehicle MB_FencerPreview;
    		MB_FencerPreview = objNull;
        };
    };
};

_return;
