private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170500;
	
	if(!ctrlShown _ctrl) then {
		_ctrl ctrlShow true;
		
		_listbox = _display displayCtrl 170501;
		_presetFolder = ("MB_FileIO" callExtension "listfiles|presets");
		_presetFolder = [_presetFolder,"|"] call BIS_fnc_splitString;
		_presetFolder = _presetFolder - ["."];
		_presetFolder = _presetFolder - [".."];
		lbClear _listbox;
		{
			_name = [_x,"."] call BIS_fnc_splitString;
			_index =_listBox lbAdd (_name select 0);
			_listbox lbSetData [_index, (_name select 0)];
		} foreach _presetFolder;
		lbsort _listbox;
	} else {
		[] call MB_fnc_hidePresetWindow;
	};