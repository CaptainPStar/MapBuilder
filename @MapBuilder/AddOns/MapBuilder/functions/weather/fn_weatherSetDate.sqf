/*
    Function:       MB_fnc_weatherSetDate
    Author:         Adanteh
    Description:    Sets the data. Handles broadcasting from admin to rest of server
	Example: (Skips 1 week)
	_newDate = [[0, 0, 7, 0, 0], true, false] call MB_fnc_weatherSetDate;
*/

params [
	["_inputDate", []],
	["_offset", true],
	["_broadcast", false]
];


// -- Generally an admin is going to use this command, but we have to execute it on server -- //
if (!isServer && !_broadcast) exitWith {
	_this remoteExec [_fnc_scriptName, 2];
};

/*---------------------------------------------------------------------------
	setDate is a pretty smart command in that it automatically adjust to the correct date.
	This means that:
		if you setDate to 30 february in a leapyear, it turns march 1st.
		If you setDate to 30 february in a non-leapyear, it turns march 2nd

	The same is valid for hours, where if hours are set above 24 it automatically turns to the next day
---------------------------------------------------------------------------*/
if (_offset) then {
	_inputDate params [
		["_hourOffset", 0],
		["_minuteOffset", 0],
		["_dayOffset", 0],
		["_monthOffset", 0],
		["_yearOffset", 0]];
	private _currentDate = date;
	_inputDate = [
		(_currentDate select 3) + _hourOffset,
		(_currentDate select 4) + _minuteOffset,
		(_currentDate select 2) + _dayOffset,
		(_currentDate select 1) + _monthOffset,
		(_currentDate select 0) + _yearOffset
	];
} else {
	private _currentDate = date;
	_inputDate params [
		["_hourValue", (_currentDate select 3)],
		["_minuteValue", (_currentDate select 4)],
		["_dayValue", (_currentDate select 2)],
		["_monthValue", (_currentDate select 1)],
		["_yearValue", (_currentDate select 0)]];
	_inputDate = [_hourValue, _minuteValue, _dayValue, _monthValue, _yearValue];
};

// -- setDate is synchronized with server every now and then, but to get instant effect we need to run it on clients -- //
if !(_broadcast) exitWith {
	[_inputDate, false, true] remoteExec [_fnc_scriptName, 0];
	_inputDate
};

setDate [(_inputDate select 4), (_inputDate select 3), (_inputDate select 2), (_inputDate select 0), (_inputDate select 1)];

_inputDate;
