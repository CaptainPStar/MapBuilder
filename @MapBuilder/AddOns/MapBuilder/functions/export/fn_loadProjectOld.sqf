private["_filename"];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Projects needs a name!";};
	[] call MB_fnc_DeleteAllObjects;
	MB_ProjectName = _filename;
	[_filename] call MB_fnc_importProject;