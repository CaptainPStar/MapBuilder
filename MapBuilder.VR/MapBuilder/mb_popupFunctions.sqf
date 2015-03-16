MB_PopupStatus = [];

MB_fnc_togglePopup = {
	disableSerialization;
	private["_display","_popup","_show","_index","_control"];
	_display = uinamespace getvariable 'mb_main_dialog';
	_popup = [_this,0] call bis_fnc_param;
	_show = [_this,1,""] call bis_fnc_param;
	_index = 170000 + _popup*100 + 1;
	_control = _display displayCtrl _index;
	
	if(typename _show == "STRING") then {
		_show = !(ctrlShown _control);
	};
	if(_show) then {
		//systemchat "showing popup";
	} else {
		//systemchat "hiding popup";
	};
	while{str _control != "no control"} do {
		_control ctrlShow _show;
		_control ctrlEnable _show;
		_index = _index + 1;
		_control = _display displayCtrl _index;
	};
	MB_PopupStatus set[_popup,_show];
};
MB_fnc_popupShown = {
	private["_shown"];
	_id = _this select 0;
	if((count(MB_PopupStatus)-1)>=_id) then {
		_shown = MB_PopupStatus select _id;
		if(!(typename(_shown)=="BOOL")) then {
			_shown = false;
		};
	} else {
		_shown = false;
	};
	_shown;
};
MB_fnc_showExport = {
	disableSerialization;
	private["_display","_ctrl"];
	_display = uinamespace getvariable 'mb_main_dialog';
	(_display displayCtrl 170101) ctrlShow true;
	(_display displayCtrl 170101) ctrlEnable true;
	(_display displayCtrl 170102) ctrlShow true;
	(_display displayCtrl 170102) ctrlEnable true;
	(_display displayCtrl 170103) ctrlShow true;
	(_display displayCtrl 170103) ctrlEnable true;
	MB_PopupOpen = true;
};
MB_fnc_hideExport = {
disableSerialization;
private["_display","_ctrl"];
	_display = uinamespace getvariable 'mb_main_dialog';
	(_display displayCtrl 170101) ctrlShow false;
	(_display displayCtrl 170101) ctrlEnable false;
	(_display displayCtrl 170102) ctrlShow false;
	(_display displayCtrl 170102) ctrlEnable false;
	(_display displayCtrl 170103) ctrlShow false;
	(_display displayCtrl 170103) ctrlEnable false;
	MB_PopupOpen = false;
};
MB_fnc_ShowProjects = {
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
};

MB_fnc_ProjectsPopupSelect = {
	disableSerialization;
	_display = uinamespace getvariable 'mb_main_dialog';
	_list = _display displayCtrl 170204;
    _index = lbCurSel 170204;
    _name = lbData [170204, _index];
	(_display displayCtrl 170205) ctrlSetText _name;
};

