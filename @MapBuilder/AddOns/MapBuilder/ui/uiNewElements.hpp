

class MB_ContentBackground: ctrlStaticBackground {
  idc = __IDC_PANE_CONTENT_BG;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = 0;
  colorBackground[] = __COLOR_BACKGROUND_SIDEBAR;
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
  colorBackground[] = __COLOR_BACKGROUND_SIDEBAR;
};

class MB_CoreHeader: ctrlControlsGroupNoScrollbars {
  idc = __IDC_PANE_HEADER;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = __GUI_PANE_HEADER_H;
  MB_wAdjust = 1;

  class Controls {
    class Background: ctrlStaticBackground {
      idc = __IDC_PANE_HEADER_BG;
      x = 0;
      y = 0;
      w = safeZoneW;
      h = __GUI_PANE_HEADER_H;
      colorBackground[] = __COLOR_BACKGROUND_HEADER;

      MB_wAdjust = 1;
    };

    // -- Allows collapsing the pane (Shift Y position of all elements below it)
    class MB_CtrlPaneToggle: ctrlCheckbox {
      idc = __IDC_PANE_HEADER_TOGGLE;
      x = 0;
      y = 0;
      w = __GUI_PANE_BUTTON_W;
      h = __GUI_PANE_BUTTON_H;
      textureChecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_right_ca.paa";
      textureUnchecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_down_ca.paa";
      textureFocusedChecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_right_ca.paa";
      textureFocusedUnchecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_down_ca.paa";
      textureHoverChecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_right_ca.paa";
      textureHoverUnchecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_down_ca.paa";
      texturePressedChecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_right_ca.paa";
      texturePressedUnchecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_down_ca.paa";
      textureDisabledChecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_right_ca.paa";
      textureDisabledUnchecked="\mb\mapBuilder\data\icons\hardware\32_keyboard_arrow_down_ca.paa";
      onCheckedChanged = "[(_this select 0)] call MB_fnc_uiPaneToggle";
    };

    class Text: RscText {
      text = "lel";
      idc = __IDC_PANE_HEADER_TEXT;
      x = __GUI_PANE_BUTTON_W;
      y = 0;
      w = (__GUI_PANE_W - (2 * __GUI_PANE_BUTTON_W));
      h = __GUI_PANE_BUTTON_H;
      colorBackground[] = {0, 0.5, 1, 0};
      shadow = 0;
      sizeEx = 0.03;
      MB_wAdjust = 1;
      MB_wOffset = (2 * __GUI_PANE_BUTTON_W);
    };

    class MB_CtrlCloseButton: ctrlButtonPictureKeepAspect {
      idc = __IDC_PANE_HEADER_CLOSE;
      x = __GUI_PANE_W - (2 * __GUI_PANE_BUTTON_W);
      y = 0;
      w = __GUI_PANE_BUTTON_W;
      h = __GUI_PANE_BUTTON_H;
      colorBackground[] = {0.88, 0.95, 0.1, 0};
      onMouseButtonClick = "[_this select 0] call MB_fnc_uiPaneClose;";
      text = "\mb\mapBuilder\data\icons\content\32_clear_ca.paa";
      tooltip = "Close";

      MB_xAdjust = 1;
      MB_xOffset = (2 * __GUI_PANE_BUTTON_W);
    };

    // -- Allows dragging the pane to change order, or moving this into it's own window
    class MB_CtrlDragHandle: MB_CtrlCloseButton {
      idc = __IDC_PANE_HEADER_HANDLE;
      x = __GUI_PANE_W - __GUI_PANE_BUTTON_W;
      colorBackground[] = {0.2, 0.64, 0.31, 0};
      onMouseButtonClick = "";
      onMouseButtonDown = "[_this select 0, 'start'] call MB_fnc_uiPaneDrag;";
      onMouseButtonUp = "[_this select 0, 'end'] call MB_fnc_uiPaneDrag;";
      text = "\mb\mapBuilder\data\icons\editor\32_drag_handle_ca.paa";
      tooltip = "Drag";

      MB_xAdjust = 1;
      MB_xOffset = __GUI_PANE_BUTTON_W;
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
    class MB_CoreHeader: MB_CoreHeader { };

  };
};

class MB_CtrlPaneBackground: ctrlStaticBackground {
    idc = __IDC_PANE_CONTENT_BG;
    x = 0;
    y = 0;
    w = __GUI_PANE_W;
    h = 0;
    colorBackground[] = __COLOR_BACKGROUND_CONTENT;
    MB_hAdjust = 1;
    MB_wAdjust = 1;
};
