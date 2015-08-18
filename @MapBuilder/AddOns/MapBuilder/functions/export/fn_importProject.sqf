private["_filename"];
	//startLoadingScreen ["Loading project..."];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Can't load a project without name!";};
	_projectFolder = ("MB_FileIO" callExtension "listfiles|projects");
	_projects = [_projectFolder,"|"] call BIS_fnc_splitString;
	if((_projects find format["%1.mbproj",_filename])==-1) exitwith {
		//Load old file here
		if((_projects find format["%1.mbp",_filename])==-1) then {
			systemChat "Error: Project not found!";
		} else {
			systemChat "Loading old project format.";
			[_filename] spawn MB_fnc_importProjectOld;
		};
	};
	[2,false] call MB_fnc_togglePopup;
	_path = ("MB_FileIO" callExtension format["open_r|projects\%1.mbproj",_filename]);
	systemChat format["Opening %1",_path];
	
	_line = "MB_FileIO" callExtension "readline";
	while{_line != "EOF"} do {
		private["_obj","_type","_layer","_pos","_dir","_pitch","_bank","_scale"];
		_arr = [_line] call MB_fnc_loadStoreArr;
		_lineType = (_arr select 0);
		switch (_lineType) do {
			case "object": {
				//Recreate an object
				_type = (_arr select 1) select 0;
				_vars =  (_arr select 1) select 1;
				_obj = [_type,_vars select 0] call MB_fnc_CreateObject;
				[_obj,_vars] call MB_fnc_setObjectVars;
			};
			case "favoriteObj": {
				//Load a favorited object
				_type = (_arr select 1) select 0;
				[_type] call MB_fnc_AddFavorite;
			};
			default { 
				systemChat format["Unknown project property: %1",_lineType]; 
			};
		};
		//systemchat format["[%1,%2,%3]",parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)];
		_line = "MB_FileIO" callExtension "readline";
	};
	systemChat ("MB_FileIO" callExtension "close");
	[] call MB_fnc_updateUsed;
	systemchat format["Project loaded/imported!"];