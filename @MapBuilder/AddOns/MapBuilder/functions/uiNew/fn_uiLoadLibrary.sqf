/*
    Function:       MB_fnc_uiLoadLibrary
    Author:         Adanteh
    Description:    Loads the library
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params ["_paneCtrl"];

private _libraryCtrl = _paneCtrl controlsGroupCtrl __IDC_LIBRARY_TVIEW;
private _libraryData = +(MB_LIBRARY);
uiNamespace setVariable ["MB_UI_MainLibrary", _libraryCtrl];

_fnc_addItem = {
    params [["_node", []], ["_path", []]];

    {
        _x params ["_name", "_value"];
        private _newPath = [];
    	private _index = _libraryCtrl tvAdd [_path, _name];
        _newPath append _path;
    	_newPath pushBack _index;

    	if (_value isEqualType []) then {
    		_libraryCtrl tvSetData [_newPath, ""];
    		[_value,_newPath] call _fnc_addItem;
    	};
    	if (_value isEqualType "") then {
            diag_log str ["[MB Library]", _newPath, _value];
    		_libraryCtrl tvSetData [_newPath, _value];
    	};
        nil;
    } count _node;

    if (count _path > 0) then {
    	_libraryCtrl tvSort [_path, false];
    } else {
    	_libraryCtrl tvExpand [0];
    };
};

[MB_LIBRARY] call _fnc_addItem;
