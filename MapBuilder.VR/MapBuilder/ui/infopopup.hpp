//###################
//	Infopopup
//###################
 class MB_Window_Infopopup_Group : RscControlsGroup
{
	idc = 171000;
	x = "SafeZoneX + (SafeZoneW * 0.35)";
	y = "SafeZoneY + (SafezoneH * 0.35)";
	w = MB_WINDOW_GRID_X * 14 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 9 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_Infopopup_BG : Rsc_Background {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 14 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 8 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Infopopup_Header : Rsc_Background {
			idc = -1;
			text = "Info";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 13 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,171000] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,171000] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,171000] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Infopopup_XBG : Rsc_Background {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_Infopopup_X : RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[171000,true] spawn MB_fnc_closeWindow;";
		};
		class MB_Window_Infopopup_Message : RscStructuredText {
			idc = 171001;
			text = "Sometext...";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 14;
			h = MB_WINDOW_GRID_Y * 4;
		};
		class MB_Window_Infopopup_Ok : RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Ok";
			action = "[171000,true] spawn MB_fnc_closeWindow;";
		};
	};
};