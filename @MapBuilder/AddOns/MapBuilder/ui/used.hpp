#define IDC 170800
#define NAME UsedObjects
#define TITLE Used Objects
BEGIN_WINDOW(IDC,NAME,TITLE,0.01,0.1,10,10)
		WINDOW_HEADER(NAME,IDC,TITLE,8)
		WINDOW_CLOSE(NAME,IDC,9)
		WINDOW_HELP(NAME,IDC,"Used_Objects",8)
		WINDOW_BACKGROUND(NAME,0,1,10,9)
		class MB_Window_Used_List : MB_RscTree {
			idc = 170801;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 10;
			h = MB_WINDOW_GRID_Y * 8;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_FNC_LibrarySelect;";
			onMouseExit = "[] call MB_fnc_disable3DPreview; false";
			//onMouseButtonDown = "_this call MB_fnc_libraryMousedown;";
			//onMouseButtonUp = "_this call MB_fnc_libraryMouseup;";
			//onTreeLButtonDown = "_this call MB_fnc_libraryMousedown;";
			//onLBDrag = "systemchat ""Drag!"";";
			//onLBSelChanged="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been changed
            //onLBDblClick="call MB_Listbox_Objects_Refresh;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class MB_Window_Used_Select : MB_RscButton {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Select objects";
			sizeEx = MB_TEXT_DEFAULT;
			action = "[] call MB_fnc_SelectAllUsed;";
		};
		class MB_Window_Used_Update : MB_Window_Used_Select {
			idc = -1;
			x =  MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 5;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9 + 0.001;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Refresh";
			action = "[] call MB_fnc_updateUsed;";
		};
END_WINDOW