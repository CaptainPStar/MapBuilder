#include "\MB\MapBuilder\version.hpp"
#define IDC 170600
#define NAME About
#define TITLE About Map Builder
BEGIN_WINDOW(IDC,NAME,TITLE,0.3,0.2,18,18)
		class MB_Window_About_Icon : MB_RscText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 2;
			color[] = {1,1,1,1};
			text = "\MB\MapBuilder\data\icon.paa";
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

END_WINDOW
