//
//  ToDoItem.h
//  ToDoList
//
//  Created by Ian Thiel on 5/2/15.
//  Copyright (c) 2015 Ian Thiel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
