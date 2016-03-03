//
//  PlayerWindow.h
//  bilibili
//
//  Created by TYPCN on 2016/3/4.
//  Copyright © 2016 TYPCN. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Player.h"

@interface PlayerWindow : NSWindow <NSWindowDelegate>

@property (strong) NSWindowController* postCommentWindowC;
@property (strong, nonatomic) Player *player;
@property (weak, nonatomic) NSWindow *lastWindow;

-(void)keyDown:(NSEvent*)event;

@end