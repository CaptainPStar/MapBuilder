#define IDC 170700
#define NAME ObjectInspector
#define TITLE Object Inspector
BEGIN_WINDOW(IDC,NAME,TITLE,0.5,0.7,18,18)
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
END_WINDOW
