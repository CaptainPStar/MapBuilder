//All Config files go here
#include "\MB\MapBuilder\include.hpp"

[] call MB_FNC_EXIT;
//diag_mergeConfigFile ["S:\ArmA3Work\MapBuilder\@MapBuilder\AddOns\MapBuilder\config.cpp"];
#ifdef DEBUG
diag_mergeConfigFile ["S:\ArmA3Work\MapBuilder\@MapBuilder\AddOns\MapBuilder\gui\gui.hpp"];
#endif
//Recompile scripts
[] call BIS_fnc_recompile;
[] spawn MB_FNC_START;
//MBDialog = createDialog "MB_Main";
