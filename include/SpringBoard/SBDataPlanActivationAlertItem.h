/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDataPlanAccountAlertItem.h"


@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {
	BOOL _newAccount;	// 20 = 0x14
	BOOL _promptToDisable;	// 21 = 0x15
}
@property(assign, nonatomic, getter=isNewAccount) BOOL newAccount;	// G=0xfb011; S=0xfb021; @synthesize=_newAccount
- (id)initWithAccountURL:(id)accountURL newAccount:(BOOL)account promptToDisable:(BOOL)disable;	// 0xfb209
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0xfb325
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xfb265
// declared property getter: - (BOOL)isNewAccount;	// 0xfb011
// declared property setter: - (void)setNewAccount:(BOOL)account;	// 0xfb021
@end
