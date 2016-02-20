//
//  Album.h
//  ObjCPatterns
//
//  Created by Andrey on 20.02.16.
//  Copyright © 2016 Andrey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Album : NSObject

@property (nonatomic, copy, readonly) NSString * title;
@property (nonatomic, copy, readonly) NSString * artist;
@property (nonatomic, copy, readonly) NSString * genre;
@property (nonatomic, copy, readonly) NSString * coverUrl;
@property (nonatomic, copy, readonly) NSString * year;

- (id)initWithTitle:(NSString *)title
             artist:(NSString *)artist
           coverUrl:(NSString *)coverUrl
               year:(NSString *)year;

@end
