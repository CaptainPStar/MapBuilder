//All Config files go here
#include "\MB\MapBuilder\include.hpp"
//diag_mergeConfigFile ["S:\ArmA3Work\MapBuilder\@MapBuilder\AddOns\MapBuilder\config.cpp"];
#ifdef DEBUG
diag_mergeConfigFile [UI_PATH];
#endif
//Recompile scripts
[] call BIS_fnc_recompile;

//MBDialog = createDialog "MB_Main";
