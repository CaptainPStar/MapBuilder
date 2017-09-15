/*
    Function:       MB_fnc_updateFavorites
    Author:         NeoArmageddon/Adanteh
    Description:    Adds an item to the current favorite list
	Example:		['add', ["B_Soldier_F"]] call MB_fnc_updateFavorites;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"
#include "\MB\MapBuilder\ui\includes\dik.hpp"

params [["_mode", "refresh"], ["_args", []]];

if (isNil "MB_FavoriteObjects") then {
	MB_FavoriteObjects = [];
};

private _return = true;
switch (toLower _mode) do {

	// -- Run when loading in the favorites panel
	case "onload": {
		private _paneCtrl = (_args param [0, controlNull]);
		private _favoritesList = (_paneCtrl controlsGroupCtrl __IDC_PANE_CONTENT) controlsGroupCtrl __IDC_FAVORITES;
		uiNamespace setVariable ["MB_FavoritesList", _favoritesList];
		['refresh'] call MB_fnc_updateFavorites;
	};


	case "reset": {
		tvClear (uiNamespace getVariable ["MB_FavoritesList", controlNull]);
		MB_FavoriteObjects = [];
	};

	// -- Run when pressing the Add button or loading in a project that has favorites saved
	case "add": {
		private _class = _args param [0, missionNamespace getVariable ["MB_CurClass", ""]];
		if (_class != "") then {
			private _added = MB_FavoriteObjects pushBackUnique _class;
			if (_added) then {
				['refresh'] call MB_fnc_updateFavorites;
			};
		};
	};

	// -- Select a thing
	case 'select': {
		private _favoritesList = uiNamespace getVariable ["MB_FavoritesList", controlNull];
		if (isNull _favoritesList) exitWith { };

		private _class = _favoritesList tvData (tvCurSel _favoritesList);
		if (_class != "") then {
			if (!([DIK_LSHIFT] call MB_fnc_isPressed)) then {
				[] call MB_fnc_DeselectAll;
			};
			{
				if ((typeof _x) == _class) then {
					[_x] call MB_fnc_Select;
				};
			} foreach MB_Objects;
		};
	};


	// -- Removing a selected item from the favorites list
	case "remove": {
		private _favoritesList = uiNamespace getVariable ["MB_FavoritesList", controlNull];
		private _index = MB_FavoriteObjects find (_favoritesList tvData (tvCurSel _favoritesList));
		if (_index > =0) then {
			MB_FavoriteObjects deleteAt _index;
		};
		['update'] call MB_fnc_updateFavorites;
	};

	// -- Run whenever we add, remove or open the pane
	case "refresh": {
		private _favoritesList = uiNamespace getVariable ["MB_FavoritesList", controlNull];
		if (isNull _favoritesList) exitWith { };

		tvClear _favoritesList;
		private _data = [];

		{
			private _type = _x;
			private _name = getText (configFile >> "CfgVehicles" >> _type >> "displayname");
			if (_name == "") then { _name = _type }; // -- Fallback for empty displaynames

			private _index = tvAdd [170901, [], _name];
			tvSetData [170901, [_index], _type];
		} foreach MB_FavoriteObjects;
		_favoritesList tvSort [[], false];
	};
};

_return;
