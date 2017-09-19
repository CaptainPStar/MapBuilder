/*
    Function:       MB_fnc_showPresets
    Author:         NeoArmageddon/Adanteh
    Description:    Handles the showing of preset lists
*/

#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
params ["_mode", ["_args", []]];

switch (toLower _mode) do {
	case "onload": {
		private _ctrl = _args param [0, controlNull];
		private _window = (_ctrl controlsGroupCtrl __IDC_PANE_CONTENT);
        uiNamespace setVariable ["MB_PresetContent", _window];
        ['refresh'] call MB_fnc_showPresets;
	};

    case 'refresh': {
        private _listbox = ((uiNamespace getVariable ["MB_PresetContent", controlNull]) controlsGroupCtrl __IDC_ELEMENT_1);
        private _folder = ["presets","mbpre"] call MB_FNC_getFolderContent;
        lbClear _listbox;
        {
            private _name = _x splitString ".";
            private _index =_listBox lbAdd (_name select 0);
            _listbox lbSetData [_index, (_name select 0)];
        } foreach _folder;
        lbsort _listbox;
    };

	case "select": {
        private _content = uiNamespace getVariable ["MB_PresetContent", controlNull];
        private _listbox = _content controlsGroupCtrl __IDC_ELEMENT_1;
        private _currentPreset = _content controlsGroupCtrl __IDC_ELEMENT_2;
	    private _index = lbCurSel _listbox;
	    private _name = _listbox lbData _index;
        _currentPreset ctrlSetText _name;
	};

    case "load": {
        private _content = uiNamespace getVariable ["MB_PresetContent", controlNull];
        private _currentPreset = _content controlsGroupCtrl __IDC_ELEMENT_2;
        private _filename = ctrlText _currentPreset;

    	if(_filename == "") exitWith {systemChat "Error: Can't load a project without name!";};

    	if (!(["presets",format["%1.mbpre",_filename]] call MB_FNC_FileExists)) exitwith {
    		systemChat "Error: Preset not found!";
    	};

    	startLoadingScreen ["Loading preset..."];
    	_path = ("MB_FileIO" callExtension format["open_r|presets\%1.mbpre",_filename]);
    	systemChat format["Opening %1",_path];
    	_line = "MB_FileIO" callExtension "readline";
    	MB_CopyPaste = [];
    	while{_line != "EOF"} do {
    		private["_obj","_type","_layer","_offset","_dir","_pitch","_bank","_scale","_simulate"];
    		_object = [_line,";"] call BIS_fnc_splitString;
    		_type = (_object select 1);
    		_offset = [parseNumber (_object select 2),parseNumber (_object select 3),parseNumber (_object select 4)]; //Position
    		_layer = parseNumber (_object select 0);//Layer
    		_dir =	parseNumber (_object select 5);	//Dir
    		_pitch = parseNumber (_object select 6);	//Pitch
    		_bank =	parseNumber (_object select 7);	//Bank
    		_scale=	parseNumber (_object select 8); //Scale
    		//[_pos,_pitch,_bank,_yaw,_simulate,_locked];
    		_simulate = ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170011);
    		MB_CopyPaste pushBack [_type,_offset,[[0,0,0],_pitch,_bank,_dir,_simulate,false,_scale]];
    		_line = "MB_FileIO" callExtension "readline";
    	};
    	"MB_FileIO" callExtension "close";
    	endLoadingScreen;

        [_currentPreset] call MB_fnc_uiPaneClose;
    };

    case "save": {
        private _content = uiNamespace getVariable ["MB_PresetContent", controlNull];
        private _currentPreset = _content controlsGroupCtrl __IDC_ELEMENT_2;
        private _filename = ctrlText _currentPreset;
        [_filename] call MB_fnc_savePreset;
    };

	case "close": {

	};
};
