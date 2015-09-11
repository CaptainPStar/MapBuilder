private["_objectsToImport","_confirmed"];
_objectsToImport = allMissionObjects "Static";

_confirmed = true;
_confirmed = [format["This will import %1 editor/script placed objects into this MB Project. Are you sure?",count(_objectsToImport)],0] call MB_fnc_showPopupDialog;

if(_confirmed) then {
{
	private["_obj","_pos","_yawpitchbank","_created"];
		if(!(_x in MB_Objects)) then {
			_obj = _x;
			_pos = getposATL _obj;
			_yawpitchbank = [(vectorDir _obj),(vectorUp _obj)] call MB_fnc_CalcEulerAngles;
			_created = [typeof _obj,_pos] call MB_FNC_CreateObject;
			
			deletevehicle _obj;
			
			_created setvariable["MB_ObjVar_PositionATL",_pos,false];
			_created setvariable["MB_ObjVar_Pitch",_yawpitchbank select 1,false];
			_created setvariable["MB_ObjVar_Bank",_yawpitchbank select 2,false];
			_created setvariable["MB_ObjVar_Yaw",_yawpitchbank select 0,false];
			_created setvariable["MB_ObjVar_Simulate",false,false];
			_created setvariable["MB_ObjVar_Locked",false,false];
			_created setvariable["MB_ObjVar_Scale",1,false];
			
			[_created,true] call MB_fnc_UpdateObject;
		};
	} foreach _objectsToImport;
};
