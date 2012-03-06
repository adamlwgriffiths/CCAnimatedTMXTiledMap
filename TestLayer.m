//
//  TestLayer.m
//  Arena
//
//  Created by Adam Griffiths on 6/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "TestLayer.h"

#import "CCAnimatedTMXTiledMap.h"

@implementation TestLayer

-(id) init
{
	self = [super init];
	if ( self != nil )
	{
		CCAnimatedTMXTiledMap *map = [CCAnimatedTMXTiledMap tiledMapWithTMXFile: @"test_desert.tmx" interval: 1.0f];
		[self addChild: map];
	}
	return self;
}

@end
