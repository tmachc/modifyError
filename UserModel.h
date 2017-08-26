//
//  UserModel.h
//  modifyError
//
//  Created by 韩冲 on 2017/8/26.
//  Copyright © 2017年 tmachc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum{
    UserSex_Man,
    UserSex_Womam
}UserSex;

@interface UserModel : NSObject


@property(nonatomic, strong) NSString *name;
@property (assign, nonatomic) int age;
@property (nonatomic, assign) UserSex sex;

-(id)initUserModelWithUserName: (NSString*)name withAge:(int)age;


-(void)doLogIn;

@end
