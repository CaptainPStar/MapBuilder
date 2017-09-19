class Toolbar: MB_RscControlsGroupNoScrollbars {
  idc = 1000;
  x = "safezoneX";
  y = "safezoneY";
  w = GRID_TOOLBAR_X(2);
  h = "safeZoneH";


  class Items {
    ySpacing = GRID_TOOLBAR_Y(0.5);
    class New {
      picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
      tooltip = "TOOLTIP!";
      data = "";
      value = 1;
    };

    class ObjectMode {
      action = "MB_Mode = 0";
      picture = "\mb\mapBuilder\data\icons\maps\32_place_ca.paa";
      tooltip = "Object Mode";
    };

    class Brushmode {
      action = "MB_Mode = 1";
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
      h = "safeZoneH";
    };
    class ToolbarGroup: ctrlControlsGroupNoScrollbars {
      idc = __IDC_TOOLBARGROUP;
      x = GRID_TOOLBAR_X(0.25);
      y = GRID_TOOLBAR_Y(3);
      w = GRID_TOOLBAR_X(2);
      h = safeZoneH - GRID_TOOLBAR_Y(3);
      class Controls {

      };
    };
  };
};
