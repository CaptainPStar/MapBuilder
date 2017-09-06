#define pixelScale 0.5

#define GRID_W (pixelW * pixelGrid * pixelScale)
#define GRID_H (pixelH * pixelGrid * pixelScale)
#define CENTER_X	((getResolution select 2) * 0.5 * pixelW)
#define CENTER_Y	((getResolution select 3) * 0.5 * pixelH)

// Variables
#define __GUI_WINDOW (uiNamespace getVariable ['MB_UI_Window', displayNull])

// SIZES
#define __GUI_PANE_W (80 * GRID_W)
#define __GUI_PANE_HEADER_H (6 * GRID_H)
#define __GUI_PANE_BUTTON_H (6 * GRID_H)
#define __GUI_PANE_BUTTON_W (6 * GRID_W)
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
#define __IDC_PANE_CONTENT 20
#define __IDC_PANE_CONTENT_BG 21
#define __IDC_PANE_CONTENT_RESIZE 22

#define __IDC_PANE_BASEIDC 10000
#define __IDC_PANE_IDC 100
#define __IDC_SIDEBAR_BASEIDC 100000
#define __IDC_SIDEBAR_BG 1

#define __IDC_LIBRARY_TVIEW 30
#define __IDC_LIBRARY_TVIEW_SEARCH 645

#define __IDC_COREGROUP 40
#define __IDC_OVERLAYGROUP 41
#define __IDC_RESIZER 42

// COLORS
#define __COLOR_BACKGROUND_BASE {0.27, 0.27, 0.27, 1}
#define __COLOR_BACKGROUND_ALT {0.55, 0.64, 0.7, 0.5}
#define __COLOR_BACKGROUND_HEADER {0.12, 0.12, 0.12, 1}
#define __COLOR_BACKGROUND_RESIZE {1, 0.2, 0, 0.5}
