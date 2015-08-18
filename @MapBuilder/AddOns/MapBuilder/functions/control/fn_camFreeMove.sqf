private["_delta","_dx","_dy"];
	_delta = _this select 0;
	_dx = (_delta select 0)*250;
	_dy = (_delta select 1)*250;
	//systemChat format["Mousemove: %1",_this];
	MB_CamPos set [1,(MB_CamPos select 1)+_dx];
	MB_CamPos set [2,((MB_CamPos select 2) - _dy) max -90 min +90];