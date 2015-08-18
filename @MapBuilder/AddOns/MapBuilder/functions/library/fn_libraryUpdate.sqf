private["_node","_path","_name","_value","_index","_newPath","_ctrl","_display"];
	disableSerialization;
	_node = [_this,0,[]] call bis_fnc_param;
	_path = [_this,1,[]] call bis_fnc_param;
	{
		_name = _x select 0;
		_value = _x select 1;
		_newPath = [] + _path;
		_index = tvAdd [170003,_path,_name];
		_newPath set[count(_newPath),_index];
		if(typename _value == "ARRAY") then {
			tvSetData [170003,_newPath,""];
			[_value,_newPath] call MB_fnc_libraryUpdate;
		};
		if(typename _value == "STRING") then {
			tvSetData [170003,_newPath,_value];
		};
	} foreach _node;
	if(count _path >0) then {
		_display = uinamespace getvariable 'mb_main_dialog';
		_ctrl = _display displayCtrl 170003;
		_ctrl tvSort [ _path, false];
	} else {
		tvExpand [170003, [0]];
	};