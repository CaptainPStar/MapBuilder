MB_LibraryFavorites = [];
MB_LibraryUsed = [];
MB_fnc_loadLibrary = {
	disableSerialization;
	_cats = [];
	_cfgVehicleClasses = configFile >> "CfgVehicleClasses";
	_all = [];
	
	_mbLibrary = [];
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
			
			_scope = getNumber (configFile >> "CfgVehicles" >> _classname >> "scope");

			_name = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");
			//I have no idea what I am doing!
			if ((_scope >= 1) && (_classname != "\access") && _name != "") then
			{
				_name = format["%1 (%2)",_name,_classname];
				if(_catDisplayName != "") then {
					_catIndex = [_config,_catDisplayName] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _config pushBack [_catDisplayName,[]];
					};
					((_config select _catIndex) select 1) pushBack [_name,_classname];
				};
				if(_mbFilter != "") then {
					_catIndex = [_mbLibrary,_mbFilter] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _mbLibrary pushBack [_mbFilter,[]];
					};
					_mbCat = ((_mbLibrary select _catIndex) select 1);
					_catIndex = [_mbCat,_catDisplayName] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _mbCat pushBack [_catDisplayName,[]];
					};
					((_mbCat select _catIndex) select 1) pushBack [_name,_classname];
				};
			};
		};
	};
	
	MB_Library = [["Library",_mbLibrary],["Config (All)",_config],["Favorites",MB_LibraryFavorites],["Used",MB_LibraryInUse]];

};
MB_fnc_libraryFindName = {
	private["_array","_return","_index"];
	_array = [_this,0,[]] call bis_fnc_param;
	_key = [_this,1,""] call bis_fnc_param; 
	_index = [_this,2,0] call bis_fnc_param;
	_return = -1;
	{
		if((_x select _index) == _key) exitwith {
			_return = _forEachIndex;
		};
	} foreach _array;
	_return;
};
MB_fnc_libraryAddNode = {

};
MB_fnc_libraryAddLeaf = {

};
MB_fnc_updateUsed = {
	private["_index","_used","_data","_count","_type","_name"];
	_index = [MB_Library,"Used"] call MB_fnc_libraryFindName;
	_used = [];
	_data = [];
	_count = tvCount  [170003, [_index]];
	for[{_i=(_count-1)},{_i>=0},{_i=_i-1}] do {
			tvDelete [170003, [_index,_i]];
	};
	//tvDelete [170003, [_index]];
	//_index = tvAdd [170003,[],"Used"];
	{
		if(!(typeof _x in _used)) then {
			_type = typeof _x;
			_used pushBack _type;
			_name = getText (configFile >> "CfgVehicles" >> _type >> "displayname");
			_data pushback [_name,_type];
		};
	} foreach MB_Objects;
	[_data,[_index]] call MB_fnc_libraryUpdate;
};
MB_fnc_libraryUpdate = {
	private["_node","_path","_name","_value","_index","_newPath"];
	disableSerialization;
	_node = [_this,0,[]] call bis_fnc_param;
	_path = [_this,1,[]] call bis_fnc_param;
	{
		_name = _x select 0;
		_value = _x select 1;
		_newPath = [] + _path;
		_index = tvAdd [170003,_path,_name];
		_newPath set[count(_newPath),_index];
		if(typename _value == "ARRAY") then {
			tvSetData [170003,_newPath,""];
			[_value,_newPath] call MB_fnc_libraryUpdate;
		};
		if(typename _value == "STRING") then {
			tvSetData [170003,_newPath,_value];
		};
	} foreach _node;
};
MB_LibrarySelect = {
	private["_data"];
	_data = tvData [170003,(tvCurSel 170003)];
	if(_data != "") then {
		MB_CurClass = _data;
	};
};