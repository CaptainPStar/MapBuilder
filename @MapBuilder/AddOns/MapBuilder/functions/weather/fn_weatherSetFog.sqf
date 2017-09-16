/*
    Function:       MB_fnc_weatherSetFog
    Author:         Adanteh
	Description:	Adjusts the fog globally. Handles broadcast ber

   	Description:
   		Adjusts fog globally.

   	Locality:
   		Admin broadcasts to server, server broadcasts to all clients for instant effect

   	Returns:
   		ARRAY - New fog params

   	Example: Raises the fog altitude 5 meters over the course of 2 minutes
   		_return = [[0, 0, 5], true, false, 120] call MB_fnc_weatherSetFog;

   	Example: Set the fog to 0.7  (Old value, uses )
   		_return = [0.7, false, false, 120] call MB_fnc_weatherSetFog;

*/

params [
	["_inputFog", fogparams, [[], 0]],
	["_offset", true],
	["_broadcast", false],
	["_delay", 5]
];


// -- Generally an admin is going to use this command, but we have to execute it on server -- //
if (!isServer && !_broadcast) exitWith {
	_this remoteExec [_fnc_scriptName, 2, false];
};

// -- If a single number is given, this adjusts the fog amount only like the old syntax -- //
if (typeName _inputFog != "ARRAY") then {
	if (_offset) then {
		_inputFog = [_inputFog, 0, 0];
	} else {
		_inputFog = [_inputFog, fogparams select 1, fogparams select 2];
	};
};

if (_offset) then {
	_inputFog params [
		["_fogAmount", 0],
		["_fogDecay", 0],
		["_fogBaseAltitude", 0]];
	_currentFog = fogParams;
	_inputFog = [
		(_currentFog select 0) + _fogAmount,
		(_currentFog select 1) + _fogDecay,
		(_currentFog select 2) + _fogBaseAltitude
	];
};

// -- setFog is synchronized with server every now and then, but to get instant effect we need to run it on clients as well -- //
if !(_broadcast) exitWith {
	[_inputFog, false, true, _delay] remoteExec [_fnc_scriptName, 0, false];
	_inputFog
};

_delay setFog _inputFog;
_inputFog;
