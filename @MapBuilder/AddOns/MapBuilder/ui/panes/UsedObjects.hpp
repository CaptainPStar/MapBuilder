
class MB_PaneUsedObjects: MB_CoreContent {
  class Controls: Controls {
    class Background: MB_CtrlPaneBackground { };

    class MB_Window_Used_List: RscTree {
      idc = __IDC_USEDOBJECT;
      x = __GUI_PANE_CONTENT_X;
      y = __GUI_PANE_CONTENT_Y;
      w = __GUI_PANE_CONTENT_W;
      h = (40 * GRID_H);
      sizeEx = 0.03;
      colorBackground[] = __COLOR_BACKGROUND_ALT;
      onTreeSelChanged = "['select'] call MB_fnc_updateUsed;";
      onMouseExit = "false";

      MB_wAdjust = 1;
      MB_wOffset = 2 * __GUI_PANE_CONTENT_X;
      MB_hAdjust = 1;
      MB_hOffset = (3 * __GUI_PANE_CONTENT_Y + __GUI_PANE_BUTTON_H);
    };

    class Button1 : MB_CtrlPaneButton {
      idc = __IDC_BUTTON_1;
			x = __GUI_PANE_CONTENT_X;
			y = __GUI_PANE_CONTENT_Y + (20 * GRID_H);
      w = __GUI_PANE_BUTTONWIDE_W;
			text = "Select";
			action = "['selectall'] call MB_fnc_updateUsed;";
		};

    class Button2: Button1 {
      idc = __IDC_BUTTON_2;
      x =  (2 * __GUI_PANE_CONTENT_X) + (1 * __GUI_PANE_BUTTONWIDE_W);
      text = "Refresh";
      action = "['refresh'] call MB_fnc_updateUsed;";
    };

    class Resizer: MB_CtrlResizer { };
  };
};
