#include "\MB\MapBuilder\ui\dik.hpp"
MB_CamSpeed = 1.0;
["MouseWheelMove",{_this call MB_fnc_CamZoom;},{true}] call MB_fnc_addCallback;
["MouseMoved",{_this call MB_fnc_camFreeMove;},{[MB_M] call MB_fnc_ViewIsMouseButtonPressed}] call MB_fnc_addCallback;