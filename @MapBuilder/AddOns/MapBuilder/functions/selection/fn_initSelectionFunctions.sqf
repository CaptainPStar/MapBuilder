//############################
// Rectangle Selection
//############################
MB_SelectionRectangle = [];
MB_SelectionRectangle_Mutex = false;
MB_SelectionModeAdd = false;
["BeginMiddleMBDrag",{_this call MB_fnc_BeginRectangleDrag;}] call MB_fnc_addCallback;
["EndMiddleMBDrag",{_this call MB_fnc_EndRectangleDrag;},{ count (MB_SelectionRectangle)>0 }] call MB_fnc_addCallback;
["camUpdate",{_this call MB_fnc_UpdateRectangleDrag;},{count (MB_SelectionRectangle) > 0}] call MB_fnc_addCallback;

["LeftMouseClick","MB_fnc_SelectUnderCursor",{MB_Mode==0 && !(_this select 4) && !(_this select 6)}] call MB_fnc_addCallback;
["RightMouseClick","MB_fnc_DeselectUnderCursor",{MB_Mode==0 && !(_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
MB_SelectionBox = [];
