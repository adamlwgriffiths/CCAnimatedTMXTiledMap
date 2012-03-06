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

Use just like the CCTMXTiledMap, but provide an extra parameter for the
animation interval.

Eg:

CCAnimatedTMXTiledMap *map = [CCAnimatedTMXTiledMap
	tiledMapWithTMXFile: @"test_desert.tmx"
	interval: 1.0f
	];
[self addChild: map];


Animations are specified by adding meta-data to tile sets.

To add animation to a tile:
-Right click the tile in the tile set.
-Select 'Tile Properties'
-Add the following key / value pairs:
  animate_enabled   : YES, NO
  animate_next_tile : GID of next tile (1 indexed)


Dependencies
----------------------------

1. cocos2d-iphone
2. TMX formatted maps.
