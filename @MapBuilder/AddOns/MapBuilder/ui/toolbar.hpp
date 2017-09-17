class Toolbar: MB_RscControlsGroupNoScrollbars
{
  idc = 1000;
  x = "safezoneX";
  y = safezoneY + GRID_TOOLBAR_Y(1.3);
  w = "safezoneW";
  h = GRID_TOOLBAR_Y(1) + (GRID_W * 2);
  class Controls
  {
    class ToolbarBackground: MB_Static
    {
      idc = 1001;
      colorBackground[] = {0.2,0.2,0.2,1};
      x = 0;
      y = 0;
      w = "safezoneW";
      h = GRID_TOOLBAR_Y(1) + (GRID_W * 2);
    };

    class File: MB_RscControlsGroupNoScrollbars
    {
      idc = 1002;
      x = GRID_TOOLBAR_X(3);
      y = GRID_W * 1;
      w = GRID_TOOLBAR_X(4);
      h = GRID_TOOLBAR_Y(1);
      class Controls
      {
        class New: MB_RscButtonToolbar
        {
          idc = 1006;
          action = "systemchat ""blub"";";
          text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
          tooltip = "TOOLTIP!";
          //onLoad = "['showShortcut','MissionNew',_this] call bis_fnc_3DENInterface;";
          x = 0;
          y = 0;
          w = GRID_TOOLBAR_X(1);
          h = GRID_TOOLBAR_Y(1);
        };
      };
    };

    class BrushMode: MB_RscControlsGroupNoScrollbars {
      idc = 1003;
      x = GRID_TOOLBAR_X(3) + GRID_TOOLBAR_X(4);
      y = GRID_W * 1;
      w = GRID_TOOLBAR_X(4);
      h = GRID_TOOLBAR_Y(1);
      class Controls {
        class NormalMode: MB_RscButtonToolbar {
          idc = -1;
          action = "MB_Mode = 0";
          text = "\mb\mapBuilder\data\icons\maps\32_place_ca.paa";
          tooltip = "Object Mode";
          x = 0;
          y = 0;
          w = GRID_TOOLBAR_X(1);
          h = GRID_TOOLBAR_Y(1);
        };
        class Brush: NormalMode {
          idc = -1;
          action = "MB_Mode = 1";
          text = "\mb\mapBuilder\data\icons\image\32_brush_ca.paa";
          tooltip = "Brush Mode";
          x = GRID_TOOLBAR_X(1);
        };
      };
    };
  };
};
