/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSArray, NSString;

@interface TSCHMultiDataLayerAnimationValues : NSObject {
    NSString *mKey;
    NSArray *mKeyTimes;
    CALayer *mLayer;
    NSArray *mValues;
}

@property(readonly) NSString * key;
@property(readonly) NSArray * keyTimes;
@property(readonly) CALayer * layer;
@property(readonly) NSArray * values;

+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3;

- (void)dealloc;
- (id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
- (id)key;
- (id)keyTimes;
- (id)layer;
- (id)values;

@end
