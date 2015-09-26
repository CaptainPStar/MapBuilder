#define IDC 170400
#define NAME Fencer
#define TITLE Fencer
BEGIN_WINDOW(IDC,NAME,TITLE,0.5,0.65,14,12)
		WINDOW_HEADER(NAME,IDC,TITLE,12)
		WINDOW_CLOSE(NAME,IDC,13)
		WINDOW_HELP(NAME,IDC,"Fencer",12)
		WINDOW_BACKGROUND(NAME,0,1,14,11)
		class Popup_FencerDirLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Direction";
		};
		class Popup_FencerForwardButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "F";
			action = "MB_FencerDir = 0;[] call MB_FNC_FencerUpdatePreview;";
			tooltip = "Forward";
		};
		class Popup_FencerBackwardButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 4;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "B";
			action = "MB_FencerDir = 1;[] call MB_FNC_FencerUpdatePreview;";
			tooltip = "Backward";
		};
		class Popup_FencerLeftButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "L";
			action = "MB_FencerDir = 2;[] call MB_FNC_FencerUpdatePreview;";
			tooltip = "Left";
		};
		class Popup_FencerRightButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "R";
			action = "MB_FencerDir = 3;[] call MB_FNC_FencerUpdatePreview;";
			tooltip = "Right";
		};
		class Popup_FencerUpButton : MB_RscButton {
			idc = -1;
			WINDOW_POSITION(2,2,1,1)
			text = "U";
			action = "MB_FencerDir = 4;[] call MB_FNC_FencerUpdatePreview;";
			tooltip = "Stack top";
		};
		class Popup_FencerDownButton : MB_RscButton {
			idc = -1;
			WINDOW_POSITION(2,4,1,1)
			text = "D";
			action = "MB_FencerDir = 5;[] call MB_FNC_FencerUpdatePreview;";
			tooltip = "Stack bottom";
		};
		class Popup_FencerPlaceButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 7;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Place";
			action = "[] call MB_FNC_FencerPlace;";
		};
		class Popup_FencerOffsetText : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Offset";
		};
		class Popup_FencerOffset : MB_RscEdit {
			idc = 170410;
			text = "0.0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_FencerMode : MB_RscToolbox {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 4;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 2;
			rows = 1;
			columns = 3;
			strings[] = {"ATL","GND","CST"};
			values[] = {0,1,2};
			onToolBoxSelChanged = "MB_FencerHeightMode = (_this select 1);";
			tooltip = "ATL: Keep relative height above terrain.\nGND: Place always on ground.\nCST: Keep constant height above sealevel (for bridges, etc).";
		};
		class Popup_FencerTerrainModeLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Terrain Align:";
		};
		class Popup_FencerTerrainMode : MB_RscCheckbox {
			idc = 170411;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Terrain"};
			strings[] = {"Flat"};
		};
		class Popup_FencerObjModeLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Obj. Source:";
		};
		class Popup_FencerObjMode : MB_RscCheckbox {
			idc = 170412;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Library"};
			strings[] = {"Repeat"};
			tooltip = "Repeat selected object or place object from library.";
		};
END_WINDOW