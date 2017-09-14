/*
    Function:       MB_fnc_parseToBool
    Author:         Adanteh
    Description:    Converts either code, string, or number into an bool return
*/

params ["_input"];

if !(_input isEqualType true) then {
	if (_input isEqualType "") then {
		_input = call compile _input;
	} else {
		if (_input isEqualType {}) then {
			_input = call _input;
		} else {
			if (_input isEqualType 0) then {
				_input = (_input >= 1);
			};
		};
	};
};

_input
