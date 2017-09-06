/*
    Function:       MB_fnc_uiCreateUI
    Author:         Adanteh
    Description:    Creates the basic UI for mapbuilder
    Example:        [] call MB_fnc_uiCreateUI;
*/

if !(isNull __GUI_WINDOW) then {
    __GUI_WINDOW closeDisplay 0;
};

diag_mergeConfigFile ["B:\Arma\Frontline\MapBuilder\@MapBuilder\AddOns\MapBuilder\config.cpp"];
{
    ctrlDelete _x;
    nil;
} count (uiNamespace getVariable ["MB_UI_Sidebars", []]);

"MB_fnc_uiLoadPanes" call bis_fnc_recompile;
"MB_fnc_uiPanesShift" call BIS_fnc_recompile;
"MB_fnc_uiPaneResize" call BIS_fnc_recompile;
"MB_fnc_uiPaneDrag" call BIS_fnc_recompile;

// { [["ui.setting", _x, "sizeY"], 50 * (pixelH * pixelGrid * 0.5)] call MB_fnc_uiSetSetting; nil  } count ["Library", "Favorites"];

(findDisplay 46) createDisplay "MB_GUI_Window";
private _display = __GUI_WINDOW;

[] call MB_fnc_uiLoadPanes;
