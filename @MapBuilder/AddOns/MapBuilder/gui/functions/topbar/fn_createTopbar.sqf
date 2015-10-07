#include "\MB\MapBuilder\include.hpp"
#include "\MB\MapBuilder\gui\defines.hpp"
private["_display","_ctrl","_XPos","_IDC"];
disableSerialization;
_toolbar = _this;
_XPos = MB_GUI_GRID_X + 2 * MB_GUI_GRID_W;
_IDC = 180000;
{
	private["_name","_nodes","_panel"];
	_name = _x select 0;
	_nodes = _x select 1;
	_XPos = MB_GUI_GRID_X + MB_GUI_GRID_W *(_foreachIndex*4 + 2);
	_ctrl = (finddisplay IDD_MB_INTERFACE) ctrlCreate ["MB_DropdownGroup", _IDC];
	_ctrl ctrlSetPosition [_XPos, MB_GUI_GRID_Y,MB_GUI_GRID_W*4,MB_GUI_GRID_H];
	_ctrl ctrlCommit 0;
	_IDC = _IDC + 1;
	_text = (finddisplay IDD_MB_INTERFACE) ctrlCreate ["MB_DropdownNode", _IDC,_ctrl];
	_text ctrlSetPosition [0, 0 ,MB_GUI_GRID_W*4-MB_GUI_GRID_PADDING_X,MB_GUI_GRID_H];
	_text ctrlCommit 0;
	_text ctrlSetText _name;
	_IDC = _IDC + 1;
	{
		private["_name","_node"];
		_name = _x select 0;
		_node = (finddisplay IDD_MB_INTERFACE) ctrlCreate ["MB_DropdownNode", _IDC,_ctrl];
		_node ctrlSetPosition [0, MB_GUI_GRID_H * (1+_forEachIndex) ,MB_GUI_GRID_W*4-MB_GUI_GRID_PADDING_X,MB_GUI_GRID_H-MB_GUI_GRID_PADDING_Y];
		_node ctrlCommit 0;
		_node ctrlSetText _name;
		_IDC = _IDC + 1;
	} foreach _nodes;
	
	_panel = (finddisplay IDD_MB_INTERFACE) ctrlCreate ["MB_DropdownMouseArea", _IDC];
	_panel ctrlSetPosition [_XPos, MB_GUI_GRID_Y,MB_GUI_GRID_W*4,MB_GUI_GRID_H];
	_panel ctrlCommit 0;
	_panel ctrlAddEventHandler ["MouseEnter",compile format["[%1,%2,%3] call MBGUI_FNC_OpenTopbarCategory;",ctrlIDC _ctrl,ctrlIDC _panel,count(_nodes)]];
	_panel ctrlAddEventHandler ["MouseExit",compile format["[%1,%2] call MBGUI_FNC_CloseTopbarCategory;",ctrlIDC _ctrl,ctrlIDC _panel]];
	_IDC = _IDC + 1;
}foreach _toolbar;