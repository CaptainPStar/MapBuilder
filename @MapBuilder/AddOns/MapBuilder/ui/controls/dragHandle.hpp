class MB_CtrlDragHandle: ctrlButtonPictureKeepAspect {

  idc = __IDC_PANE_HEADER_HANDLE;
  x = __GUI_PANE_W - __GUI_PANE_BUTTON_W;
  y = 0;
  w = __GUI_PANE_BUTTON_W;
  h = __GUI_PANE_BUTTON_H;

  colorBackground[] = {0.2, 0.64, 0.31, 0.5};
  onMouseButtonDown = "[_this select 0, 'start'] call MB_fnc_uiPaneDrag;";
  onMouseButtonUp = "[_this select 0, 'end'] call MB_fnc_uiPaneDrag;";
  text = "\mb\mapBuilder\data\icons\handle.paa";
};
