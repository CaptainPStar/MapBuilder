class helper
{
	file = "mb\mapbuilder\functions\helper";
	class inBoundary {
		recompile = 1;
	};
	class isBoundaryIntersect {
		recompile = 1;
	};
	class loadStoreArr {
		recompile = 1;
	};
	class toStoreArr {
		recompile = 1;
	};
};
class objectInspector
{
	file = "mb\mapbuilder\functions\objectInspector";
	class initObjectInspectorFunctions {
		recompile = 1;
	};
	class InspectObject {
		recompile = 1;
	};
	class inspectorApply {
		recompile = 1;
	};
	class InspectorClose {
		recompile = 1;
	};
	class InspectorFill {
		recompile = 1;
	};
	class InspectorPreview {
		recompile = 1;
	};
	class InspectorRefresh {
		recompile = 1;
	};
};
class help
{
	file = "mb\mapbuilder\functions\help";
	class closeHelpWindow {
		recompile = 1;
	};
	class openHelpWindow {
		recompile = 1;
	};
};
class fencer
{
	file = "mb\mapbuilder\functions\fencer";
	class CalcRelativePosition {
		recompile = 1;
	};
	class FencerCalcBounding {
		recompile = 1;
	};
	class fencerPlace {
		recompile = 1;
	};
	class FencerUpdatePreview {
		recompile = 1;
	};
	class initFencerFunctions {
		recompile = 1;
	};
	class useFencer {
		recompile = 1;
	};
};
class development
{
	file = "mb\mapbuilder\functions\development";
	class refreshConfig {
		recompile = 1;
	};
};
class library
{
	file = "mb\mapbuilder\functions\library";
	class initLibraryFunctions {
		recompile = 1;
	};
	class libraryFindName {
		recompile = 1;
	};
	class libraryMousedown {
		recompile = 1;
	};
	class libraryMouseup {
		recompile = 1;
	};
	class librarySelect {
		recompile = 1;
	};
	class libraryUpdate {
		recompile = 1;
	};
	class loadLibrary {
		recompile = 1;
	};
	class SelectAllUsed {
		recompile = 1;
	};
	class update3DPreview {
		recompile = 1;
	};
	class updateFavorites {
		recompile = 1;
	};
	class updateUsed {
		recompile = 1;
	};
};
class view
{
	file = "mb\mapbuilder\functions\view";
	class initViewFunctions {
		recompile = 1;
	};
	class MouseButtonClick {
		recompile = 1;
	};
	class MouseButtonDblClick {
		recompile = 1;
	};
	class MouseButtonDownInView {
		recompile = 1;
	};
	class MouseButtonUpInView {
		recompile = 1;
	};
	class MouseInView {
		recompile = 1;
	};
	class MouseWheelMoveInView {
		recompile = 1;
	};
	class ViewIsMouseButtonPressed {
		recompile = 1;
	};
};
class control
{
	file = "mb\mapbuilder\functions\control";
	class applyCamPreset {
		recompile = 1;
	};
	class camFreeMove {
		recompile = 1;
	};
	class camZoom {
		recompile = 1;
	};
	class initControlFunctions {
		recompile = 1;
	};
	class isMousePressed {
		recompile = 1;
	};
	class isPressed {
		recompile = 1;
	};
	class keyDown {
		recompile = 1;
	};
	class keyUp {
		recompile = 1;
	};
	class mouseClick {
		recompile = 1;
	};
	class mouseDblClick {
		recompile = 1;
	};
	class mouseDown {
		recompile = 1;
	};
	class mouseMove {
		recompile = 1;
	};
	class mouseUp {
		recompile = 1;
	};
	class resetKeys {
		recompile = 1;
	};
	class updateCam {
		recompile = 1;
	};
};
class selection
{
	file = "mb\mapbuilder\functions\selection";
	class BBsetSize {
		recompile = 1;
	};
	class BBupdate {
		recompile = 1;
	};
	class BeginRectangleDrag {
		recompile = 1;
	};
	class calcSelectionBox {
		recompile = 1;
	};
	class calcSelectionCenter {
		recompile = 1;
	};
	class Copy {
		recompile = 1;
	};
	class copyObjectsToClipboard {
		recompile = 1;
	};
	class Deselect {
		recompile = 1;
	};
	class DeselectAll {
		recompile = 1;
	};
	class DeselectUnderCursor {
		recompile = 1;
	};
	class EndRectangleDrag {
		recompile = 1;
	};
	class getClickedObject {
		recompile = 1;
	};
	class initSelectionFunctions {
		recompile = 1;
	};
	class isSelected {
		recompile = 1;
	};
	class MoveSelection {
		recompile = 1;
	};
	class Paste {
		recompile = 1;
	};
	class ReconstructSelection {
		recompile = 1;
	};
	class select {
		recompile = 1;
	};
	class SelectInRectangle {
		recompile = 1;
	};
	class SelectUnderCursor {
		recompile = 1;
	};
	class UpdateRectangleDrag {
		recompile = 1;
	};
};
class window
{
	file = "mb\mapbuilder\functions\window";
	class beginWindowDrag {
		recompile = 1;
	};
	class closeWindow {
		recompile = 1;
	};
	class endWindowDrag {
		recompile = 1;
	};
	class initWindowFunctions {
		recompile = 1;
	};
	class openWindow {
		recompile = 1;
	};
	class updateWindowDrag {
		recompile = 1;
	};
};
class weather
{
	file = "mb\mapbuilder\functions\weather";
	class postInitWeather {
		recompile = 1;
		postInit = 1;
	};
	class weatherCommit {
		recompile = 1;
	};
	class weatherPreview {
		recompile = 1;
	};
	class weatherSetDate {
		recompile = 1;
	};
	class weatherSetFog {
		recompile = 1;
	};
	class weatherSetOvercast {
		recompile = 1;
	};
	class weatherSetRain {
		recompile = 1;
	};
	class weatherSetWind {
		recompile = 1;
	};
	class weatherStopRain {
		recompile = 1;
	};
};
class object
{
	file = "mb\mapbuilder\functions\object";
	class AlignObjectToTerrain {
		recompile = 1;
	};
	class BeginObjectBankDrag {
		recompile = 1;
	};
	class BeginObjectDrag {
		recompile = 1;
	};
	class BeginObjectHeightDrag {
		recompile = 1;
	};
	class BeginObjectPitchDrag {
		recompile = 1;
	};
	class BeginObjectYawDrag {
		recompile = 1;
	};
	class CalcBuldozerEulerAngles {
		recompile = 1;
	};
	class CalcBuldozerEulerAnglesBak {
		recompile = 1;
	};
	class CalcDirAndUpVector {
		recompile = 1;
	};
	class CalcEulerAngles {
		recompile = 1;
	};
	class CalcEulerAnglesWorld {
		recompile = 1;
	};
	class CalcPitchRollYaw {
		recompile = 1;
	};
	class ChangeHeightSelected {
		recompile = 1;
	};
	class ChangeHeightSelectedByMouseWheel {
		recompile = 1;
	};
	class ChangePitchBankSelected {
		recompile = 1;
	};
	class CreateObject {
		recompile = 1;
	};
	class CreateObjectByClick {
		recompile = 1;
	};
	class createObjectByDrag {
		recompile = 1;
	};
	class DeleteAllObjects {
		recompile = 1;
	};
	class DeleteObject {
		recompile = 1;
	};
	class deleteSelected {
		recompile = 1;
	};
	class EmulateBuldozerPitchRollYaw {
		recompile = 1;
	};
	class EndObjectBankDrag {
		recompile = 1;
	};
	class EndObjectDrag {
		recompile = 1;
	};
	class EndObjectHeightDrag {
		recompile = 1;
	};
	class EndObjectPitchDrag {
		recompile = 1;
	};
	class EndObjectYawDrag {
		recompile = 1;
	};
	class getCanonicalName {
		recompile = 1;
	};
	class getExactPosition {
		recompile = 1;
	};
	class getObjectVars {
		recompile = 1;
	};
	class InitObject {
		recompile = 1;
	};
	class initObjectFunctions {
		recompile = 1;
	};
	class MatchSurfaceNormals {
		recompile = 1;
	};
	class MoveSelected {
		recompile = 1;
	};
	class ObjectChangeYawSelection {
		recompile = 1;
	};
	class PreviewObjectUpdate {
		recompile = 1;
	};
	class resetOrientation {
		recompile = 1;
	};
	class RotatePos {
		recompile = 1;
	};
	class RotateRelPos {
		recompile = 1;
	};
	class rotateSelected {
		recompile = 1;
	};
	class setExactPosition {
		recompile = 1;
	};
	class SetObjVars {
		recompile = 1;
	};
	class SetPitchBankYaw {
		recompile = 1;
	};
	class UpdateObject {
		recompile = 1;
	};
	class UpdateObjectBankDrag {
		recompile = 1;
	};
	class UpdateObjectDrag {
		recompile = 1;
	};
	class UpdateObjectHeightDrag {
		recompile = 1;
	};
	class UpdateObjectPitchDrag {
		recompile = 1;
	};
	class UpdateObjectYawDrag {
		recompile = 1;
	};
};
class project
{
	file = "mb\mapbuilder\functions\project";
	class autosave {
		recompile = 1;
	};
	class clearProject {
		recompile = 1;
	};
	class importProject {
		recompile = 1;
	};
	class initProjectFunctions {
		recompile = 1;
	};
	class loadProject {
		recompile = 1;
	};
	class ProjectsPopupSelect {
		recompile = 1;
	};
	class resetProject {
		recompile = 1;
	};
	class saveProject {
		recompile = 1;
	};
	class showProjectWindow {
		recompile = 1;
	};
};
class core
{
	file = "mb\mapbuilder\functions\core";
	class addPerFrameHandler {
		recompile = 1;
	};
	class arrayMove {
		recompile = 1;
	};
	class codeToString {
		recompile = 1;
	};
	class createNamespace {
		recompile = 1;
	};
	class parseToBool {
		recompile = 1;
	};
	class parseToCode {
		recompile = 1;
	};
	class preInitPerFrameHandler {
		recompile = 1;
		preinit = 1;
	};
	class removePerFrameHandler {
		recompile = 1;
	};
};
class hook
{
	file = "mb\mapbuilder\functions\hook";
	class addCallback {
		recompile = 1;
	};
	class dispatchCallbacks {
		recompile = 1;
	};
	class removeAllCallbacks {
		recompile = 1;
	};
	class removeCallback {
		recompile = 1;
	};
};
class quadtree
{
	file = "mb\mapbuilder\functions\quadtree";
	class initQuadtreeFunctions {
		recompile = 1;
	};
	class quadTreeDraw {
		recompile = 1;
	};
	class quadTreeInsert {
		recompile = 1;
	};
	class quadTreeQuery {
		recompile = 1;
	};
	class quadTreeRemove {
		recompile = 1;
	};
	class quadTreeSubdivide {
		recompile = 1;
	};
	class quadTreeUpdate {
		recompile = 1;
	};
};
class popup
{
	file = "mb\mapbuilder\functions\popup";
	class hideExport {
		recompile = 1;
	};
	class initPopupFunctions {
		recompile = 1;
	};
	class popupShown {
		recompile = 1;
	};
	class ShowProjects {
		recompile = 1;
	};
	class togglePopup {
		recompile = 1;
	};
};
class io
{
	file = "mb\mapbuilder\functions\io";
	class fileExists {
		recompile = 1;
	};
	class getFolderContent {
		recompile = 1;
	};
};
class brush
{
	file = "mb\mapbuilder\functions\brush";
	class brushBegin {
		recompile = 1;
	};
	class brushEnd {
		recompile = 1;
	};
	class brusherAddObject {
		recompile = 1;
	};
	class brusherAddTemplate {
		recompile = 1;
	};
	class brusherApplySettings {
		recompile = 1;
	};
	class brusherCopyTemplate {
		recompile = 1;
	};
	class brusherDrawNode {
		recompile = 1;
	};
	class brusherRemoveObject {
		recompile = 1;
	};
	class brusherRemoveTemplate {
		recompile = 1;
	};
	class brusherSelectFile {
		recompile = 1;
	};
	class brusherUpdateCam {
		recompile = 1;
	};
	class brusherUpdateFileList {
		recompile = 1;
	};
	class brusherUpdateObjectList {
		recompile = 1;
	};
	class brusherUpdateObjectPanel {
		recompile = 1;
	};
	class brusherUpdateTemplate {
		recompile = 1;
	};
	class brusherUpdateTemplateList {
		recompile = 1;
	};
	class brushUpdate {
		recompile = 1;
	};
	class drawBrush {
		recompile = 1;
	};
	class loadBrush {
		recompile = 1;
	};
	class postInitBrushFunctions {
		recompile = 1;
		postInit = 1;
	};
	class saveBrush {
		recompile = 1;
	};
	class showBrushWindow {
		recompile = 1;
	};
};
class uiCore
{
	file = "mb\mapbuilder\functions\uiCore";
	class getCtrlPositionReal {
		recompile = 1;
	};
	class uiGetCfgSize {
		recompile = 1;
	};
	class uiPosInPos {
		recompile = 1;
	};
	class uiResetSettings {
		recompile = 1;
	};
};
class matrix
{
	file = "mb\mapbuilder\functions\matrix";
	class createMatrix {
		recompile = 1;
	};
	class createRotationMatrix {
		recompile = 1;
	};
	class initMatrixFunctions {
		recompile = 1;
	};
	class multiplyMatrices {
		recompile = 1;
	};
	class rotateVector3D {
		recompile = 1;
	};
};
class main
{
	file = "mb\mapbuilder\functions\main";
	class addMBAction {
		recompile = 1;
	};
	class checkVersion {
		recompile = 1;
	};
	class colorVertices {
		recompile = 1;
	};
	class draw3D {
		recompile = 1;
	};
	class DrawBoundingBox {
		recompile = 1;
	};
	class drawBox {
		recompile = 1;
	};
	class drawLine3DThick {
		recompile = 1;
	};
	class exit {
		recompile = 1;
	};
	class postInitSettings {
		recompile = 1;
		postInit = 1;
	};
	class setRelPos {
		recompile = 1;
	};
	class settingsWindow {
		recompile = 1;
	};
	class setup {
		recompile = 1;
	};
	class start {
		recompile = 1;
	};
};
class masker
{
	file = "mb\mapbuilder\functions\masker";
	class initMaskerFunctions {
		recompile = 1;
	};
	class maskerFunctions {
		recompile = 1;
	};
};
class multiplayer
{
	file = "mb\mapbuilder\functions\multiplayer";
	class initMultiplayerFunctions {
		recompile = 1;
	};
	class remoteDelete {
		recompile = 1;
	};
	class syncDelete {
		recompile = 1;
	};
	class syncObject {
		recompile = 1;
	};
	class syncRemoteObject {
		recompile = 1;
	};
};
class uiNew
{
	file = "mb\mapbuilder\functions\uiNew";
	class uiAdjustContentCtrl {
		recompile = 1;
	};
	class uiCreateUI {
		recompile = 1;
	};
	class uiGetSetting {
		recompile = 1;
	};
	class uiLoadLibrary {
		recompile = 1;
	};
	class uiLoadPanes {
		recompile = 1;
	};
	class uiLogOutput {
		recompile = 1;
	};
	class uiPaneClose {
		recompile = 1;
	};
	class uiPaneDrag {
		recompile = 1;
	};
	class uiPaneFloatToggle {
		recompile = 1;
	};
	class uiPaneHelp {
		recompile = 1;
	};
	class uiPaneOpen {
		recompile = 1;
	};
	class uiPaneResize {
		recompile = 1;
	};
	class uiPanesShift {
		recompile = 1;
	};
	class uiPaneToggle {
		recompile = 1;
	};
	class uiRemovePaneFromSidebar {
		recompile = 1;
	};
	class uiSetSetting {
		recompile = 1;
	};
	class uiSidebarCreate {
		recompile = 1;
	};
	class uiToolbar {
		recompile = 1;
	};
};
class export
{
	file = "mb\mapbuilder\functions\export";
	class exportComposition {
		recompile = 1;
	};
	class exportSQF {
		recompile = 1;
	};
	class exportSQM {
		recompile = 1;
	};
	class exportTB {
		recompile = 1;
	};
	class exportTML {
		recompile = 1;
	};
	class importFromEditor {
		recompile = 1;
	};
	class importFromTB {
		recompile = 1;
	};
	class initExportFunctions {
		recompile = 1;
	};
	class initImportTBHashFunctions {
		recompile = 1;
	};
	class roundNumbers {
		recompile = 1;
	};
	class showExportWindow {
		recompile = 1;
	};
};
class map
{
	file = "mb\mapbuilder\functions\map";
	class initMapFunctions {
		recompile = 1;
	};
	class mapDblClickTeleport {
		recompile = 1;
	};
	class mapOpen {
		recompile = 1;
	};
	class toggleMap {
		recompile = 1;
	};
};
class preset
{
	file = "mb\mapbuilder\functions\preset";
	class initPresetFunctions {
		recompile = 1;
	};
	class loadPreset {
		recompile = 1;
	};
	class PresetSelect {
		recompile = 1;
	};
	class refreshPresetList {
		recompile = 1;
	};
	class savePreset {
		recompile = 1;
	};
	class showPresetWindow {
		recompile = 1;
	};
};
class ui
{
	file = "mb\mapbuilder\functions\ui";
	class chatSend {
		recompile = 1;
	};
	class ChatToggle {
		recompile = 1;
	};
	class closeAboutWindow {
		recompile = 1;
	};
	class initUIFunctions {
		recompile = 1;
	};
	class openAboutWindow {
		recompile = 1;
	};
	class SetEditorFocus {
		recompile = 1;
	};
	class showPopupDialog {
		recompile = 1;
	};
	class switchMode {
		recompile = 1;
	};
	class updateTaskBar {
		recompile = 1;
	};
};
