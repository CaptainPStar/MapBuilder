MB_fnc_hidePresetWindow = {
	private["_display","_ctrl"];
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_ctrl = _display displayCtrl 170500;
	_ctrl ctrlShow false;
};
MB_fnc_showPresetWindow = {
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
	
};

MB_fnc_savePreset = {
	private["_filename","_pos","_zPos","_dir","_pitch","_bank","_scale","_layer","_type","_refObj"];
	startLoadingScreen ["Saving preset..."];
	_filename = [_this,0,"Unknown_Preset"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Preset needs a name!";endLoadingScreen;};
	MB_ProjectName = _filename;
	[] call MB_fnc_hidePresetWindow;
	_path = ("MB_FileIO" callExtension format["open_w|presets\%1.mbpre",_filename]);
	systemChat format["Opening %1",_path];
	_count = 0;
	_refObj = objNull;
	{
		if(!isNull(_x)) then {
			_obj = _x;
			_type =(typeof _obj);
			
			_scale = 1;

			_pos = _obj getvariable "MB_ObjVar_PositionATL";
			_pitch = _obj getvariable "MB_ObjVar_Pitch";
			_bank = _obj getvariable "MB_ObjVar_Bank";
			_yaw = _obj getvariable "MB_ObjVar_Yaw";
			_simulate = _obj getvariable "MB_ObjVar_Simulate";
			_locked = _obj getvariable "MB_ObjVar_Locked";
			_offset = [0,0,0];
			if(isNull(_refObj)) then {
				_refObj = _obj;
			} else {
				_offset = _pos vectorDiff (_refObj getvariable "MB_ObjVar_PositionATL");
			};
			_layer = 0;
			_string = format["write|%1;%2;%3;%4;%5;%6;%7;%8;%9",_layer,_type,(_offset select 0),(_offset select 1),(_offset select 2),_yaw,_pitch,_bank,_scale];
			systemChat _string;
			systemChat ("MB_FileIO" callExtension _string);
		};
		_count = _count + 1;
		//progressLoadingScreen (_count/count(MB_Selected));
	} foreach MB_Selected;
	systemChat ("MB_FileIO" callExtension "close");
	systemchat format["Preset saved!"];
	endLoadingScreen;
};
MB_fnc_loadPreset = {
	private["_filename"];
	startLoadingScreen ["Loading preset..."];
	_filename = [_this,0,""] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Can't load a project without name!";endLoadingScreen;};
	_presetFolder = ("MB_FileIO" callExtension "listfiles|presets");
	_presets = [_presetFolder,"|"] call BIS_fnc_splitString;
	if((_presets find format["%1.mbpre",_filename])==-1) exitwith {systemChat "Error: Preset not found!"};
		[] call MB_fnc_hidePresetWindow;
	_path = ("MB_FileIO" callExtension format["open_r|presets\%1.mbpre",_filename]);
	systemChat format["Opening %1",_path];
	
	_line = "MB_FileIO" callExtension "readline";
	MB_CopyPaste = [];
	while{_line != "EOF"} do {
		private["_obj","_type","_layer","_offset","_dir","_pitch","_bank","_scale","_simulate"];
		systemChat _line;
		_object = [_line,";"] call BIS_fnc_splitString;
		systemChat format["%1",_object];
		_type = (_object select 1);
		_offset = [parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)]; //Position
		_layer = parseNumber (_object select 0);//Layer
		_dir =	parseNumber (_object select 5);	//Dir
		_pitch = parseNumber (_object select 6);	//Pitch
		_bank =	parseNumber (_object select 7);	//Bank
		_scale=	parseNumber (_object select 8); //Scale
		//[_pos,_pitch,_bank,_yaw,_simulate,_locked];
		_simulate = ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170011);
		MB_CopyPaste pushBack [_type,_offset,[[0,0,0],_pitch,_bank,_dir,_simulate,0]];

		_line = "MB_FileIO" callExtension "readline";
	};
	systemChat ("MB_FileIO" callExtension "close");
	endLoadingScreen;
};

MB_fnc_PresetSelect = {
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_list = _display displayCtrl 170501;
    _index = lbCurSel 170501;
    _name = lbData [170501, _index];
	(_display displayCtrl 170502) ctrlSetText _name;
};