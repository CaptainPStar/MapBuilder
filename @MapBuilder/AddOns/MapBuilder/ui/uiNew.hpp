class ctrlControlsGroupNoScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlControlsGroupNoHScrollbars;

class ctrlButtonPictureKeepAspect;
class ctrlStaticPicture;
class ctrlStaticBackground;
class ctrlCheckbox;
class ctrlToolboxPictureKeepAspect;
class ctrlEdit;
class ctrlTree;

#include "mbdefinesNew.hpp"

#include "controls\resizer.hpp"
#include "controls\paneButton.hpp"
#include "uiNewElements.hpp"
#include "uiNewLayout.hpp"

#include "panes\EmptyPane.hpp"
#include "panes\MissingPane.hpp"
#include "panes\LibraryViewer.hpp"
#include "panes\Favorites.hpp"
#include "panes\UsedObjects.hpp"

class MB_GUI_Window {
    idd = 1000;
    onLoad = "uiNamespace setVariable ['MB_UI_Window', (_this select 0)];";
    onUnload = "uiNamespace setVariable ['MB_UI_Window', displayNull];";
    class Controls {
      class MB_OverlayGroup: ctrlControlsGroupNoScrollbars {
        idc = __IDC_OVERLAYGROUP;
        x = "safeZoneX";
        y = "safeZoneY";
        w = "safeZoneW";
        h = "safeZoneH";
        class Controls {

        };
      };
    };
};
