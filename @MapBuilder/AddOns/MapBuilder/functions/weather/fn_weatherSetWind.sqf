/*
    Function:       MB_fnc_weatherSetWind
    Author:         Adanteh
    Description:    Adjusts wind globally

	Locality:
		Admin broadcasts to server, server broadcasts to all clients for instant effect

	Execution:
		call

	Parameter(s):


	Returns:
		ARRAY - New wind params

	Example: Raises the wind altitude 5 meters over the course of 2 minutes
		_return = [[0, 0, 5], true, false, false, 120] call MB_fnc_weatherSetWind;
*/


params [
	["_inputWind", 0, [0]],
	["_offset", true],
	["_broadcast", false],
	["_delay", 0]
];


// -- Generally an admin is going to use this command, but we have to execute it on server -- //
if (!isServer && !_broadcast) exitWith {
	_this remoteExec [_fnc_scriptName, 2, false];
};

if (_offset) then {
	_inputWind = windStr + _inputWind;
};

// -- setWind is synchronized with server every now and then, but to get instant effect we need to run it on clients as well -- //
if !(_broadcast) exitWith {
	[_inputWind, false, true, _delay] remoteExec [_fnc_scriptName, 0, false];
	_inputWind
};

_delay setWindStr _inputWind;
_inputWind;
