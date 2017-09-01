if(MB_LibraryDrag != "") then {
		systemchat format["Dropped %1",MB_LibraryDrag];
		[_this select 2, _this select 3] call mb_fnc_createObjectByDrag;
		MB_LibraryDrag = "";
};