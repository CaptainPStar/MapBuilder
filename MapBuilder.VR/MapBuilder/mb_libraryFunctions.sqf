MB_fnc_loadLibrary = {
	MB_LibraryFavorites = [];
	MB_LibraryInUse = [];
	disableSerialization;
	_cats = [];
	_cfgVehicleClasses = configFile >> "CfgVehicleClasses";
	_all = [];
	_allCats = [];
	_mbCats = [];
	for "_i" from 0 to (count _cfgVehicleClasses)-1 do
	{
		_cur_cat = _cfgVehicleClasses select _i;

		if(isClass _cur_cat) then
		{
			_classname = configName _cur_cat;
			_name = getText (configFile >> "CfgVehicleClasses" >> _classname >> "displayname");
			if (true) then
			{
				_all pushBack [_name,[]];
				_allCats pushBack _name;
			};
		};
	};
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
			_scope = getNumber (configFile >> "CfgVehicles" >> _classname >> "scope");

			_name = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");
			_mbFilter = [(configFile >> "CfgVehicles" >> _classname),"mapbuilder_filter",""] call BIS_fnc_returnConfigEntry;
			//I have no idea what I am doing!
			if ((_scope >= 1) && (_classname != "\access")) then
			{
				_catIndex = _allCats find _cur_catName;
				if(_catIndex >= 0) then {
					((_all select _catIndex) select 1) pushBack [_name, _classname];
				};
				if(_mbFilter != "") then {
					_catIndex = [_mbCats,_mbFilter] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _mbCats pushBack [_mbFilter,[]];
					};
					_mbCat = ((_mbCats select _catIndex) select 1);
					_catIndex = [_mbCat,_catDisplayName] call MB_fnc_libraryFindName;
					if(_catIndex == -1) then {
						_catIndex = _mbCat pushBack [_catDisplayName,[]];
					};
					((_mbCat select _catIndex) select 1) pushBack [_name,_classname];
				};
			};
		};
	};
	
	MB_Library = [["Library",_mbCats],["Config (All)",_all]];

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