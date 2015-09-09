class MB_Window_Export_Group : MB_RscControlsGroup
{
	idc = 170100;
	x = "SafeZoneX + (SafeZoneW * 0.35)";
	y = "SafeZoneY + (SafezoneH * 0.35)";
	w = MB_WINDOW_GRID_X * 24 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 10 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_Export_BG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 24 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 9 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Export_Header : MB_RscWindowHeader {
			idc = -1;
			text = "Export objects";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 23 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,170100] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,170100] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,170100] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Export_XBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 23;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_Export_X : MB_RscActiveText {
			idc = -1;
			text = "X";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 23;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[170100,true] spawn MB_fnc_closeWindow;";
		};
		
		class MB_Window_Export_FilenameText : MB_RscText {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2 + 0.001;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
			text = "File-/Exportname:";
		};
		class MB_Window_Export_Filename : MB_RscEdit {
			idc = 170105;
			text = "";
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3 + 0.001;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Fileextension will be added depending on selected export method.";
		};
		class MB_Window_Export_TBButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2 + 0.001 - 0.02;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to TB";
			action = "[ctrlText 170105] spawn MB_fnc_exportTB;";
			tooptip = "Export current project as objectlist (.txt) that can be added to Terrain Builder.";
		};
		class MB_Window_Export_SQFButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3 + 0.001;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to SQF";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQF;";
			tooptip = "Export current project as SQF script that can be called in missions by a trigger or script.";
		};
		class MB_Window_Export_SQMButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 4 + 0.001  + 0.02;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to SQM";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQM;";
			tooptip = "Export current project as mission (missionfolder containing .sqm).";
		};
		class MB_Window_Export_TMLButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5 + 0.001  + 0.04;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to TML";
			action = "[ctrlText 170105] spawn MB_fnc_exportTML;";
			tooptip = "Export used objectclasses as TB template library. Helpful when exporting to TB.";
		};
		class MB_Window_Export_Helptext2 : MB_RscText {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 8 + 0.001;
			w = MB_WINDOW_GRID_X * 18;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Exported files can be found in @MapBuilder/export.";
		};
	};
};
