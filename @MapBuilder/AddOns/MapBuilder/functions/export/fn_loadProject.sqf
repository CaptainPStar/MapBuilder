private["_filename"];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Projects needs a name!";};
	systemChat format["Loading project %1",_filename];
	//[format["%1_backup",_filename]] call MB_fnc_saveProject;
	[] call MB_fnc_resetProject;
	MB_ProjectName = _filename;
	[_filename] call MB_fnc_importProject;