private["_obj","_direction","_box","_dir","_pos"];
	_obj = [_this,0,[],[[],objNull]] call bis_fnc_param; 
	
	if(typename _obj == "OBJECT") then {
		//_dir = _obj getvariable "MB_ObjVar_Yaw";
		//_pos = _obj getvariable "MB_ObjVar_PositionATL";
		_box = boundingBoxReal _obj;
	} else {
		//_dir = 0;
		//_pos = MB_SelectionCenter;
	};
	
	_p1 = _box select 0;
	_p2 = _box select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2));
	
	
	_return = [_maxLength,_maxWidth,_maxHeight];
	_return;