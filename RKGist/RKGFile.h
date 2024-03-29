//
//  RKGFile.h
//  RKGist
//
//  Created by Justin Martin on 2/4/14.
//  Copyright (c) 2014 RestKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RKGGist;

@interface RKGFile : NSManagedObject

@property (nonatomic, retain) NSString * filename;
@property (nonatomic, retain) id rawURL;
@property (nonatomic, retain) NSNumber * size;
@property (nonatomic, retain) RKGGist *gist;

@end
