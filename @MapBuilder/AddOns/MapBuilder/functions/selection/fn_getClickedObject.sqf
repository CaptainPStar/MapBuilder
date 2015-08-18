	private["_uX","_uY","_layer","_obj","_objects","_shift","_isSelected"];
	_uX = _this select 2;
	_uY = _this select 3;
	_shift = _this select 4;
	_obj = objNull;
	_clickPos =  screenToWorld [_uX,_uY];
	_castPos = [0,0,0];
	_objects = [];
	if(surfaceIsWater _clickPos) then {
		_campos = getPosASL MBCamera;
		_castPos = _clickPos;
		_directionVec = [0,0,0];
		_from = [0,0,0];
		if((_campos select 2) > 0) then {
			_directionVec = _campos vectorFromTo (positionCameraToWorld [0,0,1]); 
			_objects = lineIntersectsObjs [getPosASL MBCamera, _castPos, objNull, objNull, true, 16];
			_from = _castPos;
		} else {
			_directionVec = _campos vectorFromTo _castPos; 
			_from = _campos;
		};

		_to = _from vectorAdd _directionVec;

		
		while{!terrainIntersectASL[ASLtoATL _from,ASLtoATL _to] && count(_objects)==0 && (_to select 2)<=0} do {
			_underWaterObj = lineIntersectsObjs [_from, _to, objNull, objNull, true, 1];
			_from = _to;
			_to = _to vectorAdd _directionVec;
			_objects = _underWaterObj;
			if(count(_underWaterObj)>0) exitwith {
				_objects = _underWaterObj;
			};
		};
		//_deepth = -((ASLtoATL _clickPos) select 2);
		//_castPos set[2,_deepth];
		//terrainIntersect
	} else {
		_castPos = ATLtoASL _clickPos;
		_objects = lineIntersectsObjs [getPosASL MBCamera, _castPos, objNull, objNull, true, 16];
	};
	if(count(_objects)>0) then {
		_obj = _objects select (count(_objects)-1);
	};
	_obj;