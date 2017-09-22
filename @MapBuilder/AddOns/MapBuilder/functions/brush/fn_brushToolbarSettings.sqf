/*
    Function:       MB_fnc_brushToolbarSettings
    Author:         Adanteh
    Description:    Handles the brush settings in the extended toolbar left pane
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_mode", "combo"], ["_args", []]];

private _return = true;
switch (toLower _mode) do {
    // -- Dropdown box for file selector
    case "combo": {
        private _groupCtrl = _args param [0, controlNull];
        private _listboxSet = _groupCtrl controlsGroupCtrl __IDC_ELEMENT_1;
        private _listboxObjects = _groupCtrl controlsGroupCtrl __IDC_ELEMENT_2;

        private _brushFolder = ("MB_FileIO" callExtension "listfiles|brushes");
        private _brushFiles = [_brushFolder,"|"] call BIS_fnc_splitString;
        _brushFiles = _brushFiles - ["."];
        _brushFiles = _brushFiles - [".."];

        private _curFile = ["mb.brush.currentfile", ""] call MB_fnc_uiGetSetting;
        lbClear _listboxSet;
        {
        	private _name = [_x,"."] call BIS_fnc_splitString;
        	private _index = _listboxSet lbAdd (_name select 0);
        	_listboxSet lbSetData [_index, (_name select 0)];
        	if ((_name select 0) == _curFile) then {
        		_listboxSet lbSetCurSel _index;
        	};
        } foreach _brushFiles;
    };

    case "selectcombo": {
        private _listboxSet = _args param [0, controlNull];
        private _listboxObjects = (ctrlParentControlsGroup _listboxSet) controlsGroupCtrl __IDC_ELEMENT_2;
        private _filename = _listboxSet lbText (lbCurSel _listboxSet);
        [_filename] call MB_fnc_loadBrush;
        ["mb.brush.currentfile", _fileName] call MB_fnc_uiSetSetting;

        private _brushData = +MB_CurBrush;
        lbClear _listboxObjects;
        {
            _x params ["_types"];
            private _name = "";
            {
                _name = _name + format ["%1", _x];
                if (_forEachIndex < (count (_types) - 1)) then {
                    _name = _name + ", ";
                };
            } forEach _types;
            private _index = _listboxObjects lbAdd _name;
        } foreach _brushData;
    };

    case "selectobject": {
        private _listboxObjects = _args param [0, controlNull];
        private _objectname = _listboxObjects lbText (lbCurSel _listboxObjects);
        ['show', [_objectname]] call MB_fnc_update3DPreview;
    };
};

_return
