private["_display","_ctrl"];
disableSerialization;
_display = uinamespace getvariable 'mb_main_dialog';
_ctrl = _display displayCtrl 170200;

if(!ctrlShown _ctrl) then {
	[170200,false] spawn MB_fnc_openWindow;
	private["_display","_listbox","_projectFolder","_name"];
		_display = uinamespace getvariable 'mb_main_dialog';
		_listbox = _display displayCtrl 170204;
		_projectFolder = ("MB_FileIO" callExtension "listfiles|projects");
		_projectsFiles = [_projectFolder,"|"] call BIS_fnc_splitString;
		_projectsFiles = _projectsFiles - ["."];
		_projectsFiles = _projectsFiles - [".."];
		systemchat format["%1",_projectsFiles];
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
} else {
	[170200,false] spawn MB_fnc_closeWindow;
};
	
