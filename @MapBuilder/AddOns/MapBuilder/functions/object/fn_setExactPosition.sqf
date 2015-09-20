private["_exactPos","_object","_offset","_xcord","_xcordAC","_ycord","_ycordAC","_tempArray","_zcord","_zcordAC","_pos"];
	_obj = [_this,0] call bis_fnc_param;
	_exactPos = [_this,1] call bis_fnc_param;

	_xcord = ((_exactPos select 0) splitString ".") select 0;
	_xcordAC = ((_exactPos select 0) splitString ".") select 1;
	_ycord = ((_exactPos select 1) splitString ".") select 0;
	_ycordAC = ((_exactPos select 1) splitString ".") select 1;
	_zcord = (_exactPos select 2);
	
	
	call compile format["%1 setvariable [""MB_ObjVar_PositionATL"",[%2.%3,%4.%5,%6],false];",
		_obj,
		_xcord,_xcordAC, 
		_ycord, _ycordAC, 
		_zcord];
	
	call compile format["%1 setposATL [%2.%3,%4.%5,%6];",
		_obj,
		_xcord,_xcordAC, 
		_ycord, _ycordAC, 
		_zcord];
