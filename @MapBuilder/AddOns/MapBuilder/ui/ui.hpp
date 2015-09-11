#include "mbdefines.hpp"
#include "window.hpp"
#include "dik.hpp"
#include "\MB\MapBuilder\include.hpp"
class MB_Main
{
	idd = 123;
	movingenable = false;
	onLoad = "uiNamespace setVariable ['mb_main_dialog', (_this select 0)];";
	onUnload = "call MB_fnc_Exit;";
	
	class controlsBackground {
		class Rsc_MouseArea : MB_RscText {
			idc = 170001;
			
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW * 0.8";
			h = "safezoneH * 0.97";
			//w = "0";
			//h = "0";
			colorBackground[] = {0, 0, 0, 0};
			text = "";
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
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
		//class RscObject;
		class MB_MainBackground : MB_RscText { //--- Render out.
			idc = 170002;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.8)";
			y = "SafeZoneY + (SafezoneH * 0)";
			w = "SafeZoneW * 0.20";
			h = "SafeZoneH * 1";
			colorBackground[] = {0, 0, 0, 0.3};
			onMouseExit = "systemchat ""blub"";[false] call MB_fnc_MouseInView;";
			onMouseEnter = "systemchat ""blub"";[true] call MB_fnc_MouseInView;";
		};
		class MB_ObjectLibrary : MB_RscTree {
			idc = 170003;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.02)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.29";
			sizeEx = 0.035;
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
			tooltip = "Objects: Select and move objects | Brusher: 'Draw' a dynamic/random set of objects.";
		};
		class MB_FencerButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.89)";
			y = "SafeZoneY + (SafezoneH * 0.80)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Fencer";
			action = "[] call MB_fnc_openFencer;";
			tooltip = "Open Fencer - A toll for placing straight lines of objects.";
		};
		class PresetsButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.80)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Presets";
			action = "[] call MB_fnc_showPresetWindow;";
			tooltip = "Presets are small groups of objects, that can be saved, loaded, copied and shared.";
		};
		class BrushesButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.74)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Brushes";
			action = "[] call MB_fnc_showBrushWindow;";
			tooltip = "Brusher is a tool for placing large number of objects in structured or random patterns.";
		};
		class ExportButton : MB_RscButton {
			idc = 170005;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.86)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Export";
			action = "[1] call MB_fnc_showExportWindow;";
			tooltip = "Export objects to various other formats like mission files, Terrain Builder or scripts.";
		};
		class SaveToEditorButton : MB_RscButton {
			idc = 170006;
			x = "SafeZoneX + (SafeZoneW * 0.89)";
			y = "SafeZoneY + (SafezoneH * 0.86)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Save/Load";
			action = "[] call MB_fnc_ShowProjectWindow;";
			//action = "[] call MB_fnc_ShowProjects;";
			tooltip = "Save and load projects.";
		};
		class ProjectSettingsButton : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.89)";
			y = "SafeZoneY + (SafezoneH * 0.74)";
			w = "SafeZoneW * 0.07";
			h = "SafeZoneH * 0.05";
			text = "Settings";
			//action = "[] call MB_fnc_showPresetWindow;";
			action = "";
			tooltip = "General Map Builder Settings. Yet unused.";
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
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.94)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
		};
		class MB_Taskbar_Website : MB_RscStructuredText { //--- Render out.
			idc = -1;
			text = "<a underline='false' href='http://map-builder.info'>Map-Builder.info</a>";
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.1";
			h = "SafeZoneH * 0.03";
			size = MB_TEXT_LARGE;
			sizeEx = MB_TEXT_LARGE;
			class Attributes
				{
					font = MB_TEXT_FONT;
					color = "#ffffff";
					align = "left";
					shadow = 0;
				};
		};
		class MB_Taskbar_Position : MB_RscText { //--- Render out.
			idc = 171011;
			text = "Position: 0/0/0";
			x = "SafeZoneX + (SafeZoneW * 0.3)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.16";
			h = "SafeZoneH * 0.03";
		};
		class MB_Taskbar_ObjectsTotal : MB_RscText { //--- Render out.
			idc = 171013;
			text = "0 Objects";
			x = "SafeZoneX + (SafeZoneW * 0.5)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			toolip = "Blah";
		};
		class MB_Taskbar_Selected : MB_RscText { //--- Render out.
			idc = 171012;
			text = "0 Objects selected";
			x = "SafeZoneX + (SafeZoneW * 0.7)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
		};
#ifdef DEBUG
		class MB_Taskbar_Dev_Refresh : MB_RscButton {
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.05)";
			y = "SafeZoneY + (SafezoneH * 0.975)";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			text = "Refresh Config/Scripts";
			action = "closeDialog 0;[] call MB_fnc_refreshConfig;";
		};
#endif
		class MB_Chatbox : MB_RscEdit {
			idc = 171014;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.02)";
			y = "SafeZoneY + (SafezoneH * 0.9)";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0,0,0.75};
			onKeyDown = "if((_this select 1) == 28) then {[] spawn MB_FNC_ChatSend;};false;";
		};
		
		//###################
		//	Map Popup
		//###################
		
		class MB_Map : MB_RscMapControl
        {
			idc = 170301;
			style = 48;
			type = 101;
			x = "safezoneX";
			y = "safezoneY + safezoneW * 0.02";
			w = "safezoneW * 0.8";
			h = "safezoneH * 0.94";
			onLoad = "";
			onMouseButtonDblClick = "_this call MB_fnc_mapDblClickTeleport;";
        };
		class Popup_MapHeader : MB_RscBackground {
			idc = 170302;
			text = "Map";
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = "SafeZoneW * 0.78";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,1};
		};
		class Popup_MapHeaderCloseBG : MB_RscBackground {
			idc = 170303;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.78)";
			y = "SafeZoneY";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0.75,0,0,0.5};
		};
		class Popup_MapHeaderClose : MB_RscActiveText {
			idc = 170304;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.78)";
			y = "SafeZoneY";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,1};
			action = "[] call MB_fnc_toggleMap;";
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
		#include "export.hpp"
		#include "project.hpp"
	};
};
