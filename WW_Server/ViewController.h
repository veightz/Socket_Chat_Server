//
//  ViewController.h
//  WW_Server
//
//  Created by Veight Zhou on 11/26/14.
//  Copyright (c) 2014 Veight Zhou. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController
@property (weak, nonatomic) IBOutlet NSTextField *addrTextField;
@property (weak, nonatomic) IBOutlet NSTextField *portTextField;

@property (weak, nonatomic) IBOutlet NSTextField *inputField;
@property  IBOutlet NSTextView *textField;

- (IBAction)listenAction:(id)sender;
- (IBAction)sendAction:(id)sender;



@end

