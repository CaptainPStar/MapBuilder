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
		#include "map.hpp"
		//class RscObject;
		class MB_MainMenuStrip: MB_MenuStrip
		{
			x = "SafeZoneX + (SafeZoneW * 0.03)";
			y = "SafeZoneY + (SafezoneH * 0)";
			w = "SafeZoneW * 0.97";
			h = "SafeZoneH * 0.02";
			class Items
			{
				items[] = {"Project","Objects","Tools","Help"};
				class Project
				{
					text = "Project";
					items[] = {"ProjectSaveLoad","Export"};
					data = "";
					value = 1;
				};
				class ProjectSaveLoad
				{
					text = "Save/Load";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[] call MB_fnc_ShowProjectWindow;";
					//opensNewWindow = 1;
				};
				class Export
				{
					text = "Export";
					data = "";
					shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[1] call MB_fnc_showExportWindow;";
					//opensNewWindow = 1;
				};
				class Objects
				{
					text = "Objects";
					items[] = {"ManageLibrary","Favorites","UsedObjects"};
					data = "";
					value = 1;
				};
				class ManageLibrary
				{
					text = "Manage Library";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "systemchat ""Unimplemented"";";
					//opensNewWindow = 1;
				};
				class Favorites
				{
					text = "Favorites";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[] call MB_fnc_openFavoritesWindow;";
					//opensNewWindow = 1;
				};
				class UsedObjects
				{
					text = "Used Objects";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[] call MB_fnc_OpenUsedWindow;[] call MB_fnc_updateUsed;";
					//opensNewWindow = 1;
				};
				class Tools
				{
					text = "Tools";
					items[] = {"Brusher","Fencer","Presets"};
					data = "";
					value = 1;
				};
				class Brusher
				{
					text = "Brusher";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[] call MB_fnc_showBrushWindow;";
					//opensNewWindow = 1;
				};
				class Fencer
				{
					text = "Fencer";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[] call MB_fnc_openFencer;";
					//opensNewWindow = 1;
				};
				class Presets
				{
					text = "Presets";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[] call MB_fnc_showPresetWindow;";
					//opensNewWindow = 1;
				};
				class Help
				{
					text = "Help";
					items[] = {"About","OnlineHelp","Test"};
					data = "";
					value = 1;
				};
				class About
				{
					text = "About";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					action = "[170600,false] spawn MB_fnc_openAboutWindow;";
					//opensNewWindow = 1;
				};
				class OnlineHelp
				{
					text = "Online Doku";
					data = "";
					//shortcuts[] = {"512 + 0x31"};
					//picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
					//action = "[] call MB_fnc_OpenHelpWindow;";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "http://wiki.map-builder.info";
					//opensNewWindow = 1;
				};
				class Test
				{
					text = "Test";
					data = "TestData";
					type = "CheckBox";
					default = "true";
				};
			};
		};
		class Toolbar: MB_RscControlsGroupNoScrollbars
		{
			idc = 1000;
			x = "safezoneX";
			y = "safezoneY + 		5 * (pixelH * pixelGrid * 	0.50)";
			w = "safezoneW";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class ToolbarBackground: MB_Static
				{
					idc = 1001;
					colorBackground[] = {0.2,0.2,0.2,1};
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "0.4";
				};
				class File: MB_RscControlsGroupNoScrollbars
				{
					idc = 1002;
					x = 0;
					y = "0";
					w = "0.1";
					h = "0.1";
					class Controls
					{
						class New: MB_RscButtonToolbar
						{
							idc = 1006;
							action = "systemchat ""blub"";";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
							tooltip = "TOOLTIP!";
							//onLoad = "['showShortcut','MissionNew',_this] call bis_fnc_3DENInterface;";
							x = "0.1";
							y = 0.1;
							h = "0.1";
							w = "0.1";
						};
					};
				};
			};
		};
		class MB_MainBackground : MB_RscText { //--- Render out.
			idc = 170002;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.82)";
			y = "SafeZoneY + (SafezoneH * 0.02)";
			w = "SafeZoneW * 0.19";
			h = "SafeZoneH * 0.95";
			colorBackground[] = {0, 0, 0, 0.3};
			onMouseExit = "[false] call MB_fnc_MouseInView;";
			onMouseEnter = "[true] call MB_fnc_MouseInView;";
		};
		//delete MB_ObjectLibrary;
		class MB_ObjectLibrary : MB_RscTree {
			idc = 170003;
			x = "SafeZoneX + (SafeZoneW * 0.83)";
			y = "SafeZoneY + (SafezoneH * 0.06)";
			w = "SafeZoneW * 0.16";
			h = "SafeZoneH * 0.7";
			sizeEx = 0.035;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_fnc_LibrarySelect;";
			onMouseExit = "[] call MB_fnc_disable3DPreview; false";
			onMouseButtonDown = "";
			onMouseButtonUp = "_this call MB_fnc_libraryMouseup;";
			onTreeLButtonDown = "_this call MB_fnc_libraryMousedown;";
			onLBDrag = "systemchat ""Drag!"";";
			//onLBSelChanged="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been changed
            //onLBDblClick="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been double clicked
		};
		/*class MB_ObjectLibrary : MB_RscListBox {
			idc = 170003;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.02)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.29";
			sizeEx = 0.035;
			onLBDrag = "systemchat ""Drag!"";";
			//onLBSelChanged="call MB_Listbox_Objects_SetCur;";//--- action/function to call when listbox or combobox has been changed
            //onLBDblClick="call MB_Listbox_Objects_SetCur;";//--- action/function to call when listbox or combobox has been double clicked
		};*/
		class MB_Icon : MB_RscActiveText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x = "SafeZoneX + (SafeZoneW * 0.0)";
			y = "SafeZoneY + (SafezoneH * 0.0)";
			w = "0.06";
			h = "0.06";
			color[] = {1,1,1,0.9};
			colorActive[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,1};
			text = "\MB\MapBuilder\data\icon.paa";
			action = "[170600,false] spawn MB_fnc_openAboutWindow;";
		};

		/*class MB_SelectedTemplate : MB_RscStructuredText {
			idc = 170007;

			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.36)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.08";
			text =  "Selected: None";
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
		};*/
		
		//###################
		//	Taskbar
		//###################

		class MB_Taskbar : MB_RscText { //--- Render out.
			idc = 171009;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0)";
			y = "SafeZoneY + (SafezoneH * 0.97)";
			w = "SafeZoneW * 1.0";
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
		#include "help.hpp"
	};
	class Objects
	{
		//#include "gizmo.hpp"
	};
};
#include "loadingscreen.hpp"

