//###################
//	Favorites
//###################
 class MB_Window_Favorites_Group : MB_RscControlsGroup
{
	idc = 170900;
	x = "SafeZoneX + (SafeZoneW * 0.65)";
	y = "SafeZoneY + (SafezoneH * 0.1)";
	w = MB_WINDOW_GRID_X * 10 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 10 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_Favorites_BG : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 10 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 9 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Favorites_Header : MB_RscBackground {
			idc = -1;
			text = "Favorite objects";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 9 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,170900] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,170900] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,170900] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Favorites_XBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 9;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_Favorites_X : MB_RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 9;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_CloseFavoritesWindow;";
		};
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
	};
};