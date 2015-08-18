//###################
//	Infopopup
//###################
 class MB_Window_3DPreview_Group : MB_RscControlsGroup
{
	idc = 171100;
	x = "SafeZoneX + (SafeZoneW * 0.58)";
	y = "SafeZoneY + (SafezoneH * 0.01)";
	w = MB_WINDOW_GRID_X * 15 + 2*MB_WINDOW_PADDING_X + 0.02;
	h = MB_WINDOW_GRID_Y * 15 + 2*MB_WINDOW_PADDING_Y + 0.02;

	class Controls
	{
		class MB_Window_3DPreview_BG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 15 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 14 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_3DPreview_Header : MB_RscBackground {
			idc = -1;
			text = "3D Preview";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 15 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,171000] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,171000] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,171000] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_3DPreview_RTT : MB_RscPicture {
			idc = -1;
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			x =  0*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = 0.512;
			h = 0.512;
			//text = "#(ai,512,512,9)perlinNoise(256,256,0,1)";
			text = "#(argb,512,512,1)r2t(mbpreviewrtt,1)";
		};
	};
};