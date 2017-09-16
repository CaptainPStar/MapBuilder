/*
    Function:       MB_fnc_postInitWeather
    Author:         Adanteh
    Description:    Inits all the weather settings, plus makes the rain stop on high overcast
*/


// -- Stops the rain from autostarting on high overcast settings -- //
[{ call MB_fnc_weatherStopRain }, 5, []] call MB_fnc_addPerFrameHandler;

// -- Add all the settings -- //
if (hasInterface) then {
	['add', ['weather', "Weather Settings", 'Weather', [
		'Time',
		'Sets the time of day',
		"MB_CtrlSettingSlider",
		{ (date select 3) },
		{ true; },
		(format ["['date', [(_this select 1)]] call %1; false;", "MB_fnc_weatherPreview"]),
		[[0, 24], [0.05, 1]]
	]]] call MB_fnc_settingsWindow;

	// -- Volume levels -- //
	['add', ['weather', "Weather Settings", 'Weather', [
		'Overcast',
		'Set the amount of overcast',
		"MB_CtrlSettingSlider",
		{ overcast },
		{ true; },
		(format ["['overcast', (_this select 1)] call %1; false;", "MB_fnc_weatherPreview"]),
		[[0, 1], [0.05, 1]]
	]]] call MB_fnc_settingsWindow;

	['add', ['weather', "Weather Settings", 'Weather', [
		'Rain',
		'Set the amount of rain',
		"MB_CtrlSettingSlider",
		{ rain },
		{ true; },
		(format ["['rain', (_this select 1)] call %1; false;", "MB_fnc_weatherPreview"]),
		[[0, 1], [0.05, 1]]
	]]] call MB_fnc_settingsWindow;

	['add', ["weather", 'Weather Settings', 'Weather', [
		'Fog',
		'Set the amount of fog',
		"MB_CtrlSettingSlider",
		{ fog },
		{ true; },
		(format ["['fog', (_this select 1)] call %1; false;", "MB_fnc_weatherPreview"]),
		[[0, 1], [0.05, 1]]
	]]] call MB_fnc_settingsWindow;

	['add', ['weather', "Weather Settings", 'Weather', [
		'Wind',
		'Set the amount of wind',
		"MB_CtrlSettingSlider",
		{ windStr },
		{ true; },
		(format ["['wind', (_this select 1)] call %1; false;", "MB_fnc_weatherPreview"]),
		[[0, 1], [0.05, 1]]
	]]] call MB_fnc_settingsWindow;

	['add', ['weather', "Weather Settings", 'Weather', [
		'Broadcast',
		'Broadcasts all the changed weather settings',
		"MB_CtrlSettingButton",
		true,
		{ true; },
		(format ["[false, []] call %1; false;", "MB_fnc_weatherCommit"]),
		["BROADCAST"]
	]]] call MB_fnc_settingsWindow;
};
