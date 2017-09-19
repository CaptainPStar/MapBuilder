/*
	Function:       MB_fnc_initPerFrameHandler
	Author:         Based on CBA/ACE/Clib
	Description:    Inits perframe handle (Simplified version)
*/

MB_core_perFrameHandleArray = [];
MB_core_PFHhandles = [];
MB_core_lastTickTime = diag_tickTime;

addMissionEventHandler ["EachFrame", {
	if (getClientState == "GAME FINISHED") exitWith {
		removeMissionEventHandler ["EachFrame",_thisEventHandler];
	};

	{
		_x params ["_function","_delay","_delta","","_args","_handle"];
		if (diag_tickTime > _delta) then {
			_x set [2,_delta + _delay];
			[_args,_handle] call _function;
		};
		nil;
	} count MB_core_perFrameHandleArray;
}];

addMissionEventHandler ["Loaded", {
	{
		_x set [2, (_x select 2) - MB_core_lastTickTime + diag_tickTime];
		nil;
	} count MB_core_perFrameHandleArray;
	MB_core_lastTickTime = diag_tickTime;
}];
