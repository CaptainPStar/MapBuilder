private["_display","_ctrl"];
	disableSerialization;
	_select = param[0,"New"];
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 171202;
	_path = [0];
	
	(_display displayCtrl 171221) ctrlSetText format["%1",MB_BrushWidth];
	(_display displayCtrl 171222) ctrlSetChecked MB_BrushCamFollow;
	(_display displayCtrl 171223) ctrlSetChecked MB_BrusherLockDir;
	if(_select == "Cur") then {
		_path = tvCurSel _ctrl;
	};
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
		_npath = _ctrl tvAdd [[],_name];
		if(_select == "New") then {
			_path = [_npath];
		};
	} foreach MB_CurBrush;

	if(count(MB_CurBrush)>0) then {
		_ctrl tvSetCurSel _path;
		[_ctrl] call MB_fnc_brusherUpdateObjectPanel;
	};

