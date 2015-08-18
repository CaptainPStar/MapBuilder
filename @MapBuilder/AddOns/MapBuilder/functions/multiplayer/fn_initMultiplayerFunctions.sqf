MB_syncVar_Object = [];
"MB_syncVar_Object" addPublicVariableEventHandler {
	(_this select 1) call MB_fnc_syncRemoteObject;
};
MB_syncVar_DeleteObject = -1;
"MB_syncVar_DeleteObject" addPublicVariableEventHandler {
	[_this select 1] call MB_fnc_remoteDelete;
};