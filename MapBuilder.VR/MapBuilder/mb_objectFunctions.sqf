#include "dik.hpp"

//=========================================
//= Object Manipulation
//=========================================

MB_fnc_CreateObjectByClick = {
	private["_pos"];
	_pos = [_this,0] call bis_fnc_param;
	systemchat format["New Obj at %1",_pos];
	[MB_CurClass,_pos] call MB_fnc_CreateObject;
	[] call MB_fnc_updateUsed;
};

MB_fnc_CreateObject = {
	private["_obj","_class","_pos","_dir","_uid","_var"];
	_class = [_this,0] call bis_fnc_param;
	_pos = [_this,1] call bis_fnc_param;
	_uid =  [_this,2,-1] call bis_fnc_param;
	
	if(_uid == -1) then {
		_uid = MB_NUID;
		MB_NUID = MB_NUID + 1;
		publicVariable "MB_NUID";
	} else {
		if((count(MB_Objects)-1)>=_uid) then {
			if(!isNull(MB_Objects select _uid)) then {
				systemChat format["Error: Object with ID %1 can't be created. Already exists.",_uid];
				_uid = -1;
			};
		};
	};
	if(_uid>=0) then {
		_obj = _class createvehiclelocal _pos;
		_obj setpos _pos;
		_var = format["MB_Object_UID%1",_uid];
		_obj setvehiclevarname _var;
		call compile format["%1 = _obj;",_var];
		_obj setvariable["MB_ObjVar_UID",_uid,false];
		MB_Objects set[_uid,_obj];
		[_obj] call MB_fnc_InitObject;
		if(isMultiplayer) then {
			[_obj] call MB_fnc_syncObject;
		};
	} else {
		_obj = objNull;
	};
	_obj;
};
MB_fnc_InitObject = {
	private["_obj","_pos","_yaw","_pitch","_bank","_simulate","_locked"];
	_obj = [_this,0] call bis_fnc_param;
	_pos = getposATL _obj;
	_yaw = 0;
	if(ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170010)) then {
		_yaw = random 360;
	};
	_pitch = 0;
	_bank = 0;
	_simulate = ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170011);
	_locked = false;
	_obj setvariable["MB_ObjVar_PositionATL",_pos,false];

	_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
	_obj setvariable["MB_ObjVar_Bank",_bank,false];
	_obj setvariable["MB_ObjVar_Yaw",_yaw,false];
	
	_obj setvariable["MB_ObjVar_Simulate",_simulate,false];
	_obj setvariable["MB_ObjVar_Locked",_locked,false];
	
	[_obj] call MB_fnc_UpdateObject;
};

MB_fnc_UpdateObject = {
	private["_obj","_pos","_pitch","_bank","_yaw","_simulate","_locked"];
	_obj = [_this,0] call bis_fnc_param;
	
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	_pitch = _obj getvariable "MB_ObjVar_Pitch";
	_bank = _obj getvariable "MB_ObjVar_Bank";
	_yaw = _obj getvariable "MB_ObjVar_Yaw";
	_simulate = _obj getvariable "MB_ObjVar_Simulate";
	_locked = _obj getvariable "MB_ObjVar_Locked";
	
	_obj setposATL _pos;
	[_obj,[_pitch,_bank,_yaw]] call MB_fnc_SetPitchBankYaw;
	_obj setposATL _pos;
	_obj enableSimulation _simulate;
	
};
MB_fnc_getObjectVars = {
	private["_obj","_pos","_pitch","_bank","_yaw","_simulate","_locked","_return"];
	_obj = [_this,0] call bis_fnc_param;
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	_pitch = _obj getvariable "MB_ObjVar_Pitch";
	_bank = _obj getvariable "MB_ObjVar_Bank";
	_yaw = _obj getvariable "MB_ObjVar_Yaw";
	_simulate = _obj getvariable "MB_ObjVar_Simulate";
	_locked = _obj getvariable "MB_ObjVar_Locked";
	_return = [_pos,_pitch,_bank,_yaw,_simulate,_locked];
	_return;
};
MB_fnc_setObjectVars = {
	private["_obj","_vars"];
	_obj = [_this,0] call bis_fnc_param;
	_vars = [_this,1] call bis_fnc_param;
	
	_obj setvariable["MB_ObjVar_PositionATL",(_vars select 0),false];

	_obj setvariable["MB_ObjVar_Pitch",(_vars select 1),false];
	_obj setvariable["MB_ObjVar_Bank",(_vars select 2),false];
	_obj setvariable["MB_ObjVar_Yaw",(_vars select 3),false];
	
	_obj setvariable["MB_ObjVar_Simulate",(_vars select 4),false];
	_obj setvariable["MB_ObjVar_Locked",(_vars select 5),false];
	[_obj] call MB_fnc_UpdateObject;
};


MB_fnc_MoveSelected = {
	private["_initialMousePos","_offset","_pos","_relPos","_height","_delta"];
	_delta  = [_this,0] call bis_fnc_param;
		_delta set [2,0];

		{
		
			_opos = _x getvariable "MB_ObjVar_PositionATL";
			_npos = _opos vectorAdd _delta;
			_x setvariable ["MB_ObjVar_PositionATL",_npos,false];
			[_x] call MB_fnc_UpdateObject;
		} foreach MB_Selected;
	//};
};
MB_fnc_RotateSelected = {
	private["_rotateCenter","_rot","_"];
	_rot = _this select 0;
	if(isNull(MB_ClickedObject)) then {
		_rotateCenter = (MB_Selected select 0) getvariable "MB_ObjVar_PositionATL";
	} else {
		_rotateCenter = MB_ClickedObject getvariable "MB_ObjVar_PositionATL";
	};
	if(([DIK_LSHIFT] call MB_fnc_isPressed)) then {
		_rotateCenter = MB_ClickedPosition;
	};	
	{
		private["_dir","_relPos","_pos"];
		
		_dir = _x getvariable ["MB_ObjVar_Yaw",0];
		_dir = _dir + _rot;
		
		_pos = _x getvariable "MB_ObjVar_PositionATL";
		
		_relPos = [_rotateCenter,_pos,_rot] call MB_fnc_RotatePos;
		_relPos set[2,(_pos select 2)];
		systemChat format["ROTATE: %1 (Delta: %2)",_dir,_rot];
		_x setvariable ["MB_ObjVar_PositionATL",_relPos,false];
		_x setvariable ["MB_ObjVar_Yaw",_dir,false];
		[_x] call MB_fnc_UpdateObject;
	} foreach MB_Selected;
};
MB_fnc_ChangeHeightSelected = {
	private["_delta","_pos","_obj"];
	_delta = _this select 0;	
	{
		_obj = _x;
		_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_pos = [_pos select 0, _pos select 1,(_pos select 2)-_delta];
		_obj setvariable ["MB_ObjVar_PositionATL",_pos,false];
		[_obj] call MB_fnc_UpdateObject;
	} foreach MB_Selected;	
};
MB_fnc_ChangePitchBankSelected = {
	private["_dx","_dy","_obj","_pitch","_bank"];
	_dx = _this select 0;
	_dy = _this select 1;
	{
		_obj = _x;
		_pitch = _obj getvariable ["MB_ObjVar_Pitch",0];
		_bank = _obj getvariable ["MB_ObjVar_Bank",0];

		_pitch = _pitch+_dy;
		_bank = _bank +_dx; 
		if(_pitch>180) then {
			_pitch = 180;
		};
		if(_bank>180) then {
			_bank = 180;
		};
		if(_pitch<-180) then {
			_pitch = -180;
		};
		if(_bank<-180) then {
			_bank = -180;
		};
		
		_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
		_obj setvariable["MB_ObjVar_Bank",_bank,false];
		[_obj] call MB_fnc_UpdateObject;
	} foreach MB_Selected;	
};
MB_fnc_DeleteSelected = {
	_selected = MB_selected;
	{
		[_x] call MB_fnc_DeleteObject;
	} foreach _selected;
};
MB_fnc_DeleteObject = {
	private["_obj","_objArray","_index"];
	_obj = _this select 0;
	[_obj] call MB_fnc_Deselect;
	_index = MB_Objects find _obj;
	if(_index >= 0) then {
		MB_Objects set[_index,ObjNull];
		deletevehicle _obj;
		[_index] call MB_fnc_syncDelete;
		[] call MB_fnc_updateUsed;
	};
};
MB_fnc_DeleteAllObjects = {
	private["_obj","_objArray","_layer"];
	{
		[_x] call MB_fnc_DeleteObject;
	} foreach MB_Objects;
};
MB_fnc_matchSurfaceNormals = {
	{
		(_x select 0) setVectorUp surfaceNormal position (_x select 0);
	} foreach MB_Selected;
};
MB_fnc_resetOrientation = {
	{
		_x setvariable["MB_ObjVar_Pitch",0,false];
		_x setvariable["MB_ObjVar_Bank",0,false];
		_x setvariable["MB_ObjVar_Yaw",0,false];
		[_obj] call MB_fnc_UpdateObject;
	} foreach MB_Selected;
};
MB_fnc_SetPitchBankYaw = { 
	//From https://community.bistudio.com/wiki/setVectorDirAndUp
    private ["_object","_rotations","_aroundX","_aroundY","_aroundZ","_dirX","_dirY","_dirZ","_upX","_upY","_upZ","_dir","_up","_dirXTemp",
    "_upXTemp"];
    _object = _this select 0; 
    _rotations = _this select 1; 
    _aroundX = _rotations select 0; 
    _aroundY = _rotations select 1; 
    _aroundZ = (360 - (_rotations select 2)) - 360; 
    _dirX = 0; 
    _dirY = 1; 
    _dirZ = 0; 
    _upX = 0; 
    _upY = 0; 
    _upZ = 1; 
    if (_aroundX != 0) then { 
        _dirY = cos _aroundX; 
        _dirZ = sin _aroundX; 
        _upY = -sin _aroundX; 
        _upZ = cos _aroundX; 
    }; 
    if (_aroundY != 0) then { 
        _dirX = _dirZ * sin _aroundY; 
        _dirZ = _dirZ * cos _aroundY; 
        _upX = _upZ * sin _aroundY; 
        _upZ = _upZ * cos _aroundY; 
    }; 
    if (_aroundZ != 0) then { 
        _dirXTemp = _dirX; 
        _dirX = (_dirXTemp* cos _aroundZ) - (_dirY * sin _aroundZ); 
        _dirY = (_dirY * cos _aroundZ) + (_dirXTemp * sin _aroundZ);        
        _upXTemp = _upX; 
        _upX = (_upXTemp * cos _aroundZ) - (_upY * sin _aroundZ); 
        _upY = (_upY * cos _aroundZ) + (_upXTemp * sin _aroundZ); 		
    }; 
    _dir = [_dirX,_dirY,_dirZ]; 
    _up = [_upX,_upY,_upZ]; 
    _object setVectorDirAndUp [_dir,_up]; 
};  