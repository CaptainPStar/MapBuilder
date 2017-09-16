/*
    Function:       MB_fnc_weatherCommit
    Author:         Adanteh
    Description:    Commits current weather settings.
*/

params [["_broadcast", false], ["_weatherSettings", []]];

if (isServer && _broadcast) then {
	private _types = "";
	// For each weather setting,
	{
		private _type = _x;
		private _value =  (_weatherSettings select 1) select _forEachIndex;

		// Execute the function associated with setting the current weather type (eg: "MB_fnc_weathersetRain" _type = "Rain")
		private _function = missionNamespace getVariable [("MB_fnc_weatherSet" + _type), ""];
		if (typeName _function == "CODE") then {
			[_value, false, false] call _function;
		};

		// Create list of changed settings to notify user of
		if (_forEachIndex > 0) then {
			_types = format ["%1, %2", _types, _type];
		} else {
			_types = _type;
		};
	} forEach (_weatherSettings select 0);
} else {
	closeDialog 0;
	_weatherSettings = missionNamespace getVariable ["MB_weatherPreview", [[], []]];
	if !(_weatherSettings isEqualTo [[], []]) then {
		[true, _weatherSettings] remoteExec [_fnc_scriptName, 2, false];
		missionNamespace setVariable ["MB_weatherPreview", nil];
	};
};
