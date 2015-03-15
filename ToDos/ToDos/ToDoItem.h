//
//  ToDoItem.h
//  ToDos
//
//  Created by Anne on 2015/3/14.
//  Copyright (c) 2015年 Anne. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
