/*
    Function:       MB_fnc_WeatherSetRain
    Author:         Adanteh
    Description:    Sets the rain

	Locality:
		Admin broadcasts to server, server broadcasts to all clients for instant effect

	Execution:
		call

	Parameter(s):


	Returns:
		SCALAR - New rain value

	Example: Raises the rain with 0.3
		_return = [0.3, true, false] call MB_fnc_WeatherSetRain;
*/

params [
	["_inputRain", 0, [0]],
	["_offset", true],
	["_broadcast", false]
];


// -- Generally an admin is going to use this command, but we have to execute it on server -- //
if (!isServer && !_broadcast) exitWith {
	_this remoteExec [_fnc_scriptName, 2, false];
};

if (_offset) then {
	_inputRain = rain + _inputRain;
};

// -- setRain is NOT synchronized with server -- //
if !(_broadcast) exitWith {
	[_inputRain, false, true] remoteExec [_fnc_scriptName, 0, "MB_weatherRainJIP"];
	_inputRain
};

// -- Rain only stays when overcast >= 0.7 -- //
if (_inputRain > 0) then {
	if (overcast < 0.7) then {
		0 setOvercast 0.7;
		forceWeatherChange;
	};
};

MB_WeatherAllowRain = (_inputRain > 0);
if (isServer) then { publicVariable "MB_weatherAllowRain"; };
5 setRain _inputRain;

_inputRain;
