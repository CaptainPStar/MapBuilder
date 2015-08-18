//###################
//	About
//###################
 class MB_Window_About : MB_RscControlsGroup
{
	idc = 170600;
	x = "SafeZoneX + (SafeZoneW * 0.3)";
	y = "SafeZoneY + (SafezoneH * 0.2)";
	w = MB_WINDOW_GRID_X * 18 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 18 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_About_BG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 18 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_About_Header : MB_RscBackground {
			idc = -1;
			text = "About Map Builder";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 17 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,170600] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,170600] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,170600] call MB_fnc_updateWindowDrag;";
		};
		class PMB_Window_About_XBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_About_X : MB_RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[170600,false] spawn MB_fnc_closeWindow;";
		};
		class MB_Window_About_Icon : MB_RscText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 2;
			color[] = {1,1,1,1};
			text = "\MapBuilder\data\icon.paa";
			action = "[170600,false] spawn MB_fnc_openAboutWindow;";
		};
		class MB_Window_About_CurVersionLabel : MB_RscText {
			idc = -1;
			text = "Current Version:";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_CurVersion : MB_RscText {
			idc = -1;
			text = MB_VERSION;
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 8;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_NewVersionLabel : MB_RscText {
			idc = -1;
			text = "Newest Version:";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_NewVersion : MB_RscText {
			idc = 170601;
			text = "Unknown";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 8;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_VersionWarning : MB_RscText {
			idc = 170602;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 14;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_nCredits : MB_RscStructuredText {
			idc = 170603;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 18;
			h = MB_WINDOW_GRID_Y * 13;
		};
		
		
		
	};
};