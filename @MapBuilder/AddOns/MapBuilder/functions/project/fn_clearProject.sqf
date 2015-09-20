private["_confirmed"];
_confirmed = ["This will remove all objects from current project! A copy of the project will be saved. Are you sure?",0] call MB_fnc_showPopupDialog;

if(_confirmed) then {
	["clearedProject"] call MB_fnc_saveProject;
	[] call MB_fnc_resetProject;
};