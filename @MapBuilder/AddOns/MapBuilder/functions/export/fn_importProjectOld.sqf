private["_filename"];
	startLoadingScreen ["Loading project..."];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Can't load a project without name!";endLoadingScreen;};
	_projectFolder = ("MB_FileIO" callExtension "listfiles|projects");
	_projects = [_projectFolder,"|"] call BIS_fnc_splitString;
	if((_projects find format["%1.mbp",_filename])==-1) exitwith {systemChat "Error: Project not found!"};
	[2,false] call MB_fnc_togglePopup;
	_path = ("MB_FileIO" callExtension format["open_r|projects\%1.mbp",_filename]);
	systemChat format["Opening %1",_path];
	
	_line = "MB_FileIO" callExtension "readline";
	while{_line != "EOF"} do {
		private["_obj","_type","_layer","_pos","_dir","_pitch","_bank","_scale"];
		systemChat _line;
		_object = [_line,";"] call BIS_fnc_splitString;
		systemChat format["%1",_object];
		_type = (_object select 1);
		_pos = [parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)]; //Position
		_layer = parseNumber (_object select 0);//Layer
		_dir =	parseNumber (_object select 5);	//Dir
		_pitch = parseNumber (_object select 6);	//Pitch
		_bank =	parseNumber (_object select 7);	//Bank
		_scale=	parseNumber (_object select 8); //Scale
		
		_obj = [_type,_pos] call MB_fnc_CreateObject;
		_obj setvariable["MB_ObjVar_PositionATL",_pos,false];
		_obj setvariable["MB_ObjVar_Pitch",_pitch,false];
		_obj setvariable["MB_ObjVar_Bank",_bank,false];
		_obj setvariable["MB_ObjVar_Yaw",_dir,false];

		[_obj] call MB_fnc_UpdateObject;
		
		//systemchat format["[%1,%2,%3]",parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)];
		_line = "MB_FileIO" callExtension "readline";
	};
	systemChat ("MB_FileIO" callExtension "close");
	[] call MB_fnc_updateUsed;
	endLoadingScreen;