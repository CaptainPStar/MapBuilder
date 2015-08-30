	private["_data"];
	_display = uinamespace getvariable 'mb_main_dialog';
	_path = (tvCurSel (_display displayCtrl 171202));
	_data = [];
	_index = 0;
	if(count(_path)>0) then {
		_index = _path select 0;
		if(_index < count(MB_CurBrush)) then {
			_data = MB_CurBrush select _index;
		};
	};
	
	tvClear 171219;
	{
		_path = (_display displayCtrl 171219) tvAdd [[],_x];
	} foreach (_data select 0);
	
	if(count(_data select 0)>0) then {
		(_display displayCtrl 171219) tvSetCurSel [0];
	};