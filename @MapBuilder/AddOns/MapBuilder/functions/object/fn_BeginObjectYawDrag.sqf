private["_yaw","_obj","_pos"];
	

if((_this select 5)) then {
	MB_ObjectChangeYawRotationCenter = MB_MousePosition;
} else {
	if(isNull(MB_ClickedObject)) then {
		MB_ObjectChangeYawRotationCenter =[] call MB_fnc_calcSelectionCenter;
	} else {
		MB_ObjectChangeYawRotationCenter = MB_ClickedObject getvariable "MB_ObjVar_PositionATL";
	};
};
{
	_obj = _x;
	_yaw = _obj getvariable "MB_ObjVar_Yaw";
	_pos = _obj getvariable "MB_ObjVar_PositionATL";
	MB_ObjectChangeYawSelection pushBack [_obj,_yaw,_pos];
} foreach MB_Selected;