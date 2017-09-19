disableSerialization;

private["_filename"];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Can't load a project without name!";};

	if(!(["projects",format["%1.mbproj",_filename]] call MB_FNC_FileExists)) exitwith {
		systemChat "Error: Project not found!";
	};

	startLoadingScreen [format["Loading project from %1.mbproj",_filename],"MB_LoadingScreen"];
	_path = ("MB_FileIO" callExtension format["open_r|projects\%1.mbproj",_filename]);
	systemChat format["Opening %1",_path];

	_line = "MB_FileIO" callExtension "readline";
	while{_line != "EOF"} do {
		private["_obj","_type","_layer","_pos","_dir","_pitch","_bank","_scale","_exactPos"];
		_arr = [_line] call MB_fnc_loadStoreArr;
		_lineType = (_arr select 0);
		switch (_lineType) do {
			case "object": {
				//Recreate an object
				_type = (_arr select 1) select 0;
				_vars =  (_arr select 1) select 1;
				_obj = [_type,_vars select 0] call MB_fnc_CreateObject;
				if(!isNull _obj) then {
					[_obj,_vars] call MB_fnc_setObjVars;
					if(count((_arr select 1)) > 2) then {
						_exactPos =  (_arr select 1) select 2;
						[_obj,_exactPos] call MB_FNC_SetExactPosition;
					};
				};
			};
			case "favoriteObj": {
				//Load a favorited object
				_type = (_arr select 1) select 0;
				['add', [_type]] call MB_fnc_updateFavorites;
			};
			default {
				systemChat format["Unknown project property: %1",_lineType];
			};
		};
		//systemchat format["[%1,%2,%3]",parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)];
		_line = "MB_FileIO" callExtension "readline";
	};
	"MB_FileIO" callExtension "close";
	['refresh'] call MB_fnc_updateUsed;
	endLoadingScreen;
	systemchat format["Project loaded/imported!"];
