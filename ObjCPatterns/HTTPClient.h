//
//  HTTPClient.h
//  ObjCPatterns
//
//  Created by Andrey on 20.02.16.
//  Copyright © 2016 Andrey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HTTPClient : NSObject

- (id)getRequest:(NSString*)url;
- (id)postRequest:(NSString*)url body:(NSString*)body;
- (UIImage*)downloadImage:(NSString*)url;

@end
