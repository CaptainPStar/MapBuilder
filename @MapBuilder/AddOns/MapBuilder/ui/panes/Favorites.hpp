
class MB_PaneFavorites: ctrlControlsGroupNoHScrollbars {
  idc = __IDC_PANE_CONTENT;
  x = 0;
  y = __GUI_PANE_HEADER_H;
  w = __GUI_PANE_W;
  h = 0;
  MB_hAdjust = 1;

  class controls {
    class Background: MB_CtrlPaneBackground { };
    class Favorites: ctrlTree {
      idc = __IDC_FAVORITES;
      x = __GUI_PANE_CONTENT_X;
      y = __GUI_PANE_CONTENT_Y;
      h = (20 * GRID_H);
      w = __GUI_PANE_CONTENT_W;
      colorBackground[] = __COLOR_BACKGROUND_ALT;

      MB_hAdjust = 1;
      MB_hOffset = (__GUI_PANE_CONTENT_Y + __GUI_PANE_BUTTON_H);
    };

    class FavoritesAdd : MB_CtrlPaneButton {
			idc = __IDC_FAVORITES_ADD;
			x = __GUI_PANE_CONTENT_X;
			y = __GUI_PANE_CONTENT_Y + (20 * GRID_H);
			text = "Add";
			action = "[MB_CurClass] call MB_fnc_AddFavorite;";
      MB_xSize = "1/3";
      MB_xAdjust = 0;
      MB_xOffset = 0;
      HB_yAdjust = 1;
      MB_yOffset = 0;
		};

		class FavoritesRemove: FavoritesAdd {
      idc = __IDC_FAVORITES_REMOVE;
			x =  __GUI_PANE_CONTENT_X + (1 * __GUI_PANE_BUTTON_W);
			text = "Remove";
			action = "[] call MB_fnc_RemoveFavorite;";
      MB_xAdjust = 1;
      MB_xOffset = "1/3";
		};

		class FavoritesSelect: FavoritesAdd {
      idc = __IDC_FAVORITES_SELECT;
			x =  __GUI_PANE_CONTENT_X + (2 * __GUI_PANE_BUTTON_W);
			text = "Select";
			action = "[] call MB_fnc_SelectFavorite;";
      MB_xAdjust = 1;
      MB_xOffset = "2/3";
		};

    class Resizer: MB_CtrlResizer { };
  };
};
