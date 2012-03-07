CCAnimatedTMXTiledMap
=====================

Adds animation support to the CCTMXTiledMap class.


Features
-------------

   * Keeps all functionality of existing CCTMXTiledMap class.
   * Optimised by using CCTMXTiledMap's functions.
   * Only animates tiles that have animations set.


Limitations
---------------

   * Only supports a single interval for all tile animation changes.


Usage
-----------------------

Simply drop the source files in your project and include the .h file.

See the example directory for source code.

Animations are specified in the TMX editor by adding meta-data to tile sets.

To add animation to a tile:
-Right click the tile in the tile set.
-Select 'Tile Properties'
-Add the following key / value pairs:
  animate_enabled   : YES, NO
  animate_next_tile : GID of next tile (1 indexed)


Dependencies
----------------------------

cocos2d-iphone (or Kobold2d)
