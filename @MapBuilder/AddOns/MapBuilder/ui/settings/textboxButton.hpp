#define __MESSAGEBOX_SETTING_W __GUI_SETTING_SETTING_W - __GUI_GRIDX(10) - __GUI_SETTING_TEXT_W
class MB_CtrlSettingTextBoxButton: MB_CtrlSettingDefault {
	class Controls: Controls {
		class Title: Title{};

		class MessageBox: ctrlEdit {
			idc = 100;
			text = "";
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X;
			w = __MESSAGEBOX_SETTING_W;
			h = __GUI_SETTING_LINE_H;
			font = FONTLIGHT_ALT;
		};

		class Button: MB_CtrlButtonMain {
			idc = 102;
			text = "SEND";
			font = FONTBOLD;
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X + __MESSAGEBOX_SETTING_W;
			w = __GUI_GRIDX(10);
			h = __GUI_SETTING_LINE_H;
		};
	};
};
