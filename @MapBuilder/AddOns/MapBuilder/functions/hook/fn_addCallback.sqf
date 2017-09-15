/*
    Function:       MB_fnc_addCallback
    Author:        	NeoArmageddon/Adanteh
    Description:    Adds a callback/event, which allows you to stack events belonging to a hook you can call
*/

if (isNil "MB_callBackNamespace") then {
	MB_callBackNamespace = false call MB_fnc_createNamespace;
};

params ["_hook", ["_callback", {}, [{}, ""]], ["_condition", {}, [{}, ""]]];

private _hookCurrent = MB_callBackNamespace getVariable [_hook, []];
_callback = [_callback] call MB_parseToCode;
_condition = [_condition] call MB_parseToCode;
private _callbackIndex = _hookCurrent pushBack [_callback, _condition];
MB_callBackNamespace setVariable [toLower _hook, _hookCurrent];
[toLower _hook, _callbackIndex];
