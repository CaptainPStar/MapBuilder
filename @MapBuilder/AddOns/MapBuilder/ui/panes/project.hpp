#define IDC 170200
#define NAME Project
#define TITLE Save/Load Projects
BEGIN_WINDOW(IDC,NAME,TITLE,0.25,0.3,28,18)
		class Popup_ProjectsListLabel : MB_RscText {
			idc = -1;
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
END_WINDOW
