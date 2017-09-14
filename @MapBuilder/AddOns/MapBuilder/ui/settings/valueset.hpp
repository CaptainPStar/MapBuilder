class MB_CtrlSettingValueSet2: MB_CtrlSettingDefault {
	class Controls: Controls {
		class Title: Title {};

		class TitleA: ctrlStatic {
			text = "R";
			tooltip = "OFPOR";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.5, 0.04, 0.05};
			style = ST_CENTER;
			shadow = 0;
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X;
			w = __GUI_SETTING_LABEL_W;
			h = __GUI_SETTING_LINE_H;
		};

		class ValueA: ctrlEdit {
			idc = 100;
			text = "0";
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X + 1*__GUI_SETTING_LABEL_W;
			w = __GUI_SETTING_VALUE_W;
			h = __GUI_SETTING_LINE_H;
			font = MB_TEXT_MONO;
			sizeEx = 3 * GRID_H;
		};

		class TitleB: TitleA {
			text = "B";
			tooltip = "BLUFOR";
			colorBackground[] = {0.03, 0.71, 0.96};
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X + 1*__GUI_SETTING_LABEL_W + 1*__GUI_SETTING_VALUE_W;
		};

		class ValueB: ValueA {
			idc = 101;
			text = "0";
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X + 2*__GUI_SETTING_LABEL_W + 1*__GUI_SETTING_VALUE_W;
		};

		class Button: MB_CtrlButtonMain {
			idc = 102;
			text = "SET";
			font = MB_TEXT_FONT;
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X + 2*__GUI_SETTING_LABEL_W + 2*__GUI_SETTING_VALUE_W;
			w = __GUI_SETTING_BUTTON_W;
			h = __GUI_SETTING_LINE_H;
		};
	};
};
