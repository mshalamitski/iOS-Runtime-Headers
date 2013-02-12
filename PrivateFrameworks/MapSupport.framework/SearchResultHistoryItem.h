/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class MKSearchResult, NSMutableDictionary;

@interface SearchResultHistoryItem : NSObject <HistoryItem> {
    NSMutableDictionary *_info;
    MKSearchResult *_searchResult;
}

@property(readonly) MKSearchResult *searchResult;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)searchResult;
- (NSInteger)type;

@end