#include "\MB\MapBuilder\ui\includes\dik.hpp"
MB_CamSpeed = 1.0;

//Move camera but only when no object is dragged in height
["MouseWheelMove",{_this call MB_fnc_CamZoom;},{!([DIK_LALT] call MB_fnc_isPressed)}] call MB_fnc_addCallback;


["MouseMoved",{_this call MB_fnc_camFreeMove;},{[MB_R] call MB_fnc_ViewIsMouseButtonPressed}] call MB_fnc_addCallback;
