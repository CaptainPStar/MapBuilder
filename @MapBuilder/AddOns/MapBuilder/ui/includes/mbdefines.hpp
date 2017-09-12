#define GUI_GRID_X	(0.028)
#define GUI_GRID_Y	(0.043)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

#define MB_WINDOW_GRID_X (0.032)
#define MB_WINDOW_GRID_Y (0.040)

#define MB_WINDOW_PADDING_X (0.01)
#define MB_WINDOW_PADDING_Y (0.01)

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4

#define MB_TEXT_LARGE 0.04
#define MB_TEXT_SMALL 0.02
#define MB_TEXT_DEFAULT 0.03
#define MB_TEXT_FONT "RobotoCondensed"
#define MB_TEXT_FONT_TITLE "RobotoCondensedBold"


#define pixelScale 0.5
#define GRID_W (pixelW * pixelGrid * pixelScale)
#define GRID_H (pixelH * pixelGrid * pixelScale)
#define CENTER_X	((getResolution select 2) * 0.5 * pixelW)
#define CENTER_Y	((getResolution select 3) * 0.5 * pixelH)

// Variables
#define __GUI_WINDOW (uiNamespace getVariable ['mb_main_dialog', displayNull])

// SIZES
#define __GUI_PANE_W (80 * GRID_W)
#define __GUI_PANE_HEADER_H (6 * GRID_H)
#define __GUI_PANE_BUTTON_H (6 * GRID_H)
#define __GUI_PANE_BUTTON_W (6 * GRID_W)
#define __GUI_PANE_BUTTONWIDE_W (12 * GRID_W)
#define __GUI_PANE_CONTENT_X (2.5 * GRID_W)
#define __GUI_PANE_CONTENT_Y (2.5 * GRID_H)
#define __GUI_PANE_CONTENT_W (__GUI_PANE_W - (2 * __GUI_PANE_CONTENT_X))
#define __GUI_PANE_RESIZE_W (5 * GRID_W)
#define __GUI_PANE_RESIZE_H (5 * GRID_H)

// IDCs
#define __IDC_PANE_HEADER 10
#define __IDC_PANE_HEADER_BG 11
#define __IDC_PANE_HEADER_TOGGLE 12
#define __IDC_PANE_HEADER_TEXT 13
#define __IDC_PANE_HEADER_HANDLE 14
#define __IDC_PANE_HEADER_CLOSE 15
#define __IDC_PANE_HEADER_HELP 16
#define __IDC_PANE_CONTENT 20
#define __IDC_PANE_CONTENT_BG 21
#define __IDC_PANE_CONTENT_RESIZE 22

#define __IDC_PANE_BASEIDC 10000
#define __IDC_PANE_IDC 100
#define __IDC_SIDEBAR_BASEIDC 100000
#define __IDC_SIDEBAR_BG 200000

#define __IDC_LIBRARY_TVIEW 30
#define __IDC_LIBRARY_TVIEW_SEARCH 645

#define __IDC_COREGROUP 40
#define __IDC_OVERLAYGROUP 41
#define __IDC_RESIZER 42

// IDC.
#define __IDC_BUTTON_1 170902
#define __IDC_BUTTON_2 170903
#define __IDC_BUTTON_3 170904
#define __IDC_ELEMENT_1 172001
#define __IDC_ELEMENT_2 172002
#define __IDC_ELEMENT_3 172003
#define __IDC_ELEMENT_4 172004
#define __IDC_ELEMENT_5 172005
#define __IDC_ELEMENT_6 172006

#define __IDC_FAVORITES 170901
#define __IDC_USEDOBJECT 170801



// COLORS
#define __COLOR_BACKGROUND_SIDEBAR {46/255, 46/255, 46/255, 1}
#define __COLOR_BACKGROUND_CONTENT {43/255, 43/255, 43/255, 1}
#define __COLOR_BACKGROUND_ALT {88/255, 88/255, 88/255, 0.25}
#define __COLOR_BACKGROUND_HEADER {38/255, 38/255, 38/255, 1}
#define __COLOR_BACKGROUND_RESIZE {1, 0.2, 0, 0.5}

#define __COLOR_BUTTON_BG {0, 0, 0, 0.5}
#define __COLOR_BUTTON_BG_FOCUS {0.2, 0.2, 0.2, 0.5}
#define __COLOR_BUTTON_BG_ACCENT {0.995, 0.714, 0.208, 1}
#define __COLOR_BUTTON_BG_ACCENT_FOCUS {"254/255", "200/255", "80/255", "1"}
#define __COLOR_BUTTON_TEXT {0.749, 0.749, 0.749, 1}
#define __COLOR_BUTTON_TEXT_ACCENT {0, 0, 0, 1}
#define __COLOR_BUTTON_TEXT_DISABLED {0.25, 0.25, 0.25, 1}
