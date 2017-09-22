class Toolbar: MB_RscControlsGroupNoScrollbars {
  idc = __IDC_TOOLBAR;
  x = safezoneX - GRID_TOOLBAR_X(0.2);
  y = "safezoneY + safeZoneH * 0.02";
  w = GRID_TOOLBAR_X(2.2);
  h = "safeZoneH * 0.98";

  class Items {
    ySpacing = GRID_TOOLBAR_Y(0.5);
    colorHighlight[] = __COLOR_TOOLBUTTON_HIGHLIGHT;
    colorNormal[] = __COLOR_TOOLBUTTON;

    class New {
      picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
      tooltip = "TOOLTIP!";
      data = "";
      value = 1;
      enable = 0;
    };

    class ObjectMode {
      action = "['object'] call MB_fnc_buttonChangeMode;";
      picture = "\mb\mapBuilder\data\icons\maps\32_place_ca.paa";
      tooltip = "Object Mode";
      default = 1;
    };

    class Brushmode {
      action = "['brush'] call MB_fnc_buttonChangeMode;";
      picture = "\mb\mapBuilder\data\icons\image\32_brush_ca.paa";
      tooltip = "Brush Mode";
    };
  };

  class Controls {
    class ToolbarBackground: MB_Static {
      idc = 1001;
      colorBackground[] = __COLOR_BACKGROUND_HEADER;
      x = GRID_TOOLBAR_X(0.2);
      y = 0;
      w = GRID_TOOLBAR_X(2);
      h = "safeZoneH * 0.98";
    };

    class ToolbarSettingsBackground: MB_Static {
      idc = 1002;
      colorBackground[] = __COLOR_BACKGROUND_SIDEBAR;
      x = GRID_TOOLBAR_X(2);
      y = 0;
      w = __GUI_PANE_W;
      h = "safeZoneH * 0.98";
    };

    class ToolbarSettings: ctrlControlsGroupNoHScrollbars {
      idc = __IDC_TOOLBARSETTINGSGROUP;
      x = GRID_TOOLBAR_X(2);
      y = 0;
      w = __GUI_PANE_W;
      h = "safeZoneH * 0.98";

      class Controls {
        class LockButton: ctrlCheckbox {
          idc = __IDC_BUTTON_1;
          x = __GUI_PANE_W - __GUI_PANE_BUTTON_W*1.1;
          y = __GUI_PANE_BUTTON_H*0.1;
          w = __GUI_PANE_BUTTON_W;
          h = __GUI_PANE_BUTTON_H;
          textureChecked="\mb\mapBuilder\data\icons\action\32_lock_outline_ca.paa";
          textureUnchecked="\mb\mapBuilder\data\icons\action\32_lock_open_ca.paa";
          textureFocusedChecked="\mb\mapBuilder\data\icons\action\32_lock_outline_ca.paa";
          textureFocusedUnchecked="\mb\mapBuilder\data\icons\action\32_lock_open_ca.paa";
          textureHoverChecked="\mb\mapBuilder\data\icons\action\32_lock_outline_ca.paa";
          textureHoverUnchecked="\mb\mapBuilder\data\icons\action\32_lock_open_ca.paa";
          texturePressedChecked="\mb\mapBuilder\data\icons\action\32_lock_outline_ca.paa";
          texturePressedUnchecked="\mb\mapBuilder\data\icons\action\32_lock_open_ca.paa";
          textureDisabledChecked="\mb\mapBuilder\data\icons\action\32_lock_outline_ca.paa";
          textureDisabledUnchecked="\mb\mapBuilder\data\icons\action\32_lock_open_ca.paa";
          onCheckedChanged = "['lock', _this] call MB_fnc_toolbarExpand";
          colorBackground[] = {0, 0, 0, 0};
        };
      };
    };

    class ExpandControl: MB_CtrlMouseoverBox {
      idc = __IDC_TOOLBARFOCUS;
      x = 0;
      y = 0;
      w = GRID_TOOLBAR_X(2.2);
      h = "safeZoneH * 0.98";
      onMouseEnter = "['expand', _this] call MB_fnc_toolbarExpand";
      onCheckedChanged = "['resetfocus'] call MB_fnc_uiToolbar;";
    };
  };
};
