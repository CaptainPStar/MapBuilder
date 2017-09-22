#define IDC 171200
#define NAME Brusher
#define TITLE Brushes
BEGIN_WINDOW(IDC,NAME,TITLE,0.1,0.1,48,30)
		class MB_Window_Brusher_BG1 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 12 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 29 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_BG2 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 25 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 9 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_BG3 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 35 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 19 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_BG4 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 9 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 9 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_FileLabel : MB_RscText {
			idc = -1;
			WINDOW_POSITION(0,1,4,1)
			text =  "Brushes:";
			tooltip = "A list of brushfiles from the 'brushes'-folder.";
		};
		class MB_Window_Brusher_FileList : MB_RscTree {
			idc = __IDC_ELEMENT_1;
			WINDOW_POSITION(0,2,12,23)
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "[] call mb_fnc_brusherSelectFile;";
			onMouseExit = "";
		};
		class MB_Window_Brusher_FileNameEdit: MB_RscEdit {
			idc = 171220;
			text = "";
			WINDOW_POSITION(0,25,12,1)
			tooltip = "Enter name of a file to load/save.";
		};
		class MB_Window_Brusher_LoadButton : MB_RscButton {
			idc = -1;
			WINDOW_POSITION(1,27,4,1)
			text = "Load";
			action = "[ctrlText 171220] spawn MB_fnc_loadBrush;";
			tooltip = "Loads a brush from the current selected file.";
		};
		class MB_Window_Brusher_SaveButton : MB_RscButton {
			idc = -1;
			WINDOW_POSITION(6,27,4,1)
			text = "Save";
			action = "[ctrlText 171220] spawn MB_fnc_saveBrush;";
			tooltip = "Saves brush to the current selected file or creates new file.";
		};
		class MB_Window_Brusher_TemplatesLabel : MB_RscText {
			idc = -1;
			WINDOW_POSITION(13,1,6,1)
			text =  "Obj. Templates:";
			//text = "";
			tooltip = "A template defines an object with specific placements and rnd. values in a brush.";
		};
		class MB_Window_Brusher_SubbrushList : MB_RscTree {
			idc = 171202;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 25;
			h = MB_WINDOW_GRID_Y * 6;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_fnc_brusherUpdateObjectPanel;";
			onMouseExit = "";
		};
		class MB_Window_Brusher_TemplateAdd : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 14;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Add";
			action = "[] call MB_fnc_brusherAddTemplate;";
			tooltip = "Add a new template with the current object type as base.";
		};
		class MB_Window_Brusher_TemplateRemove: MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 20;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Remove";
			action = "[] call MB_fnc_brusherRemoveTemplate;";
			tooltip = "Removes the current template from the brush.";
		};
		class MB_Window_Brusher_TemplateCopy: MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Copy";
			action = "[] call MB_fnc_brusherCopyTemplate;";
			tooltip = "Copies the current template.";
		};
		//MB_CurBrush pushBack [type,chance,count,relpos,dir,pitch,bank,scale,randompos,randomdir,randompitch,randombank,randomscale];
		class MB_Window_Brusher_ObjectPositioningLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Positioning";
			style = 0;
			tooltip = "General positioning options. Most values are relative to the mouse movement/direction.";
		};
		class MB_Window_Brusher_ObjectRandomLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Random";
			style = 0;
			tooltip = "Randomization parameters.";
		};
		class MB_Window_Brusher_SubbrushObjectsLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Objects";
			style = 0;
			tooltip = "List of object types to select from, when template is drawn.";
		};
		class MB_Window_Brusher_SettingsLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Brush Settings";
			style = 0;
			tooltip = "General settings of current brush.";
		};
		class MB_Window_Brusher_Settings_WidthLabel: MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Width:";
			style = 0;
		};
		class MB_Window_Brusher_Settings_WidthEdit: MB_RscEdit {
			idc = 171221;
			text = "5";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 44;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 3;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Distance between brush nodes.";
		};
		class MB_Window_Brusher_Settings_CamFollowLabel: MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Cam Follow:";
			style = 0;
		};
		class MB_Window_Brusher_Settings_CamFollow : MB_RscCheckbox {
			idc = 171222;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 44;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 5;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Yes"};
			strings[] = {"No"};
			tooltip="If 'Yes' the camera will follow the mouse/brush.";
		};
		class MB_Window_Brusher_Settings_DrawStraightLabel: MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Straight:";
			style = 0;
		};
		class MB_Window_Brusher_Settings_DrawStraight : MB_RscCheckbox {
			idc = 171223;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 44;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 7;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Yes"};
			strings[] = {"No"};
			tooltip="If enabled, the brush direction is locked after the first node resulting in perfectly straight lines.";
		};
		class MB_Window_Brusher_ApplySettingsButton : MB_RscButton {
			idc = -1;
			text = "Apply";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_brusherApplySettings;";
		};
		class MB_Window_Brusher_ObjectProbabilityLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Probability (0-1):";
		};
		class MB_Window_Brusher_ObjectProbabilityEdit: MB_RscEdit {
			idc = 171203;
			text = "1.0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Probability this template gets drawn.";
		};
		class MB_Window_Brusher_ObjectCountLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 15;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Count:";
		};
		class MB_Window_Brusher_ObjectCountEdit: MB_RscEdit {
			idc = 171204;
			text = "1";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 15;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "How often this template should be drawn.";
		};
		class MB_Window_Brusher_ObjectOffsetLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Offset XYZ (m):";
		};
		class MB_Window_Brusher_ObjectOffsetXEdit: MB_RscEdit {
			idc = 171205;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Distance (left/right) from brushline.";
		};
		class MB_Window_Brusher_ObjectOffsetYEdit: MB_RscEdit {
			idc = 171206;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 21;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Distance (forward/backward) from brushline.";
		};
		class MB_Window_Brusher_ObjectOffsetZEdit: MB_RscEdit {
			idc = 171207;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 23;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Distance (up/down) from brushline.";
		};
		class MB_Window_Brusher_ObjectRotationLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 19;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Dir (Deg):";
		};
		class MB_Window_Brusher_ObjectRotationEdit: MB_RscEdit {
			idc = 171208;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 19;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Objects rotation. 0� points in brushdirection (green arrow).";
		};
		class MB_Window_Brusher_ObjectPitchLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Pitch:";
		};
		class MB_Window_Brusher_ObjectPitchEdit: MB_RscEdit {
			idc = 171209;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Objects pitch.";
		};
		class MB_Window_Brusher_ObjectBankLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Bank:";
		};
		class MB_Window_Brusher_ObjectBankEdit: MB_RscEdit {
			idc = 171210;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Objects bank.";
		};
		class MB_Window_Brusher_ObjectScaleLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y *25;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Scale:";
		};
		class MB_Window_Brusher_ObjectScaleEdit: MB_RscEdit {
			idc = 171211;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Objects scale.";
		};

		class MB_Window_Brusher_ObjectRandomOffsetLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "+/- (m)";
		};
		class MB_Window_Brusher_ObjectRandomOffsetXEdit: MB_RscEdit {
			idc = 171212;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to X-position.";
		};
		class MB_Window_Brusher_ObjectRandomOffsetYEdit: MB_RscEdit {
			idc = 171213;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 32;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to Y-position.";
		};
		class MB_Window_Brusher_ObjectRandomOffsetZEdit: MB_RscEdit {
			idc = 171214;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 34;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to Z-position.";
		};
		class MB_Window_Brusher_ObjectRandomRotationLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 19;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "+/- (Deg)";
		};
		class MB_Window_Brusher_ObjectRandomDirEdit: MB_RscEdit {
			idc = 171215;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 19;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to direction.";
		};
		class MB_Window_Brusher_ObjectRandomPitchLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "+/- (Deg)";
		};
		class MB_Window_Brusher_ObjectRandomPitchEdit: MB_RscEdit {
			idc = 171216;
			text = "0.0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to pitch.";
		};
		class MB_Window_Brusher_ObjectRandomBankLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "+/- (Deg)";
		};
		class MB_Window_Brusher_ObjectRandomBankEdit: MB_RscEdit {
			idc = 171217;
			text = "0.0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to bank.";
		};
		class MB_Window_Brusher_ObjectRandomScaleLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y *25;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "+/- (Dec)";
		};
		class MB_Window_Brusher_ObjectRandomScaleEdit: MB_RscEdit {
			idc = 171218;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			tooltip = "Rnd. value added to scale.";
		};
		class MB_Window_Brusher_ApplyButton : MB_RscButton {
			idc = -1;
			text = "Apply";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 29;
			w = MB_WINDOW_GRID_X * 10;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_brusherUpdateTemplate;";
			tooltip = "Save all changes to template (does not save to file!)";
		};

		class MB_Window_Brusher_ObjectsList : MB_RscTree {
			idc = 171219;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 9;
			h = MB_WINDOW_GRID_Y * 8;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "";
			onMouseExit = "";
		};
		class MB_Window_Brusher_ObjectAdd : MB_RscButton {
			idc = -1;
			text = "Add";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_brusherAddObject;";
			tooltip = "Add the current objecttype to this template.";
		};
		class MB_Window_Brusher_ObjectRemove : MB_RscButton {
			idc = -1;
			text = "Rmv";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 41;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_brusherRemoveObject;";
			tooltip = "Removes selected object from template.";
		};
		//class MB_Window_Brusher_ObjectsListUp : MB_RscButton {
		//	idc = -1;
		//	text = "Up";
		//	x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 43;
		//	y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
		//	w = MB_WINDOW_GRID_X * 2;
		//	h = MB_WINDOW_GRID_Y * 1;
		//	action = "";
		//};
		//class MB_Window_Brusher_ObjectsListDown : MB_RscButton {
		//	idc = -1;
		//	text = "Dwn";
		//	x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 45;
		//	y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
		//	w = MB_WINDOW_GRID_X * 2;
		//	h = MB_WINDOW_GRID_Y * 1;
		//	action = "";
		//};
		//class MB_Window_Brusher_ObjectSubProbLabel : MB_RscText {
		//	idc = -1;
		//	x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
		//	y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
		//	w = MB_WINDOW_GRID_X * 6;
		//	h = MB_WINDOW_GRID_Y * 1;
		//	text =  "Prob. (0-1):";
		//};
		//class MB_Window_Brusher_ObjectSubProbEdit: MB_RscEdit {
		//	idc = -1;
		//	text = "1.0";
		//	x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 45;
		//	y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
		//	w = MB_WINDOW_GRID_X * 2;
		//	h = MB_WINDOW_GRID_Y * 1;
		//};
		//class MB_Window_Brusher_ObjectSubLastCheckbox : MB_RscCheckbox {
		//	idc = -1;
		//	x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
		//	y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
		//	w = MB_WINDOW_GRID_X * 4;
		//	h = MB_WINDOW_GRID_Y * 1;
		//	checked_strings[] = {"Continue"};
		//	strings[] = {"End"};
		//};
		//class MB_Window_Brusher_ObjectsListApply : MB_RscButton {
		//	idc = -1;
		//	text = "Apply Obj.";
		//	x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
		//	y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 27;
		//	w = MB_WINDOW_GRID_X * 4;
		//	h = MB_WINDOW_GRID_Y * 1;
		//	action = "";
		//};
		class MB_Window_Brusher_GeneralHint : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 24;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 29;
			w = MB_WINDOW_GRID_X * 24;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Hint: ArmA's object creation is slow. Be patient and draw brushes slowly!";
			style = 0;
		};

END_WINDOW
