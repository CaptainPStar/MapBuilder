
class MB_MissingPane: MB_CoreContent {

  class controls: controls {
    class Background: MB_CtrlPaneBackground { };

    class Text: RscStructuredText {
      idc = __IDC_PANE_CONTENT_DEFAULT;
      x = 0;
      y = 0;
      h = 15 * GRID_H;
      w = 20 * __GUI_PANE_W;
      text = "This window has a non-existant 'type' entry within Mapbuilder>>Panes config";
      MB_hAdjust = 1;
      MB_wAdjust = 1;
      MB_hOffset = __GUI_PANE_BUTTON_H;
    };

    class Resizer: MB_CtrlResizer { };
  };
};
