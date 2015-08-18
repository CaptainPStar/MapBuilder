//############################
// Rectangle Selection
//############################
MB_SelectionRectangle = [];
MB_SelectionRectangle_Mutex = false;
MB_SelectionModeAdd = false; 
["BeginLeftMBDrag",{_this call MB_fnc_BeginRectangleDrag;},{MB_Mode==0 && count(MB_Selected)==0 || (_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
["EndLeftMBDrag",{_this call MB_fnc_EndRectangleDrag;},{MB_Mode==0 && count(MB_SelectionRectangle)>0}] call MB_fnc_addCallback;
["MouseMoved",{_this call MB_fnc_UpdateRectangleDrag;},{MB_Mode==0 && count(MB_SelectionRectangle)>0}] call MB_fnc_addCallback;
["LeftMouseClick","MB_fnc_SelectUnderCursor",{MB_Mode==0 && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;

MB_SelectionBox = [];