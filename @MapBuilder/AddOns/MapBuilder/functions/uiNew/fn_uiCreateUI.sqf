/*
    Function:       MB_fnc_uiCreateUI
    Author:         Adanteh
    Description:    Creates the basic UI for mapbuilder
    Example:        [] call MB_fnc_uiCreateUI;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

diag_mergeConfigFile ["B:\Arma\Frontline\MapBuilder\@MapBuilder\AddOns\MapBuilder\config.cpp"];
uiNamespace setVariable ["MB_allPanes", nil];
uiNamespace setVariable ["MB_UI_Sidebars", nil];
uiNamespace setVariable ["MB_sidebarRight", nil];
uiNamespace setVariable ["MB_sidebarLeft", nil];

"MB_fnc_updatecam" call bis_fnc_recompile;
"MB_fnc_uiSidebarCreate" call bis_fnc_recompile;
"MB_fnc_uiLoadPanes" call bis_fnc_recompile;
"MB_fnc_uiPanesShift" call BIS_fnc_recompile;
"MB_fnc_uiAdjustContentCtrl" call BIS_fnc_recompile;
"MB_fnc_uiRemovePaneFromSidebar" call BIS_fnc_recompile;
"MB_fnc_uiPaneResize" call BIS_fnc_recompile;
"MB_fnc_uiPaneDrag" call BIS_fnc_recompile;
"MB_fnc_uiPaneClose" call BIS_fnc_recompile;
"MB_fnc_uiPaneOpen" call BIS_fnc_recompile;
"MB_fnc_uiPaneFloatToggle" call BIS_fnc_recompile;
"MB_fnc_uiPaneToggle" call BIS_fnc_recompile;
"MB_fnc_uiPaneClose" call BIS_fnc_recompile;
"MB_fnc_uiGetSetting" call BIS_fnc_recompile;
"MB_fnc_uiSetSetting" call BIS_fnc_recompile;



[] call MB_fnc_uiLoadPanes;
