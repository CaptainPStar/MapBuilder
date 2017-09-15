/*
    Function:       MB_fnc_updateUsed
    Author:         NeoArmageddon/Adanteh
    Description:    Updates the list of currently used objects
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_mode", "refresh"], ["_args", []]];

private _return = true;
switch (toLower _mode) do {
	case "onload": {
		private _paneCtrl = (_args param [0, controlNull]);
		private _listCtrl = (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT) controlsGroupCtrl __IDC_USEDOBJECT;
		uiNamespace setVariable ["MB_UsedObjectsList", _listCtrl]
		['refresh'] call MB_fnc_updateUsed;
	};

	case 'select': {
		private _listCtrl = uiNamespace getVariable ["MB_UsedObjectsList", controlNull];
		[_listCtrl] call MB_fnc_librarySelect;
	};

	case "selectall": {
		private _listCtrl = uiNamespace getVariable ["MB_UsedObjectsList", controlNull];
		private _type = _listCtrl tvData (tvCurSel _listCtrl);
		[_type] call MB_fnc_selectAllUsed;
	};

	case "refresh": {
		private _listCtrl = uiNamespace getVariable ["MB_UsedObjectsList", controlNull];
		if (isNull _listCtrl) exitWith { };

		tvClear _listCtrl;
		private _used = [];
		private _data = [];
		{

			if (!isNull _x) then {
				private _type = typeof _x;
				private _typeIndex = _used find _type;
				if (_typeIndex == -1) then {
					_used pushBack _type;
					_name = getText (configFile >> "CfgVehicles" >> _type >> "displayname");
					_data pushback [format["%1 (1)",_type],_type,1];
				} else {
					private _count = ((_data select _typeIndex) select 2) +1;
					(_data select _typeIndex) set [2, _count];
					(_data select _typeIndex) set [0,format["%1 (%2)", (_data select _typeIndex) select 1, _count]];
				};
			};
		} foreach MB_Objects;

		{
			private _index = _listCtrl tvAdd [[], (_x select 0)];
			_listCtrl tvSetData [[_index], (_x select 1)];
		} foreach _data;
		_listCtrl tvSort [[], false];
	};
};

_return;
