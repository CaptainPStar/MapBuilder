
class MB_PaneLibraryViewer: MB_CoreContent {

  class controls: controls {
    class Background: MB_CtrlPaneBackground { };

    class LibrarySearch: ctrlEdit {
      idc = __IDC_LIBRARY_TVIEW_SEARCH;
      x = __GUI_PANE_CONTENT_X;
      y = __GUI_PANE_CONTENT_Y;
      h = (5 * GRID_H);
      w = __GUI_PANE_CONTENT_W;
      colorBackground[] = __COLOR_BACKGROUND_ALT;      
      colorBorder[] = {0, 0, 0, 0};

      MB_wAdjust = 1;
      MB_wOffset = 2 * __GUI_PANE_CONTENT_X;
      MB_hAdjust = 0;
      MB_yAdjust = 0;
    };

    class LibraryView: ctrlTree {
      idc = __IDC_LIBRARY_TVIEW;
      idcSearch = __IDC_LIBRARY_TVIEW_SEARCH;
      x = __GUI_PANE_CONTENT_X;
      y = __GUI_PANE_CONTENT_Y + (6.5 * GRID_H);
      h = (20 * GRID_H);
      w = __GUI_PANE_CONTENT_W;
      colorBackground[] = __COLOR_BACKGROUND_ALT;
      colorBorder[] = {0, 0, 0, 0};
      onTreeSelChanged = "_this call MB_FNC_LibrarySelect;";

      MB_wAdjust = 1;
      MB_wOffset = 2 * __GUI_PANE_CONTENT_X;
      MB_hAdjust = 1;
      MB_hOffset = (__GUI_PANE_CONTENT_Y + (8 * GRID_H));
    };

    class Resizer: MB_CtrlResizer { };
  };
};
