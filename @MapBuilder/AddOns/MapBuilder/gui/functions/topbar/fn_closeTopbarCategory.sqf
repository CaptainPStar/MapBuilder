#include "\MB\MapBuilder\include.hpp"
#include "\MB\MapBuilder\gui\defines.hpp"
private["_display","_ctrl","_dummy"];
disableSerialization;

_ctrl = ((findDisplay IDD_MB_INTERFACE) displayCtrl (_this select 0));
_dummy = ((findDisplay IDD_MB_INTERFACE) displayCtrl (_this select 1));

systemchat format["Close %1",_ctrl];

_dim = ctrlPosition _ctrl;
_dim set[3,MB_GUI_GRID_H];
_ctrl ctrlSetPosition _dim;
_ctrl ctrlCommit 0.2;
_dummy ctrlSetPosition _dim;
_dummy ctrlCommit 0.2;