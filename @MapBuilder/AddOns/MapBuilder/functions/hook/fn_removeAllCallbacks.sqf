/*
    Function:       MB_fnc_removeAllCallbacks
    Author:         NeoArmageddon/Adanteh
    Description:    Removes all callbacks belonging to a hook, or if #ALL# given, delete every single one of them
*/

#define __RESETID "#ALL#"
params [["_hook", __RESETID, [""]]];

if (_hook isEqualTo __RESETID) then {
	// -- Could probably just delete the namespace and create a new one
	{
		MB_callBackNamespace setVariable [_x, nil];
	} count (allVariables MB_callBackNamespace);
} else {
	MB_callBackNamespace setVariable [_hook, nil];
};

true;
