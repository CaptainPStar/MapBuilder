#include "\MB\MapBuilder\ui\dik.hpp"
#include "\MB\MapBuilder\version.hpp"

//***************************************
//* Setup Function
//* Creates all global variables
//***************************************
private["_logic"];
_logic = [_this,0,objNull,[objNull]] call BIS_fnc_param;

	MB_Keys = [];
	for "_i" from 0 to 255 do {
		MB_Keys set [_i,false];
	};
	MB_MouseKeys = [];
	MB_MouseKeys set [MB_L,[false,0,0]];
	MB_MouseKeys set [MB_R,[false,0,0]];
	MB_MousePosition = [0,0,0];
	MB_MouseScreenPosition = [0,0];
	MB_LastMousePosition = [0,0,0];
	MB_LastMouseScreenPosition = [0,0];
	MB_MousePositionDelta = [0,0];
	MB_CamPos = [[getpos player select 0, getpos player select 1,(getpos player select 2)+2],getdir player,0];//[X,Y,Z],Dir,Dive
	MB_DefaultCamCommit = 0.05;
	MB_CamCommit = MB_DefaultCamCommit;
	MB_Selected = [];
	MB_SelectedVertices = [];
	MB_CopyPaste = [];
	MB_CurClass = "Land_HBarrier_3_F";
	MB_Layers=[[[]]];
	MB_CurLayer = 0;
	MB_ClickedObject = objNull;
	MB_ClickedPosition = [];
	MB_ProjectName = "";
	MB_3DVectors = [];
	//MB_DataSource = "Array";
	//MB_Modes = ["Object","Polygon"];
	MB_Mode = -1;
	MB_DebugLines = [];
	MB_RegisterKeys = true;

	MB_CurVersionNum = 0;
	MB_NewVersionNum = 0;
	MB_CurVersion = "Unknown";
	MB_NewVersion = "Unknown";


	MB_SelectedPolyline = [];
	MB_PopupOpen = false;

	//MB_ObjectListNames = [];
	//MB_ObjectLists = []; //Ob

	MB_LibraryFavorites = [];
	MB_LibraryInUse = [];

	MB_Objects = []; //All placed objects

	//MB safe variables
	if(isNil("MB_NUID")) then {
		MB_NUID = 0;
		publicVariable "MB_NUID";
	};

	//ProjectSettings
	if(isNil("MB_IslandGridSize")) then {
		//MB_IslandGridSize = -1;
		MB_IslandGridSize = 5;
	};
	if(isNil("MB_IslandSize")) then {
		//MB_IslandSize = -1;
		MB_IslandSize = worldSize;
	};
	//Debug Logging
	"MB_Helper" callExtension format["log|%1;%2;%3",name player,MB_VERSION,worldName];

	//Fencer
	MB_FencerDir = 0;
	MB_FencerPreview = ObjNull;

	//Autosave
	MB_autosaveInterval = -1;
	MB_nextProjectAutosave = time + MB_autosaveInterval;

	//terrainbuilder import hash
	MB_importTB_P3D = [];
	MB_importTB_ClassName = [];

	//Bootstrap all variables:
	call mb_fnc_initHookFunctions; //Must be first
	call mb_fnc_initImportTBHashFunctions;
	call mb_fnc_initBrushFunctions;
	call mb_fnc_initControlFunctions;
	call mb_fnc_initExportFunctions;
	call mb_fnc_initFencerFunctions;
	call mb_fnc_initLibraryFunctions;
	call mb_fnc_initMapFunctions;
	call mb_fnc_initMaskerFunctions;
	call mb_fnc_initMatrixFunctions;
	call mb_fnc_initMultiplayerFunctions;
	call mb_fnc_initObjectFunctions;
	call mb_fnc_initObjectInspectorFunctions;
	call mb_fnc_initPopupFunctions;
	call mb_fnc_initPresetFunctions;
	call mb_fnc_initProjectFunctions;
	call mb_fnc_initSelectionFunctions;
	call mb_fnc_initUIFunctions;
	call mb_fnc_initViewFunctions;
	call mb_fnc_initWindowFunctions;
	call mb_fnc_initQuadtreeFunctions;
	[] call MB_fnc_loadLibrary;
	call mb_fnc_addMBAction;
	//["loop","MB_fnc_autosave"] call mb_fnc_addCallback;
	//["camUpdate","MB_fnc_calcSelectionCenter"] call mb_fnc_addCallback;
	//["camUpdate","MB_fnc_rotate3DPreview"] call mb_fnc_addCallback;
	
	if(!isNull _logic) then {
		private["_autostart"];
		_autostart = _logic getvariable ["Autostart",false];
		if(_autostart) then {
			[] spawn MB_fnc_Start;
		};
	};