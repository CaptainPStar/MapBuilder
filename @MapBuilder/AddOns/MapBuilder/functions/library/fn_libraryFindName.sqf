private["_array","_return","_index"];
	_array = [_this,0,[]] call bis_fnc_param;
	_key = [_this,1,""] call bis_fnc_param; 
	_index = [_this,2,0] call bis_fnc_param;
	_return = -1;
	{
		if((_x select _index) == _key) exitwith {
			_return = _forEachIndex;
		};
	} foreach _array;
	_return;