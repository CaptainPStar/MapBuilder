private["_filename"];
	
	_filename = [_this,0,""] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Can't load a project without name!";};
	
	if(!(["presets",format["%1.mbpre",_filename]] call MB_FNC_FileExists)) exitwith {
		systemChat "Error: Preset not found!";
	};
	startLoadingScreen ["Loading preset..."];
	_path = ("MB_FileIO" callExtension format["open_r|presets\%1.mbpre",_filename]);
	systemChat format["Opening %1",_path];
	_line = "MB_FileIO" callExtension "readline";
	MB_CopyPaste = [];
	while{_line != "EOF"} do {
		private["_obj","_type","_layer","_offset","_dir","_pitch","_bank","_scale","_simulate"];
		_object = [_line,";"] call BIS_fnc_splitString;
		_type = (_object select 1);
		_offset = [parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)]; //Position
		_layer = parseNumber (_object select 0);//Layer
		_dir =	parseNumber (_object select 5);	//Dir
		_pitch = parseNumber (_object select 6);	//Pitch
		_bank =	parseNumber (_object select 7);	//Bank
		_scale=	parseNumber (_object select 8); //Scale
		//[_pos,_pitch,_bank,_yaw,_simulate,_locked];
		_simulate = ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170011);
		MB_CopyPaste pushBack [_type,_offset,[[0,0,0],_pitch,_bank,_dir,_simulate,false,_scale]];

		_line = "MB_FileIO" callExtension "readline";
	};
	"MB_FileIO" callExtension "close";
	endLoadingScreen;
	[170500,false] call MB_fnc_closeWindow;