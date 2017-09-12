#define IDC 171100
#define NAME 3DPreview
#define TITLE Class Preview
BEGIN_WINDOW(IDC,NAME,TITLE,0.58,0.01,15,15)
		class MB_Window_3DPreview_RTT : MB_RscPicture {
			idc = __IDC_ELEMENT_1;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			x = (MB_WINDOW_GRID_X * 0);
			y = (MB_WINDOW_GRID_Y * 1);
			w = (MB_WINDOW_GRID_X * 15 + 2 * MB_WINDOW_PADDING_X);
			h = (MB_WINDOW_GRID_Y * 14 + 2 * MB_WINDOW_PADDING_Y);
			//text = "#(ai,512,512,9)perlinNoise(256,256,0,1)";
			text = "#(argb,512,512,1)r2t(mbpreviewrtt,1)";

			MB_wAdjust = 1;
			MB_wOffset = (2 * MB_WINDOW_PADDING_X);
			MB_hAdjust = 1;
			MB_hOffset = (2 * MB_WINDOW_PADDING_Y);
		};
		class Resizer: MB_CtrlResizer { };
END_WINDOW
