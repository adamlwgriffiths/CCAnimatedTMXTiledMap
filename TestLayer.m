//
//  TestLayer.m
//
//  Created by Adam Griffiths on 6/03/12.
//  Copyright (c) 2012 Twisted Pair Development. All rights reserved.
//

#import "TestLayer.h"


@implementation TestLayer

-(id) init
{
	self = [super init];
	if ( self != nil )
	{
		CCTMXTiledMap *map = [CCTMXTiledMap tiledMapWithTMXFile: @"test_desert.tmx"];
		[self addChild: map];
		animator = [CCAnimatedTMXTiledMap fromTMXTiledMap: map interval: 1.0f];
	}
	return self;
}

@end
