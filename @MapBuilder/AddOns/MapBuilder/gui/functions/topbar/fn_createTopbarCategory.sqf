#include "\MB\MapBuilder\include.hpp"
#include "\MB\MapBuilder\gui\defines.hpp"
private["_display","_ctrl"];
disableSerialization;

_ctrl = (finddisplay IDD_MB_INTERFACE) ctrlCreate ["MB_DropdownGroup", -1];
_ctrl ctrlSetPosition [MB_GUI_GRID_X + 2 * MB_GUI_GRID_W, MB_GUI_GRID_Y];
_ctrl ctrlCommit 0;
_ctrl = (finddisplay IDD_MB_INTERFACE) ctrlCreate ["MB_DropdownCategory", -1, _ctrl];