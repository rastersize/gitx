//
//  PBSourceViewCell.h
//  GitX
//
//  Created by Nathan Kinsinger on 1/7/10.
//  Copyright 2010 Nathan Kinsinger. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBIconAndTextCell.h"

@interface PBSourceViewCell : PBIconAndTextCell {
	NSString *badge;
}

@property (assign) NSString *badge;

@end
