class MB_Popup_ObjInspectorGroup : RscControlsGroup
{
	idc = 170700;
	x = "SafeZoneX + (SafeZoneW * 0.5)";
	y = "SafeZoneY + (SafezoneH * 0.7)";
	w = MB_WINDOW_GRID_X * 18 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 18 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class Popup_ObjInspector_BG : Rsc_Background {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 18 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class Popup_ObjInspector_Header : Rsc_Background {
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
		class Popup_ObjInspector_HeaderXBG : Rsc_Background {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class Popup_ObjInspector_HeaderX : RscActiveText {
			idc = -1;
			text = "X";
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 17;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_closeInspector;";
		};
		class Popup_ObjInspector_XPosLabel : RscText {
			idc = -1;
			text = "Pos X: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_XPos: RscEdit {
			idc = 170702;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_YPosLabel : RscText {
			idc = -1;
			text = "Pos Y: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_YPos: RscEdit {
			idc = 170703;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_HeightPosLabel : RscText {
			idc = -1;
			text = "Height: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Height: RscEdit {
			idc = 170704;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_DirLabel : RscText {
			idc = -1;
			text = "Direction: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Dir: RscEdit {
			idc = 170705;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_PitchLabel : RscText {
			idc = -1;
			text = "Pitch: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Pitch: RscEdit {
			idc = 170706;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_BankLabel : RscText {
			idc = -1;
			text = "Bank: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Bank: RscEdit {
			idc = 170707;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_ScaleLabel : RscText {
			idc = -1;
			text = "Scale: ";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Scale: RscEdit {
			idc = 170708;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class Popup_ObjInspector_Button_Ok : RscButton {
			idc = -1;
			text = "Ok";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[true] call MB_fnc_InspectorApply;";
		};
		class Popup_ObjInspector_Button_Apply : RscButton {
			idc = -1;
			text = "Preview";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 4;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_InspectorPreview;";
		};
		class Popup_ObjInspector_Button_Refresh : RscButton {
			idc = -1;
			text = "Refresh";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 9;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 16;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_InspectorRefresh;";
		};
		class Popup_ObjInspector_Button_Cancel : RscButton {
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