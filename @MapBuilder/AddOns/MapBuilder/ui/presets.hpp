
//###################
//	Presets
//###################
class MB_Popup_PresetGroup : MB_RscControlsGroup
{
	idc = 170500;
	x = "SafeZoneX + (SafeZoneW * 0.2)";
	y = "SafeZoneY + (SafezoneH * 0.3)";
	w = "SafeZoneW * 0.4";
	h = "SafeZoneH * 0.5";

	class Controls
	{
		class MB_Popup_Preset_Background : MB_RscText { 
			idc = -1;
			text = "";
			x = "0";
			y = "0";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.5";
			colorBackground[] = {0, 0, 0, 0.8};
		};
		class MB_Popup_Preset_Header : MB_RscBackground {
			idc = -1;
			text = "Presets";
			x = "0";
			y = "0";
			w = "SafeZoneW * 0.4";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class MB_Popup_Preset_HeaderClose : MB_RscActiveText {
			idc = -1;
			text = "X";
			x = "0.93";
			y = "0";
			w = "SafeZoneW * 0.01";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
			action = "[] call MB_fnc_hidePresetWindow;";
		};
		class MB_Popup_Preset_List : MB_RscListBox {
			idc = 170501;
			x = "0.02";
			y = "0.1";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.2";
			onLBSelChanged="call MB_fnc_PresetSelect;";//--- action/function to call when listbox or combobox has been changed
			onLBDblClick="call MB_fnc_PresetSelect;";//--- action/function to call when listbox or combobox has been double clicked
		};
		class MB_Popup_Preset_Filename : MB_RscEdit {
			idc = 170502;
			text = "";
			x = "0.02";
			y = "0.48";
			w = "SafeZoneW * 0.2";
			h = "SafeZoneH * 0.02";
			colorBackground[] = {0,0.75,0,0.75};
		};
		class MB_Popup_Preset_SaveButton : MB_RscButton {
			idc = -1;
			x = "0.1";
			y = "0.53";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Save";
			action = "[ctrlText 170502] spawn MB_fnc_savePreset;";
		};
		class MB_Popup_Preset_OpenButton : MB_RscButton {
			idc = 170207;
			x = "0.49";
			y = "0.53";
			w = "SafeZoneW * 0.08";
			h = "SafeZoneH * 0.03";
			text = "Load";
			action = "[ctrlText 170502] spawn MB_fnc_loadPreset;";
		};
		class MB_Popup_Preset_Helptext : MB_RscText {
			idc = -1;
			x = "0.02";
			y = "0.05";
			w = "SafeZoneW * 0.3";
			h = "SafeZoneH * 0.02";
			text = "Existing presets:";
		};
		class MB_Popup_Preset_Tip: MB_RscStructuredText {
			idc = -1;
			x = "0.02";
			y = "0.6";
			w = "SafeZoneW * 0.35";
			h = "SafeZoneH * 0.1";
			text = "Presets are small selections that can be saved and loaded. To save a preset, select some objects, enter a name and click 'save'. To load a preset, select it from the list and click load. It can now be placed with Ctrl + V.";
		};
	};
 };