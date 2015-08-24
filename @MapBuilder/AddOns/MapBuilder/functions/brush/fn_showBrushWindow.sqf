private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 171200;
	
	if(!ctrlShown _ctrl) then {
		[171200,false] spawn MB_fnc_openWindow;
		_display = uinamespace getvariable 'mb_main_dialog';
		_listbox = _display displayCtrl 171201;
		_brushFolder = ("MB_FileIO" callExtension "listfiles|brushes");
		_brushFiles = [_brushFolder,"|"] call BIS_fnc_splitString;
		_brushFiles = _brushFiles - ["."];
		_brushFiles = _brushFiles - [".."];
		tvClear _listbox;
		{
			_name = [_x,"."] call BIS_fnc_splitString;
			_index =_listBox tvAdd [[],(_name select 0)];
			_listbox tvSetData [[_index], (_name select 0)];
		} foreach _brushFiles;
		_listbox tvSort[[], false];
		
		[false] call mb_fnc_brusherUpdateObjectList;
		
	} else {
		[171200,false] spawn MB_fnc_closeWindow;
	};
	
