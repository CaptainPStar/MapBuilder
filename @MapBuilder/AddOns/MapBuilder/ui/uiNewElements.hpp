

class MB_ContentBackground: ctrlStaticBackground {
  idc = __IDC_PANE_CONTENT_BG;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = 0;
  colorBackground[] = __COLOR_BACKGROUND_BASE;
};

class MB_CoreSidebar: ctrlControlsGroupNoHScrollbars {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = safeZoneH;

  class Controls { };
};

class MB_CoreSidebarBG: ctrlStaticBackground {
  idc = __IDC_SIDEBAR_BG;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = safeZoneH;
  colorBackground[] = __COLOR_BACKGROUND_BASE;
};

class MB_CoreHeader: ctrlControlsGroupNoScrollbars {
  idc = __IDC_PANE_HEADER;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = __GUI_PANE_HEADER_H;

  class Controls {
    class Background: ctrlStaticBackground {
      idc = __IDC_PANE_HEADER_BG;
      x = 0;
      y = 0;
      w = __GUI_PANE_W;
      h = __GUI_PANE_HEADER_H;
      colorBackground[] = {1, 1, 0, 0.5};//__COLOR_BACKGROUND_HEADER;
    };

    // -- Allows collapsing the pane (Shift Y position of all elements below it)
    class Toggle: MB_CtrlPaneToggle {
      idc = __IDC_PANE_HEADER_TOGGLE;
    };

    class Text: RscText {
      text = "lel";
      idc = __IDC_PANE_HEADER_TEXT;
      x = __GUI_PANE_BUTTON_W;
      y = 0;
      w = (__GUI_PANE_W - (2 * __GUI_PANE_BUTTON_W));
      h = __GUI_PANE_BUTTON_H
      colorBackground[] = {0, 0.5, 1, 0.5};
    };

    // -- Allows dragging the pane to change order, or moving this into it's own window
    class Handle: MB_CtrlDragHandle {
      idc = __IDC_PANE_HEADER_HANDLE;
    };
  };
};


class MB_CorePane: ctrlControlsGroupNoScrollbars {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = __GUI_PANE_HEADER_H;

  class Controls {
    // -- Top bar, that allows you opening and closing the pane
    class Header: MB_CoreHeader { };

  };
};

class MB_CtrlPaneBackground: ctrlStaticBackground {
    idc = __IDC_PANE_CONTENT_BG;
    x = 0;
    y = 0;
    w = __GUI_PANE_W;
    h = 0;
    colorBackground[] = {0, 0.5, 1, 0.5};
    MB_hAdjust = 1;
};
