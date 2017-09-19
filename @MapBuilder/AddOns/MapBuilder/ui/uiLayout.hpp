
class MapBuilder {
  class Panes {
    class Default {
      scope = 0; // 2 or higher to be used and autoadd to View menu
      title = "Default"; // Text on top of the pane
      type = "MB_EmptyPane"; // Classname for the content of this pane
      sidebar = ""; // Sidebar to place the control in by default
      collapsed = 0; // If the pane should be opened up by default (1 means only the title bar shows)
      floating = 1; // If floating window (Not attached to any sidebar)
      enabled = 0; // If the window should show up by default (First run, never opened/closed)
      allowSiderbar = 1; // Allows dragging the pane into the sidebar to attach it there
      cantClose = 0; // Prevent closing

      onLoad = ""; // Code to run whenever the window of this type is opened/created
      onCollapse = ""; // Code to run whenever window is toggled open/close
      onUnload = "";
      helpurl = "";
    };

    class Library: Default {
      scope = 2;
      title = "Library Viewer";
      type = "MB_PaneLibraryViewer";
      sidebar = "right";
      collapsed = 0;
      floating = 0;
      enabled = 1;


      onLoad = "_this call MB_fnc_uiLoadLibrary";
    };

    class Favorites: Default {
      scope = 2;
      title = "Favorites";
      type = "MB_PaneFavorites";
      sidebar = "right";
      collapsed = 1;
      floating = 0;
      enabled = 1;

      onLoad = "['onload', _this] call MB_fnc_updateFavorites";
    };

    class UsedObjects: Default {
      scope = 2;
      title = "Used Objects";
      type = "MB_PaneUsedObjects";
      collapsed = 1;
      enabled = 1;
      helpurl = "Used_Objects";

      onLoad = "['onload', _this] call MB_fnc_updateUsed";
    };

    class 3dpreview: Default {
      scope = 2;
      title = "3D Preview";
      type = "MB_Window_3DPreview_Group";
      collapsed = 1;
      enabled = 1;
      floating = 0;
      sidebar = "right";

      onLoad = "['onload', _this] call MB_fnc_update3DPreview";
      onCollapse = "['collapse', _this] call MB_fnc_update3DPreview";
      onClose = "['disable', _this] call MB_fnc_update3DPreview";
    };

    class about: Default {
      scope = 2;
      title = "About map builder";
      type = "MB_Window_about_Group";
      collapsed = 0;
      enabled = 0;
      allowSidebar = 0;

      onLoad = "_this call MB_fnc_openAboutWindow";
      onCollapse = "";
      onClose = "";
    };

    class brusher: about {
      title = "Brushes";
      type = "MB_Window_brusher_Group";

      onLoad = "_this call MB_fnc_showBrushWindow";
      onCollapse = "";
      onClose = "";
    };

    class Export: about {
      title = "Export";
      type = "MB_Window_Export_Group";
      helpurl = "Export";

      onLoad = "";
      onCollapse = "";
      onClose = "";
    };

    class Fencer: about {
      title = "Fencer";
      type = "MB_Window_Fencer_Group";
      helpurl = "Fencer";

      onLoad = "['onload', _this] call MB_fnc_useFencer";
      onCollapse = "['collapse', _this] call MB_fnc_useFencer";
      onClose = "['close', _this] call MB_fnc_useFencer";
    };

    class Help: about {
      title = "Help";
      type = "MB_Window_Help_Group";

      onLoad = "";
      onCollapse = "";
      onClose = "";
    };

    class ObjectInspector: about {
      title = "Object Inspector";
      type = "MB_Window_ObjectInspector_Group";
      helpurl = "Object_Inspector";

      onLoad = "";
      onCollapse = "";
      onClose = "";
    };

    class Masker: about {
      title = "Masker";
      type = "MB_Window_Masker_Group";

      onLoad = "";
      onCollapse = "";
      onClose = "";
    };

    class Project: about {
      title = "Project";
      type = "MB_Window_Project_Group";
      helpurl = "Project_Save_and_Load";

      onLoad = "['onload', _this] call MB_fnc_showProjects";
      onCollapse = "";
      onClose = "['close', _this] call MB_fnc_showProjects";
    };

    class Presets: about {
      title = "Presets";
      type = "";
      helpurl = "Presets";

      onLoad = "";
      onCollapse = "";
      onClose = "";
    };


    class Uwotmate: Default {
      scope = 2;
      title = "Invalid Testing Window";
      type = "MB_Adfjdlskafjdsalk";
      collapsed = 1;
      enabled = 1;
    };
  };
};
