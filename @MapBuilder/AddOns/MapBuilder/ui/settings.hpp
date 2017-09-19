#include "settings\default.hpp"
#include "settings\settingsCategory.hpp"
#include "settings\button.hpp"
#include "settings\checkbox.hpp"
#include "settings\slider.hpp"
#include "settings\textboxButton.hpp"
#include "settings\valueset.hpp"
#include "settings\playerselector.hpp"

class MB_CtrlSettingDialog {
    idd = 115;
    enableSimulation = 1;
    enableDisplay = 1;
    movingEnable = 1;

    onLoad = "uiNamespace setVariable ['MB_CtrlSettingDialog', _this select 0]; ['load'] call MB_fnc_settingsWindow;";
    onUnload = "['unload'] call MB_fnc_settingsWindow;";

    class ControlsBackground {};

    class Controls {
      class MainWindow: ctrlControlsGroupNoHScrollbars {
        x = __GUI_SETTING_X;
        y = __GUI_SETTING_Y;
        w = __GUI_SETTING_W;
        h = __GUI_SETTING_H;
        class Controls {
          class Title: MB_CtrlDialogTitle {
              idc = 4000;
              x = 0;
              y = 0;
              w = __GUI_SETTING_W;
              h = __GUI_PANE_HEADER_H;
              moving = 1;
              text = "SETTINGS";
          };

          class Background: MB_CtrlBackground {
              x = 0;
              y = __GUI_PANE_HEADER_H;
              w = __GUI_SETTING_W;
              h = __GUI_SETTING_H - __GUI_PANE_HEADER_H;
          };

          class AttributeCategories: ctrlControlsGroupNoHScrollbars {
            idc = 4001;
            x = 0;
            y = __GUI_PANE_HEADER_H + __GUI_SETTING_SPACING_X;
            w = __GUI_SETTING_W;
            h = __GUI_SETTING_H - __GUI_PANE_HEADER_H - 2*__GUI_SETTING_SPACING_X - __GUI_PANE_BUTTON_H;
            class Controls {
              //--- Categories will be placed here using AttributeCategory template
            };

          };
          class ButtonOK: MB_CtrlButtonAccent {
            default = 1;
        		idc = 1;
        		text = "OK";
            y = __GUI_SETTING_H - __GUI_PANE_BUTTON_H;
            onButtonDown = "ctrlsetfocus (_this select 0);"; //--- Some values are saved only when they lose focus (e.g., slider's numerical value)
          };
        };
      };
    };
};
