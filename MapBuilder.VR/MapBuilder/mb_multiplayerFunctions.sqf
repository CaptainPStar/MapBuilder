MB_syncVar_Object = [];
"MB_syncVar_Object" addPublicVariableEventHandler {
	(_this select 1) call MB_fnc_syncRemoteObject;
};

MB_syncVar_DeleteObject = -1;
"MB_syncVar_DeleteObject" addPublicVariableEventHandler {
	[_this select 1] call MB_fnc_remoteDelete;
};
MB_fnc_syncObject = {
	private["_obj","_uid","_pos","_pitch","_bank","_yaw","_simulate","_locked","_owner"];
	_obj = _this select 0;
	_uid = MB_Objects find _obj;
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	_pitch = _obj getvariable "MB_ObjVar_Pitch";
	_bank = _obj getvariable "MB_ObjVar_Bank";
	_yaw = _obj getvariable "MB_ObjVar_Yaw";
	_simulate = _obj getvariable "MB_ObjVar_Simulate";
	_locked = _obj getvariable "MB_ObjVar_Locked";
	_owner = owner _obj;
	if(_uid>=0) then {
		systemChat format["Sending sync of %1",_uid];
		MB_syncVar_Object = [typeof _obj,_uid,_pos,_pitch,_bank,_yaw,_simulate,_locked, _owner];
		publicVariable "MB_syncVar_Object";
		
		//[_params, "MB_fnc_syncRemoteObject", true, false, false] call BIS_fnc_MP;
	};
};

MB_fnc_syncRemoteObject = {
	private["_type","_uid","_pos","_pitch","_bank","_yaw","_simulate","_locked","_create"];
	_type = [_this,0] call bis_fnc_param;
	_uid = [_this,1] call bis_fnc_param;
	_pos = [_this,2] call bis_fnc_param;
	_pitch = [_this,3] call bis_fnc_param;
	_bank = [_this,4] call bis_fnc_param;
	_yaw = [_this,5] call bis_fnc_param;
	_simulate = [_this,6] call bis_fnc_param;
	_locked = [_this,7] call bis_fnc_param; 
	_create = false;
	
	systemChat format["Receiving Sync of %1",_uid];

	
	if((count(MB_Objects)-1)>=_uid) then {
		if(isNull(MB_Objects select _uid)) then {
			_create = true;
		};
	} else {
		_create = true;
	};
	_obj = objNull;
	if(_create) then {
		_obj = [_type,_pos,_uid,false] call MB_fnc_CreateObject;
	} else {
		_obj = MB_Objects select _uid;
	};
	if(!isNull(_obj)) then {
		_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
		_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
		_obj setvariable["MB_ObjVar_Bank",_bank,false];
		_obj setvariable["MB_ObjVar_Yaw",_yaw,false];	
		_obj setvariable["MB_ObjVar_Simulate",_simulate,false];
		_obj setvariable["MB_ObjVar_Locked",_locked,false];
		[_obj,false] call MB_fnc_UpdateObject;
	} else {
		systemChat "Error while creating a remote objects!";
	};
};
MB_fnc_syncDelete = {
	private["_uid"];
	_uid = [_this,0] call bis_fnc_param;
	//[[_uid], "MB_fnc_remoteDelete", true, false, false] call BIS_fnc_MP;
	MB_syncVar_DeleteObject = _uid;
	publicVariable "MB_syncVar_DeleteObject";
};
MB_fnc_remoteDelete = {
	private["_uid","_obj"];
	_uid = [_this,0] call bis_fnc_param;
	_obj = MB_Objects select _uid;
	if(!isNull(_obj)) then {
		deletevehicle _obj;
		MB_Objects set[_uid,objNull];
		systemChat format["Remotedelete of object %1",_uid];
	};
};