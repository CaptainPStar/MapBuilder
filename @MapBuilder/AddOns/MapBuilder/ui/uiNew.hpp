#include "mbdefinesNew.hpp"

class ctrlControlsGroupNoScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlStaticPicture;
class ctrlStaticBackground;
class ctrlCheckboxesCheckbox;
class ctrlToolboxPictureKeepAspect;
class ctrlEdit;
class ctrlTree;
class ctrlStatic;

class MB_CoreSidebar: ctrlControlsGroupNoVScrollbars {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = safeZoneH;

  class Controls {
    class Background: ctrlStaticBackground {
      idc = __IDC_SIDEBAR_BG;
      x = 0;
      y = 0;
      w = __GUI_PANE_W;
      h = safeZoneH;
      colorBackground[] = __COLOR_BACKGROUND_BASE;
    };
  };
};


class MB_CorePane: ctrlControlsGroupNoScrollbars {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = __GUI_PANE_HEADER_H;

  class MapBuilder {
    initCode = "";
    collapseCode = "";
  };

  class Controls {
    // -- Top bar, that allows you opening and closing the pane
    class Header: ctrlControlsGroupNoScrollbars {
      idc = __IDC_PANE_HEADER;
      x = 0;
      y = 0;
      w = __GUI_PANE_W;
      h = __GUI_PANE_HEADER_H;

      class Controls {
        class Background: ctrlStaticBackground {
          idc = __IDC_PANE_HEADER_BG;
          x = 0;
          y = 0;
          w = __GUI_PANE_W;
          h = __GUI_PANE_HEADER_H;
          colorBackground[] = __COLOR_BACKGROUND_HEADER;
        };

        // -- Allows collapsing the pane (Shift Y position of all elements below it)
        class Toggle: ctrlCheckboxesCheckbox {
          idc = __IDC_PANE_HEADER_TOGGLE;
          x = 0;
          y = 0;
          w = __GUI_PANE_BUTTON_W;
          h = __GUI_PANE_BUTTON_H;
          strings[]= {"\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa"};
          checked_strings[]={"\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa"};
          onCheckedChanged = "[(_this select 0)] call MB_fnc_uiPaneToggle";
        };

        class Text: ctrlStatic {
          idc = __IDC_PANE_HEADER_TEXT;
          x = (1 * GRID_W);
          y = 0;
          w = (__GUI_PANE_W - (1 * GRID_W) - (2 * __GUI_PANE_BUTTON_W));
          h = __GUI_PANE_BUTTON_H
        };

        // -- Allows dragging the pane to change order, or moving this into it's own window
        class Handle: ctrlToolboxPictureKeepAspect {
          idc = __IDC_PANE_HEADER_HANDLE;
          x = 0;
          y = 0;
          w = __GUI_PANE_BUTTON_W;
          h = __GUI_PANE_BUTTON_H;
          text = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
          //onButtonClick = "[(_this select 0)] call MB_fnc_uiPaneDrag";
        };
      };
    };

    class Content: ctrlControlsGroupNoVScrollbars {
      idc = __IDC_PANE_CONTENT;
      x = __GUI_PANE_HEADER_H;
      y = 0;
      w = __GUI_PANE_W;
      h = 0;

      class controls {
        class Background: ctrlStaticBackground {
          idc = __IDC_PANE_CONTENT_BG;
          x = 0;
          y = 0;
          w = __GUI_PANE_W;
          h = __GUI_PANE_HEADER_H;

          colorBackground[] = __COLOR_BACKGROUND_BASE;
        };
      };
    };
  };
};

class MB_LibraryViewer: MB_CorePane {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = __GUI_PANE_HEADER_H;

  class MapBuilder {
    initCode = "_this call MB_fnc_uiLoadLibrary";
    collapseCode = "";
  };

  class Controls: Controls {
    class Content: Content {
      class Controls: Controls {
        class LibrarySearch: ctrlEdit {
          idc = __IDC_LIBRARY_TVIEW_SEARCH;
          x = __GUI_PANE_CONTENT_X;
          y = __GUI_PANE_CONTENT_Y;
          h = (1 * GRID_H);
          w = __GUI_PANE_CONTENT_W;
        };

        class LibraryView: ctrlTree {
          idc = __IDC_LIBRARY_TREEVIEW;
          idcSearch = __IDC_LIBRARY_TVIEW_SEARCH;
          x = __GUI_PANE_CONTENT_X;
          y = __GUI_PANE_CONTENT_Y + (1.5 * GRID_H);
          h = (20 * GRID_H);
          w = __GUI_PANE_CONTENT_W;
        };
      };
    };
  };
};
