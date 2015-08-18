//###################
//	Infopopup
//###################
 class MB_Window_Brusher_Group : MB_RscControlsGroup
{
	idc = 171200;
	x = "SafeZoneX + (SafeZoneW * 0.15)";
	y = "SafeZoneY + (SafezoneH * 0.15)";
	w = MB_WINDOW_GRID_X * 38 + 2*MB_WINDOW_PADDING_X + 0.01;
	h = MB_WINDOW_GRID_Y * 28 + 2*MB_WINDOW_PADDING_Y + 0.01;

	class Controls
	{
		class MB_Window_Brusher_BG1 : MB_RscBackground {
			idc = -1;
			text = "";
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 1;
			w = MB_WINDOW_GRID_X * 12 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 27 +  2 * MB_WINDOW_PADDING_Y;
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
			w = MB_WINDOW_GRID_X * 25 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 17 +  2 * MB_WINDOW_PADDING_Y;
			colorBackground[] = {0.2,0.2,0.2,0.75};
		};
		class MB_Window_Brusher_Header : MB_RscBackground {
			idc = -1;
			text = "Brushes";
			style = ST_MULTI;
			x = MB_WINDOW_GRID_X * 0;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 37 + 2 * MB_WINDOW_PADDING_X;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0,0.75,0,0.75};
			onMouseButtonDown = "[_this,171200] call MB_fnc_beginWindowDrag;";
			onMouseButtonUp = "[_this,171200] call MB_fnc_endWindowDrag;";
			onMouseMoving = "[_this,171200] call MB_fnc_updateWindowDrag;";
		};
		class MB_Window_Brusher_XBG : MB_RscBackground {
			idc = -1;
			text = "";
			x = 2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 37;
			y = MB_WINDOW_GRID_Y * 0;
			w = MB_WINDOW_GRID_X * 1;
			h = MB_WINDOW_GRID_Y * 1;
			colorBackground[] = {0.75,0,0,0.75};
		};
		class MB_Window_Brusher_X : MB_RscActiveText {
			idc = -1;
			text = "X";
			style = ST_MULTI;
			x =  2*MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 37;
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
			text =  "Brush Objects:";
		};
		class MB_Window_Brusher_ObjectsList : MB_RscTree {
			idc = 171202;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 2;
			w = MB_WINDOW_GRID_X * 25;
			h = MB_WINDOW_GRID_Y * 6;
			sizeEx = 0.03;
			colorBackground[] = {0, 0.8, 0, 0.5};
			onTreeSelChanged = "";
			onMouseExit = "";
		};
		class MB_Window_Brusher_ObjectAdd : MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 14;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Add";
			action = "";
		};
		class MB_Window_Brusher_ObjectRemove: MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 20
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Remove";
			action = "";
		};
		class MB_Window_Brusher_ObjectCopy: MB_RscButton {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 26
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 9;
			w = MB_WINDOW_GRID_X * 4;
			h = MB_WINDOW_GRID_Y * 1;
			text = "Copy";
			action = "";
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
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 11;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Random";
			style = 0;
		};
		class MB_Window_Brusher_ObjectProbabilityLabel : MB_RscText {
			idc = -1;
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 13;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 13;
			w = MB_WINDOW_GRID_X * 5;
			h = MB_WINDOW_GRID_Y * 1;
			text =  "Probability (%):";
		};
		class MB_Window_Brusher_ObjectProbabilityEdit: MB_RscEdit {
			idc = -1;
			text = "25";
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
			idc = -1;
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
			idc = -1;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 19;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectOffsetYEdit: MB_RscEdit {
			idc = -1;
			text = "0";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 21;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectOffsetZEdit: MB_RscEdit {
			idc = -1;
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
			idc = -1;
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
			idc = -1;
			text = "90";
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
			idc = -1;
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
			idc = -1;
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
			idc = -1;
			text = "10";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectRandomOffsetYEdit: MB_RscEdit {
			idc = -1;
			text = "10";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 32;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 17;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
		class MB_Window_Brusher_ObjectRandomOffsetZEdit: MB_RscEdit {
			idc = -1;
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
			idc = -1;
			text = "180";
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
			idc = -1;
			text = "5";
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
			idc = -1;
			text = "5";
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
			idc = -1;
			text = "0.5";
			x = MB_WINDOW_PADDING_X + MB_WINDOW_GRID_X * 30;
			y = MB_WINDOW_PADDING_Y + MB_WINDOW_GRID_Y * 25;
			w = MB_WINDOW_GRID_X * 2;
			h = MB_WINDOW_GRID_Y * 1;
		};
	};
};