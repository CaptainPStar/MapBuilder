class MB_CtrlResizer: ctrlButtonPictureKeepAspect {

  idc = __IDC_PANE_CONTENT_RESIZE;
  x = __GUI_PANE_W - __GUI_PANE_RESIZE_W;
  y = 0;
  w = __GUI_PANE_RESIZE_W;
  h = __GUI_PANE_RESIZE_H;

  MB_yAdjust = 1;
  MB_yOffset = __GUI_PANE_RESIZE_H;
  colorBackground[] = {1, 0.5, 0, 0.5};
  onMouseButtonDown = "[_this select 0, 'start'] call MB_fnc_uiPaneResize;";
  onMouseButtonUp = "[_this select 0, 'end'] call MB_fnc_uiPaneResize;";
  text = "\mb\mapBuilder\data\icons\resizer.paa";
};
