#define GRID_W (pixelW * pixelGrid * pixelScale)
#define GRID_H (pixelH * pixelGrid * pixelScale)

#define CENTER_X	((getResolution select 2) * 0.5 * pixelW)
#define CENTER_Y	((getResolution select 3) * 0.5 * pixelH)

// SIZES
#define __GUI_PANE_W (60 * GRID_W)
#define __GUI_PANE_HEADER_H (2 * GRID_H)
#define __GUI_PANE_BUTTON_H (1 * GRID_H)
#define __GUI_PANE_BUTTON_W (1 * GRID_W)
#define __GUI_PANE_CONTENT_X (1 * GRID_W)
#define __GUI_PANE_CONTENT_Y (1 * GRID_H)
#define __GUI_PANE_CONTENT_W (__GUI_PANE_W - (2 * __GUI_PANE_CONTENT_X))

// IDCs
#define __IDC_PANE_HEADER 10
#define __IDC_PANE_HEADER_BG 11
#define __IDC_PANE_HEADER_TOGGLE 12
#define __IDC_PANE_HEADER_TEXT 12
#define __IDC_PANE_HEADER_HANDLE 14
#define __IDC_PANE_CONTENT 20
#define __IDC_PANE_CONTENT_BG 21

#define __IDC_PANE_BASEIDC 10000
#define __IDC_PANE_IDC 100
#define __IDC_SIDEBAR_BASEIDC 100000
#define __IDC_SIDEBAR_BG 1

#define __IDC_LIBRARY_TVIEW 30
#define __IDC_LIBRARY_TVIEW_SEARCH 645


// COLORS
#define __COLOR_BACKGROUND_BASE {0.27, 0.27, 0.27, 1}
#define __COLOR_BACKGROUND_HEADER {0.12, 0.12, 0.12, 1}
