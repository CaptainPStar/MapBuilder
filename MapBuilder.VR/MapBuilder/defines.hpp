#define GUI_GRID_X	(0.028)
#define GUI_GRID_Y	(0.043)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4

class RscText
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = GUI_GRID_H;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = {0,0,0,0.5};
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
};
class RscStructuredText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {1,1,1,1};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = GUI_GRID_H;
	w = 0.3;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};
class RscPicture
{
	access = 0;
	type = 0;
	idc = -1;
	style = ST_PICTURE;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscListBox
{
	access = 0;
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorScrollbar[] = {1,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground[] = {0.95,0.95,0.95,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0.3};
	soundSelect[] = 
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ListScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	};
	style = 16;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	color[] = {1,1,1,1};
	period = 1.2;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class RscActiveText
{
	access = 0;
	type = 11;
	style = 0;
	color[] = {1,1,1,0.7};
	colorActive[] = {1,1,1,1};
	colorText[] = {1,1,1,0.7};
	soundClick[] = {"",0.1,1};
	soundEnter[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	font = "PuristaMedium";
	x = 0;
	y = 0;
	h = GUI_GRID_H;
	w = 0.3;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class IGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = {0,0,0,0};
	font = "PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] = 
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};
class RscButton
{
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	font = "PuristaMedium";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,0.5)";
	animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.8)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.8)";
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	colorFocused[] = {1,1,1,0.5};
	colorBackgroundFocused[] = {0,0,0,0.8};
	colorBackground[] = {0,0,0,0.8};
	colorBackground2[] = {1,1,1,0.5};
	color[] = {1,1,1,1};
	color2[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	class TextPos
	{
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaMedium";
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "(6.25 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top = 0.005;
		w = 0.0225;
		h = 0.03;
	};
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
};

class RscEdit
{ 
	idc = -1;
	type = CT_EDIT;
	canModify = 1;
    style = "0x00 + 0x40"; 
    font = "PuristaMedium"; 
    sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 2;
	x = 0; 
	y = 0;
	w = .2; 
	h = .4;
	size = 0.2;	
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
    colorBackground[] = {0,0,0,1};
    colorText[] = {1,1,1,1};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorDisabled[] = {1,1,1,0.25};
	autocomplete = ""; 
};  
class RscCheckbox
{ 
	idc = -1;
	style = 0;
	type = 7;
	checked_strings[] = {"CHECKED"};
	color[] = {0,0,0,0};
	colorBackground[] = {0,0,0,1};
	colorDisable[] = {0.4,0.4,0.4,1};
	colorSelect[] = {0,0,0,1};
	colorSelectedBg[] = {0,0,0,0.8};
	colorText[] = {1,0.2,0.2,1};
	colorTextDisable[] = {0.4,0.4,0.4,1};
	colorTextSelect[] = {0.2,1,0.2,1};
	columns = 1;
	font = "PuristaMedium";
	rows = 1;
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	strings[] = {"UNCHECKED"};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	w = 0.2;
	h = 0.029412;
	x = 0;
	y = 0;
};
class RscMapControl
{
        moveOnEdges = 1;
        x = "SafeZoneXAbs";
        y = "SafeZoneY + 1.5 *                                  (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        w = "SafeZoneWAbs";
        h = "SafeZoneH - 1.5 *                                  (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        shadow = 0;
        ptsPerSquareSea = 5;
        ptsPerSquareTxt = 20;
        ptsPerSquareCLn = 10;
        ptsPerSquareExp = 10;
        ptsPerSquareCost = 10;
        ptsPerSquareFor = 9;
        ptsPerSquareForEdge = 9;
        ptsPerSquareRoad = 6;
        ptsPerSquareObj = 9;
        showCountourInterval = 0;
        scaleMin = 0.001;
        scaleMax = 1.0;
        scaleDefault = 0.16;
        maxSatelliteAlpha = 0.85;
        alphaFadeStartScale = 2;
        alphaFadeEndScale = 2;
        colorBackground[] = {0.969,0.957,0.949,1.0};
        colorSea[] = {0.467,0.631,0.851,0.5};
        colorForest[] = {0.624,0.78,0.388,0.5};
        colorForestBorder[] = {0.0,0.0,0.0,0.0};
        colorRocks[] = {0.0,0.0,0.0,0.3};
        colorRocksBorder[] = {0.0,0.0,0.0,0.0};
        colorLevels[] = {0.286,0.177,0.094,0.5};
        colorMainCountlines[] = {0.572,0.354,0.188,0.5};
        colorCountlines[] = {0.572,0.354,0.188,0.25};
        colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
        colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
        colorPowerLines[] = {0.1,0.1,0.1,1.0};
        colorRailWay[] = {0.8,0.2,0.0,1.0};
        colorNames[] = {0.1,0.1,0.1,0.9};
        colorInactive[] = {1.0,1.0,1.0,0.5};
        colorOutside[] = {0.0,0.0,0.0,1.0};
        colorTracks[] = {0.84,0.76,0.65,0.15};
        colorTracksFill[] = {0.84,0.76,0.65,1.0};
        colorRoads[] = {0.7,0.7,0.7,1.0};
        colorRoadsFill[] = {1.0,1.0,1.0,1.0};
        colorMainRoads[] = {0.9,0.5,0.3,1.0};
        colorMainRoadsFill[] = {1.0,0.6,0.4,1.0};
        colorGrid[] = {0.1,0.1,0.1,0.6};
        colorGridMap[] = {0.1,0.1,0.1,0.6};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.02;
		size = 0.02;
        fontLabel = "PuristaMedium";
        sizeExLabel = "(                        (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        fontGrid = "TahomaB";
        sizeExGrid = 0.02;
        fontUnits = "TahomaB";
        sizeExUnits = "(                        (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        fontNames = "EtelkaNarrowMediumPro";
        sizeExNames = "(                        (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
        fontInfo = "PuristaMedium";
        sizeExInfo = "(                 (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        fontLevel = "TahomaB";
        sizeExLevel = 0.02;
        text = "#(argb,8,8,3)color(1,1,1,1)";
        class Legend
        {
                x = "SafeZoneX +                                        (                       ((safezoneW / safezoneH) min 1.2) / 40)";
                y = "SafeZoneY + safezoneH - 4.5 *                                      (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                w = "10 *                                       (                       ((safezoneW / safezoneH) min 1.2) / 40)";
                h = "3.5 *                                      (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                font = "PuristaMedium";
                sizeEx = "(                     (                       (                       ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
                colorBackground[] = {1,1,1,0.5};
                color[] = {0,0,0,1};
        };
        class Task
        {
                icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
                iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
                iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
                iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
                iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
                color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
                colorCreated[] = {1,1,1,1};
                colorCanceled[] = {0.7,0.7,0.7,1};
                colorDone[] = {0.7,1,0.3,1};
                colorFailed[] = {1,0.3,0.2,1};
                size = 27;
                importance = 1;
                coefMin = 1;
                coefMax = 1;
        };
		class ActiveMarker
		{
			color[] = {0,0,0,1};
			size = 2;
		};
        class Waypoint
        {
                icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
                color[] = {0,0,0,1};
				size = 2;
				coefMin = 0.25;
                coefMax = 4;
				importance = 1;
        };
        class WaypointCompleted : Waypoint
        {
        };
        class CustomMark
        {
                icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
                size = 24;
                importance = 1;
                coefMin = 1;
                coefMax = 1;
                color[] = {0,0,0,1};
        };
        class Command
        {
                icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
                size = 18;
                importance = 1;
                coefMin = 1;
                coefMax = 1;
                color[] = {1,1,1,1};
        };
        class Bush
        {
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                color[] = {0.45,0.64,0.33,0.4};
                size = "14/2";
                importance = "0.2 * 14 * 0.05 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
        };
        class Rock
        {
                icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
                color[] = {0.1,0.1,0.1,0.8};
                size = 12;
                importance = "0.5 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
        };
        class SmallTree
        {
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                color[] = {0.45,0.64,0.33,0.4};
                size = 12;
                importance = "0.6 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
        };
        class Tree
        {
                icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
                color[] = {0.45,0.64,0.33,0.4};
                size = 12;
                importance = "0.9 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
        };
        class busstop
        {
                icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class fuelstation
        {
                icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class hospital
        {
                icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class church
        {
                icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class lighthouse
        {
                icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class power
        {
                icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class powersolar
        {
                icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class powerwave
        {
                icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class powerwind
        {
                icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class quay
        {
                icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class transmitter
        {
                icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class watertower
        {
                icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {1,1,1,1};
        };
        class Cross
        {
                icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {0,0,0,1};
        };
        class Chapel
        {
                icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {0,0,0,1};
        };
        class Shipwreck
        {
                icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
                size = 24;
                importance = 1;
                coefMin = 0.85;
                coefMax = 1.0;
                color[] = {0,0,0,1};
        };
        class Bunker
        {
                icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
                size = 14;
                importance = "1.5 * 14 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
        class Fortress
        {
                icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
                size = 16;
                importance = "2 * 16 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
        class Fountain
        {
                icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
                size = 11;
                importance = "1 * 12 * 0.05";
                coefMin = 0.25;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
        class Ruin
        {
                icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
                size = 16;
                importance = "1.2 * 16 * 0.05";
                coefMin = 1;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
        class Stack
        {
                icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
                size = 20;
                importance = "2 * 16 * 0.05";
                coefMin = 0.9;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
        class Tourism
        {
                icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
                size = 16;
                importance = "1 * 16 * 0.05";
                coefMin = 0.7;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
        class ViewTower
        {
                icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
                size = 16;
                importance = "2.5 * 16 * 0.05";
                coefMin = 0.5;
                coefMax = 4;
                color[] = {0,0,0,1};
        };
};
class RscTree {
	access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
	idc = CT_TREE; // Control identification (without it, the control won't be displayed)
	type = CT_TREE; // Type is 12
	style = ST_LEFT; // Style
	default = 0; // Control selected by default (only one within a display can be used)
	blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

	x = 0; // Horizontal coordinates
	y = 0; // Vertical coordinates
	w = 1; // Width
	h = 1; // Height

	colorBorder[] = {0,0,0,1}; // Frame color

	colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
	colorSelect[] = {1,0.5,0,1}; // Selected item fill color (when multiselectEnabled is 0)
	colorMarked[] = {1,0.5,0,0.5}; // Marked item fill color (when multiselectEnabled is 1)
	colorMarkedSelected[] = {1,0.5,0,1}; // Selected item fill color (when multiselectEnabled is 1)

	sizeEx = 0.02; // Text size
	font = "TahomaB"; // Font from CfgFontFamilies
	shadow = 1; // Shadow (0 - none, 1 - N/A, 2 - black outline)
	colorText[] = {1,1,1,1}; // Text color
	colorSelectText[] = {1,1,1,1}; // Selected text color (when multiselectEnabled is 0)
	colorMarkedText[] = {1,1,1,1}; // Selected text color (when multiselectEnabled is 1)

	tooltip = "CT_TREE"; // Tooltip text
	tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
	tooltipColorText[] = {1,1,1,1}; // Tooltip text color
	tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

	multiselectEnabled = 1; // Allow selecting multiple items while holding Ctrl or Shift
	expandOnDoubleclick = 1; // Expand/collapse item upon double-click
	hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa"; // Expand icon
	expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa"; // Collapse icon
	maxHistoryDelay = 1; // Time since last keyboard type search to reset it

	// Scrollbar configuration
	class ScrollBar
	{
		width = 0; // width of ScrollBar
		height = 0; // height of ScrollBar
		scrollSpeed = 0.01; // scroll speed of ScrollBar

		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

		color[] = {1,1,1,1}; // Scrollbar color
	};

	colorDisabled[] = {0,0,0,0}; // Does nothing, but must be present, otherwise an error is shown
	colorArrow[] = {0,0,0,0}; // Does nothing, but must be present, otherwise an error is shown

	onCanDestroy = "";
	onDestroy = "";
	onMouseEnter = "";
	onMouseExit = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";

	onTreeSelChanged = "";
	onTreeLButtonDown = "";
	onTreeDblClick = "";
	onTreeExpanded = "";
	onTreeCollapsed = "";
	//onTreeMouseMove = "systemChat str ['onTreeMouseMove',_this]; false"; // Causing CTD
	//onTreeMouseHold = "systemChat str ['onTreeMouseHold',_this]; false"; // Causing CTD
	onTreeMouseExit = "";
};

class _CT_XLISTBOX
{
			access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
			idc = CT_XLISTBOX; // Control identification (without it, the control won't be displayed)
			type = CT_XLISTBOX; // Type is 42
			style = SL_HORZ + ST_CENTER + LB_TEXTURES; // Style
			default = 0; // Control selected by default (only one within a display can be used)
			blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

			x = 0; // Horizontal coordinates
			y = 0; // Vertical coordinates
			w = 0; // Width
			h = 0; // Height

			color[] = {1,1,1,1}; // Arrow color
			colorActive[] = {1,0.5,0,1}; // Selected arrow color

			sizeEx = 0.03; // Text size
			font = "TahomaB"; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text color
			colorSelect[] = {1,0.5,0,1}; // Selected text color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color

			tooltip = "CT_XLISTBOX"; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa"; // Arrow
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa"; // Arrow when clicked on
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa"; // Fill texture

			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1}; // Sound played when an item is selected

			onCanDestroy = "systemChat str ['onCanDestroy',_this]; true";
			onDestroy = "systemChat str ['onDestroy',_this]; false";
			onSetFocus = "systemChat str ['onSetFocus',_this]; false";
			onKillFocus = "systemChat str ['onKillFocus',_this]; false";
			onKeyDown = "systemChat str ['onKeyDown',_this]; false";
			onKeyUp = "systemChat str ['onKeyUp',_this]; false";
			onMouseButtonDown = "systemChat str ['onMouseButtonDown',_this]; false";
			onMouseButtonUp = "systemChat str ['onMouseButtonUp',_this]; false";
			onMouseButtonClick = "systemChat str ['onMouseButtonClick',_this]; false";
			onMouseButtonDblClick = "systemChat str ['onMouseButtonDblClick',_this]; false";
			onMouseZChanged = "systemChat str ['onMouseZChanged',_this]; false";
			onMouseMoving = "";
			onMouseHolding = "";

			onLBSelChanged = "systemChat str ['onLBSelChanged',_this]; false";
			onLBDblClick = "systemChat str ['onLBDblClick',_this]; false";
		};
		class _CT_COMBO
		{
			access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
			idc = CT_COMBO; // Control identification (without it, the control won't be displayed)
			type = CT_COMBO; // Type is 4
			style = ST_LEFT + LB_TEXTURES; // Style
			default = 0; // Control selected by default (only one within a display can be used)
			blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

			x = 0; // Horizontal coordinates
			y = 0; // Vertical coordinates
			w = 0.1; // Width
			h = 0.1; // Height

			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorSelectBackground[] = {0,0.8,0,0.8}; // Selected item fill color

			sizeEx = 0.03; // Text size
			font = "TahomaB"; // Font from CfgFontFamilies
			shadow = 0; // Shadow (0 - none, 1 - N/A, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color

			pictureColor[] = {1,0.5,0,1}; // Picture color
			pictureColorSelect[] = {1,1,1,1}; // Selected picture color
			pictureColorDisabled[] = {1,1,1,0.5}; // Disabled picture color

			tooltip = "CT_COMBO"; // Tooltip text
			tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
			tooltipColorText[] = {1,1,1,1}; // Tooltip text color
			tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa"; // Expand arrow
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa"; // Collapse arrow

			wholeHeight = 5 * 0.05; // Maximum height of expanded box (including the control height)
			maxHistoryDelay = 1; // Time since last keyboard type search to reset it

			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1}; // Sound played when the list is expanded
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1}; // Sound played when the list is collapsed
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1}; // Sound played when an item is selected

			// Scrollbar configuration (applied only when LB_TEXTURES style is used)
			class ComboScrollBar
			{
				width = 0; // width of ComboScrollBar
				height = 0; // height of ComboScrollBar
				scrollSpeed = 0.01; // scrollSpeed of ComboScrollBar

				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa"; // Arrow
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa"; // Arrow when clicked on
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa"; // Slider background (stretched vertically)
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa"; // Dragging element (stretched vertically)

				color[] = {1,1,1,1}; // Scrollbar color
			};

			onCanDestroy = "systemChat str ['onCanDestroy',_this]; true";
			onDestroy = "systemChat str ['onDestroy',_this]; false";
			onSetFocus = "systemChat str ['onSetFocus',_this]; false";
			onKillFocus = "systemChat str ['onKillFocus',_this]; false";
			onKeyDown = "systemChat str ['onKeyDown',_this]; false";
			onKeyUp = "systemChat str ['onKeyUp',_this]; false";
			onMouseButtonDown = "systemChat str ['onMouseButtonDown',_this]; false";
			onMouseButtonUp = "systemChat str ['onMouseButtonUp',_this]; false";
			onMouseButtonClick = "systemChat str ['onMouseButtonClick',_this]; false";
			onMouseButtonDblClick = "systemChat str ['onMouseButtonDblClick',_this]; false";
			onMouseZChanged = "systemChat str ['onMouseZChanged',_this]; false";
			onMouseMoving = "";
			onMouseHolding = "";

			onLBSelChanged = "systemChat str ['onLBSelChanged',_this]; false";
		};