class Toolbar: MB_RscControlsGroupNoScrollbars {
  idc = 1000;
  x = "safezoneX";
  y = "safezoneY + safeZoneH * 0.02";
  w = GRID_TOOLBAR_X(2);
  h = "safeZoneH * 0.98";

  onMouseEnter = "['expand', _this] call MB_fnc_toolbarExpand";
  onMouseLeave = "['retract', _this] call MB_fnc_toolbarExpand";

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
      colorBackground[] = {0.2,0.2,0.2,1};
      x = 0;
      y = 0;
      w = GRID_TOOLBAR_X(2);
      h = "safeZoneH * 0.98";
    };
    class ToolbarGroup: ctrlControlsGroupNoScrollbars {
      idc = __IDC_TOOLBARGROUP;
      x = GRID_TOOLBAR_X(0.25);
      y = GRID_TOOLBAR_Y(2);
      w = GRID_TOOLBAR_X(2);
      h = safeZoneH * 0.98 - GRID_TOOLBAR_Y(2);
      class Controls { };
    };

    class ToolbarSettingsBackground: MB_Static {
      idc = 1002;
      colorBackground[] = {0.2,0.2,0.2,1};
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
      class Controls { };
    };
  };
};
