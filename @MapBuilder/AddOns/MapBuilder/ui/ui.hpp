#include "includes\dik.hpp"
#include "includes\styles.hpp"
#include "includes\mbdefines.hpp"
#include "window.hpp"
#include "\MB\MapBuilder\include.hpp"
#include "baseclasses.hpp"

class ctrlButton;
class ctrlButtonPictureKeepAspect;
class ctrlCheckbox;
class ctrlCombo;
class ctrlControlsGroup;
class ctrlControlsGroupNoHScrollbars;
class ctrlControlsGroupNoScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlEdit;
class ctrlStatic;
class ctrlStaticBackground;
class ctrlStaticPicture;
class CtrlToolbox;
class ctrlToolboxPictureKeepAspect;
class ctrlTree;
class ctrlXSliderH;
class ctrlStaticTitle;
class RscTextMulti;

#include "controls\resizer.hpp"
#include "controls\paneButton.hpp"
#include "controls\map.hpp"
#include "controls\gizmo.hpp"
#include "controls\headerbutton.hpp"
#include "controls\toolbox.hpp"
#include "controls\buttons.hpp"
#include "controls\title.hpp"
#include "controls\background.hpp"

#include "settings.hpp"
#include "popup.hpp"

#include "paneCore\header.hpp"
#include "paneCore\content.hpp"
#include "paneCore\background.hpp"
#include "paneCore\pane.hpp"
#include "paneCore\sidebar.hpp"

#include "panes\3dpreview.hpp"
#include "panes\about.hpp"
#include "panes\brusher.hpp"
#include "panes\export.hpp"
#include "panes\Favorites.hpp"
#include "panes\fencer.hpp"
#include "panes\help.hpp"
#include "panes\presets.hpp"
//#include "panes\infopopup.hpp"
#include "panes\inspector.hpp"
#include "panes\LibraryViewer.hpp"
#include "panes\masker.hpp"
#include "panes\MissingPane.hpp"
#include "panes\project.hpp"
#include "panes\UsedObjects.hpp"

#include "uiLayout.hpp"


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
		#include "controls\map.hpp"
		#include "menubar.hpp"
		#include "toolbar.hpp"

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
			action = "['about'] call MB_fnc_uiPaneOpen;";
		};

		/*class MB_OverlayGroup: ctrlControlsGroupNoScrollbars {
			idc = __IDC_OVERLAYGROUP;
			x = "safeZoneX";
			y = "safeZoneY";
			w = "safeZoneW";
			h = "safeZoneH";
			class Controls {

			};
		};*/
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
		#include "taskbar.hpp"

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
	};
	class Objects
	{
		//#include "gizmo.hpp"
	};
};

#include "loadingscreen.hpp"
