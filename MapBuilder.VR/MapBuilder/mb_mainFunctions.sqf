#include "dik.hpp"
#include "version.hpp"

//################################################
//# Map Builder Main File
//# Author: Dennis "NeoArmageddon" Meyer
//# For instructions and license see readme-file
//################################################



//=========================================
//= General functions
//=========================================

//***************************************
//* Setup Function
//* Creates all global variables
//***************************************
MB_fnc_Setup = {
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
	MB_Selected = [];
	MB_SelectedVertices = [];
	MB_CopyPaste = [];
	MB_CurClass = "Land_HBarrier_3_F";
	MB_Layers=[[[]]];
	MB_CurLayer = 0;
	MB_ClickedObject = objNull;
	MB_ClickedPosition = [];
	MB_ProjectName = "";
	//MB_DataSource = "Array"; 
	//MB_Modes = ["Object","Polygon"];
	MB_Mode = -1;
	MB_DebugLines = [];
	MB_RegisterKeys = true;
	
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
		MB_IslandSize = 5120;
	};
	//Fencer
	MB_FencerDir = 0;
	MB_FencerPreview = ObjNull;
	
	//Autosave
	MB_autosaveInterval = -1;
	MB_nextProjectAutosave = time + MB_autosaveInterval;
	
	[] call MB_fnc_loadLibrary;
	//["loop","MB_fnc_autosave"] call mb_fnc_addCallback;
	//["camUpdate","MB_fnc_calcSelectionCenter"] call mb_fnc_addCallback;
	//["camUpdate","MB_fnc_rotate3DPreview"] call mb_fnc_addCallback;
};

//***************************************
//* Exit Function
//* Removed all handlers and restores the player view
//***************************************
MB_fnc_Exit = {
		["MB_Draw3D", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		//["MB_MapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
		(findDisplay 123) displayRemoveAllEventHandlers "MouseMoving";
		
		//MBCamera cameraEffect ["Terminate", "BACK"];
		player switchCamera "Internal";
		
		player enableSimulation true;
};

//***************************************
//* Start Function
//* Starts MB dialog and camera
//***************************************
MB_fnc_Start = {
	startLoadingScreen ["Starting MapBuilder..."];
	MBDialog = createDialog "MB_Main";
	[1,false] call MB_fnc_togglePopup;
	[2,false] call MB_fnc_togglePopup;
	[3,false] call MB_fnc_togglePopup;
	MBCamera = "camera" camCreate (MB_CamPos select 0);
	MBCamera switchCamera "Internal";
	[] call MB_fnc_updateCam;
	//MBCamera cameraEffect ["internal", "BACK"];
	//showcinemaborder false;
	//cameraEffectEnableHUD true;
	//MBCamera cameraEffect ["internal", "BACK"];
	//player enableSimulation false;
	//["MB_MapClick", "onMapSingleClick", {MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];}, []] call BIS_fnc_addStackedEventHandler;
	//((findDisplay 123) displayCtrl 170301) onDoubleClick "MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];";
	
	//(findDisplay 123) displayAddEventHandler  ["MouseButtonDown","_nil=_this call MB_fnc_MouseDown"];
	//(findDisplay 123) displayAddEventHandler  ["MouseButtonUp","if(MB_LibraryDrag != """") then {_this call MB_fnc_createObjectByDrag;};"];
	//(findDisplay 123) displayAddEventHandler ["MouseMoving","_nil=_this call MB_fnc_MouseMove"];
	//(findDisplay 123) displayAddEventHandler ["MouseButtonDown","systemchat format[""MB Down: %1"",_this];"];
	//(findDisplay 123) displayAddEventHandler ["MouseButtonUp","systemchat format[""MB Up: %1"",_this];"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseMoving","_this call MB_fnc_MouseMove;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseEnter","[true] call MB_fnc_MouseInView;"];
    ((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseExit","[false] call MB_fnc_MouseInView;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseButtonDown","_this call MB_fnc_MouseButtonDownInView;"];
	((findDisplay 123) displayCtrl 170001) ctrlSetEventHandler ["MouseButtonUp","_this call MB_fnc_MouseButtonUpInView;"];
	//(findDisplay 123) displayAddEventHandler ["MouseZChanged","_nil=_this call MB_fnc_MouseZ"];
	//findDisplay 123) displayAddEventHandler ["KeyDown","systemchat format[""%1"",_this];"];
	//(findDisplay 123) displayAddEventHandler ["KeyUp","_nil=_this call MB_fnc_KeyUp"];
	
	["MB_Draw3D", "onEachFrame", {call MB_fnc_Draw3D;}] call BIS_fnc_addStackedEventHandler;
	//addMissionEventHandler ['Draw3D',{call MB_fnc_Draw3D;}];
	MB_RegisterKeys = true;
	//[] call MB_fnc_refreshFilters;
	[MB_Library] call MB_fnc_libraryUpdate;
	[] call MB_fnc_updateUsed;
	[] call MB_fnc_disable3DPreview;
	[] call MB_fnc_SetEditorFocus;
	[] call MB_fnc_hidePresetWindow;
	[170400] spawn MB_fnc_closeWindow;
	[170600] spawn MB_fnc_closeWindow;
	//[666] spawn MB_fnc_closeWindow;
	[170700,true] spawn MB_fnc_closeWindow;
	[0] call MB_fnc_switchMode;
	[] call MB_fnc_checkVersion;
	endLoadingScreen;
	//[] call MB_Listbox_Categories_Refresh;
	[] spawn {
		while{dialog} do {
			[] call MB_fnc_updateCam;
			["camUpdate"] call MB_fnc_dispatchCallbacks;
			sleep 0.01;
		};
	};
	[] spawn {
		while{dialog} do {
			//[screenToWorld MB_MousePosition] spawn MB_fnc_colorVertices;
			["loop"] call MB_fnc_dispatchCallbacks;
			sleep 1;
		};
	};
};
MB_CurVersionNum = 0;
MB_NewVersionNum = 0;
MB_CurVersion = "Unknown";
MB_NewVersion = "Unknown";
MB_fnc_checkVersion = {
	private["_curVersionStr","_curVersion","_latestVersionStr","_curVersion"];
	MB_CurVersion = MB_VERSION;
	MB_CurVersionNum = parseNumber ([MB_CurVersion,"0123456789"] call BIS_fnc_filterString);
	MB_NewVersion = "MB_Helper" callExtension "checkversion";
	MB_NewVersionNum = parseNumber ([MB_NewVersion,"0123456789"] call BIS_fnc_filterString);
	//if(MB_NewVersionNum>MB_CurVersionNum) then {
		//systemChat format["Your Map Builder version is v%1.",_curVersionStr];
		//systemChat format["There is a newer version of Map Builder (v%1) available.",_latestVersionStr];
	
	//} else {
		//systemChat format["Your Map Builder version v%1 is up-to-date.",_curVersionStr];
	//};

};

//=========================================
//= Scene drawing
//=========================================

MB_fnc_Draw3D = {
	{
		[_x] call MB_fnc_DrawBoundingBox;
	} foreach MB_Selected;
	
	{
		drawLine3D [_x select 0,_x select 1,[0,0,1,1]];
	} foreach MB_DebugLines;
	
	if(count(MB_SelectionRectangle) == 2) then {
		_a = MB_SelectionRectangle select 0;
		_c = MB_SelectionRectangle select 1;		
		_z = (_a select 2);
		if((_c select 2)>_z) then {
			_z = (_c select 2);
		};
		_b = [(_c select 0),(_a select 1),_z];
		_d = [(_a select 0),(_c select 1),_z];
		drawLine3D [_a,_b,[0,0,1,1]];
		drawLine3D [_b,_c,[0,0,1,1]];
		drawLine3D [_c,_d,[0,0,1,1]];
		drawLine3D [_d,_a,[0,0,1,1]];
	};
	if(count(MB_SelectionBox)==2) then {
	
	MB_SelectionBox call MB_fnc_DrawBox;
	
	};
	if(!isNil("MB_VertexHelpers")) then {
		{
			_row = _x;
			_rowindex = _forEachIndex;
			{
			//drawIcon3D ["\a3\ui_f\data\gui\cfg\cursors\add_gs.paa", [1,1,0,1], _x, 1.0, 1.0, 0,"", 1, 0.05, "PuristaMedium"];

			if(count(_row)>(_forEachIndex+1)) then {
				drawLine3D [_x,_row select (_forEachIndex+1),[1,1,0,1]];
			};
			if(count(MB_VertexHelpers)>(_rowindex+1)) then {
				drawLine3D [_x,((MB_VertexHelpers select (_rowindex+1)) select _forEachIndex),[1,1,0,1]];
			};
			} foreach _row;
		} foreach MB_VertexHelpers;
	};
};
MB_fnc_DrawBoundingBox = {
	_obj = _this select 0;
	_box = boundingBoxReal _obj;
	//_box = [(_obj modelToWorld _box select 0),(_obj modelToWorld _box select 1)];
	_vul = _box select 0;
	_hor = _box select 1;
	_height = (_hor select 2)-(_vul select 2);
	_width = (_hor select 1)-(_vul select 1);
	_length = (_hor select 0)-(_vul select 0);

	
	_vur = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)];
	_vol = [(_vul select 0),(_vul select 1),(_vul select 2)+_height];
	_vor = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)+_height];
	
	_hur = [(_hor select 0),(_hor select 1),(_hor select 2)-_height];
	_hol = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)];
	_hul = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)-_height];
	
	_center = [0,0,((_vul select 2))];
	_color = [0,0,1,1];
	//Cross
	//drawLine3D [([_visPos,_vul] call BIS_fnc_vectorAdd),([_visPos,_hor] call BIS_fnc_vectorAdd),_color];
		
	//###Front###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_obj modelToWorld _vul),(_obj modelToWorld _vur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_obj modelToWorld _vul),(_obj modelToWorld _vol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_obj modelToWorld _vul),(_obj modelToWorld _vor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_obj modelToWorld _vol),(_obj modelToWorld _vor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_obj modelToWorld _vor),(_obj modelToWorld _vur),_color];
	
	//###Back###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _hur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _hol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _hor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_obj modelToWorld _hol),(_obj modelToWorld _hor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_obj modelToWorld _hor),(_obj modelToWorld _hur),_color];
	
	//###Side###

	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _vul),_color];
	
	drawLine3D [(_obj modelToWorld _hol),(_obj modelToWorld _vol),_color];

	drawLine3D [(_obj modelToWorld _hor),(_obj modelToWorld _vor),_color];
	
	drawLine3D [(_obj modelToWorld _hur),(_obj modelToWorld _vur),_color];
	
	drawLine3D [(_obj modelToWorld _hur),(_obj modelToWorld _vul),_color];
	drawLine3D [(_obj modelToWorld _hor),(_obj modelToWorld _vol),_color];
	
	drawLine3D [(_obj modelToWorld _hul),(_obj modelToWorld _vol),_color];
	drawLine3D [(_obj modelToWorld _hur),(_obj modelToWorld _vor),_color];
	
	//Groundlink
	drawLine3D [(_obj modelToWorld _center),[(_obj modelToWorld _center) select 0,(_obj modelToWorld _center) select 1,0],_color];
};
MB_fnc_DrawBox = {
	_vul = [_this,0,[],[[]],[3]] call bis_fnc_param;
	_hor = [_this,1,[],[[]],[3]] call bis_fnc_param;
	_height = (_hor select 2)-(_vul select 2);
	_width = (_hor select 1)-(_vul select 1);
	_length = (_hor select 0)-(_vul select 0);

	
	_vur = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)];
	_vol = [(_vul select 0),(_vul select 1),(_vul select 2)+_height];
	_vor = [(_vul select 0),(_vul select 1)+_width,(_vul select 2)+_height];
	
	_hur = [(_hor select 0),(_hor select 1),(_hor select 2)-_height];
	_hol = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)];
	_hul = [(_hor select 0),(_hor select 1)-_width,(_hor select 2)-_height];
	
	_color = [1,1,0,1];
	//Cross
	//drawLine3D [([_visPos,_vul] call BIS_fnc_vectorAdd),([_visPos,_hor] call BIS_fnc_vectorAdd),_color];
		
	//###Front###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_vul),(_vur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_vul),(_vol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_vul),(_vor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_vol),(_vor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_vor),(_vur),_color];
	
	//###Back###
	//  ___
	// |   |
	// |   |
	// |_#_|
	drawLine3D [(_hul),(_hur),_color];
	//  ___
	// |   |
	// #   |
	// |___|	
	drawLine3D [(_hul),(_hol),_color];
	//  ___
	// |   |
	// | # |
	// |___|	
	drawLine3D [(_hul),(_hor),_color];
	//  _#_
	// |   |
	// |   |
	// |___|	
	drawLine3D [(_hol),(_hor),_color];
	//  ___
	// |   |
	// |   #
	// |___|	
	drawLine3D [(_hor),(_hur),_color];
	
	//###Side###

	drawLine3D [(_hul),(_vul),_color];
	
	drawLine3D [(_hol),(_vol),_color];

	drawLine3D [(_hor),(_vor),_color];
	
	drawLine3D [(_hur),(_vur),_color];
	
	drawLine3D [(_hur),(_vul),_color];
	drawLine3D [(_hor),(_vol),_color];
	
	drawLine3D [(_hul),(_vol),_color];
	drawLine3D [(_hur),(_vor),_color];
	
	//Groundlink
	//drawLine3D [(_center),[(_center) select 0,(_center) select 1,0],_color];

};
//=========================================
//= Helper
//=========================================

MB_fnc_RotatePos = {
private ["_centerPos", "_pos", "_dir"];
private ["_px", "_py", "_mpx", "_mpy", "_ma", "_rpx", "_rpy"];

_centerPos = _this select 0;
_pos = _this select 1;
_dir = _this select 2;

    _px = _pos select 0;
    _py = _pos select 1;
    _mpx = _centerPos select 0;
    _mpy = _centerPos select 1;
    _ma = _dir;

    //Now, rotate point
    _rpx = ( (_px - _mpx) * cos(_ma) ) + ( (_py - _mpy) * sin(_ma) ) + _mpx;
    _rpy = (-(_px - _mpx) * sin(_ma) ) + ( (_py - _mpy) * cos(_ma) ) + _mpy;

[_rpx, _rpy, (_pos select 2)]
};


MB_fnc_SetRelPos = {
	private["_parent","_child","_offset","_dir","_localPos","_worldPos","_height"];
	_parent    = [_this,0,objNull,[objNull]] call BIS_fnc_param;
	_child     = [_this,1,objNull,[objNull]] call BIS_fnc_param;
	_offset    = [_this,2,[0,0,0],[[]]] call BIS_fnc_param;
	_height = [_this,3,0,[1]] call BIS_fnc_param;
	//_dir 	   = [_parent,_child] call BIS_fnc_relativeDirTo;


	//get the anchor position
	_localPos = [_parent worldToModel (getPosATL _parent),_offset] call BIS_fnc_vectorAdd; //vectorADD
	_worldPos = _parent modelToWorld _localPos;
	//_worldPos = ATLtoASL _worldPos;

	_child setPosATL [_worldPos select 0,_worldPos select 1, _height];
	//_child setDir ((getDir _parent) + _dir);
};

MB_fnc_colorVertices = {
	private["_pos","_grid","_xp","_yp","_index","_vertex"];
	_pos = [_this,0,[]] call bis_fnc_param;
	_grid = 4;
	_radius = 10;
	_vertices = [];
	if(isNil("MB_VertexHelpers")) then {
		MB_VertexHelpers = [];
	};
	
	_xp = (_pos select 0) - ((_pos select 0) mod _grid);
	_yp = (_pos select 1) - ((_pos select 1) mod _grid);
	_index = 0;
	_cols = [];
	for[{_dx=-_radius},{_dx<=_radius},{_dx=_dx+1}] do {
		_rows = [];
		for[{_dy=-_radius},{_dy<=_radius},{_dy=_dy+1}] do {
			//_vertex = "Sign_Sphere100cm_F" createvehicle [_x+_dx*_grid,_y+_dy*_grid,0];
			//_vertex setObjectTexture [0, "#(rgb,8,8,3)color(1,0,0,1)"];
			_vertex = [_xp+_dx*_grid,_yp+_dy*_grid,0.5];
			_rows pushBack _vertex;
		};
		_cols pushBack _rows;
	};
	MB_VertexHelpers = _cols;
};

//drawIcon3D ["targetIcon.paa", [1,1,1,1], getPos cursorTarget, 1, 1, 45, "Target", 1, 0.05, "TahomaB"];