private["_vars","_offset"];
	MB_CopyPaste = [];
	{
		_vars = [_x] call MB_fnc_getObjectVars;
		_offset = (_vars select 0) vectorDiff MB_MousePosition;
		MB_CopyPaste pushBack [typeof _x,_offset,_vars];
	} foreach MB_Selected;
	[] call MB_fnc_copyObjectsToClipboard;
	systemChat format["Selection of %1 objects copied to clipboard.",count(MB_CopyPaste)];