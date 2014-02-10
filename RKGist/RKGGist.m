//
//  RKGGist.m
//  RKGist
//
//  Created by Justin Martin on 2/4/14.
//  Copyright (c) 2014 RestKit. All rights reserved.
//

#import "RKGGist.h"
#import "RKGFile.h"
#import "RKGUser.h"


@implementation RKGGist

@dynamic createdAt;
@dynamic descriptionText;
@dynamic gistID;
@dynamic htmlURL;
@dynamic jsonURL;
@dynamic public;
@dynamic updatedAt;
@dynamic user;
@dynamic files;

- (NSString *)titleText
{
    return [self.descriptionText length] ? self.descriptionText : @"(untitled)";
}

- (NSString *)subtitleText
{
    static NSDateFormatter *dateFormatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        dateFormatter = [NSDateFormatter new];
        dateFormatter.dateFormat = @"MM/dd/yy '@' HH:mm a";
    });
    return [NSString stringWithFormat:@"by %@ on %@ (%d files)", self.user.login,
            [dateFormatter stringFromDate:self.createdAt], [self.files count]];
}

@end
