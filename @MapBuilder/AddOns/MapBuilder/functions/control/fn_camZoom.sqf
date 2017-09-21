/*
    Function:       MB_fnc_camZoom
    Author:         NeoArmageddon
    Description:    Handles zooming the camera with mousewheel
*/
#include "\MB\MapBuilder\ui\includes\dik.hpp"

params ["_delta"];

private _camPos = MB_CamPos select 0;
private _modifier = call {
    if ([DIK_LSHIFT] call MB_fnc_isPressed) exitWith { 2 };
    // if ([DIK_LALT] call MB_fnc_isPressed) exitWith { 6 }; // -- Disabled because Alt is used to change height on objects
    0.5
};

_camPos set[0,(_camPos select 0)+_delta*_modifier*sin(MB_CamPos select 1)];
_camPos set[1,(_camPos select 1)+_delta*_modifier*cos(MB_CamPos select 1)];
_camPos set[2,(_camPos select 2)+_delta*_modifier*sin(MB_CamPos select 2)];
