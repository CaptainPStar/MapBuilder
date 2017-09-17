#include "\MB\MapBuilder\include.hpp"
#include "\A3\UI_F\hpp\defineDIKCodes.inc"


#include "defines.hpp"
#include "extern.hpp"
#include "rsc\resources.hpp"


class MapBuilder_Interface
{
	idd = IDD_MB_INTERFACE;
	movingenable = false;
	onLoad = "systemchat format[""%1"",MB_GUI_GRID_HAbs]; uiNamespace setVariable ['mb_main_dialog', (_this select 0)];";
	onUnload = "call MB_fnc_Exit;";

	class controlsBackground {
		class MB_MouseArea : RscText {
			idc = IDC_MB_VIEWPORT;
			type = 0;
			x = MB_GUI_GRID_X + 2 * MB_GUI_GRID_W;
			y = MB_GUI_GRID_Y + 1 * MB_GUI_GRID_H;
			w = MB_GUI_GRID_W * (MB_GUI_GRID_CELLS_W - 2);
			h = MB_GUI_GRID_H * (MB_GUI_GRID_CELLS_H - 2);
			//w = "0";
			//h = "0";
			colorBackground[] = {1, 0, 0, 0};
			text = "";
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
			//onMouseMoving = "MB_MouseScreenPosition = [_this select 1,_this select 2];MB_MousePosition=screenToWorld [_this select 1,_this select 2];";
			//onMouseButtonDown = "_this call MB_fnc_MouseDown;";
			//onMouseButtonUp = "_this call MB_fnc_MouseUp;";
			//onMouseButtonDblClick = "_this call MB_fnc_MouseDblClick;";
			//onMouseZChanged = "_this call MB_fnc_MouseZ;";
			onKeyDown = "systemchat format[""%1"",_this];_this call MB_fnc_KeyDown;true";
			onKeyUp = "systemchat format[""%1"",_this];_this call MB_fnc_KeyUp;true";
			//onMouseExit = "MB_RegisterKeys = false;_this call MB_fnc_resetKeys;[false] call MB_fnc_MouseInView";
			//onMouseEnter = "MB_RegisterKeys = true;[true] call MB_fnc_MouseInView";
			onMouseExit = "systemchat format[""%1"",_this];[true] call MB_fnc_MouseInView;";
			onMouseEnter = "systemchat format[""%1"",_this];[false] call MB_fnc_MouseInView;";
			//onMouseMoving = "systemchat format[""%1"",_this];";
		};
		class MB_TopBarBackground : RscText {
			idc = -1;
			type = 0;
			x = MB_GUI_GRID_X;
			y = MB_GUI_GRID_Y;
			w = MB_GUI_GRID_W * (MB_GUI_GRID_CELLS_W);
			h = MB_GUI_GRID_H * 1;
			//w = "0";
			//h = "0";
			colorBackground[] = {0, 0, 0, 0.75};
			text = "";
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
		};
		class MB_ToolBarLeftBackground : RscText {
			idc = -1;
			type = 0;
			x = MB_GUI_GRID_X;
			y = MB_GUI_GRID_Y + MB_GUI_GRID_H;
			w = MB_GUI_GRID_W * 2;
			h = MB_GUI_GRID_H * (MB_GUI_GRID_CELLS_H - 2);
			//w = "0";
			//h = "0";
			colorBackground[] = {0, 0, 0, 0};
			text = "";
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
		};
		class MB_BottomBarBackground : RscText {
			idc = -1;
			type = 0;
			x = MB_GUI_GRID_X;
			y = MB_GUI_GRID_LAST_CELL_Y;
			w = MB_GUI_GRID_W * (MB_GUI_GRID_CELLS_W);
			h = MB_GUI_GRID_H;
			//w = "0";
			//h = "0";
			colorBackground[] = {0, 0, 0, 0.75};
			text = "";
			style = ST_MULTI; //NEEDED. Otherwise Handlers wont work! BIS!!!
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
		//#include "map.hpp"
		//class RscObject;
		/*class MB_MainBackground : RscText { //--- Render out.
			idc = 170002;
			text = "";
			x = "SafeZoneX + (SafeZoneW * 0.8)";
			y = "SafeZoneY + (SafezoneH * 0)";
			w = "SafeZoneW * 0.20";
			h = "SafeZoneH * 1";
			colorBackground[] = {0, 0, 0, 0.3};
			onMouseExit = "systemchat format[""%1"",_this];[false] call MB_fnc_MouseInView;";
			onMouseEnter = "systemchat format[""%1"",_this];[true] call MB_fnc_MouseInView;";
		};*/
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
		class MB_Icon : RscActiveText {
			//type = CT_STATIC;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			idc = -1;
			x = MB_GUI_GRID_X + MB_GUI_GRID_PADDING_X;
			y = MB_GUI_GRID_Y + MB_GUI_GRID_PADDING_Y;
			w = MB_GUI_GRID_W * 1 - 2 * MB_GUI_GRID_PADDING_X;
			h = MB_GUI_GRID_H * 1 - 2 * MB_GUI_GRID_PADDING_Y;
			color[] = {1,1,1,0.9};
			colorActive[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,1};
			text = "\MB\MapBuilder\data\icon.paa";
			action = "['about'] call MB_fnc_uiPaneOpen;";
		};
	};
	class Objects
	{
		//#include "gizmo.hpp"
	};

};
#include "loadingscreen.hpp"
