class MB_CtrlSettingToolbox3: MB_CtrlSettingDefault {
	class Controls: Controls {
		class Title: Title {};
		class Value: MB_CtrlToolbox {
			idc = 100;
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X;
			w = __GUI_SETTING_SETTING_W;
			h = __GUI_SETTING_LINE_H;
			rows = 1;
			columns = 3;
		};
	};
};
