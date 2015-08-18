class MB_Popup_TestGroup : MB_RscControlsGroup
{
	idc = 666;
	x = "SafeZoneX + (SafeZoneW * 0.5)";
	y = "SafeZoneY + (SafezoneH * 0.7)";
	w = MB_WINDOW_GRID_X * 12 + 0.01;
	h = MB_WINDOW_GRID_Y * 12 + 0.01;

	class Controls
	{
		class Popup_TestBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 12;
			h = MB_WINDOW_GRID_Y * 11;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_TestHeader : MB_RscBackground {
			idc = -1;
			text = "Moveable Window";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 11;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,666] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,666] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,666] call MB_fnc_updateWindowDrag;";
		};
		class Popup_TestHeaderXBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 11;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class Popup_TestHeaderX : MB_RscActiveText {
			idc = -1;
			text = "X";
			x = MB_WINDOW_GRID_X * 11;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[666,false] spawn MB_fnc_closeWindow;";
		};
	};
};