		//###################
		//	Save/load Project
		//###################
 class MB_ProjectWindowGroup : MB_RscControlsGroup
{
	idc = 170200;
	x = "SafeZoneX + (SafeZoneW * 0.25)";
	y = "SafeZoneY + (SafezoneH * 0.3)";
	w = MB_WINDOW_GRID_X * 28 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 18 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_ProjectWindowBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 28 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_ProjectWindowHeader : MB_RscWindowHeader {
			idc = -1;
			text = "Save/Load Projects";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 27 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,170200] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,170200] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,170200] call MB_fnc_updateWindowDrag;";
		};
		class MB_ProjectWindowXBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 27;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_ProjectWindowX : MB_RscActiveText {
			idc = -1;
			text = "X";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 27;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] spawn fn_showProjectWindow;";
		};
		class Popup_ProjectsListLabel : MB_RscText {
			idc = 170204;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Project Files:";
		};
		class Popup_ProjectsList : MB_RscListBox {
			idc = 170204;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 28;
			h = MB_WINDOW_GRID_Y * 10;
			onLBSelChanged="call MB_fnc_ProjectsPopupSelect;";//--- action/function to call when listbox or combobox has been changed
            onLBDblClick="call MB_fnc_ProjectsPopupSelect;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class Popup_ProjectsFilenameLabel : MB_RscText {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Filename:";
		};
		class Popup_ProjectsFilename : MB_RscEdit {
			idc = 170205;
			text = "";
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 3.5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 16.2;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ProjectsSaveButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 3.5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 14.1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Save";
			action = "[ctrlText 170205] spawn MB_fnc_saveProject;";
			tooltip = "Save current project as ""Filename"".mbproj";
		};
		class Popup_ProjectsLoadButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 7.6;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 14.1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Load";
			action = "[ctrlText 170205] spawn MB_fnc_loadProject;";
			tooltip = "Load ""Filename"".mbproj. Current project will be cleared.";
		};
		class Popup_ProjectsImportButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 11.7;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 14.1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Import";
			action = "[ctrlText 170205] spawn MB_fnc_importProject;";
			tooltip = "Load ""Filename"".mbproj and merge with current project.";
		};
		class Popup_ProjectsClearButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 15.8;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 14.1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Clear";
			action = "[ctrlText 170205] spawn MB_fnc_clearProject;";
			tooltip = "Clear current project.";
		};
	};
};