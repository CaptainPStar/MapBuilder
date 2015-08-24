//###################
//	Infopopup
//###################
 class MB_Window_Brusher_Group : MB_RscControlsGroup
{
	idc = 171200;
	x = "SafeZoneX + (SafeZoneW * 0.05)";
	y = "SafeZoneY + (SafezoneH * 0.05)";
	w = MB_WINDOW_GRID_X * 48 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 30 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
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
		class MB_Window_Brusher_Header : MB_RscBackground {
			idc = -1;
			text = "Brushes";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 47 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,171200] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,171200] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,171200] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Brusher_XBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 47;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_Brusher_X : MB_RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 47;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[171200,true] spawn MB_fnc_closeWindow;";
		};
		class MB_Window_Brusher_FileLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Brushes:";
		};
		class MB_Window_Brusher_FileList : MB_RscTree {
			idc = 171201;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 12;
			h = MB_WINDOW_GRID_Y * 23;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "";
			onMouseExit = "";
		};
		class MB_Window_Brusher_FileNameEdit: MB_RscEdit {
			idc = -1;
			text = "";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
			w = MB_WINDOW_GRID_X * 12;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_LoadButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 1;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 27;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Load";
			action = "";
		};
		class MB_Window_Brusher_SaveButton : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 6;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 27;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Save";
			action = "";
		}; 
		class MB_Window_Brusher_ObjectsLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Sub Brushes";
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
		class MB_Window_Brusher_ObjectAdd : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 14;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Add";
			action = "[] call MB_fnc_brusherAddObject;";
		};
		class MB_Window_Brusher_ObjectRemove: MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 20
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Remove";
			action = "[] call MB_fnc_brusherRemoveObject;";
		};
		class MB_Window_Brusher_ObjectCopy: MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Copy";
			action = "[] call MB_fnc_brusherCopyObject;";
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
		};
		class MB_Window_Brusher_ObjectRandomLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Random";
			style = 0;
		};
		class MB_Window_Brusher_SubbrushObjectsLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Objects";
			style = 0;
		};
		class MB_Window_Brusher_SettingsLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Brush Settings";
			style = 0;
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
		};
		class MB_Window_Brusher_ObjectOffsetYEdit: MB_RscEdit {
			idc = 171206;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 21;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectOffsetZEdit: MB_RscEdit {
			idc = 171207;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 23;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
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
		};
		class MB_Window_Brusher_ObjectRandomOffsetYEdit: MB_RscEdit {
			idc = 171213;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 32;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectRandomOffsetZEdit: MB_RscEdit {
			idc = 171214;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 34;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
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
		};
		class MB_Window_Brusher_ObjectRandomScaleLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y *25;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "+/- (Deg)";
		};
		class MB_Window_Brusher_ObjectRandomScaleEdit: MB_RscEdit {
			idc = 171218;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ApplyButton : MB_RscButton {
			idc = -1;
			text = "Apply Settings";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 29;
			w = MB_WINDOW_GRID_X * 10;
			h = MB_WINDOW_GRID_Y * 1;
			action = "[] call MB_fnc_brusherUpdateObject;";
		};
		
		class MB_Window_Brusher_ObjectsList : MB_RscTree {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 9;
			h = MB_WINDOW_GRID_Y * 8;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "_this call MB_fnc_brusherUpdateObjectPanel;";
			onMouseExit = "";
		};
		class MB_Window_Brusher_ObjectsListAdd : MB_RscButton {
			idc = -1;
			text = "Add";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			action = "";
		};
		class MB_Window_Brusher_ObjectsListRemove : MB_RscButton {
			idc = -1;
			text = "Rmv";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 41;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			action = "";
		};
		class MB_Window_Brusher_ObjectsListUp : MB_RscButton {
			idc = -1;
			text = "Up";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 43;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			action = "";
		};
		class MB_Window_Brusher_ObjectsListDown : MB_RscButton {
			idc = -1;
			text = "Dwn";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 45;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 21;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
			action = "";
		};
		class MB_Window_Brusher_ObjectSubProbLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
			w = MB_WINDOW_GRID_X * 6;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Prob. (0-1):";
		};
		class MB_Window_Brusher_ObjectSubProbEdit: MB_RscEdit {
			idc = -1;
			text = "1.0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 45;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 23;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectSubLastCheckbox : MB_RscCheckbox {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			checked_strings[] = {"Continue"};
			strings[] = {"End"};
		};
		class MB_Window_Brusher_ObjectsListApply : MB_RscButton {
			idc = -1;
			text = "Apply Obj.";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 39;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 27;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			action = "";
		};
	};
};