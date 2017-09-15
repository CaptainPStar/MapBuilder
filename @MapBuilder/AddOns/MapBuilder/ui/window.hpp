#define WINDOW_POSITION(_X_,_Y_,_W_,_H_) \
x = __EVAL(MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * _X_); \
y = __EVAL(MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * _Y_); \
w = __EVAL(MB_WINDOW_GRID_X * _W_); \
h = __EVAL(MB_WINDOW_GRID_Y * _H_);

#define BEGIN_WINDOW(_IDC_,_NAME_,_TITLE_,_X_,_Y_,_W_,_H_) \
class MB_Window_##_NAME_##_Group : MB_CoreContent \
{\
	x = 0;\
	y = __GUI_PANE_HEADER_H;\
	w = __EVAL(MB_WINDOW_GRID_X * _W_ + 2*MB_WINDOW_PADDING_X + 0.01); \
	h = __EVAL(MB_WINDOW_GRID_Y * _H_ + 2*MB_WINDOW_PADDING_Y + 0.01); \
	class Controls: Controls\
	{\
		class Background: MB_CtrlPaneBackground { };

#define END_WINDOW }; \
};
