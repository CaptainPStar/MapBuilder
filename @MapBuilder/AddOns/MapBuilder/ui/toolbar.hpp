class Toolbar: MB_RscControlsGroupNoScrollbars
{
  idc = 1000;
  x = "safezoneX";
  y = "safezoneY + 		5 * (pixelH * pixelGrid * 	0.50)";
  w = "safezoneW";
  h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
  class Controls
  {
    class ToolbarBackground: MB_Static
    {
      idc = 1001;
      colorBackground[] = {0.2,0.2,0.2,1};
      x = 0;
      y = 0;
      w = "safezoneW";
      h = "0.4";
    };
    class File: MB_RscControlsGroupNoScrollbars
    {
      idc = 1002;
      x = 0;
      y = "0";
      w = "0.1";
      h = "0.1";
      class Controls
      {
        class New: MB_RscButtonToolbar
        {
          idc = 1006;
          action = "systemchat ""blub"";";
          text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
          tooltip = "TOOLTIP!";
          //onLoad = "['showShortcut','MissionNew',_this] call bis_fnc_3DENInterface;";
          x = "0.1";
          y = 0.1;
          h = "0.1";
          w = "0.1";
        };
      };
    };
  };
};
