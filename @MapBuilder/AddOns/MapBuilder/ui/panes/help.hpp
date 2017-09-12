#define IDC 171300
#define NAME Help
#define TITLE Help
BEGIN_WINDOW(IDC,NAME,TITLE,0.3,0.2,12,5)
		class MB_Window_Help_Text : MB_RscStructuredText {
			idc = 171301;
			text = "";
			x =  1*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 12;
			h = MB_WINDOW_GRID_Y * 4;

			MB_hAdjust = 1;
			MB_wAdjust = 1;
			MB_hOffset = 2 * MB_WINDOW_PADDING_Y;
			MB_wOffset = 2 *MB_WINDOW_PADDING_X;
		};
		class Resizer: MB_CtrlResizer { };
END_WINDOW
