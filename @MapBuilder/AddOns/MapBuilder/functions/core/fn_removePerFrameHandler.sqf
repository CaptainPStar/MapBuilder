/*
    Function:       MB_fnc_removePerFrameHandler
    Author:         Based on CBA/ACE/Clib
    Description:    Removes perFrame handler
*/

params [["_handle", -1, [0]]];

if (_handle < 0 || {_handle >= count MB_Core_PFHhandles}) exitWith { };

MB_Core_perFrameHandleArray deleteAt (MB_Core_PFHhandles select _handle);
MB_Core_PFHhandles set [_handle, nil];

{
    _x params ["", "", "", "", "", "_handle"];
    MB_Core_PFHhandles set [_handle, _forEachIndex];
} forEach MB_Core_perFrameHandleArray;
