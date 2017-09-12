
class MB_PaneFavorites: MB_CoreContent {

  class Controls: Controls {
    class Background: MB_CtrlPaneBackground { };

    class Favorites: ctrlTree {
      idc = __IDC_FAVORITES;
      x = __GUI_PANE_CONTENT_X;
      y = __GUI_PANE_CONTENT_Y;
      h = (20 * GRID_H);
      w = __GUI_PANE_CONTENT_W;
      colorBackground[] = __COLOR_BACKGROUND_ALT;
      colorBorder[] = {0, 0, 0, 0};

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
			text = "Add";
			action = "[MB_CurClass] call MB_fnc_AddFavorite;";
		};

		class Button2: Button1 {
      idc = __IDC_BUTTON_2;
			x =  (2 * __GUI_PANE_CONTENT_X) + (1 * __GUI_PANE_BUTTONWIDE_W);
			text = "Remove";
			action = "[] call MB_fnc_RemoveFavorite;";
		};

		class Button3: Button1 {
      idc = __IDC_BUTTON_3;
			x =  (3 * __GUI_PANE_CONTENT_X) + (2 * __GUI_PANE_BUTTONWIDE_W);
			text = "Select";
			action = "[] call MB_fnc_SelectFavorite;";
		};

    class Resizer: MB_CtrlResizer { };
  };
};
