//
//  UVSuggestionDetailsViewController.h
//  UserVoice
//
//  Created by UserVoice on 10/29/09.
//  Copyright 2009 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UVBaseViewController.h"
#import "UVSuggestion.h"

@class UVTruncatingLabel;

@interface UVSuggestionDetailsViewController : UVBaseViewController <UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate> {
    UVSuggestion *suggestion;
    NSMutableArray *comments;
    BOOL allCommentsRetrieved;
    UILabel *subscriberCount;
    BOOL instantAnswers;
}

@property (nonatomic, retain) UVSuggestion *suggestion;
@property (nonatomic, retain) NSMutableArray *comments;
@property (nonatomic, retain) UILabel *subscriberCount;
@property (nonatomic) BOOL instantAnswers;
@property (nonatomic, retain) NSString *helpfulPrompt;
@property (nonatomic, retain) NSString *returnMessage;

- (id)initWithSuggestion:(UVSuggestion *)theSuggestion;
- (void)reloadComments;

@end
