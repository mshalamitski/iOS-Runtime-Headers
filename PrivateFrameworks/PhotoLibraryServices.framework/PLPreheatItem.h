/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPreheatItem : NSObject {
    int _useCount;
}

- (BOOL)addImageHandler:(id)arg1;
- (id)cachedImage;
- (id)cachedImageIfAvailable;
- (void)cancelPreheatRequest;
- (int)decrementUseCount;
- (int)incrementUseCount;
- (void)startPreheatRequest;

@end
