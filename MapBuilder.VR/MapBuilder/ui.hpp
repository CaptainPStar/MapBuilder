#include "defines.hpp"

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
			w = "safezoneW";
			h = "safezoneH";
			
			text = "";
			onMouseMoving = "MB_MousePosition=[_this select 1,_this select 2];";
			onMouseButtonDown = "_this call MB_fnc_MouseDown;";
			onMouseButtonUp = "_this call MB_fnc_MouseUp;";
			onMouseButtonDblClick = "_this call MB_fnc_MouseDblClick;";
			onMouseZChanged = "_this call MB_fnc_MouseZ;";
			onKeyDown = "_this call MB_fnc_KeyDown;";
			onKeyUp = "_this call MB_fnc_KeyUp;";
			onMouseExit = "MB_RegisterKeys = false;_this call MB_fnc_resetKeys;";
			onMouseEnter = "MB_RegisterKeys = true;";
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
		};
		class listboxA : RscTree {
			idc = 170003;
			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.07)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.29";
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
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
			action = "[1,true] call MB_fnc_togglePopup;";
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
		class MB_Icon : RscPicture {
			type = CT_STATIC;
			idc = -1;
			style = 48;//ST_PICTURE
			text = "MapBuilder\icon.paa";
			x = "SafeZoneX + (SafeZoneW * 0.01)";
			y = "SafeZoneY + (SafezoneH * 0.01)";
			w = "0.08";
			h = "0.09";
		};
		class MB_FilterSelector : _CT_COMBO {
			idc = 170007;

			x = "SafeZoneX + (SafeZoneW * 0.81)";
			y = "SafeZoneY + (SafezoneH * 0.02)";
			w = "SafeZoneW * 0.18";
			h = "SafeZoneH * 0.03";
		};
		//###################
		//	Taskbar
		//###################
		
		class MB_Taskbar : RscText { //--- Render out.
			idc = 170008;
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
			onMouseExit = "MB_RegisterKeys = false;_this call MB_fnc_resetKeys;";
			onMouseEnter = "MB_RegisterKeys = true;";
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
			text = "Export Objects";
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
			x = "SafeZoneX + (SafeZoneW * 0.25)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Save";
			action = "[ctrlText 170205] spawn MB_fnc_saveProject;";
		};
		class Popup_ProjectsLoadButton : RscButton {
			idc = 170207;
			x = "SafeZoneX + (SafeZoneW * 0.45)";
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
			x = "SafeZoneX + (SafeZoneW * 0.35)";
			y = "SafeZoneY + (SafezoneH * 0.72)";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Import";
			action = "[ctrlText 170205] spawn MB_fnc_importProject;";
		};
		//###################
		//	Fencer
		//###################
		class Popup_FencerBG : Rsc_Background {
			idc = 170401;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.64)";
			y = "SafeZoneY + (SafezoneH * 0.81)";
			w = "SafeZoneW * 0.15";
			h = "SafeZoneH * 0.15";
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_FencerHeader : Rsc_Background {
			idc = 170402;
			text = "Fencer";
			x = "SafeZoneX + (SafeZoneW * 0.64)";
			y = "SafeZoneY + (SafezoneH * 0.81)";
			w = "SafeZoneW * 0.15";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class Popup_FencerHeaderClose : RscActiveText {
			idc = 170403;
			text = "X";
			x = "SafeZoneX + (SafeZoneW * 0.78)";
			y = "SafeZoneY + (SafezoneH * 0.81)";
			w = "SafeZoneW * 0.02";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[4,false] call MB_fnc_togglePopup;";
		};
		class Popup_FencerUpButton : RscButton {
			idc = 170404;
			x = "SafeZoneX + (SafeZoneW * 0.665)";
			y = "SafeZoneY + (SafezoneH * 0.87)";
			w = "SafeZoneW * 0.015";
			h = "SafeZoneH * 0.02";
			text = "U";
			action = "[0] call MB_FNC_FencerPlace;";
		};
		class Popup_FencerDownButton : RscButton {
			idc = 170405;
			x = "SafeZoneX + (SafeZoneW * 0.665)";
			y = "SafeZoneY + (SafezoneH * 0.895)";
			w = "SafeZoneW * 0.015";
			h = "SafeZoneH * 0.02";
			text = "D";
			action = "[1] call MB_FNC_FencerPlace;";
		};
		class Popup_FencerLeftButton : RscButton {
			idc = 170406;
			x = "SafeZoneX + (SafeZoneW * 0.645)";
			y = "SafeZoneY + (SafezoneH * 0.882)";
			w = "SafeZoneW * 0.015";
			h = "SafeZoneH * 0.02";
			text = "L";
			action = "[2] call MB_FNC_FencerPlace;";
		};
		class Popup_FencerRightButton : RscButton {
			idc = 170407;
			x = "SafeZoneX + (SafeZoneW * 0.685)";
			y = "SafeZoneY + (SafezoneH * 0.882)";
			w = "SafeZoneW * 0.015";
			h = "SafeZoneH * 0.02";
			text = "R";
			action = "[3] call MB_FNC_FencerPlace;";
		};
		//###################
		//	Brusher
		//###################
	};
	class Objects
	{
	};
};
