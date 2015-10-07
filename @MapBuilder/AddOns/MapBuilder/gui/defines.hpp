#ifndef __MB_DEFINES__
#define __MB_DEFINES__

#define MB_TEXT_LARGE 0.04
#define MB_TEXT_SMALL 0.02
#define MB_TEXT_DEFAULT 0.03
#define MB_TEXT_FONT "EtelkaNarrowMediumPro"
#define MB_TEXT_FONT_TITLE "EtelkaMonospaceProBold"


#define MB_GUI_GRID_CELLS_W 60
#define MB_GUI_GRID_CELLS_H 32
#define MB_GUI_GRID_W			(safezoneW / MB_GUI_GRID_CELLS_W)
#define MB_GUI_GRID_H			(safezoneH / MB_GUI_GRID_CELLS_H)
#define MB_GUI_GRID_X			(safezoneX)
#define MB_GUI_GRID_Y			(safezoneY)
#define MB_GUI_GRID_LAST_CELL_X (MB_GUI_GRID_X + (MB_GUI_GRID_CELLS_W - 1) * MB_GUI_GRID_W)
#define MB_GUI_GRID_LAST_CELL_Y (MB_GUI_GRID_Y + (MB_GUI_GRID_CELLS_H - 1) * MB_GUI_GRID_H)
#define MB_GUI_GRID_PADDING_X (MB_GUI_GRID_W/20)
#define MB_GUI_GRID_PADDING_Y (MB_GUI_GRID_H/20)


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


//IDCs
#define IDD_MB_INTERFACE 123
#define IDC_MB_VIEWPORT 170001

//Topbar
#define IDC_MB_TOPBAR_CATEGORY_BEGIN 180000
#define IDC_MB_TOPBAR_CATEGORY 101
#define IDC_MB_TOPBAR_DROPDOWN_MOUSEAREA 102
#define IDC_MB_TOPBAR_DROPDOWN_GROUP 103
#define IDC_MB_TOPBAR_DROPDOWN_GROUP_BG 104
#endif