#include "\MB\MapBuilder\gui\defines.hpp"
#include "\MB\MapBuilder\gui\extern.hpp"


class MB_DropdownGroup : RscControlGroup
{
	type = CT_CONTROLS_GROUP;
	style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
	w = MB_GUI_GRID_W * 4;
	h = MB_GUI_GRID_H * 2;
	onMouseMoving = "";
	onMouseEnter = "systemchat ""Enter"";";
	onMouseExit = "systemchat ""Exit"";";
	class Controls {
		class Text : RscText {
			idc = -1;
			type = 0;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			//w = "0";
			//h = "0";
			colorBackground[] = {0, 0, 0, 0};
			text = "";
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
			//onMouseEnter = "_this call MBGUI_FNC_openTopbarCategory;";
			//onMouseExit = "systemchat""blub"";_this call MBGUI_FNC_closeTopbarCategory;";
			onMouseEnter = "";
			onMouseExit = "";
		};

		class DropdownPanelBG : RscControlGroup {
			idc = IDC_MB_TOPBAR_DROPDOWN_GROUP;
			type = CT_CONTROLS_GROUP;
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
			x = 0;
			y = MB_GUI_GRID_H;
			w = MB_GUI_GRID_W * 4;
			h = MB_GUI_GRID_H * 1;
			class Controls {
				class Background : RscText {
					idc = IDC_MB_TOPBAR_DROPDOWN_GROUP_BG;
					type = 0;
					x = 0;
					y = 0;
					w = MB_GUI_GRID_W * 4;
					h = MB_GUI_GRID_H;
					//w = "0";
					//h = "0";
					colorBackground[] = {1, 1, 1, 0};
					text = "";
					style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
				};
			};
		};
	};
};
class MB_DropdownMouseArea : RscText {
	idc = -1;
	style = ST_MULTI;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	colorBackground[] = {1, 0, 1, 0};
}
class MB_DropdownNode : RscText {
	idc = -1;
	type = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	//w = "0";
	//h = "0";
	colorBackground[] = {0.2, 0.2, 0.2, 0.75};
	text = "Test";
	style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
	//onMouseEnter = "_this call MBGUI_FNC_openTopbarCategory;";
	//onMouseExit = "systemchat""blub"";_this call MBGUI_FNC_closeTopbarCategory;";
	onMouseEnter = "";
	onMouseExit = "";
};
