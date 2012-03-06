//
//  CCAnimatedTMXTiledMap.h
//
//  Created by Adam Griffiths on 6/03/12.
//  Copyright (c) 2012 Twisted Pair Development. All rights reserved.
//
//  twistedpairdevelopment.wordpress.com
//  @twistedpairdev
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import "cocos2d.h"


/** Adds animation support to CCTMXTiledMap
 *
 * CCAnimatedTMXTiledMap provides a simple layer ontop of CCTMXTiledMap
 * that uses meta-data from TMX tile sets to animate tiles.
 *
 * This class inherits directly from CCTMXTiledMap, so no optimisations or
 * functionality is lost.
 *
 * To add animation to a tile:
 * -Right click the tile in the tile set.
 * -Select 'Tile Properties'
 * -Add the following key / value pairs:
 *   animate_enabled   : YES
 *   animate_next_tile : GID of next tile (1 indexed)
 */
@interface CCAnimatedTMXTiledMap : CCTMXTiledMap
{
	NSDictionary		*animated_tiles;
}

+(id) tiledMapWithTMXFile: (NSString*)tmxFile interval: (ccTime)dt;

@end