class MB_CtrlPaneToggle: ctrlCheckbox {
  x = 0;
  y = 0;
  w = __GUI_PANE_BUTTON_W;
  h = __GUI_PANE_BUTTON_H;
  textureChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
  textureUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
  textureFocusedChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
  textureFocusedUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
  textureHoverChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
  textureHoverUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
  texturePressedChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
  texturePressedUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
  textureDisabledChecked="\a3\ui_f\data\gui\rsccommon\rsctree\hiddentexture_ca.paa";
  textureDisabledUnchecked="\a3\ui_f\data\gui\rsccommon\rsctree\expandedtexture_ca.paa";
  onCheckedChanged = "[(_this select 0)] call MB_fnc_uiPaneToggle";
};
