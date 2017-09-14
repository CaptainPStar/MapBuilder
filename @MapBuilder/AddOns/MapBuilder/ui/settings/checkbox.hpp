class MB_CtrlSettingCheckbox: MB_CtrlSettingDefault {
	class Controls: Controls {
		class Title: Title{};
		class Value: ctrlCheckbox {
			idc = 100;
			textureChecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_ca.paa";
			textureUnchecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_outline_blank_ca.paa";
			textureFocusedChecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_ca.paa";
			textureFocusedUnchecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_outline_blank_ca.paa";
			textureHoverChecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_ca.paa";
			textureHoverUnchecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_outline_blank_ca.paa";
			texturePressedChecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_ca.paa";
			texturePressedUnchecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_outline_blank_ca.paa";
			textureDisabledChecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_ca.paa";
			textureDisabledUnchecked = "\mb\mapBuilder\data\icons\toggle\32_check_box_outline_blank_ca.paa";
			colorBackground[] = {0, 0, 0, 0};
			x = __GUI_SETTING_TEXT_W + __GUI_SETTING_SPACING_X;
			w = __GUI_GRIDX(1.25);
			h = __GUI_GRIDY(1.25);
		};
	};
};
