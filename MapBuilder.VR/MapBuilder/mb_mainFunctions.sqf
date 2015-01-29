#include "dik.hpp"

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
	MB_MousePosition = [0,0];
	MB_MousePositionDelta = [0,0];
	MB_CamPos = [[getpos player select 0, getpos player select 1,(getpos player select 2)+2],getdir player,0];//[X,Y,Z],Dir,Dive
	MB_Selected = [];
	MB_SelectedVertices = [];
	MB_CopyPaste = [];
	MB_SelectionRectangle = [];
	MB_CurClass = "Land_HBarrier_3_F";
	MB_Layers=[[[]]];
	MB_CurLayer = 0;
	MB_ClickedObject = objNull;
	MB_ClickedPosition = [];
	MB_ProjectName = "";
	MB_DataSource = "Array"; 
	MB_Modes = ["Object","Polygon"];
	MB_CurMode = 0;
	MB_DebugLines = [];
	MB_RegisterKeys = true;
	
	MB_SelectedPolyline = [];
	MB_PopupOpen = false; 
	
	MB_ObjectListNames = [];
	MB_ObjectLists = [];
};

//***************************************
//* Exit Function
//* Removed all handlers and restores the player view
//***************************************
MB_fnc_Exit = {
		["MB_Draw3D", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		["MB_MapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
		(findDisplay 123) displayRemoveAllEventHandlers "MouseMoving";
	
		player switchCamera "Internal";
		player enableSimulation true;
};

//***************************************
//* Start Function
//* Starts MB dialog and camera
//***************************************
MB_fnc_Start = {
	MBDialog = createDialog "MB_Main";
	[1,false] call MB_fnc_togglePopup;
	[2,false] call MB_fnc_togglePopup;
	[3,false] call MB_fnc_togglePopup;
	MBCamera = "camera" camCreate [0,0,0];
	MBCamera switchCamera "Internal";
	//MBCamera cameraEffect ["internal", "BACK"];
	player enableSimulation false;

	["MB_MapClick", "onMapSingleClick", {MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];}, []] call BIS_fnc_addStackedEventHandler;
	//((findDisplay 123) displayCtrl 170301) onDoubleClick "MBCamera camSetPos [_pos select 0, _pos select 1,getpos MBCamera select 2];";
	
	//(findDisplay 123) displayAddEventHandler  ["MouseButtonDown","_nil=_this call MB_fnc_MouseDown"];
	//(findDisplay 123) displayAddEventHandler  ["MouseButtonUp","_nil=_this call MB_fnc_MouseUp"];
	(findDisplay 123) displayAddEventHandler ["MouseMoving","_nil=_this call MB_fnc_MouseMove"];
	//(findDisplay 123) displayAddEventHandler ["MouseZChanged","_nil=_this call MB_fnc_MouseZ"];
	//(findDisplay 123) displayAddEventHandler ["KeyDown","_nil=_this call MB_fnc_KeyDown"];
	//(findDisplay 123) displayAddEventHandler ["KeyUp","_nil=_this call MB_fnc_KeyUp"];
	
	["MB_Draw3D", "onEachFrame", {call MB_fnc_Draw3D;}] call BIS_fnc_addStackedEventHandler;
	
	MB_RegisterKeys = true;
	[] call MB_fnc_refreshFilters;
	//[] call MB_Listbox_Categories_Refresh;
	[] spawn {
		while{dialog} do {
			[] call MB_fnc_updateCam;
			sleep 0.01;
		};
	};
};



//=========================================
//= Selection
//=========================================
MB_fnc_Select = {
	private["_object"];
	_object = _this select 0;
	_relPos = [0,0,0];
	_height = (getposATL _object) select 2;
	_dir = getdir _object;
	_pitchBank = _object call BIS_fnc_getPitchBank;
	if(count(MB_Selected)>0) then {
		_first = ((MB_Selected select 0) select 0);
		_relPos = _first worldToModel (getposASL _object);
	};
	MB_Selected set [count(MB_Selected),[_object,_relPos,_height,_dir,_pitchBank]];
	//systemchat format["%1",MB_Selected];
};
MB_fnc_Deselect = {
	private["_object","_newArray","_corners"];
	_object = _this select 0;
	_newArray = [];
	for "_i" from 0 to (count(MB_Selected)-1) do {
		if(((MB_Selected select _i) select 0) != _object) then {
			_newArray set [count(_newArray),(MB_Selected select _i)];
		};

	};
	MB_Selected = _newArray;	
};

MB_fnc_DeselectAll = {
	while{count(MB_Selected)>0} do {
		[((MB_Selected select 0) select 0)] call MB_fnc_Deselect;	
	};

};
MB_fnc_SelectInRectangle = {
	_cornerA = _this select 0;
	_cornerB = _this select 1;
	_layer = MB_Layers select MB_CurLayer;
	_layerObjects = _layer select 0;
	{
		_obj = _x;
		_opos = getpos _obj;
		_flag = true;
		if((_cornerA select 0)>(_cornerB select 0) &&
			((_opos select 0)>(_cornerA select 0) ||
			(_opos select 0)<(_cornerB select 0))) then {
				_flag = false;
			};
		if((_cornerA select 0)<(_cornerB select 0) &&
			((_opos select 0)<(_cornerA select 0) ||
			(_opos select 0)>(_cornerB select 0))) then {
				_flag = false;
			};
		if((_cornerA select 1)>(_cornerB select 1) &&
			((_opos select 1)>(_cornerA select 1) ||
			(_opos select 1)<(_cornerB select 1))) then {
				_flag = false;
			};
		if((_cornerA select 1)<(_cornerB select 1) &&
			((_opos select 1)<(_cornerA select 1) ||
			(_opos select 1)>(_cornerB select 1))) then {
				_flag = false;
			};
			if(_flag && !([_obj] call MB_fnc_isSelected)) then {
				[_obj] call MB_fnc_Select;
			} else {
				if(!_flag && ([_obj] call MB_fnc_isSelected)) then {
					[_obj] call MB_fnc_Deselect;
				};
			};
	} foreach _layerObjects;
};
MB_fnc_SelectUnderCursor = {
	private["_uX","_uY","_layer","_obj","_pos","_opos"];
	_uX = _this select 0;
	_uY = _this select 1;
	_pos = screenToWorld[_uX,_uY];
	_layer = MB_Layers select MB_CurLayer;
	_layerObjects = _layer select 0;
	_obj = objNull;
	_objects = lineIntersectsWith [getPosASL MBCamera, ATLtoASL screenToWorld [_uX,_uY], objNull, objNull, true];
	if(count(_objects)>0) then {
		_obj = _objects select 0;
	};
	//MB_DebugLines set [count(MB_DebugLines),[getPosASL MBCamera, ATLtoASL screenToWorld [_uX,_uY]]];
	//Check if one of the objects is in the active layer
	//{
	//	_tmpObj = _x;
	//	{
	//		if((_x select 0)==_tmpObj) exitwith {_obj=_tmpObj;};
	//	} foreach _layer;
	//	if(!isNull(_obj)) exitwith {};
	//} foreach _objects;
	
	//If no object found, try to select one by its baseline
	//if(isNull(_obj)) then {
	//	{
	//		_opos = [getpos _x select 0,getpos _x select 1,0];
	//		if((isNull _obj && (_opos distance _pos)<5) || (!(isNull _obj) &&(_obj distance _pos)>(_opos distance _pos))) then {
	//			_obj = _x;
	//		};
	//	} foreach _layerObjects;
	//};


	_obj
};

MB_fnc_isSelected = {
	private["_object","_newArray","_found"];
	_object = _this select 0;
	_found = false;
	for "_i" from 0 to (count(MB_Selected)-1) do {
		if(((MB_Selected select _i) select 0) == _object) exitwith {
			_found = true;
		};
	};
	_found
};
MB_fnc_Copy = {
	MB_CopyPaste = [];
	{
		MB_CopyPaste pushBack [typeof (_x select 0),(_x select 1),(_x select 2),(_x select 3),(_x select 4)];
	} foreach MB_Selected;
	systemChat format["Selection of %1 objects copied to clipboard.",count(MB_CopyPaste)];
};
MB_fnc_Paste = {
	[] call MB_fnc_DeselectAll;
	_objects = [screenToWorld MB_MousePosition,MB_CopyPaste] call MB_fnc_ReconstructSelection;
	{[_x] call MB_fnc_Select;} foreach _objects;
};

MB_fnc_ReconstructSelection = {
//MB_Selected set [count(MB_Selected),[_object,_relPos,_height,_dir,_pitchBank]];
	_pos = _this select 0;
	_selection = _this select 1;
	_createdObjects = [];
	_primaryObj = objNull;
	{
		_pos = [(_pos select 0) + ((_x select 1) select 0),
						(_pos select 1) + ((_x select 1) select 1),
						(_x select 2)];
		_created = [(_x select 0),_pos] call MB_fnc_CreateObject;
		if(isNull(_primaryObj)) then {
			_primaryObj = _created;
		};
		_created setposATL _pos;
		
		if(_primaryObj != _created) then {
			[_primaryObj,_created,(_x select 1),(_x select 2)] call MB_fnc_SetRelPos;
		};
		_created setdir (_x select 3);
		[_created,((_x select 4) select 0),((_x select 4) select 1)] call BIS_fnc_setPitchBank;
		_createdObjects pushBack _created;
	} foreach _selection;
	
	_createdObjects;
};


//=========================================
//= Modes
//=========================================


MB_fnc_ToggleMode = {
	MB_CurMode = MB_CurMode + 1;
	if(MB_CurMode>=count(MB_Modes)) then {
		MB_CurMode = 0;
	};
	systemchat format["%1-Mode now active",(MB_Modes select MB_CurMode)];
};
MB_fnc_Mode = {
	_mode = MB_Modes select MB_CurMode;
	_mode;
};
MB_fnc_isMode = {
	_mode = _this select 0;
	_index = MB_Modes find _mode;
	if(_index<0) exitwith {
		systemchat "Unknown Mode";
		false;
	};
	if(_index!=MB_CurMode) exitwith {
		false;
	};
	true;
};
//=========================================
//= Layer Depreciated
//=========================================
MB_fnc_LayerUpdateObject = {

};
MB_fnc_LayerHasObject = {

};
MB_fnc_LayerAddObject = {
	_object =[_this,0] call bis_fnc_param;
	_layerIndex = [_this,1] call bis_fnc_param;
	if(count(MB_Layers)-1 < _layerIndex) then {
		MB_Layers set[_layerIndex,[[]]];
	};
	_layer = MB_Layers select _layerIndex;
	_layerObjects = _layer select 0;
	_layerObjects pushBack _object;
	//_layer set [0,_layerObjects];
	//MB_Layers set [MB_CurLayer,_layer];
};
MB_fnc_LayerRemoveObject = {
	_object =[_this,0] call bis_fnc_param;
	_layerIndex = [_this,1] call bis_fnc_param;
	
	_layer = MB_Layers select _layerIndex;
	_layerObjects = _layer select 0;
	_layerObjects = _layerObjects - [_object];
	_layer set [0,_layerObjects];
};

//=========================================
//= Polyline
//=========================================

MB_fnc_StartPolyline = {
	if(count(MB_SelectedPolyline)==0) then {
		_vertex = [MB_ClickedPosition] call MB_fnc_CreatePolylineVertex;
		MB_SelectedPolyline set [0,[_vertex,[]]];
	} else {
		_vertex = [MB_ClickedPosition] call MB_fnc_CreatePolylineVertex;
		_lastVertex = (MB_SelectedPolyline select (count(MB_SelectedPolyline)-1)) select 0;
		_lineList = [getposATL _lastVertex,getposATL _vertex] call MB_fnc_CreateLine;
		MB_SelectedPolyline set[count(MB_SelectedPolyline),[_vertex,_lastVertex]]
	};
};
MB_fnc_CreatePolylineVertex = {
	_pos = _this select 0;
	_dir = [_this,1,0] call BIS_fnc_param;
	_height = [_this,2,0.25] call BIS_fnc_param;
	_color = [_this,3,[1,1,1,1],[[]]] call BIS_fnc_param;
	_vertex = "UserTexture1m_F" createVehicle _pos;
	_vertex setObjectTexture [0,format["#(argb,8,8,1)color(%1,%2,%3,%4)",_color select 0,_color select 1,_color select 2,_color select 3]];
	_vertex setposATL [_pos select 0, _pos select 1, _height];
	_vertex setdir _dir;
	[_vertex,-90,0] call BIS_fnc_SetPitchBank;
	_vertex;
};
MB_fnc_CreateLine = {
	_pos1 = _this select 0;
	_pos2 = _this select 1;
	_dir = [_pos1,_pos2] call BIS_fnc_dirTo;
	_distance = round([_pos1, _pos2] call BIS_fnc_Distance2D);
	_list = [];
	_vec = [((_pos2 select 0)-(_pos1 select 0))/_distance,((_pos2 select 1)-(_pos1 select 1))/_distance,0];
	for "_i" from 0 to _distance do {
		_vertex = [[(_pos1 select 0)+_i*(_vec select 0),(_pos1 select 1)+_i*(_vec select 1),0],_dir,0.1,[0,0,1,1]] call MB_fnc_CreatePolylineVertex;
		_list set[count(_list),_vertex];
	};
	_list
};
MB_fnc_FinishPolyline = {
	_layer = ((MB_Layers select MB_CurLayer) select 1);
	_layer set [count(_layer),MB_SelectedPolyline];
};
MB_fnc_DeletePolyline = {};

MB_fnc_DeleteCreatedPolyline = {};

//=========================================
//= Scene drawing
//=========================================

MB_fnc_Draw3D = {
	{
		[_x select 0] call MB_fnc_DrawBoundingBox;
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

[_rpx, _rpy, 0]
};


MB_fnc_SetRelPos = {
	private["_parent","_child","_offset","_dir","_localPos","_worldPos","_height"];

	_parent    = [_this,0,objNull,[objNull]] call BIS_fnc_param;
	_child     = [_this,1,objNull,[objNull]] call BIS_fnc_param;
	_offset    = [_this,2,[0,0,0],[[]]] call BIS_fnc_param;
	_height = [_this,3,0,[1]] call BIS_fnc_param;
	//_dir 	   = [_parent,_child] call BIS_fnc_relativeDirTo;


	//get the anchor position
	_localPos = [_parent worldToModel (getPosATL _parent),_offset] call BIS_fnc_vectorAdd;
	_worldPos = _parent modelToWorld _localPos;
	//_worldPos = ATLtoASL _worldPos;

	_child setPosATL [_worldPos select 0,_worldPos select 1, _height];
	//_child setDir ((getDir _parent) + _dir);

};
