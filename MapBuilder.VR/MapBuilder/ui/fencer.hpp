//###################
//	Fencer
//###################
 class MB_Popup_FencerGroup : RscControlsGroup
{
	idc = 170400;
	x = "SafeZoneX + (SafeZoneW * 0.5)";
	y = "SafeZoneY + (SafezoneH * 0.7)";
	w = MB_WINDOW_GRID_X * 10 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 10 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class Popup_FencerBG : Rsc_Background {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 10 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 9 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_FencerHeader : Rsc_Background {
			idc = -1;
			text = "Fencer";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 9 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,170400] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,170400] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,170400] call MB_fnc_updateWindowDrag;";
		};
		class Popup_FencerHeaderXBG : Rsc_Background {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 9;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class Popup_FencerHeaderX : RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 9;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_closeFencer;";
		};
		class Popup_FencerDirLabel : RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Dir";
		};
		class Popup_FencerUpButton : RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "U";
			action = "MB_FencerDir = 0;[] call MB_FNC_FencerUpdatePreview;";
		};
		class Popup_FencerDownButton : RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 4;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "D";
			action = "MB_FencerDir = 1;[] call MB_FNC_FencerUpdatePreview;";
		};
		class Popup_FencerLeftButton : RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "L";
			action = "MB_FencerDir = 2;[] call MB_FNC_FencerUpdatePreview;";
		};
		class Popup_FencerRightButton : RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 2;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			text = "R";
			action = "MB_FencerDir = 3;[] call MB_FNC_FencerUpdatePreview;";
		};
		class Popup_FencerPlaceButton : RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 7;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Place";
			action = "[] call MB_FNC_FencerPlace;";
		};
		class Popup_FencerOffsetText : RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Offset";
		};
		class Popup_FencerOffset : RscEdit {
			idc = 170410;
			text = "0.0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_FencerMode : MyRscToolbox {
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
		};
		class Popup_FencerTerrainModeLabel : RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Terrain Align:";
		};
		class Popup_FencerTerrainMode : RscCheckbox {
			idc = 170411;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Terrain"};
			strings[] = {"Flat"};
		};
	};
};