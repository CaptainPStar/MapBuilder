	private["_uid","_obj"];
	_uid = [_this,0] call bis_fnc_param;
	_obj = MB_Objects select _uid;
	if(!isNull(_obj)) then {
		deletevehicle _obj;
		MB_Objects set[_uid,objNull];
		systemChat format["Remotedelete of object %1",_uid];
	};