class MB_RscButton : RscButton
{
	idc = -1;
	style = ST_CENTER + ST_MULTI;
	default = false;
	font = MB_TEXT_FONT;
	sizeEx = MB_TEXT_LARGE;
	
	colorText[] = { 0.9, 0.9, 0.9, 1 };
	colorFocused[] = { 0.9, 0.9, 0.9, 1 };  // border color for focused state
	colorDisabled[] = {  0.5, 0.5, 0.5, 0.7 };   // text color for disabled state
	colorBackground[] = { 0.1, 0.1, 0.1, 1 };
	colorBackgroundDisabled[] = { 0.5, 0.5, 0.5, 0.4 };   // background color for disabled state
	colorBackgroundActive[] = { 0, 0.75, 0, 1 };   // background color for active state
	
	offsetX = 0.005;
	offsetY = 0.005;
	offsetPressedX = 0.005;
	offsetPressedY = 0.005;
	colorShadow[] = { 0, 0, 0, 0.2 };
	colorBorder[] = { 0, 0, 0, 1 };
	borderSize = 0;
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.09,
		1
	};
	x = 0.4; 
	y = 0.475;
	w = 0.2; 
	h = 0.05;
	text = "";
	action = "";

	tooltip = ""; // Tooltip text
	//tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	//tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	//tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color
};