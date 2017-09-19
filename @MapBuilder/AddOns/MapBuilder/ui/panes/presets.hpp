#define IDC 170500
#define NAME Presets
#define TITLE Presets
BEGIN_WINDOW(IDC,NAME,TITLE,0.3,0.35,20,12)
		class MB_Popup_Preset_Helptext : MB_RscText {
			idc = -1;
			WINDOW_POSITION(0,1,6,1)
			text = "Existing presets:";
		};
		class MB_Popup_Preset_List : MB_RscListBox {
			idc = __IDC_ELEMENT_1;
			WINDOW_POSITION(0,2,20,5)
			onLBSelChanged="['select', _this] call MB_fnc_showPresets;";//--- action/function to call when listbox or combobox has been changed
			onLBDblClick="['select', _this] call MB_fnc_showPresets;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class MB_Popup_Preset_Filename : MB_RscEdit {
			idc = __IDC_ELEMENT_2;
			text = "";
			WINDOW_POSITION(0,7.2,14,1)
			colorBackground[] = {0,0.75,0,0.75};
		};
		class MB_Popup_Preset_SaveButton : MB_RscButton {
			idc = -1;
			WINDOW_POSITION(0,8.4,6,1)
			text = "Save";
			action = "['save'] call MB_fnc_showPresets;";
		};
		class MB_Popup_Preset_OpenButton : MB_RscButton {
			idc = -1;
			WINDOW_POSITION(7,8.4,6,1)
			text = "Load";
			action = "['load'] call MB_fnc_showPresets;";
		};

		class MB_Popup_Preset_Tip: MB_RscStructuredText {
			idc = -1;
			WINDOW_POSITION(0,10,20,2)
			text = "";
		};
END_WINDOW
