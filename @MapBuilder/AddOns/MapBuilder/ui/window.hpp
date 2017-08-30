class MB_RscWindowHeader : MB_RscText { //--- Render out.
	idc = -1;
	text = "";
	style = ST_MULTI;
	font = MB_TEXT_FONT_TITLE;
	x = "SafeZoneX + (SafeZoneW * 0.8)";
	y = "SafeZoneY + (SafezoneH * 0)";
	w = "SafeZoneW * 0.20";
	h = "SafeZoneH * 1";
	sizeEx = MB_TEXT_LARGE;
	colorBackground[] = {0, 0, 0, 0.3};
};

class MB_Window_CloseBG : MB_RscBackground {
	text = "";
	colorBackground[] = {0.75,0,0,0.75};
};
class MB_Window_HelpBG : MB_Window_CloseBG {
	text = "";
	colorBackground[] = {0.4,0.4,1,0.75};
};

class MB_Window_Close : MB_RscActiveText {
	idc = -1;
	text = "X";
};
//#define HELPLINK "<a href='http:\/\/wiki.map-builder.info/w/'>?</a>"
#define HELPLINK(lnk) text = __EVAL(format["<a href='http:\/\/wiki.map-builder.info/w/%1'>?</a>",lnk]);
class MB_Window_Help : MB_RscStructuredText {
	idc = -1;
	text = "?";
	style = ST_CENTER + ST_VCENTER;
	class Attributes
	{
		font = MB_TEXT_FONT;
		color = "#ffffff";
		align = "center";
		valign = "middle";
		shadow = 0;
	};
};
#define WINDOW_POSITION(_X_,_Y_,_W_,_H_) \
x = __EVAL(MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
y = __EVAL(MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * _Y_); \
w = __EVAL(MB_WINDOW_GRID_X * _W_); \
h = __EVAL(MB_WINDOW_GRID_Y * _H_);

#define BEGIN_WINDOW(_IDC_,_NAME_,_TITLE_,_X_,_Y_,_W_,_H_) \
class MB_Window_##_NAME_##_Group : MB_RscControlsGroup \
{\
	idc = __EVAL(_IDC_); \
	x = __EVAL("SafeZoneX + (SafeZoneW * "+ str _X_ +")"); \
	y = __EVAL("SafeZoneY + (SafezoneH * "+ str _Y_ +")"); \
	w = __EVAL(MB_WINDOW_GRID_X * _W_ + 2*MB_WINDOW_PADDING_X + 0.01); \
	h = __EVAL(MB_WINDOW_GRID_Y * _H_ + 2*MB_WINDOW_PADDING_Y + 0.01); \
	class Controls\
	{
		
#define WINDOW_BACKGROUND(_NAME_,_X_,_Y_,_W_,_H_) \
	class MB_Window_##_NAME_##_BG : MB_RscBackground { \
		idc = -1; \
		text = ""; \
		x = __EVAL(MB_WINDOW_GRID_X * _X_); \
		y = __EVAL(MB_WINDOW_GRID_Y * _Y_); \
		w = __EVAL(MB_WINDOW_GRID_X * _W_ + 2 * MB_WINDOW_PADDING_X); \
		h = __EVAL(MB_WINDOW_GRID_Y * _H_ + 2 * MB_WINDOW_PADDING_Y); \
		colorBackground[] = {0.2,0.2,0.2,0.75}; \
	};
	
#define WINDOW_HEADER(_N_,_IDC_,_TITLE_,_W_) \
class MB_Window_##_N_##_Header : MB_RscWindowHeader { \
	idc = -1; \
	text = __EVAL('_TITLE_'); \
	x = __EVAL(MB_WINDOW_GRID_X * 0); \
	y = __EVAL(MB_WINDOW_GRID_Y * 0); \
	w = __EVAL(MB_WINDOW_GRID_X * _W_ + 2 * MB_WINDOW_PADDING_X); \
	h = __EVAL(MB_WINDOW_GRID_Y * 1); \
	colorBackground[] = {0,0.75,0,0.75}; \
	onMouseButtonDown = __EVAL("[_this," + str _IDC_ + "] call MB_fnc_beginWindowDrag"); \
    onMouseButtonUp = __EVAL("[_this," + str _IDC_ + "] call MB_fnc_endWindowDrag"); \
	onMouseMoving = __EVAL("[_this," + str _IDC_ + "] call MB_fnc_updateWindowDrag"); \
};

#define WINDOW_CLOSE(_NAME_,_IDC_,_X_) \
		class MB_Window_##_NAME_##_XBG : MB_RscBackground { \
			idc = -1; \
			text = ""; \
			x = __EVAL(2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
			y = __EVAL(MB_WINDOW_GRID_Y * 0); \
			w = __EVAL(MB_WINDOW_GRID_X * 1); \
			h = __EVAL(MB_WINDOW_GRID_Y * 1); \
			colorBackground[] = {0.75,0,0,0.75}; \
		}; \
		class MB_Window_##_NAME_##_X : MB_RscActiveText { \
			idc = -1; \
			text = "X"; \
			x = __EVAL(2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
			y = __EVAL(MB_WINDOW_GRID_Y * 0); \
			w = __EVAL(MB_WINDOW_GRID_X * 1); \
			h = __EVAL(MB_WINDOW_GRID_Y * 1); \
			action = __EVAL("[" + str _IDC_ + ",true] spawn MB_fnc_closeWindow"); \
		};
#define WINDOW_CLOSE_CUSTOM(_NAME_,_IDC_,_X_,_ACTION_) \
		class MB_Window_##_NAME_##_XBG : MB_RscBackground { \
			idc = -1; \
			text = ""; \
			x = __EVAL(2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
			y = __EVAL(MB_WINDOW_GRID_Y * 0); \
			w = __EVAL(MB_WINDOW_GRID_X * 1); \
			h = __EVAL(MB_WINDOW_GRID_Y * 1); \
			colorBackground[] = {0.75,0,0,0.75}; \
		}; \
		class MB_Window_##_NAME_##_X : MB_RscActiveText { \
			idc = -1; \
			text = "X"; \
			x = __EVAL(2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
			y = __EVAL(MB_WINDOW_GRID_Y * 0); \
			w = __EVAL(MB_WINDOW_GRID_X * 1); \
			h = __EVAL(MB_WINDOW_GRID_Y * 1); \
			action = ##_ACTION_##; \
		};
#define WINDOW_HELP(_NAME_,_IDC_,_LNK_,_X_) \
class MB_Window_Brusher_HelpBG : MB_Window_HelpBG { \
			idc = -1; \
			x = __EVAL(2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
			y = __EVAL(MB_WINDOW_GRID_Y * 0); \
			w = __EVAL(MB_WINDOW_GRID_X * 1); \
			h = __EVAL(MB_WINDOW_GRID_Y * 1); \
		}; \
		class MB_Window_Brusher_Help : MB_Window_Help { \
			x = __EVAL(2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
			y = __EVAL(MB_WINDOW_GRID_Y * 0 + 0.005); \
			w = __EVAL(MB_WINDOW_GRID_X * 1); \
			h = __EVAL(MB_WINDOW_GRID_Y * 1); \
			text = __EVAL(format["<a href='http:\/\/wiki.map-builder.info/w/%1'>?</a>",_LNK_]); \
		};
#define END_WINDOW }; \
};