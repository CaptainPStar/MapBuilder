	private["_uX","_uY","_layer","_obj","_objects","_shift","_isSelected"];
	_uX = _this select 2;
	_uY = _this select 3;
	_shift = _this select 4;
	_obj = objNull;
	_clickPos =  screenToWorld [_uX,_uY];
	_objects = [];
	
	
	_objects = lineIntersectsSurfaces [
		AGLToASL positionCameraToWorld [0,0,0], 
		AGLToASL _clickPos, 
		MBCamera
	];
	
	if(count(_objects)>0) then {
		_obj = (_objects select (count(_objects)-1)) select 2;
		systemchat format["%1",_obj];
		if(!isNull (_obj getvariable ["mb_BBattachedObject",objNull])) then {
			_obj = _obj getvariable "mb_BBattachedObject";
		};
	};
	_obj;