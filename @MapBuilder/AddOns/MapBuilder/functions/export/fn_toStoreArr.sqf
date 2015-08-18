private["_key","_array","_return"];
	_key = [_this,0,"unknown"] call bis_fnc_param;
	_array = [_this,1,[]] call bis_fnc_param;
	_return = format["[""%1"",%2]",_key,_array];
	_return;