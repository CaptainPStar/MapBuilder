
class MB_PaneFavorites: ctrlControlsGroupNoHScrollbars {
  idc = __IDC_PANE_CONTENT;
  x = 0;
  y = __GUI_PANE_HEADER_H;
  w = __GUI_PANE_W;
  h = 0;
  MB_hAdjust = 1;
  MB_wAdjust = 1;
  MB_wMin = 40 * GRID_W;
  MB_hMin = 30 * GRID_H;

  class controls {
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

    class FavoritesAdd : MB_CtrlPaneButton {
			idc = __IDC_FAVORITES_ADD;
			x = __GUI_PANE_CONTENT_X;
			y = __GUI_PANE_CONTENT_Y + (20 * GRID_H);
      w = __GUI_PANE_BUTTONWIDE_W;
			text = "Add";
			action = "[MB_CurClass] call MB_fnc_AddFavorite;";

      MB_xAdjust = 0;
      MB_yAdjust = 1;
      MB_wAdjust = 0;
      MB_hAdjust = 0;
      MB_yOffset = __GUI_PANE_BUTTON_H + __GUI_PANE_CONTENT_Y;
		};

		class FavoritesRemove: FavoritesAdd {
      idc = __IDC_FAVORITES_REMOVE;
			x =  (2 * __GUI_PANE_CONTENT_X) + (1 * __GUI_PANE_BUTTONWIDE_W);
			text = "Remove";
			action = "[] call MB_fnc_RemoveFavorite;";
      MB_xAdjust = 0;
      MB_yAdjust = 1;
      MB_wAdjust = 0;
      MB_hAdjust = 0;
		};

		class FavoritesSelect: FavoritesAdd {
      idc = __IDC_FAVORITES_SELECT;
			x =  (3 * __GUI_PANE_CONTENT_X) + (2 * __GUI_PANE_BUTTONWIDE_W);
			text = "Select";
			action = "[] call MB_fnc_SelectFavorite;";
      MB_xAdjust = 0;
      MB_yAdjust = 1;
      MB_wAdjust = 0;
      MB_hAdjust = 0;
		};

    class Resizer: MB_CtrlResizer { };
  };
};
