disableSerialization;
	_cats = [];
	_cfgVehicleClasses = configFile >> "CfgVehicleClasses";
	_all = [];
	
	_library = [];
	_config = [];
	
	//Load Objects
	_cfgVehicles = configFile >> "CfgVehicles";
	
	for "_i" from 0 to (count _cfgVehicles)-1 do
	{
		_cur_obj = _cfgVehicles select _i;

		if(isClass _cur_obj) then
		{
			_classname = configName _cur_obj;

			_cur_catName = getText (configFile >> "CfgVehicles" >> _classname >> "VehicleClass");
			
			_catDisplayName = getText (configFile >> "CfgVehicleClasses" >> _cur_catName >> "displayname");
			
			_mbFilter = [(configFile >> "CfgVehicleClasses" >> _cur_catName),"mapbuilder_filter",""] call BIS_fnc_returnConfigEntry;
			_mbLibrary = [(configFile >> "CfgVehicleClasses" >> _cur_catName),"mapbuilder_library",""] call BIS_fnc_returnConfigEntry;
			_mbLibDisplayName = [(configFile >> "CfgVehicleClasses" >> _cur_catName),"mapbuilder_displayname",_catDisplayName] call BIS_fnc_returnConfigEntry;
			if(_mbLibrary == "") then {
				_mbLibrary = _mbFilter; //For backwards compability
			};
			_mbFilterObjEval = [(configFile >> "CfgVehicleClasses" >> _cur_catName),"mapbuilder_objEval","true"] call BIS_fnc_returnConfigEntry;

			_scope = getNumber (configFile >> "CfgVehicles" >> _classname >> "scope");

			_name = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");
			
			_model = [(configFile >> "CfgVehicles" >> _classname),"model",""] call BIS_fnc_returnConfigEntry;
			//I have no idea what I am doing!
			if ((_scope >= 1) && (_classname != "\access") && _name != "" && _model != "") then
			{
				_name = format["%1 (%2)",_name,_classname];
				if(_catDisplayName != "") then {
					_catIndex = [_config,_catDisplayName] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _config pushBack [_catDisplayName,[]];
					};
					((_config select _catIndex) select 1) pushBack [_name,_classname];
				};
				if(_mbLibrary != "") then {
					private["_eval"];
					_eval = _classname call compile _mbFilterObjEval;
					if(_eval) then {
						_catIndex = [_library,_mbLibrary] call MB_fnc_libraryFindName;
						if(_catIndex == -1) then {
							_catIndex = _library pushBack [_mbLibrary,[]];
						};
						_mbCat = ((_library select _catIndex) select 1);
						_catIndex = [_mbCat,_mbLibDisplayName] call MB_fnc_libraryFindName;
						if(_catIndex == -1) then {
							_catIndex = _mbCat pushBack [_mbLibDisplayName,[]];
						};
						((_mbCat select _catIndex) select 1) pushBack [_name,_classname];
					};
				};
			};
		};
	};
	
	MB_Library = [["Library",_library],["Config (All)",_config]];