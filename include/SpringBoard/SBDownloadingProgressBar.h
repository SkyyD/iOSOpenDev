/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class UIImageView;

@interface SBDownloadingProgressBar : SBUnknownSuperclass {
	UIImageView *_clipView;	// 52 = 0x34
	UIImageView *_fillView;	// 56 = 0x38
	float _progress;	// 60 = 0x3c
}
@property(assign) float progress;	// G=0xc9dc5; S=0xca01d; converted property
+ (float)defaultHeight;	// 0xc9dbd
- (id)initWithFrame:(CGRect)frame;	// 0xc9dd5
- (void)dealloc;	// 0xca0bd
- (id)trackImage;	// 0xca095
- (id)fillImage;	// 0xca06d
// converted property setter: - (void)setProgress:(float)progress;	// 0xca01d
// converted property getter: - (float)progress;	// 0xc9dc5
- (void)updateFill;	// 0xc9f9d
@end
