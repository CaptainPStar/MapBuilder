/*
    Function:       MB_fnc_uiPosInPos
    Author:         Adanteh
    Description:    Checks if given UI position is within another UI position
*/

params [["_pos", [0, 0], [[]]], ["_posSecond", [0, 0], [[]]]];

if (count _posSecond < 3) exitWith { false };

if ((_pos select 0) < (_posSecond select 0)) exitWith { false }; // Left of pos
if ((_pos select 1) < (_posSecond select 1)) exitWith { false }; // Above pos

if ((_pos select 0) > ((_posSecond select 0) + (_posSecond select 2))) exitWith { false }; // Right of pos
if ((_pos select 1) > ((_posSecond select 1) + (_posSecond select 3))) exitWith { false }; // Bottom of pos

true;
