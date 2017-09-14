class MB_CtrlSettingSlider: MB_CtrlSettingDefault {
	class Controls: Controls {
		class Title: Title{};
		class Value: ctrlXSliderH {
			idc = 100;
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X;
			w = __GUI_SETTING_SETTING_W;
			h = __GUI_SETTING_LINE_H;
			onSliderPosChanged = "";
		};
	};
};
