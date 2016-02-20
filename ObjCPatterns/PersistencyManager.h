//
//  PersistencyManager.h
//  ObjCPatterns
//
//  Created by Andrey on 20.02.16.
//  Copyright © 2016 Andrey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Album.h"

@interface PersistencyManager : NSObject

- (NSArray *)albums;
- (void)addAlbum:(Album *)album atIndex:(NSUInteger)index;
- (void)deleteAlbumAtIndex:(NSUInteger)index;

@end
