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
"MB_fnc_uiPaneToggle" call bis_fnc_recompile;
"MB_fnc_uiAdjustContentCtrl" call bis_fnc_recompile;
"MB_fnc_uiLoadLibrary" call bis_fnc_recompile;

(findDisplay 46) createDisplay "MB_GUI_Window";
private _display = __GUI_WINDOW;

[] call MB_fnc_uiLoadPanes;
