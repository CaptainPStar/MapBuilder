call compile preprocessFileLineNumbers "MapBuilder\mb_mainFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_dialogFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_selectionFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_exportFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_brushFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_controlFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_layerFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_libraryFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_objectFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_popupFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_fencerFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_mapFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_hookFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_multiplayerFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_presetFunctions.sqf";

MB_var_useConfig = true;
MB_var_classBlacklist = ["Logic","AllVehicles","LaserTarget","NVTarget","ArtilleryTarget","FireSectorTarget",
						"Rope","Thing","Object","Library_WeaponHolder"];
MB_var_classWhitelist = ["Wreck"];

[] call MB_fnc_Setup;

player addaction["Map Builder",MB_fnc_Start];