class MB_MainMenuStrip: MB_MenuStrip
{
  x = "SafeZoneX + (SafeZoneW * 0.03)";
  y = "SafeZoneY + (SafezoneH * 0)";
  w = "SafeZoneW * 0.97";
  h = "SafeZoneH * 0.02";
  class Items
  {
    class default { };
    items[] = {"Project","Objects","Tools","Help"};
    class Project
    {
      text = "Project";
      items[] = {"ProjectSaveLoad","Export"};
      data = "";
      value = 1;
    };
    class ProjectSaveLoad
    {
      text = "Save/Load";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "[] call MB_fnc_ShowProjectWindow;";
      //opensNewWindow = 1;
    };
    class Export
    {
      text = "Export";
      data = "";
      shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "[1] call MB_fnc_showExportWindow;";
      //opensNewWindow = 1;
    };
    class Objects
    {
      text = "Objects";
      items[] = {"ManageLibrary","Favorites","UsedObjects"};
      data = "";
      value = 1;
    };
    class ManageLibrary
    {
      text = "Manage Library";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "systemchat ""Unimplemented"";";
      //opensNewWindow = 1;
    };
    class Favorites {
      text = "Favorites";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "['favorites', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };

    class UsedObjects {
      text = "Used Objects";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "['usedobjects', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };

    class Tools
    {
      text = "Tools";
      items[] = {"Brusher","Fencer","Presets"};
      data = "";
      value = 1;
    };
    class Brusher
    {
      text = "Brusher";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "[] call MB_fnc_showBrushWindow;";
      //opensNewWindow = 1;
    };
    class Fencer
    {
      text = "Fencer";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "['fencer', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };
    class Presets
    {
      text = "Presets";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "['preset', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };
    class Help
    {
      text = "Help";
      items[] = {"About","OnlineHelp","Test"};
      data = "";
      value = 1;
    };
    class About
    {
      text = "About";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      action = "['about', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };
    class ResetUI
    {
      text = "Reset UI";
      data = "";
      action = "[true] call MB_fnc_uiResetSettings;";
    };
    class OnlineHelp
    {
      text = "Online Doku";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      //picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
      //action = "[] call MB_fnc_OpenHelpWindow;";
      picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
      weblink = "http://wiki.map-builder.info";
      //opensNewWindow = 1;
    };
    class Test
    {
      text = "Test";
      data = "TestData";
      type = "CheckBox";
      default = "true";
    };
  };
};
