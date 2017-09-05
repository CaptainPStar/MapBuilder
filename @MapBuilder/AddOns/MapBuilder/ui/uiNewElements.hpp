#include "mbdefinesNew.hpp"

class ctrlControlsGroupNoScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlControlsGroupNoHScrollbars;

class ctrlStaticPicture;
class ctrlStaticBackground;
class ctrlCheckbox;
class ctrlToolboxPictureKeepAspect;
class ctrlEdit;
class ctrlTree;

class MB_ContentBackground: ctrlStaticBackground {
  idc = __IDC_PANE_CONTENT_BG;
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = 0;
  colorBackground[] = __COLOR_BACKGROUND_BASE;
};

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

class MB_CoreHeader: ctrlControlsGroupNoScrollbars {
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
      colorBackground[] = {1, 1, 0, 0.5};//__COLOR_BACKGROUND_HEADER;
    };

    // -- Allows collapsing the pane (Shift Y position of all elements below it)
    class Toggle: ctrlCheckbox {
      idc = __IDC_PANE_HEADER_TOGGLE;
      x = 0;
      y = 0;
      w = __GUI_PANE_BUTTON_W;
      h = __GUI_PANE_BUTTON_H;
      textureChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
      textureUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
      textureFocusedChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
      textureFocusedUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
      textureHoverChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
      textureHoverUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
      texturePressedChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
      texturePressedUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
      textureDisabledChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
      textureDisabledUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
      onCheckedChanged = "[(_this select 0)] call MB_fnc_uiPaneToggle";
    };

    class Text: RscText {
      text = "lel";
      idc = __IDC_PANE_HEADER_TEXT;
      x = __GUI_PANE_BUTTON_W;
      y = 0;
      w = (__GUI_PANE_W - (2 * __GUI_PANE_BUTTON_W));
      h = __GUI_PANE_BUTTON_H
      colorBackground[] = {0, 0.5, 1, 0.5};
    };

    // -- Allows dragging the pane to change order, or moving this into it's own window
    class Handle: ctrlToolboxPictureKeepAspect {
      idc = __IDC_PANE_HEADER_HANDLE;
      x = __GUI_PANE_W - __GUI_PANE_BUTTON_W;
      y = 0;
      w = __GUI_PANE_BUTTON_W;
      h = __GUI_PANE_BUTTON_H;
      text = "\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
      //onButtonClick = "[(_this select 0)] call MB_fnc_uiPaneDrag";
    };
  };
};


class MB_CorePane: ctrlControlsGroupNoScrollbars {
  x = 0;
  y = 0;
  w = __GUI_PANE_W;
  h = __GUI_PANE_HEADER_H;

  class Controls {
    // -- Top bar, that allows you opening and closing the pane
    class Header: MB_CoreHeader { };

  };
};

class MB_CtrlPaneBackground: ctrlStaticBackground {
    idc = __IDC_PANE_CONTENT_BG;
    x = 0;
    y = 0;
    w = __GUI_PANE_W;
    h = 0;
    colorBackground[] = {0, 0.5, 1, 0.5};
    MB_hAdjust = 1;
};

class MB_CtrlResizer: ctrlStaticBackground {
    idc = __IDC_PANE_CONTENT_RESIZE;
    x = __GUI_PANE_W - __GUI_PANE_RESIZE_W;
    y = 0;
    w = __GUI_PANE_RESIZE_W;
    h = __GUI_PANE_RESIZE_H;

    MB_yAdjust = 1;
    MB_yOffset = __GUI_PANE_RESIZE_H;
    colorBackground[] = {1, 0.5, 0, 0.5};
    onButtonClick = "[(_this select 0)] call MB_fnc_uiPaneResize";
};


#include "panes\EmptyPane.hpp"
#include "panes\LibraryViewer.hpp"
