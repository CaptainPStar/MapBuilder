class MB_MainMenuStrip: MB_MenuStrip
{
  x = safeZoneX + GRID_TOOLBAR_X(2);
  y = "SafeZoneY + (SafezoneH * 0)";
  w = safeZoneW - GRID_TOOLBAR_X(2);
  h = "SafeZoneH * 0.02";
  class Items
  {
    class default {
      text = "";
      data = "Empty";
      enable = 0;
    };
    items[] = {"Project","Objects","Tools","Settings", "Help"};
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
      action = "['project', true] call MB_fnc_uiPaneOpen;";
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
      items[] = {"ManageLibrary","Favorites","Library","UsedObjects"};
      data = "";
      value = 1;
    };
    class ManageLibrary
    {
      text = "Manage Library";
      data = "";
      picture = "\mb\mapBuilder\data\icons\av\32_library_add_ca.paa";
      action = "systemchat ""Unimplemented"";";
      enable = 0;
    };
    class Favorites {
      text = "Favorites";
      data = "";
      picture = "\mb\mapBuilder\data\icons\action\32_favorite_border_ca.paa";
      action = "['favorites', true] call MB_fnc_uiPaneOpen;";
    };

    class Library {
      text = "Library";
      data = "";
      picture = "\mb\mapBuilder\data\icons\av\32_library_books_ca.paa";
      action = "['Library', true] call MB_fnc_uiPaneOpen;";
    };

    class UsedObjects {
      text = "Used Objects";
      data = "";
      picture = "\mb\mapBuilder\data\icons\action\32_view_list_ca.paa";
      action = "['usedobjects', true] call MB_fnc_uiPaneOpen;";
    };

    class Tools
    {
      text = "Tools";
      items[] = {"Brusher","Fencer","Presets", "3DPreview"};
      data = "";
      value = 1;
    };
    class Brusher
    {
      text = "Brusher";
      data = "";
      picture = "\mb\mapBuilder\data\icons\image\32_brush_ca.paa";
      action = "['brusher', true] call MB_fnc_uiPaneOpen;";
    };
    class Fencer
    {
      text = "Fencer";
      data = "";
      picture = "\mb\mapBuilder\data\icons\editor\32_border_style_ca.paa";
      action = "['fencer', true] call MB_fnc_uiPaneOpen;";
    };
    class 3DPreview {
      text = "Preview";
      data = "";
      picture = "\mb\mapBuilder\data\icons\image\32_photo_filter_ca.paa";
      action = "['3dpreview', true] call MB_fnc_uiPaneOpen;";
    };
    class Presets
    {
      text = "Presets";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      picture = "\mb\mapBuilder\data\icons\maps\32_local_library_ca.paa";
      action = "['presets', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };
    class Settings
    {
      text = "Settings";
      items[] = {"Camera", "GeneralSettings", "Weather", "ResetUI"};
      data = "";
      value = 1;
    };
    class Camera
    {
      text = "Camera";
      data = "";
      picture = "\mb\mapBuilder\data\icons\image\32_photo_camera_ca.paa";
      action = "['show', 'camera'] call MB_fnc_settingsWindow;";
    };
    class GeneralSettings
    {
      text = "General";
      data = "";
      picture = "\mb\mapBuilder\data\icons\action\32_settings_applications_ca.paa";
      action = "['show', 'general'] call MB_fnc_settingsWindow;";
    };
    class Weather
    {
      text = "Weather";
      data = "";
      picture = "\mb\mapBuilder\data\icons\image\32_filter_drama_ca.paa";
      action = "['show', 'weather'] call MB_fnc_settingsWindow;";
    };
    class Help
    {
      text = "Help";
      items[] = {"About","ResetUI","OnlineHelp","Test"};
      data = "";
      value = 1;
    };
    class About
    {
      text = "About";
      data = "";
      //shortcuts[] = {"512 + 0x31"};
      picture = "\mb\mapBuilder\data\icons\social\32_cake_ca.paa";
      action = "['about', true] call MB_fnc_uiPaneOpen;";
      //opensNewWindow = 1;
    };
    class ResetUI
    {
      text = "Reset UI";
      data = "";
      picture = "\mb\mapBuilder\data\icons\action\32_settings_backup_restore_ca.paa";
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
