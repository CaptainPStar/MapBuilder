
class MB_Popup_ObjInspectorGroup : MB_RscControlsGroup
{
	idc = 170700;
	x = "SafeZoneX + (SafeZoneW * 0.5)";
	y = "SafeZoneY + (SafezoneH * 0.7)";
	w = MB_WINDOW_GRID_X * 18 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 18 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class Popup_ObjInspector_BG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 18 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_ObjInspector_Header : MB_RscBackground {
			idc = 170701;
			text = "Object Inspector";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 17 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,170700] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,170700] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,170700] call MB_fnc_updateWindowDrag;";
		};
		class Popup_ObjInspector_HeaderXBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class Popup_ObjInspector_HeaderX : MB_RscActiveText {
			idc = -1;
			text = "X";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_InspectorClose;";
		};
		class Popup_ObjInspector_XPosLabel : MB_RscText {
			idc = -1;
			text = "Pos X: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_XPos: MB_RscEdit {
			idc = 170702;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_YPosLabel : MB_RscText {
			idc = -1;
			text = "Pos Y: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_YPos: MB_RscEdit {
			idc = 170703;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_HeightPosLabel : MB_RscText {
			idc = -1;
			text = "Height: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Height: MB_RscEdit {
			idc = 170704;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_DirLabel : MB_RscText {
			idc = -1;
			text = "Direction: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Dir: MB_RscEdit {
			idc = 170705;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_PitchLabel : MB_RscText {
			idc = -1;
			text = "Pitch: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Pitch: MB_RscEdit {
			idc = 170706;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_BankLabel : MB_RscText {
			idc = -1;
			text = "Bank: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Bank: MB_RscEdit {
			idc = 170707;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_ScaleLabel : MB_RscText {
			idc = -1;
			text = "Scale: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Scale: MB_RscEdit {
			idc = 170708;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Button_Ok : MB_RscButton {
			idc = -1;
			text = "Ok";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[true] call MB_fnc_InspectorApply;";
		};
		class Popup_ObjInspector_Button_Apply : MB_RscButton {
			idc = -1;
			text = "Preview";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_InspectorPreview;";
		};
		class Popup_ObjInspector_Button_Refresh : MB_RscButton {
			idc = -1;
			text = "Refresh";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 9;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_InspectorRefresh;";
		};
		class Popup_ObjInspector_Button_Cancel : MB_RscButton {
			idc = -1;
			text = "Cancel";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 14;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_closeInspector;";
		};
	};
};