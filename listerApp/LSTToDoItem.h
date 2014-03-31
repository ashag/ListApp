//
//  LSTToDoItem.h
//  listerApp
//
//  Created by Asha Golveo on 3/27/14.
//  Copyright (c) 2014 Asha Golveo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSTToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
