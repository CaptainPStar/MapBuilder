#define IDC 170900
#define NAME FavoriteObjects
#define TITLE Favorite Objects
BEGIN_WINDOW(IDC,NAME,TITLE,0.65,0.1,10,10)
		WINDOW_HEADER(NAME,IDC,TITLE,8)
		WINDOW_CLOSE(NAME,IDC,9)
		WINDOW_HELP(NAME,IDC,"Favorite_Objects",8)
		WINDOW_BACKGROUND(NAME,0,1,10,9)
		class MB_Window_Favorites_List : MB_RscTree {
			idc = 170901;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 10;
			h = MB_WINDOW_GRID_Y * 8;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_LibrarySelect;";
			onMouseExit = "[] call MB_fnc_disable3DPreview; false";
			//onMouseButtonDown = "_this call MB_fnc_libraryMoFavoritesown;";
			//onMouseButtonUp = "_this call MB_fnc_libraryMouseup;";
			//onTreeLButtonDown = "_this call MB_fnc_libraryMoFavoritesown;";
			//onLBDrag = "systemchat ""Drag!"";";
			//onLBSelChanged="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been changed
            //onLBDblClick="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class MB_Window_Favorites_Add : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9 + 0.001;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Add";
			action = "[MB_CurClass] call MB_fnc_AddFavorite;";
		};
		class MB_Window_Favorites_Remove: MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 3;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Remove";
			action = "[] call MB_fnc_RemoveFavorite;";
		};
		class MB_Window_Favorites_Select: MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 7;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9 + 0.001;
			w = MB_WINDOW_GRID_X * 3;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Select";
			action = "[] call MB_fnc_SelectFavorite;";
		};
END_WINDOW