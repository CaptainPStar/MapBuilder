//All Config files go here
#include "\MB\MapBuilder\include.hpp"

[] call MB_FNC_EXIT;
[] call MB_FNC_RemoveAllCallbacks;
//diag_mergeConfigFile ["S:\ArmA3Work\MapBuilder\@MapBuilder\AddOns\MapBuilder\config.cpp"];
#ifdef DEBUG
//if(["","workPath.txt"] call MB_FNC_FileExists) then {
	"MB_FileIO" callExtension "open_r|workPath.txt";
	private _path = "MB_FileIO" callExtension "readline";
	systemchat (_path +"\AddOns\MapBuilder\ui\ui.hpp");
	"MB_FileIO" callExtension "close";
	diag_mergeConfigFile [_path +"\AddOns\MapBuilder\ui\ui.hpp"];
//};
#endif
//Recompile scripts
[] call BIS_fnc_recompile;
[] spawn MB_FNC_SETUP;
[] spawn MB_FNC_START;

//MBDialog = createDialog "MB_Main";
