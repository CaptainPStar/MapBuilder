/*
    Function:       MB_fnc_weatherSetOvercast
    Author:         Adanteh
    Description:    Adjusts overcast globally

		Locality:
			Admin broadcasts to server, server broadcasts to all clients for instant effect

		Execution:
			call

		Parameter(s):


		Returns:
			SCALAR - New overcast value

		Example: Raises the overcast with 0.3
			_return = [0.3, true, false] call MB_fnc_weatherSetOvercast;
*/

params [
	["_inputOverCast", 0, [0]],
	["_offset", true],
	["_broadcast", false]
];


// -- Generally an admin is going to use this command, but we have to execute it on server -- //
if (!isServer && !_broadcast) exitWith {
	_this remoteExec [_fnc_scriptName, 2, false];
};

if (_offset) then {
	_inputOverCast = overCast + _inputOverCast;
};

// -- setOverCast is NOT synchronized with server -- //
if !(_broadcast) exitWith {
	[_inputOverCast, false, true] remoteExec [_fnc_scriptName, 0, "MB_fnc_weatherJipOvercast"];
	_inputOverCast
};

// -- The delay for setOvercast is incorrect since Arma 3. It's either no delay (Using forceWeatherChange) or a delay of about 30 minutes -- //
0 setOverCast _inputOverCast;
forceWeatherChange;


_inputOverCast;

/*
Delay in Arma 3 doesn't work for quick changes. Using 120 setOvercast 1 only reaches full overcast after about 50 minutes. Using setTimeMultiplier does speed up the overcast, but it doesn't render any clouds. You will need to skipTime or forceWeatherChange to render clouds if you want it to happen within the hour.
*/
