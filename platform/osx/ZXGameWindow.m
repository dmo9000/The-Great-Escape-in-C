//
//  ZXGameWindow.m
//  TheGreatEscape
//
//  Created by David Thomas on 10/10/2017.
//  Copyright © 2017 David Thomas. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "ZXGameWindow.h"

@implementation ZXGameWindow

- (void)awakeFromNib
{
  self.opaque = YES; // (default)

  self.backgroundColor = [NSColor blackColor];

  // We must set titlebarAppearsTransparent with styleMask to
  // NSFullSizeContentViewWindowMask or the title bar text will dim when the
  // window is moved.

  self.titleVisibility = NSWindowTitleVisible;
  self.styleMask |= NSFullSizeContentViewWindowMask;
  self.titlebarAppearsTransparent = YES;

  [self setAppearance:[NSAppearance appearanceNamed:NSAppearanceNameVibrantDark]];

  // We set this flag however it's not much use if a view covers the entire
  // window area
  self.movableByWindowBackground = YES;
}

@end
