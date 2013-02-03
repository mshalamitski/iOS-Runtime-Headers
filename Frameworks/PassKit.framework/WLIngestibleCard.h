/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKIngestibleCard, NSString;

@interface WLIngestibleCard : WLCard {
    PKIngestibleCard *_underlyingIngestibleCard;
}

@property(copy) NSString * identifier;
@property(retain) PKIngestibleCard * underlyingIngestibleCard;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBundleArchiveData:(id)arg1;
- (id)initWithBundleArchiveURL:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (void)setUnderlyingIngestibleCard:(id)arg1;
- (id)underlyingIngestibleCard;

@end