/*
    Function:       MB_fnc_dispatchCallback
    Author:         NeoArmageddon/Adanteh
    Description:    Calls a hook, if condition is matched
	Example:		['ui.focusreset', [_ctrl]] call MB_fnc_dispatchCallback
*/

params ["_hook", ["_params", []]];

private _hooks = (missionNamespace getVariable ["MB_callBackNamespace", objNull]) getVariable [_hook, []];
{
	_x params ["_callback", "_condition"];
	if (_params call _condition) then {
		_params call _callback;
	};
	nil;
} count _hooks;

true;
