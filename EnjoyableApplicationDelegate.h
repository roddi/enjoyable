//
//  EnjoyableApplicationDelegate.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

@class NJDeviceController;
@class NJOutputController;
@class NJMappingsController;

@interface EnjoyableApplicationDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenuItem *activeMenuItem;
    IBOutlet NSMenu *dockMenuBase;
}

@property (nonatomic, strong) IBOutlet NJDeviceController *inputController;
@property (nonatomic, strong) IBOutlet NJOutputController *outputController;
@property (nonatomic, strong) IBOutlet NJMappingsController *mappingsController;

- (void)mappingsChanged;

@end