disableSerialization;
	if([2] call MB_fnc_popupShown) then {
		[2,false] call MB_fnc_togglePopup;
	} else {
		[2,true] call MB_fnc_togglePopup;
		private["_display","_listbox","_projectFolder","_name"];
		_display = uinamespace getvariable 'mb_main_dialog';
		_listbox = _display displayCtrl 170204;
		_projectFolder = ("MB_FileIO" callExtension "listfiles|projects");
		_projectsFiles = [_projectFolder,"|"] call BIS_fnc_splitString;
		_projectsFiles = _projectsFiles - ["."];
		_projectsFiles = _projectsFiles - [".."];
		lbClear _listbox;
		{
			_name = [_x,"."] call BIS_fnc_splitString;
			_index =_listBox lbAdd (_name select 0);
			_listbox lbSetData [_index, (_name select 0)];
		} foreach _projectsFiles;
		lbsort _listbox;
		if(MB_ProjectName != "") then {
			(_display displayCtrl 170205) ctrlSetText MB_ProjectName;
		};
	};