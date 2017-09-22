/*
    Function:       MB_fnc_beginRectangleDrag
    Author:         NeoArmageddon
    Description:    Square drag selection to select multiple objects in one go
*/


private _startPos = MB_namespace getVariable ["mb.drag.startPos", MB_MousePosition];
MB_SelectionRectangle = [_startPos, _startPos];
MB_SelectionModeAdd = (_this select 4);
if(!MB_SelectionModeAdd) then {
	[] call MB_fnc_DeselectAll;
};
