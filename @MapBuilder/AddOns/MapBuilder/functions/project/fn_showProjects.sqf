/*
    Function:       MB_fnc_showProjects
    Author:         NeoArmageddon
    Description:    Handles the showing of saved projects
*/

#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
params ["_mode", ["_args", []]];

switch (toLower _mode) do {
	case "onload": {
		private _ctrl = _args param [0, controlNull];
		private _window = (_ctrl controlsGroupCtrl __IDC_PANE_CONTENT);
		private _projectFolder = ("MB_FileIO" callExtension "listfiles|projects");
		private _projectsFiles = [_projectFolder,"|"] call BIS_fnc_splitString;
		_projectsFiles = _projectsFiles - ["."] - [".."];

		private _listbox = (_window controlsGroupCtrl __IDC_ELEMENT_1);
		private _currentProjectCtrl = (_window controlsGroupCtrl __IDC_ELEMENT_2);
		uiNamespace setVariable ["MB_ProjectCurrent", _currentProjectCtrl];

		lbClear _listbox;
		{
			private _name = [_x, "."] call BIS_fnc_splitString;
			private _index =_listBox lbAdd (_name select 0);
			_listbox lbSetData [_index, (_name select 0)];
		} foreach _projectsFiles;
		lbsort _listbox;

		if (MB_ProjectName != "") then {
			_currentProjectCtrl ctrlSetText MB_ProjectName;
		};
	};

	case "select": {
		private _ctrl = _args param [0, controlNull];
	    private _index = lbCurSel _ctrl;
	    private _name = _ctrl lbData _index;
		(uiNamespace getVariable ["MB_ProjectCurrent", controlNull]) ctrlSetText _name;
	};

	case "close": {

	};
};
