
class MB_EmptyPane: ctrlControlsGroupNoHScrollbars {
  idc = __IDC_PANE_CONTENT;
  x = 0;
  y = __GUI_PANE_HEADER_H;
  w = __GUI_PANE_W;
  h = 0;
  MB_hAdjust = 1;

  class MapBuilder {
    initCode = "";
    collapseCode = "";
  };

  class controls {
    class Background: MB_CtrlPaneBackground { };
    class Resizer: MB_CtrlResizer { };
  };
};
