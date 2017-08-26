//
//  UserModel.h
//  modifyError
//
//  Created by 韩冲 on 2017/8/26.
//  Copyright © 2017年 tmachc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, UserSex) {
    UserSexMan,
    UserSexWoman
};

@interface UserModel : NSObject

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, assign) NSInteger age;
@property (nonatomic, readonly, assign) UserSex sex;

- (instancetype)initWithName:(NSString *)name
                         age:(int)age
                         sex:(UserSex)sex;
+ (instancetype)userWithName:(NSString *)name
                         age:(int)age
                         sex:(UserSex)sex;

@end
