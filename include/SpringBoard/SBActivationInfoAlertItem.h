/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class NSString, UITextView;

@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UITextView *_textView;	// 32 = 0x20
	NSString *_meid;	// 36 = 0x24
	NSString *_imei;	// 40 = 0x28
	NSString *_iccid;	// 44 = 0x2c
	float _alertHeight;	// 48 = 0x30
}
+ (id)activeItem;	// 0xa1965
- (id)init;	// 0xa2109
- (void)dealloc;	// 0xa2065
- (void)didPresentAlertView:(id)view;	// 0xa1f91
- (void)_updateTextView;	// 0xa1d2d
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0xa1af1
- (void)_simStatusChanged:(id)changed;	// 0xa1a1d
- (void)willActivate;	// 0xa19e5
- (void)didDeactivateForReason:(int)reason;	// 0xa19bd
- (BOOL)forcesModalAlertAppearance;	// 0xa1975
- (void)cleanPreviousConfiguration;	// 0xa197d
- (BOOL)allowInSetup;	// 0xa1979
@end

