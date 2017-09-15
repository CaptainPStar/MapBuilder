class MB_CoreContent: ctrlControlsGroupNoScrollbars {
  idc = __IDC_PANE_CONTENT;
  x = 0;
  y = __GUI_PANE_HEADER_H;
  w = __GUI_PANE_W;
  h = (40 * GRID_H);
  MB_hAdjust = 1;
  MB_wAdjust = 1;
  MB_wMin = 40 * GRID_W;
  MB_hMin = 30 * GRID_H;

  class Controls { // -- For some BIS-type reason inherited controls in this don't work at all
  };
};
