//
//  AppDelegate.h
//  Panda
//
//  Created by Kate on 9/15/13.
//  Copyright Kate 2013. All rights reserved.
//

#import "cocos2d.h"

@interface PandaAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	CCGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet CCGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
