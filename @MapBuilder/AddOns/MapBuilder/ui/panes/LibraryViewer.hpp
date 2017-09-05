
class MB_PaneLibraryViewer: ctrlControlsGroupNoHScrollbars {
  idc = __IDC_PANE_CONTENT;
  x = 0;
  y = __GUI_PANE_HEADER_H;
  w = __GUI_PANE_W;
  h = 0;
  MB_hAdjust = 1;

  class MapBuilder {
    initCode = "_this call MB_fnc_uiLoadLibrary";
    collapseCode = "";
  };

  class controls {
    class Background: MB_CtrlPaneBackground { };
    class LibrarySearch: ctrlEdit {
      idc = __IDC_LIBRARY_TVIEW_SEARCH;
      x = __GUI_PANE_CONTENT_X;
      y = __GUI_PANE_CONTENT_Y;
      h = (5 * GRID_H);
      w = __GUI_PANE_CONTENT_W;
      colorBackground[] = {0, 0, 1, 0.5};

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

      MB_hAdjust = 1;
      MB_hOffset = (__GUI_PANE_CONTENT_Y + (7 * GRID_H));
    };

    class Resizer: MB_CtrlResizer { };
  };
};
