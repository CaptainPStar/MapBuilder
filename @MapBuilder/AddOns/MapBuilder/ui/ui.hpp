#include "mbdefines.hpp"
#include "dik.hpp"
class MB_Main
{
	idd = 123;
	movingenable = false;
	onLoad = "uiNamespace setVariable ['mb_main_dialog', (_this select 0)];";
	onUnload = "call MB_fnc_Exit;";
	
	class controlsBackground {
		class Rsc_MouseArea : MB_RscText {
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
			onKeyDown = "_this call MB_fnc_KeyDown;true";
			onKeyUp = "_this call MB_fnc_KeyUp;true";
			//onMouseExit = "MB_RegisterKeys = false;_this call MB_fnc_resetKeys;[false] call MB_fnc_MouseInView";
			//onMouseEnter = "MB_RegisterKeys = true;[true] call MB_fnc_MouseInView";
			//onMouseMoving = "systemchat format[""%1"",_this];";
		};
		//class MB_LoadingScreen : MB_RscText {
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
	class controls {
		class RscObject;
		class MB_RscBackground : MB_RscText { //--- Render out.
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
		class listboxA : MB_RscTree {
			idc = 170003;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.02)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.29";
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_fnc_LibrarySelect;";
			onMouseExit = "[] call MB_fnc_disable3DPreview; false";
			//onMouseButtonDown = "_this call MB_fnc_libraryMousedown;";
			//onMouseButtonUp = "_this call MB_fnc_libraryMouseup;";
			//onTreeLButtonDown = "_this call MB_fnc_libraryMousedown;";
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
		class MB_Icon : MB_RscActiveText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.01)";
			y = "SafeZoneY + (SafezoneH * 0.01)";
			w = "0.08";
			h = "0.09";
			color[] = {1,1,1,0.9};
			colorActive[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,1};
			text = "\MB\MapBuilder\data\icon.paa";
			action = "[170600,false] spawn MB_fnc_openAboutWindow;";
		};		
		
		class MB_SelectedTemplate : MB_RscStructuredText {
			idc = 170007;

			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.36)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.08";
			text =  "Selected: None";
		};
		class UsedObjectsButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.32)";
			w = "SafeZoneW * 0.06";
			h = "SafeZoneH * 0.025";
			text = "Used Objs";
			action = "[] call MB_fnc_OpenUsedWindow;[] call MB_fnc_updateUsed;";
		};
		class FavoritesObjectsButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.88)";
			y = "SafeZoneY + (SafezoneH * 0.32)";
			w = "SafeZoneW * 0.06";
			h = "SafeZoneH * 0.025";
			text = "Fav Objs";
			action = "[] call MB_fnc_OpenFavoritesWindow;";
		};
		class MB_ObjSettingsLabel : MB_RscText {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.41)";
			w = "SafeZoneW * 0.1";
			h = "SafeZoneH * 0.03";
			text =  "New Object settings:";
		};
		class MB_RndDirCheckbox : MB_RscCheckbox {
			idc = 170010;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.45)";
			w = "SafeZoneW * 0.03";
			h = "SafeZoneH * 0.03";
			checked_strings[] = {"RndDir"};
			strings[] = {"RndDir"};
		};
		class MB_SimulCheckbox : MB_RscCheckbox {
			idc = 170011;
			x = "SafeZoneX + (SafeZoneW * 0.86)";
			y = "SafeZoneY + (SafezoneH * 0.45)";
			w = "SafeZoneW * 0.03";
			h = "SafeZoneH * 0.03";
			checked_strings[] = {"Simul"};
			strings[] = {"Simul"};
		};
		class MB_ModeSettingsLabel : MB_RscText {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.50)";
			w = "SafeZoneW * 0.1";
			h = "SafeZoneH * 0.03";
			text =  "Mouse Mode:";
		};
		class MB_ModeSettings : MB_RscToolbox {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.54)";
			w = "SafeZoneW * 0.16";
			h = "SafeZoneH * 0.05";
			rows = 1;
			columns = 2;
			strings[] = {"Objects","Brusher"};
			values[] = {0,1};
			onToolBoxSelChanged = "[(_this select 1)] call MB_fnc_switchMode;";
		};
		class MB_FencerButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.89)";
			y = "SafeZoneY + (SafezoneH * 0.80)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Fencer";
			action = "[] call MB_fnc_openFencer;";
		};
		class PresetsButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.80)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Presets";
			action = "[] call MB_fnc_showPresetWindow;";
		};
		class BrushesButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.74)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Brushes";
			action = "[] call MB_fnc_showBrushWindow;";
		};
		class ExportButton : MB_RscButton {
			idc = 170005;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.86)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Export";
			action = "[1] call MB_fnc_togglePopup;";
		};
		class SaveToEditorButton : MB_RscButton {
			idc = 170006;
			x = "SafeZoneX + (SafeZoneW * 0.89)";
			y = "SafeZoneY + (SafezoneH * 0.86)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Save/Load Project";
			action = "[] call MB_fnc_ShowProjects;";
		};
		class ProjectSettingsButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.89)";
			y = "SafeZoneY + (SafezoneH * 0.74)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Settings";
			action = "[] call MB_fnc_showPresetWindow;";
		};
		//###################
		//	Taskbar
		//###################
		
		class MB_Taskbar : MB_RscText { //--- Render out.
			idc = 171009;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.80";
			h = "SafeZoneH * 0.03";
			colorBackground[] = {0, 0, 0, 0.3};
		};
		class MB_Taskbar_Version : MB_RscText { //--- Render out.
			idc = 171010;
			text = "Version: 0.0.0";
			x = "SafeZoneX + (SafeZoneW * 0.92)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
		};
		class MB_Taskbar_Position : MB_RscText { //--- Render out.
			idc = 171011;
			text = "Position: 0/0/0";
			x = "SafeZoneX + (SafeZoneW * 0.5)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.16";
			h = "SafeZoneH * 0.03";
		};
		class MB_Taskbar_Selected : MB_RscText { //--- Render out.
			idc = 171012;
			text = "0 Objects selected";
			x = "SafeZoneX + (SafeZoneW * 0.7)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
		};
		class MB_Taskbar_Dev_Refresh : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.05)";
			y = "SafeZoneY + (SafezoneH * 0.975)";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			text = "Refresh Config/Scripts";
			action = "closeDialog 0;[] call MB_fnc_refreshConfig;";
		};
		
		//###################
		//	Map Popup
		//###################
		
		class MB_Map : MB_RscMapControl
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
		class Popup_MapHeader : MB_RscBackground {
			idc = 170302;
			text = "Map";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.3)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_MapHeaderClose : MB_RscActiveText {
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
		
		class Popup_ExportBG : MB_RscBackground {
			idc = 170101;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.3";
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_ExportHeader : MB_RscBackground {
			idc = 170102;
			text = "Export Objects";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ExportHeaderClose : MB_RscActiveText {
			idc = 170103;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.585)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[1,false] call MB_fnc_togglePopup;";
		};
		class Popup_ExportHeaderFilenameText : MB_RscText {
			idc = 170104;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.47)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Export Name (Warning: May overwrite existing files!):";
		};
		class Popup_ExportHeaderFilename : MB_RscEdit {
			idc = 170105;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.5)";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ExportTBButton : MB_RscButton {
			idc = 170106;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.6)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Export to TB";
			action = "[ctrlText 170105] spawn MB_fnc_exportTB;";
		};
		class Popup_ExportSQFButton : MB_RscButton {
			idc = 170107;
			x = "SafeZoneX + (SafeZoneW * 0.35)";
			y = "SafeZoneY + (SafezoneH * 0.6)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Export to SQF";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQF;";
		};
		class Popup_ExportSQMButton : MB_RscButton {
			idc = 170108;
			x = "SafeZoneX + (SafeZoneW * 0.45)";
			y = "SafeZoneY + (SafezoneH * 0.6)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Export to SQM";
			action = "[ctrlText 170105] spawn MB_fnc_exportSQM;";
		};
		class Popup_ExportHelptext : MB_RscText {
			idc = 170109;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.55)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Extension is added automatically.";
		};
		class Popup_ExportHelptext2 : MB_RscText {
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
		
		class Popup_ProjectsBG : MB_RscBackground {
			idc = 170201;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.4";
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_ProjectsHeader : MB_RscBackground {
			idc = 170202;
			text = "Save/Load Projects";
			x = "SafeZoneX + (SafeZoneW * 0.2)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ProjectsHeaderClose : MB_RscActiveText {
			idc = 170203;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.585)";
			y = "SafeZoneY + (SafezoneH * 0.4)";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[2,false] call MB_fnc_togglePopup;";
		};
		class Popup_ProjectsList : MB_RscListBox {
			idc = 170204;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.45)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.2";
			onLBSelChanged="call MB_fnc_ProjectsPopupSelect;";//--- action/function to call when listbox or combobox has been changed
            onLBDblClick="call MB_fnc_ProjectsPopupSelect;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class Popup_ProjectsFilename : MB_RscEdit {
			idc = 170205;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.68)";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_ProjectsSaveButton : MB_RscButton {
			idc = 170206;
			x = "SafeZoneX + (SafeZoneW * 0.21)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Save";
			action = "[ctrlText 170205] spawn MB_fnc_saveProject;";
		};
		class Popup_ProjectsLoadButton : MB_RscButton {
			idc = 170207;
			x = "SafeZoneX + (SafeZoneW * 0.39)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Load";
			action = "[ctrlText 170205] spawn MB_fnc_loadProject;";
		};
		class Popup_ProjectsHelptext : MB_RscText {
			idc = 170208;
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.42)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Existing projects:";
		};
		class Popup_ProjectsImportButton : MB_RscButton {
			idc = 170209;
			x = "SafeZoneX + (SafeZoneW * 0.30)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Import";
			action = "[ctrlText 170205] spawn MB_fnc_importProject;";
		};
		class Popup_ProjectsClearButton : MB_RscButton {
			idc = 170210;
			x = "SafeZoneX + (SafeZoneW * 0.48)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Clear";
			action = "[ctrlText 170205] spawn MB_fnc_clearProject;";
		};
		#include "fencer.hpp"		
		#include "presets.hpp"
		#include "test.hpp"
		#include "about.hpp"
		#include "inspector.hpp"
		#include "used.hpp"
		#include "favorites.hpp"
		#include "infopopup.hpp"
		#include "3dpreview.hpp"
		#include "brusher.hpp"
	};
};
