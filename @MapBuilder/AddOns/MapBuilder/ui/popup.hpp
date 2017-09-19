class MB_PopupWindow: ctrlControlsGroupNoScrollbars {
	x = CENTER_X - __GUI_GRIDX(6.25);
	y = safeZoneY + safeZoneH * 0.3;
  w = __GUI_GRIDX(12.5);
  h = __GUI_GRIDY(12);

	class Controls {
	  class Title: MB_CtrlDialogTitle {
	      idc = __IDC_ELEMENT_1;
	      x = 0;
				y = 0;
				w = __GUI_GRIDX(12.5);
	      h = __GUI_GRIDY(1);
	      moving = 1;
	      text = "Hello";
	  };

	  class Background: MB_CtrlBackground {
	      idc = __IDC_ELEMENT_2;
	      x = 0;
				y = __GUI_GRIDY(1);
				w = __GUI_GRIDX(12.5);
	      h = __GUI_GRIDY(11);
	  };

	  class TextField: RscStructuredText {
	      idc = __IDC_ELEMENT_3;
	      x = 0;
				y = __GUI_GRIDY(1.25);
				w = __GUI_GRIDX(12.5);
	      h = __GUI_GRIDY(11);
	  };

	  class ButtonControlsGroup: ctrlControlsGroupNoScrollbars {
			idc = __IDC_ELEMENT_4;
			x = 0;
			y = __GUI_GRIDY(12.5);
			w = __GUI_GRIDX(12.5);
			h = __GUI_GRIDY(1);
			class controls {
				class Button1BG: MB_CtrlBackground {
	        x = 0;
	        y = 0;
	        w = __GUI_GRIDX(4);
	        h = __GUI_GRIDY(1);
	        colorBackground[] = __COLOR_BACKGROUND_CONTENT;
	      };

				class Button1: MB_CtrlButtonMain {
	        idc = __IDC_BUTTON_1;
	        x = 0;
	        w = __GUI_GRIDX(4);
					default = 0;
					shortcuts[] = {"0x00050000 + 2"};
					text = "$STR_DISP_OK";
					action = "closeDialog 1;";
				};

	      class Button2BG: Button1BG {
	        x = __GUI_GRIDX(4.25);
	      };

				class Button2: MB_CtrlButtonMain {
	        idc = __IDC_BUTTON_2;
	        x = __GUI_GRIDX(4.25);
	        w = __GUI_GRIDX(4);
					default = 0;
					text = "$STR_A3_RscDisplayOptionsLayout_ButtonSave";
					action = "closeDialog 0;";
				};

	      class Button3BG: Button1BG {
	        x = __GUI_GRIDX(8.5);
	      };

				class Button3: MB_CtrlButtonMain {
	        idc = __IDC_BUTTON_3;
	        x = __GUI_GRIDX(8.5);
	        w = __GUI_GRIDX(4);
					default = 1;
					shortcuts[] = {"0x00050000 + 1"};
					text = "$STR_DISP_CANCEL";
					action = "closeDialog 2;";
				};
			};
		};
	};
};
