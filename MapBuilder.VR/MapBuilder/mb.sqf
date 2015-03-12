call compile preprocessFileLineNumbers "MapBuilder\mb_mainFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_hookFunctions.sqf";//Important top
call compile preprocessFileLineNumbers "MapBuilder\mb_uiFunctions.sqf";
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
call compile preprocessFileLineNumbers "MapBuilder\mb_multiplayerFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_presetFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_maskerFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_projectSettingsFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_viewFunctions.sqf";
call compile preprocessFileLineNumbers "MapBuilder\mb_windowFunctions.sqf";

[] call MB_fnc_Setup;

player addaction["Map Builder",MB_fnc_Start];