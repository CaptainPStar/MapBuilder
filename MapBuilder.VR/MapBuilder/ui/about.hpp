//###################
//	About
//###################
 class MB_Window_About : RscControlsGroup
{
	idc = 170600;
	x = "SafeZoneX + (SafeZoneW * 0.3)";
	y = "SafeZoneY + (SafezoneH * 0.2)";
	w = MB_WINDOW_GRID_X * 18 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 18 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_About_BG : Rsc_Background {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 18 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_About_Header : Rsc_Background {
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
		class PMB_Window_About_XBG : Rsc_Background {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_About_X : RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[170600,false] spawn MB_fnc_closeWindow;";
		};
		class MB_Window_About_Icon : RscText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 2;
			color[] = {1,1,1,1};
			text = "MapBuilder\icon.paa";
			action = "[170600,false] spawn MB_fnc_openAboutWindow;";
		};
		class MB_Window_About_CurVersionLabel : RscText {
			idc = -1;
			text = "Current Version:";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_CurVersion : RscText {
			idc = -1;
			text = MB_VERSION;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 8;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_NewVersionLabel : RscText {
			idc = -1;
			text = "Newest Version:";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_NewVersion : RscText {
			idc = 170601;
			text = "Unknown";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 8;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_VersionWarning : RscText {
			idc = 170602;
			text = "";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 14;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_About_nCredits : RscStructuredText {
			idc = 170603;
			text = "";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 18;
			h = MB_WINDOW_GRID_Y * 13;
		};
		
		
		
	};
};