private["_filename"];
	_filename = [_this,0,"project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Projects needs a name!";};
	_path = ("MB_FileIO" callExtension format["open_w|projects\%1.mbproj",_filename]);
	systemChat format["Opening %1",_path];
	MB_ProjectName = _filename;
	{
		if(!isNull(_x)) then {
			_obj = _x;
			_type = typeof _obj;
			_vars = [_obj] call MB_fnc_getObjectVars;
			
			_string = ["object",[_type,_vars]] call MB_fnc_toStoreArr;
			
			"MB_FileIO" callExtension format["write|%1",_string];
		};
	} foreach MB_Objects;
	{
		_string = ["favoriteObj",[_x]] call MB_fnc_toStoreArr;	
		"MB_FileIO" callExtension format["write|%1",_string];
	
	} foreach MB_FavoriteObjects;
	"MB_FileIO" callExtension "close";
	systemchat format["Project saved!"];