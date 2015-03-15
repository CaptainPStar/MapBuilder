#include "ui\defines.hpp"
#include "version.hpp"
class MB_Main
{
	idd = 123;
	movingenable = false;
	onLoad = "uiNamespace setVariable ['mb_main_dialog', (_this select 0)];";
	onUnload = "call MB_fnc_Exit;";
	
	class controlsBackground {
		class Rsc_MouseArea : RscText {
			idc = 170001;
			style = ST_MULTI;
			
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW * 0.8";
			h = "safezoneH * 0.97";
			//w = "0";
			//h = "0";
			colorBackground[] = {0, 0, 0, 0};
			text = "";
			//onMouseMoving = "MB_MouseScreenPosition = [_this select 1,_this select 2];MB_MousePosition=screenToWorld [_this select 1,_this select 2];";
			//onMouseButtonDown = "_this call MB_fnc_MouseDown;";
			//onMouseButtonUp = "_this call MB_fnc_MouseUp;";
			//onMouseButtonDblClick = "_this call MB_fnc_MouseDblClick;";
			//onMouseZChanged = "_this call MB_fnc_MouseZ;";
			onKeyDown = "_this call MB_fnc_KeyDown;";
			onKeyUp = "_this call MB_fnc_KeyUp;false;";
			//onMouseExit = "MB_RegisterKeys = false;_this call MB_fnc_resetKeys;[false] call MB_fnc_MouseInView";
			//onMouseEnter = "MB_RegisterKeys = true;[true] call MB_fnc_MouseInView";
			//onMouseMoving = "systemchat format[""%1"",_this];";
		};
		//class MB_LoadingScreen : RscText {
		//	idc = 180000;
		//	style = ST_CENTER;
		//	x = "SafeZoneX + (SafeZoneW * 0)";
		//	y = "SafeZoneY + (SafezoneH * 0)";
		//	w = "SafeZoneW * 1";
		//	h = "SafeZoneH * 1";
		//	colorBackground[] = {0.1, 0.9, 0.1, 1.0};
		//	text = "Loading...";
		//};
	};
	class Objects
	{
 
		class Can
		{
 
			onObjectMoved = "";
 
			idc = 180000; 
			type = 82;
			model = "\A3\Structures_F\Items\Food\Can_V3_F.p3d";
			scale = 1;
 
			direction[] = {0, -0.35, -0.65};
			up[] = {0, 0.65, -0.35}; 
 
			//position[] = {0,0,0.2}; optional
 
			x = 0.37;
			y = 0.37;
			z = 2.0;
 
			//positionBack[] = {0,0,1.2}; optional
 
			xBack = 0.37;
			yBack = 0.37;
			zBack = 2.0;
 
			inBack = 0;
			enableZoom = 1;
			zoomDuration = 0.001;
		};
	};
	class controls {
		class RscObject;
		class Rsc_Background : RscText { //--- Render out.
			idc = 170002;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.8)";
			y = "SafeZoneY + (SafezoneH * 0)";
			w = "SafeZoneW * 0.20";
			h = "SafeZoneH * 1";
			colorBackground[] = {0, 0, 0, 0.3};
			onMouseExit = "[false] call MB_fnc_MouseInView;";
			onMouseEnter = "[true] call MB_fnc_MouseInView;";
		};
		class listboxA : RscTree {
			idc = 170003;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.02)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.29";
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_LibrarySelect;";
			onMouseExit = "[] call MB_fnc_disable3DPreview; false";
			//onMouseButtonDown = "_this call MB_fnc_libraryMousedown;";
			onMouseButtonUp = "_this call MB_fnc_libraryMouseup;";
			onTreeLButtonDown = "_this call MB_fnc_libraryMousedown;";
			//onLBDrag = "systemchat ""Drag!"";";
			//onLBSelChanged="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been changed
            //onLBDblClick="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been double clicked
		};
		//class listboxB : listboxA {
		//	idc = 170004;
		//	x = "SafeZoneX + (SafeZoneW * 0.81)";
		//	y = "SafeZoneY + (SafezoneH * 0.31)";
		//	w = "SafeZoneW * 0.18";
		//	h = "SafeZoneH * 0.29";
		//	onLBSelChanged="call MB_Listbox_Objects_SetCur;";//--- action/function to call when listbox or combobox has been changed
        //    onLBDblClick="call MB_Listbox_Objects_SetCur;";//--- action/function to call when listbox or combobox has been double clicked
		//};
		class ExportButton : RscButton {
			idc = 170005;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.91)";
			w = "SafeZoneW * 0.05";
			h = "SafeZoneH * 0.05";
			text = "Export";
			action = "[1] call MB_fnc_togglePopup;";
		};
		class SaveToEditorButton : RscButton {
			idc = 170006;
			x = "SafeZoneX + (SafeZoneW * 0.87)";
			y = "SafeZoneY + (SafezoneH * 0.91)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Save/Load Project";
			action = "[] call MB_fnc_ShowProjects;";
		};
		class MB_Icon : RscActiveText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.01)";
			y = "SafeZoneY + (SafezoneH * 0.01)";
			w = "0.08";
			h = "0.09";
			color[] = {1,1,1,0.9};
		colorActive[] = {1,1,1,1};
			text = "MapBuilder\icon.paa";
			action = "[170600,false] spawn MB_fnc_openAboutWindow;";
		};
		class MB_SelectedTemplate : RscStructuredText {
			idc = 170007;

			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.32)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.08";
			text =  "Selected: None";
		};
		class MB_FencerButton : RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.87)";
			y = "SafeZoneY + (SafezoneH * 0.85)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Fencer";
			action = "[] call MB_fnc_openFencer;";
		};
		class MB_ObjSettingsLabel : RscText {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.41)";
			w = "SafeZoneW * 0.1";
			h = "SafeZoneH * 0.03";
			text =  "New Object settings:";
		};
		class MB_RndDirCheckbox : RscCheckbox {
			idc = 170010;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.45)";
			w = "SafeZoneW * 0.03";
			h = "SafeZoneH * 0.03";
			checked_strings[] = {"RndDir"};
			strings[] = {"RndDir"};
		};
		class MB_SimulCheckbox : RscCheckbox {
			idc = 170011;
			x = "SafeZoneX + (SafeZoneW * 0.86)";
			y = "SafeZoneY + (SafezoneH * 0.45)";
			w = "SafeZoneW * 0.03";
			h = "SafeZoneH * 0.03";
			checked_strings[] = {"Simul"};
			strings[] = {"Simul"};
		};
		class MB_ModeSettingsLabel : RscText {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.50)";
			w = "SafeZoneW * 0.1";
			h = "SafeZoneH * 0.03";
			text =  "Mode:";
		};
		class MB_ModeSettings : MyRscToolbox {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.54)";
			w = "SafeZoneW * 0.16";
			h = "SafeZoneH * 0.05";
			rows = 1;
			columns = 2;
			strings[] = {"Objects","MM"};
			values[] = {0,1};
			onToolBoxSelChanged = "[(_this select 1)] call MB_fnc_switchMode;"
		};
		class PresetsButton : RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.85)";
			w = "SafeZoneW * 0.05";
			h = "SafeZoneH * 0.05";
			text = "Presets";
			action = "[] call MB_fnc_showPresetWindow;";
		};
		class ProjectSettingsButton : RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.87)";
			y = "SafeZoneY + (SafezoneH * 0.79)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Settings";
			action = "[] call MB_fnc_showPresetWindow;";
		};
		//###################
		//	Taskbar
		//###################
		
		class MB_Taskbar : RscText { //--- Render out.
			idc = 171009;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.80";
			h = "SafeZoneH * 0.03";
			colorBackground[] = {0, 0, 0, 0.3};
		};
		
		//###################
		//	Map Popup
		//###################
		
		class MB_Map : RscMapControl
        {
			idc = 170301;
			style = 48;
			type = 101;
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.32)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.4";
			onLoad = "";
			onMouseButtonDblClick = "_this call MB_fnc_mapDblClickTeleport;";
        };
		class Popup_MapHeader : Rsc_Background {
			idc = 170302;
			text = "Map";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.3)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_MapHeaderClose : RscActiveText {
			idc = 170303;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.585)";
			y = "SafeZoneY + (SafezoneH * 0.3)";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[3,false] call MB_fnc_togglePopup;";
		};
		
		//###################
		//	Export Popup
		//###################
		
		class Popup_ExportBG : Rsc_Background {
			idc = 170101;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.3";
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_ExportHeader : Rsc_Background {
			idc = 170102;
			text = "Export Objects";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ExportHeaderClose : RscActiveText {
			idc = 170103;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.585)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[1,false] call MB_fnc_togglePopup;";
		};
		class Popup_ExportHeaderFilenameText : RscText {
			idc = 170104;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.47)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Export Name (Warning: May overwrite existing files!):";
		};
		class Popup_ExportHeaderFilename : RscEdit {
			idc = 170105;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.5)";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ExportTBButton : RscButton {
			idc = 170106;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.6)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Export to TB";
			action = "[ctrlText 170105] spawn MB_fnc_exportTB;";
		};
		class Popup_ExportSQFButton : RscButton {
			idc = 170107;
			x = "SafeZoneX + (SafeZoneW * 0.35)";
			y = "SafeZoneY + (SafezoneH * 0.6)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Export to SQF";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQF;";
		};
		class Popup_ExportSQMButton : RscButton {
			idc = 170108;
			x = "SafeZoneX + (SafeZoneW * 0.45)";
			y = "SafeZoneY + (SafezoneH * 0.6)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Export to SQM";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQM;";
		};
		class Popup_ExportHelptext : RscText {
			idc = 170109;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.55)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Extension is added automatically.";
		};
		class Popup_ExportHelptext2 : RscText {
			idc = 170110;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.57)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Exported files can be found in @MapBuilder/export.";
		};
		//###################
		//	Save/load Project
		//###################
		
		class Popup_ProjectsBG : Rsc_Background {
			idc = 170201;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.4";
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_ProjectsHeader : Rsc_Background {
			idc = 170202;
			text = "Save/Load Projects";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ProjectsHeaderClose : RscActiveText {
			idc = 170203;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.585)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[2,false] call MB_fnc_togglePopup;";
		};
		class Popup_ProjectsList : RscListBox {
			idc = 170204;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.45)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.2";
			onLBSelChanged="call MB_fnc_ProjectsPopupSelect;";//--- action/function to call when listbox or combobox has been changed
            onLBDblClick="call MB_fnc_ProjectsPopupSelect;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class Popup_ProjectsFilename : RscEdit {
			idc = 170205;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.68)";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ProjectsSaveButton : RscButton {
			idc = 170206;
			x = "SafeZoneX + (SafeZoneW * 0.21)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Save";
			action = "[ctrlText 170205] spawn MB_fnc_saveProject;";
		};
		class Popup_ProjectsLoadButton : RscButton {
			idc = 170207;
			x = "SafeZoneX + (SafeZoneW * 0.39)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Load";
			action = "[ctrlText 170205] spawn MB_fnc_loadProject;";
		};
		class Popup_ProjectsHelptext : RscText {
			idc = 170208;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.42)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Existing projects:";
		};
		class Popup_ProjectsImportButton : RscButton {
			idc = 170209;
			x = "SafeZoneX + (SafeZoneW * 0.30)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Import";
			action = "[ctrlText 170205] spawn MB_fnc_importProject;";
		};
		class Popup_ProjectsClearButton : RscButton {
			idc = 170210;
			x = "SafeZoneX + (SafeZoneW * 0.48)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Clear";
			action = "[ctrlText 170205] spawn MB_fnc_clearProject;";
		};
		
		#include "ui\fencer.hpp"
		//###################
		//	Brusher
		//###################
		
		#include "ui\presets.hpp"
		#include "ui\test.hpp"
		#include "ui\about.hpp"
		#include "ui\inspector.hpp"
	};
};
