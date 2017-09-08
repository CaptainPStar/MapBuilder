
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

      onLoad = ""; // Code to run whenever the window of this type is opened/created
      onCollapse = ""; // Code to run whenever window is toggled open/close
      onUnload = "";
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
    };

    class UsedObjects: Default {
      scope = 2;
      title = "Used Objects";
      type = "MB_PaneUsedObjects";
      collapsed = 1;
      enabled = 1;
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
