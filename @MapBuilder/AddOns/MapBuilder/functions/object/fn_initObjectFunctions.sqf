#include "\MB\MapBuilder\ui\dik.hpp"
//["onMouseUp","MB_fnc_createObjectByDrag",{MB_LibraryDrag != ""}] call MB_fnc_addCallback;

["LeftMouseDblClick",{_this spawn MB_fnc_CreateObjectByClick;},{MB_Mode==0 && !(_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;




//############################
// Object Selection Movement
//############################

MB_ObjectDrag_Mutex = false;

MB_ObjectMoveSelection = [];
MB_ObjectMoveHeight = false;
["BeginLeftMBDrag",{_this spawn MB_fnc_BeginObjectDrag;},{MB_Mode==0 && count(MB_Selected)>0 && !(_this select 4) && !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
["EndLeftMBDrag",{_this spawn MB_fnc_EndObjectDrag;},{MB_Mode==0 && count(MB_ObjectMoveSelection)>0}] call MB_fnc_addCallback;
["MouseMoved",{_this spawn MB_fnc_UpdateObjectDrag;},{MB_Mode==0 && count(MB_ObjectMoveSelection)>0}] call MB_fnc_addCallback;
//############################
// Object Selection Height
//############################
MB_ObjectChangeHeightSelection = [];
//["BeginLeftMBDrag",{_this spawn MB_fnc_BeginObjectHeightDrag;},{MB_Mode==0 && count(MB_Selected)>0 && (_this select 5)}] call MB_fnc_addCallback;
//["EndLeftMBDrag",{_this spawn MB_fnc_EndObjectHeightDrag;},{MB_Mode==0 && count(MB_ObjectChangeHeightSelection)>0}] call MB_fnc_addCallback;
//["MouseMoved",{_this spawn MB_fnc_UpdateObjectHeightDrag;},{MB_Mode==0 && count(MB_ObjectChangeHeightSelection)>0}] call MB_fnc_addCallback;

//############################
// Object Selection Rotation
//############################
MB_ObjectChangeYawSelection = [];
MB_ObjectChangeYawRotationCenter = [];
MB_UpdateObjectYawLock = false;
["BeginRightMBDrag",{_this spawn MB_fnc_BeginObjectYawDrag;},{MB_Mode==0 && count(MB_Selected)>0  &&  !(_this select 5) && !(_this select 6)}] call MB_fnc_addCallback;
["EndRightMBDrag",{_this spawn MB_fnc_EndObjectYawDrag;},{MB_Mode==0 && count(MB_ObjectChangeYawSelection)>0}] call MB_fnc_addCallback;
["MouseMoved",{_this spawn MB_fnc_UpdateObjectYawDrag;},{MB_Mode==0 && count(MB_ObjectChangeYawSelection)>0}] call MB_fnc_addCallback;


//############################
// Object Selection Pitch/Bank
//############################
MB_ObjectChangePitchSelection = [];
MB_ObjectChangeBankSelection = [];

["BeginRightMBDrag",{_this spawn MB_fnc_BeginObjectPitchDrag;},{MB_Mode==0 && count(MB_Selected)>0  &&  !(_this select 4) && !(_this select 6) && (_this select 5)}] call MB_fnc_addCallback;
["EndRightMBDrag",{_this spawn MB_fnc_EndObjectPitchDrag;},{MB_Mode==0 && count(MB_ObjectChangePitchSelection)>0}] call MB_fnc_addCallback;
["MouseMoved",{_this spawn MB_fnc_UpdateObjectPitchDrag;},{MB_Mode==0 && count(MB_ObjectChangePitchSelection)>0}] call MB_fnc_addCallback;
["BeginLeftMBDrag",{_this spawn MB_fnc_BeginObjectBankDrag;},{MB_Mode==0 && count(MB_Selected)>0  &&  !(_this select 4) && !(_this select 6) && (_this select 5)}] call MB_fnc_addCallback;
["EndLeftMBDrag",{_this spawn MB_fnc_EndObjectBankDrag;},{MB_Mode==0 && count(MB_ObjectChangeBankSelection)>0}] call MB_fnc_addCallback;
["MouseMoved",{_this spawn MB_fnc_UpdateObjectBankDrag;},{MB_Mode==0 && count(MB_ObjectChangeBankSelection)>0}] call MB_fnc_addCallback;
//############################
// Object Selection Bank
//############################

//["[[0,1,0],[0,0,1],90] call MB_fnc_RotateVector3D;",10] call bis_fnc_codePerformance;