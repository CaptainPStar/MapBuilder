_object = MB_InspectedObject;
	if(!isNull _object) then {
		[_object] call MB_fnc_UpdateObject;
	};
	[] call MB_fnc_InspectorFill;