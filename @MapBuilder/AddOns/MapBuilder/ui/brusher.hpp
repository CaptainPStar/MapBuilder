//###################
//	Infopopup
//###################
 class MB_Window_Brusher_Group : MB_RscControlsGroup
{
	idc = 171200;
	x = "SafeZoneX + (SafeZoneW * 0.15)";
	y = "SafeZoneY + (SafezoneH * 0.15)";
	w = MB_WINDOW_GRID_X * 38 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 28 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_Brusher_BG1 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 12 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 27 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_BG2 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 25 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 9 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_BG3 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 25 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_Header : MB_RscBackground {
			idc = -1;
			text = "Brushes";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 37 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,171200] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,171200] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,171200] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Brusher_XBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 37;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_Brusher_X : MB_RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 37;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[171200,true] spawn MB_fnc_closeWindow;";
		};
	};
};