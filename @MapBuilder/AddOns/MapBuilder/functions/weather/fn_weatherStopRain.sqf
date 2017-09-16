/*
    Function:       MB_fnc_weatherStopRain
    Author:         Adanteh
    Description:    Function to force stop rain, which is automagically reenabled on higher overcast settings by BIS weather gods
*/

if !(missionNamespace getVariable ["MB_weatherAllowRain", false]) then {
	if (rain != 0) then {
		0 setRain 0;
	};
};
