#define IDC 170100
#define NAME Export
#define TITLE Export
BEGIN_WINDOW(IDC,NAME,TITLE,0.3,0.35,24,13)
		WINDOW_HEADER(NAME,IDC,TITLE,22)
		WINDOW_CLOSE(NAME,IDC,23)
		WINDOW_HELP(NAME,IDC,"Export",22)
		WINDOW_BACKGROUND(NAME,0,1,24,12)
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
			action = "[ctrlText 170105, (ctrlChecked ((uinamespace getvariable 'mb_main_dialog') displayCtrl 170106))] spawn MB_fnc_exportTB;";
			tooltip = "Export current project as objectlist (.txt) that can be added to Terrain Builder.";
		};
		class MB_Window_Export_SQFButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3 + 0.001;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to SQF";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQF;";
			tooltip = "Export current project as SQF script that can be called in missions by a trigger or script.";
		};
		class MB_Window_Export_SQMButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 4 + 0.001  + 0.02;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to SQM";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQM;";
			tooltip = "Export current project as mission (missionfolder containing .sqm).";
		};
		class MB_Window_Export_TMLButton : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5 + 0.001  + 0.04;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Export to TML";
			action = "[ctrlText 170105] spawn MB_fnc_exportTML;";
			tooltip = "Export used objectclasses as TB template library. Helpful when exporting to TB. Highly experimental!";
		};
		class MB_Window_Export_EditorImport : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 6 + 0.001  + 0.06;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Import Static";
			action = "[] spawn MB_fnc_importFromEditor;";
			tooltip = "Import all mission/script placed static objects into MB project.";
		};
		class MB_Window_Export_TBImport : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 12;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7 + 0.001  + 0.08;
			w = MB_WINDOW_GRID_X * 8;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Import TB File";
			action = "[ctrlText 170105] spawn MB_fnc_importFromTB;";
			tooltip = "Import TB exported (txt) objects into MB project. Files must be in @MapBuilder/import folder.";
		};
		class MB_Window_Export_Helptext2 : MB_RscText {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11 + 0.001;
			w = MB_WINDOW_GRID_X * 18;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Exported files can be found in @MapBuilder/export.";
		};
		class MB_Window_Export_Helptext3 : MB_RscText {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 8 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 0.5;
			text = "TB Names:";
		};
		class MB_Window_Export_TBMode : MB_RscCheckbox {
			idc = 170106;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 8 + 0.001;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Class"};
			strings[] = {"P3D"};
			tooltip = "Export P3D or Classnames in TB Exports (Classnames work in conjunction with TML export).";
		};
END_WINDOW
