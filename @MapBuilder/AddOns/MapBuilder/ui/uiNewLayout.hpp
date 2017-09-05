#include "mbdefinesNew.hpp"

class MapBuilder {
  class Layout {

    class RightBar {
      position = "right";

      class Library {
        title = "Library";
        type = "MB_PaneLibraryViewer";
      };

      class Favorites {
        title = "Favorites";
        type = "MB_EmptyPane";
      };
    };
  };
};
