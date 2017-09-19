/*
    Function:       MB_fnc_showPopup
    Author:         Adanteh
	Description:
		Shows a message box with given title, text and button actions. Automatically resizes based on text size
	Locality:
		Client
	Execution:
		call

	Parameter(s):
		#0 STRING - _title: Title to show on top of window
		#1 STRING - _caption: Text to show in window (Structured text)
		#2 ARRAY of STRING - _buttons: Array for 3 buttons
			0 _buttonName: STRING
			1 _toolTip: STRING
			2 _actionCode: STRING
	Returns:
		None
	Example:
		[controlNull, "Welcome", "How are you doing today?",
			[["Good", "Yay", "systemChat 'Thats good to hear!'; closeDialog 1;"],
			[],
			["Bad", "Boo", "systemChat 'Het komt wel goed schatje'; closeDialog 1;"]]
		] call MB_fnc_showPopup;
*/
#include "\mb\MapBuilder\ui\includes\mbdefines.hpp"

params [["_parent", __GUI_WINDOW], ["_title", ""], ["_text", ""], ["_options", []]];

if (isNull _parent) then {
	_parent = (findDisplay 46);
};

private _popupCtrl = _parent ctrlCreate ["MB_PopupWindow", -1];
private _popupPos = ctrlPosition _popupCtrl;

if (_text isEqualType "") then {
	_text = parseText _text;
};

// -- Update the text and adjust to text height
private _textCtrl = _popupCtrl controlsGroupCtrl __IDC_ELEMENT_3;
private _textPos = ctrlPosition _textCtrl;
_textCtrl ctrlSetStructuredText _text;
_textPos set [1, ctrlTextHeight _textCtrl];
_textCtrl ctrlSetPosition _textPos;
_textCtrl ctrlcommit 0;

// -- Update the background
private _backgroundCtrl = _popupCtrl controlsGroupCtrl __IDC_ELEMENT_2;
private _backgroundPos = ctrlPosition _backgroundCtrl;
_backgroundPos set [3, (_textPos select 1) + __GUI_GRIDX(0.25)];
_background ctrlSetPosition _backgroundPos;
_backgroundCtrl ctrlcommit 0;

// -- Reposition the buttons below the now adjusted text height
private _buttonsCtrl = _popupCtrl controlsGroupCtrl __IDC_ELEMENT_4;
private _buttonsPos = ctrlPosition _buttonsCtrl;
_buttonsPos set [1, (_backgroundPos select 1) + (_backgroundPos select 3) + __GUI_GRIDX(0.25)];
_buttonsCtrl ctrlSetPosition _buttonsPos;
_buttonsCtrl ctrlcommit 0;

// -- Shows bottom options
if !(_options isEqualTo []) then {
	if (count _options > 3) then {
		_options resize 3;
	};

	{
		_x params [["_buttonText", ""], ["_buttonTooltip", ""], ["_buttonAction", { true }]];
		private _buttonCtrl = _poupCtrl controlsGroupCtrl (__IDC_BUTTON_1 + _forEachIndex);
		if (_buttonText == "") then {
			_buttonCtrl ctrlEnable false;
			_buttonCtrl ctrlShow false;
		} else {
			private _buttonActionParsed = [([_buttonAction] call MB_fnc_parseToCode)] call MB_fnc_codeToString;
			_buttonCtrl ctrlSetText _buttonText;
			_buttonCtrl ctrlShow true;
			_buttonCtrl ctrlEnable true;
			_buttonCtrl ctrlSetTooltip _buttonTooltip;
			_buttonCtrl buttonSetAction _buttonActionParsed;
		};
	} forEach _options;
};

// -- Title
(_popupCtrl controlsGroupCtrl __IDC_ELEMENT_1) ctrlSetText _title;
