/*
    Function:       MB_fnc_removeCallback
    Author:         NeoArmageddon/Adanteh
    Description:    Removes a certain indexed from the given hook
*/

params [["_id",[],[[]]];

if (count _id < 2) exitWith { };

private _hookName = _id select 0;
private _hooks = MB_callBackNamespace getVariable [_hookName, []];
private _hookToDelete = _id select 1;
if (count _hooks > _hookToDelete) then {
	_hooks deleteAt _hookToDelete;
	MB_callBackNamespace setVariable [_hookName, _hooks];
};

true
