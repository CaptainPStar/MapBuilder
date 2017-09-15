class MB_CtrlPaneButton: RscButton {
  idc = __IDC_BUTTON_1;
  x = 0;
  y = 0;
  w = __GUI_PANE_BUTTON_W;
  h = __GUI_PANE_BUTTON_H;
  text = "";
  font = MB_TEXT_FONT;
  style = 0;
  sizeEx = 0.03;
  shadow = 0;
  colorBackground[] = __COLOR_BUTTON_BG;
  colorBackgroundActive[] = __COLOR_BUTTON_BG_FOCUS;
  colorFocused[] = __COLOR_BUTTON_BG_FOCUS;
  colorText[] = __COLOR_BUTTON_TEXT;
  period = 0;
  offsetPressedX=(GRID_W*0.25);
  offsetPressedY=(GRID_H*0.25);

  MB_yAdjust = 1;
  MB_yOffset = __GUI_PANE_BUTTON_H + __GUI_PANE_CONTENT_Y;
};
