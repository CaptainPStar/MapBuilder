class MB_CtrlButtonMain: ctrlButton {
  style = 0xC0;
  colorBackground[] = __COLOR_BUTTON_BG;
  colorBackgroundDisabled[] = __COLOR_BUTTON_BG;
  colorBackgroundActive[] = __COLOR_BUTTON_BG_FOCUS;
  colorFocused[] = __COLOR_BUTTON_BG_FOCUS;
  colorText[] = __COLOR_BUTTON_TEXT;
  colorDisabled[] = __COLOR_BUTTON_TEXT_DISABLED;
  font = MB_TEXT_FONT;
  w = __GUI_PANE_BUTTONWIDE_W;
  h = __GUI_PANE_BUTTON_H;
  offsetX = 0);
  offsetY = 0;
  offsetPressedX = 0;
  offsetPressedY = 0;
};

class MB_CtrlButtonAccent: MB_CtrlButtonMain {
  colorBackground[] = __COLOR_BUTTON_BG_ACCENT;
  colorBackgroundDisabled[] = __COLOR_BUTTON_BG_ACCENT;
  colorBackgroundActive[] = __COLOR_BUTTON_BG_ACCENT_FOCUS;
  colorFocused[] = __COLOR_BUTTON_BG_ACCENT_FOCUS;
  colorText[] = __COLOR_BUTTON_TEXT_ACCENT;
  colorDisabled[] = __COLOR_BUTTON_TEXT_DISABLED;
};
