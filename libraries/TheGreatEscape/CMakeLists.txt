add_library(LibTheGreatEscape
  Create.c
  ExteriorTiles.c
  Font.c
  Input.c
  InteriorObjectDefs.c
  InteriorTiles.c
  ItemBitmaps.c
  Map.c
  Masks.c
  Menu.c
  Messages.c
  Music.c
  RoomDefs.c
  SpriteBitmaps.c
  Sprites.c
  StaticGraphics.c
  StaticTiles.c
  SuperTiles.c
  Text.c
  TheGreatEscape.c
)

target_include_directories(LibTheGreatEscape
  PUBLIC
  ../../include/
)

target_include_directories(LibTheGreatEscape
  PRIVATE
  include/
)

# Do we need this?
# target_link_libraries(LibTheGreatEscape LibZXSpectrum)
