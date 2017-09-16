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

"MB_fnc_update3DPreview" call BIS_fnc_recompile;
"MB_fnc_uiLoadLibrary" call BIS_fnc_recompile;
"MB_fnc_updatecam" call bis_fnc_recompile;
"MB_fnc_librarySelect" call bis_fnc_recompile;
"MB_fnc_updateFavorites" call bis_fnc_recompile;
"MB_fnc_updateUsed" call bis_fnc_recompile;
"MB_fnc_updateUsed" call bis_fnc_recompile;

[] call MB_fnc_uiLoadPanes;
