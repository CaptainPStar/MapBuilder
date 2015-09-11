private["_filename"];
	_filename = [_this,0,"Unknown_Project"] call bis_fnc_param;
	if(_filename == "") exitWith {systemChat "Error: Projects needs a name!";};
	systemChat format["Loading project %1",_filename];
	//[format["%1_backup",_filename]] call MB_fnc_saveProject;
	
	_confirmed = true;
	if(count(MB_Objects)>0) then {
		_confirmed = ["This will destroy all unsaved changes. Are you sure?",0] call MB_fnc_showPopupDialog;
	};
	if(_confirmed) then {
		[] call MB_fnc_resetProject;
		MB_ProjectName = _filename;
		[_filename] call MB_fnc_importProject;
		[170200,false] spawn MB_fnc_closeWindow;
	};