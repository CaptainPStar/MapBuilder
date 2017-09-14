
class MB_CtrlSettingCategory: ctrlControlsGroup {
	y = __GUI_GRIDY(1);  // 'y' property defines space between them
	w = __GUI_SETTING_W;
	h = __GUI_SETTING_CATEGORY_H;
	class Controls {
		class Title: CtrlStatic {
			text = "UWOT";
			idc = 1;
			x = 0;
			y = 0;
			w = __GUI_SETTING_W;
			h = __GUI_SETTING_LINE_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = __COLOR_BUTTON_TEXT;
			colorShadow[] = {0, 0, 0, 0};
			sizeEx = __GUI_SETTING_TEXT_H;
			font = MB_TEXT_FONT_TITLE;
		};

		class Attributes: ctrlControlsGroupNoScrollbars {
			y = __GUI_SETTING_LINE_H;
			w = __GUI_SETTING_W;
			h = __GUI_SETTING_CATEGORY_H;
			idc = 100;
			class Controls {
				//--- Attributes will be placed here
			};
		};
	};
};
