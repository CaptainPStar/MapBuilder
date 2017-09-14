class MB_CtrlSettingDefault: ctrlControlsGroupNoScrollbars {
	w = __GUI_SETTING_W;
	h = __GUI_SETTING_LINE_H;
	class Controls {
		class Title: ctrlStatic {
			idc = 1;
			style = 0;
			x = __GUI_SETTING_SPACING_X;
			w = __GUI_SETTING_TEXT_W;
			h = __GUI_SETTING_LINE_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = __COLOR_BUTTON_TEXT;
			colorShadow[] = {0, 0, 0, 0};
			sizeEx = __GUI_GRIDY(1);
			font = MB_TEXT_FONT;
		};
	};
};
