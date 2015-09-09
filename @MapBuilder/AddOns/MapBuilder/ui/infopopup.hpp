
//###################
//	Infopopup
//###################
 class MB_Window_Infopopup_Group : MB_RscControlsGroup
{
	idc = 171000;
	x = "SafeZoneX + (SafeZoneW * 0.35)";
	y = "SafeZoneY + (SafezoneH * 0.35)";
	w = MB_WINDOW_GRID_X * 14 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 9 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_Infopopup_BG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 14 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 8 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class MB_Window_Infopopup_Header : MB_RscWindowHeader {
			idc = -1;
			text = "Info";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 14 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,1};
			onMouseButtonDown = "[_this,171000] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,171000] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,171000] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Infopopup_Message : MB_RscStructuredText {
			idc = 171001;
			text = "Sometext...";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 14;
			h = MB_WINDOW_GRID_Y * 4;
		};
		class MB_Window_Infopopup_Ok : MB_RscButton {
			idc = 171002;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Ok";
			action = "[171000,true] call MB_fnc_closeWindow;";
		};
		class MB_Window_Infopopup_Cancel : MB_RscButton {
			idc = 171003;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 7;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Cancel";
			action = "[171000,true] call MB_fnc_closeWindow;";
		};
	};
};