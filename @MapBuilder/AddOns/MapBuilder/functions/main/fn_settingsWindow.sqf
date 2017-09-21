/*
    Function:       MB_fnc_settingsWindow
    Author:         Adanteh
    Description:    Handles showing, adding and editing the settings windows
    Example:        ["show", "camera"] call MB_fnc_settingsWindow;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

disableSerialization;

#define __SPACING (getNumber (configFile >> "MB_CtrlSettingCategory" >> "y"))
#define __SPACINGGROUP (getNumber (configFile >> "MB_CtrlSettingCategory" >> "Controls" >> "Title" >> "h") * 1.5)

// TODO: Rewrite this with namespace, instead of nested array
// Maybe consider doing an 'onLoad' MB subclass for the switch statement here too

params ["_mode", ["_args", []]];
private _display = uiNamespace getVariable ["MB_CtrlSettingDialog", displayNull];

switch (toLower _mode) do {
	case "show": {
		if (isNil "MB_settings_settingSettings") then {
			MB_settings_settingSettings = [];
		};
		_args params ["_category"];
		uiNamespace setVariable ["MB_settings_settingsCategory", toLower _category];
		createDialog "MB_CtrlSettingDialog";
	};

	case "add": {
		if (isNil "MB_settings_settingSettings") then {
			MB_settings_settingSettings = [];
			MB_settingsNamespace = false call MB_fnc_createNamespace;
		};

		_args params ["_category", "_categoryTitle", "_subCategory", "_settingDetails"];
		_settingDetails params ["_displayName", "_tooltip", "_controlType", "_defaultValue", "_condition", "_action", ["_values", []]];
		_action = [_action] call MB_fnc_codeToString;

		// -- Find the category and subcategory within the saved array -- //
		private _categoryIndex = -1;
		private _subcategoryIndex = -1;

		{ if ((_x select 0) == _category) exitWith { _categoryIndex = _forEachIndex; }; } forEach MB_settings_settingSettings;
		if (_categoryIndex == -1) then {
			_categoryIndex = MB_settings_settingSettings pushBack [toLower _category, _categoryTitle, [[_subCategory, []]]];
			_subcategoryIndex = 0;
		} else {
			{ if ((_x select 0) == _subCategory) exitWith { _subcategoryIndex = _forEachIndex; }; } forEach ((MB_settings_settingSettings select _categoryIndex) select 2);
			if (_subcategoryIndex == -1) then {
				_subcategoryIndex = ((MB_settings_settingSettings select _categoryIndex) select 2) pushBack [_subCategory, []];
			};
		};


		((((MB_settings_settingSettings select _categoryIndex) select 2) select _subcategoryIndex) select 1) pushBack [_displayName, _tooltip, _controlType, _defaultValue, _condition, _action, _values];

	};

	case "load": {
		private _category = uiNamespace getVariable ["MB_settings_settingsCategory", ""];
		private _categoryIndex = -1;
		{ if ((_x select 0) == _category) exitWith { _categoryIndex = _forEachIndex; }; } forEach MB_settings_settingSettings;


		if (_categoryIndex != -1) then {
		 	(MB_settings_settingSettings select _categoryIndex) params ["_category", "_categoryTitle", "_settingCategories"];
			(_display displayCtrl 4000) ctrlSetText (toUpper _categoryTitle);
			private _settingControlsGroup = _display displayCtrl 4001;

			uiNamespace setVariable ["MB_settings_settingsControlGroup", _settingControlsGroup];

			private _yPosGlobal = 0;
			private _subCatIndex = 0;
			{
				_x params ["_settingCategory", "_settings"];

				private _subcategoryControlsgroupIDC = (10000 + (_subCatIndex * 1000));
				private _controlsGroup = _display ctrlCreate ["MB_CtrlSettingCategory", _subcategoryControlsgroupIDC, _settingControlsGroup];
				private _controlsGroupCategories = _controlsGroup controlsGroupCtrl 100;
				(_controlsGroup controlsGroupCtrl 1) ctrlSetText _settingCategory;

				private _yPos = 0;
				private _hGroup = 0;

				{
					_x params ["_displayName", "_tooltip", "_controlType", "_defaultValue", "_condition", "_action", ["_values", []]];

					_condition = [_condition] call MB_fnc_parseToBool;
					private _controlsGroupIDC = (_subcategoryControlsgroupIDC + (_forEachIndex + 1));
					private _control = _display ctrlCreate [_controlType, _controlsGroupIDC, _controlsGroupCategories];
					(_control controlsGroupCtrl 1) ctrlSetText _displayName;
					if (_tooltip != "") then { (_control controlsGroupCtrl 1) ctrlSetTooltip _tooltip; };
					_control ctrlSetPosition [0, _yPos];
					_control ctrlCommit 0;

					switch (toLower _controlType) do {
						case (toLower "MB_CtrlSettingCheckbox"): {
							(_control controlsGroupCtrl 100) cbSetChecked ([_defaultValue] call MB_fnc_parseToBool);
							if (_condition) then {
								(_control controlsGroupCtrl 100) ctrlSetEventHandler ['CheckedChanged', _action];
							} else {
								(_control controlsGroupCtrl 100) ctrlEnable false;
								(_control controlsGroupCtrl 1) ctrlSetTextColor [1, 1, 1, 0.4];
							};
						};

						case (toLower "MB_CtrlSettingSlider"): {
							if (!(_defaultValue isEqualType 0)) then {
								if (_defaultValue isEqualType "") then {
									_defaultValue = compile _defaultValue;
								};
								_defaultValue = call _defaultValue;
							};

							(_control controlsGroupCtrl 100) sliderSetRange (_values select 0);
							(_control controlsGroupCtrl 100) sliderSetSpeed (_values select 1);
							(_control controlsGroupCtrl 100) sliderSetPosition _defaultValue;

							if (_condition) then {
								(_control controlsGroupCtrl 100) ctrlSetEventHandler ['SliderPosChanged', _action];
							} else {
								(_control controlsGroupCtrl 100) ctrlEnable false;
								(_control controlsGroupCtrl 1) ctrlSetTextColor [1, 1, 1, 0.4];
							};
						};

						case (toLower "MB_CtrlSettingButton"): {
							(_control controlsGroupCtrl 100) ctrlSetText (_values select 0);
							if (_condition) then {
								(_control controlsGroupCtrl 100) ctrlSetEventHandler ['ButtonClick', _action];
							} else {
								(_control controlsGroupCtrl 100) ctrlEnable false;
								(_control controlsGroupCtrl 1) ctrlSetTextColor [1, 1, 1, 0.4];
							};
						};

						case (toLower "MB_CtrlSettingToolbox3"): {
							private _toolbox = (_control controlsGroupCtrl 100);
							private _default = -1;
							_defaultValue = (_defaultValue call MB_fnc_parseToBool);
							{
								private _index = _toolbox lbAdd (_x select 2);
								_toolbox lbSetValue [_index, (_x select 0)];
								if (_x select 0 isEqualTo _defaultValue) then {
									_default = _index;
								};
							} forEach (_values);

							_toolbox lbSetCurSel _default;
							if (_condition) then {
								_toolbox ctrlSetEventHandler ['ToolboxSelChanged', _action];
							} else {
								_toolbox ctrlEnable false;
								(_control controlsGroupCtrl 1) ctrlSetTextColor [1, 1, 1, 0.4];
							};
						};

						case (toLower "MB_CtrlSettingValueset2"): {
							_defaultValue = _defaultValue call MB_fnc_parseToBool;
							(_control controlsGroupCtrl 100) ctrlSetText str(_defaultValue select 0);
							(_control controlsGroupCtrl 101) ctrlSetText str(_defaultValue select 1);
							if (_condition) then {
								// -- Append this, so we can retrieve the values easily in scripts -- //
								_action = format ["
									disableSerialization;
									private _controlGroup = uiNamespace getVariable ['%1', controlNull];
									private _controlGroupParent = (((_controlGroup controlsGroupCtrl %2) controlsGroupCtrl 100) controlsGroupCtrl %3);
									private _value = [ctrlText (_controlGroupParent controlsGroupCtrl 100), ctrlText (_controlGroupParent controlsGroupCtrl 101)];
									%4
								", "MB_settings_settingsControlGroup", _subcategoryControlsgroupIDC, _controlsGroupIDC, _action];
								(_control controlsGroupCtrl 102) ctrlSetEventHandler ['ButtonClick', _action];
							} else {
								(_control controlsGroupCtrl 100) ctrlEnable false;
								(_control controlsGroupCtrl 101) ctrlEnable false;
								(_control controlsGroupCtrl 102) ctrlEnable false;
								(_control controlsGroupCtrl 1) ctrlSetTextColor [1, 1, 1, 0.4];
							};
						};

						case (toLower "MB_CtrlSettingTextBoxButton"): {
							(_control controlsGroupCtrl 100) ctrlSetText "";
							if (_condition) then {
								// -- Append this, so we can retrieve the values easily in scripts -- //
								_action = format ["
									disableSerialization;
									private _controlGroup = uiNamespace getVariable ['%1', controlNull];
									private _controlGroupParent = (((_controlGroup controlsGroupCtrl %2) controlsGroupCtrl 100) controlsGroupCtrl %3);
									private _value = ctrlText (_controlGroupParent controlsGroupCtrl 100);
									%4
								", "MB_settings_settingsControlGroup", _subcategoryControlsgroupIDC, _controlsGroupIDC, _action];
								(_control controlsGroupCtrl 102) ctrlSetEventHandler ['ButtonClick', _action];
								(_control controlsGroupCtrl 102) ctrlSetText _values
							} else {
								(_control controlsGroupCtrl 100) ctrlEnable false;
								(_control controlsGroupCtrl 101) ctrlEnable false;
								(_control controlsGroupCtrl 102) ctrlEnable false;
								(_control controlsGroupCtrl 1) ctrlSetTextColor [1, 1, 1, 0.4];
							};
						};

						case (toLower "MB_UI_CtrlPlayerSelector"): {
							if (_condition) then {
								// -- Append this, so we can retrieve the values easily in scripts -- //
								_action = format ["
									params ['', '_index'];
									private _unit = (missionNamespace getVariable ['%1', []]) param [_index, objNull];
									missionNamespace setVariable ['%2', _unit];
								", "MB_settings_playerList", "MB_settings_playerSelected"];

								private _dropdown = (_control controlsGroupCtrl 101);
								private _allPlayers = +allPlayers;
								lbClear _dropDown;
								_dropdown ctrlSetEventHandler ['LbSelChanged', _action];
								MB_settings_playerList = _allPlayers;
								MB_settings_playerSelected = objNull;
								{
									private _name = name _x;
									private _lbIndex = _dropdown lbAdd _name;
								} forEach _allPlayers;
							} else {
								(_control controlsGroupCtrl 101) ctrlEnable false;
							};
						};

						default {};
					};

					// -- Prepare position for the next control, based on height of this control -- //

					_yPos = _yPos + (getNumber (configFile >> _controlType >> "h")) + __SPACING;
				} forEach _settings;


				_controlsGroup ctrlSetPosition [0, _yPosGlobal, (getNumber (configFile >> "MB_CtrlSettingCategory" >> "w")), _yPos + ((getNumber (configFile >> "MB_CtrlSettingCategory" >> "controls" >> "Attributes" >> "y")))];
				_controlsGroupCategories ctrlSetPosition [
					(getNumber (configFile >> "MB_CtrlSettingCategory" >> "controls" >> "Attributes" >> "x")),
					(getNumber (configFile >> "MB_CtrlSettingCategory" >> "controls" >> "Attributes" >> "y")),
					(getNumber (configFile >> "MB_CtrlSettingCategory" >> "controls" >> "Attributes" >> "w")),
					(_yPos)];
				_controlsGroup ctrlCommit 0;
				_controlsGroupCategories ctrlCommit 0;
				_yPosGlobal = _yPosGlobal + _yPos + __SPACINGGROUP;
				_subCatIndex = _subCatIndex + 1;
			} forEach _settingCategories;
		};

	};

	case "unload": {
		uiNamespace setVariable ["MB_settings_settingsCategory", nil];
		saveProfileNamespace;
		ctrlSetFocus __GUI_VIEWPORT;
	};

	default {
		// Invalid
	};
};

true;
