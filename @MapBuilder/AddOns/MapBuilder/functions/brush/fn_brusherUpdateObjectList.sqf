private["_display","_ctrl"];
	disableSerialization;
	_selectNewest = param[0,false];
	_display = uinamespace getvariable 'mb_main_dialog';

	_ctrl = _display displayCtrl 171202;
	tvClear 171202;
	{
		_types = (_x select 0);
		_name = "";
		{
			_name = _name + format["%1",_x];
			if(_forEachIndex<(count(_types)-1)) then {
			_name = _name + ", ";
			};
		} foreach _types;
		//_model = [(configFile >> "CfgVehicles" >> (_x select 0) ),"model",""] call BIS_fnc_returnConfigEntry;
		_path = _ctrl tvAdd [[],_name];
	} foreach MB_CurBrush;
	if(_selectNewest) then {
		_ctrl tvSetCurSel [_path];
	} else {
		if(count(MB_CurBrush)>0) then {
			_ctrl tvSetCurSel [0];
		};
	}
