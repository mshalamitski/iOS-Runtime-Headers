/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHChartAxisID, TSCHChartAxisLineLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisTitleLayoutItem;

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem {
    struct CGSize { 
        float width; 
        float height; 
    TSCHChartAxisID *mAxisID;
    TSCHChartAxisLineLayoutItem *mAxisLine;
    TSCHChartAxisPaddingLayoutItem *mAxisPadding;
    int mAxisPosition;
    TSCHChartAxisTitleLayoutItem *mAxisTitle;
    } mChartBodySize;
    TSCHChartAxisTickMarksLayoutItem *mTickMarks;
}

@property(retain) TSCHChartAxisID * axisID;
@property(readonly) TSCHChartAxisLineLayoutItem * axisLineLayoutItem;
@property(readonly) TSCHChartAxisPaddingLayoutItem * axisPaddingLayoutItem;
@property(readonly) int axisPosition;
@property(readonly) TSCHChartAxisTickMarksLayoutItem * axisTickMarksLayoutItem;
@property(readonly) TSCHChartAxisTitleLayoutItem * axisTitleLayoutItem;
@property struct CGSize { float x1; float x2; } chartBodySize;

+ (id)selectionPathType;

- (id)axisID;
- (id)axisLineLayoutItem;
- (id)axisPaddingLayoutItem;
- (int)axisPosition;
- (id)axisTickMarksLayoutItem;
- (id)axisTitleLayoutItem;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (struct CGSize { float x1; float x2; })chartBodySize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;
- (id)p_description;
- (void)p_layoutInward;
- (void)p_layoutLabelsNow;
- (void)p_layoutOutward;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;
- (void)setAxisID:(id)arg1;
- (void)setChartBodySize:(struct CGSize { float x1; float x2; })arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end
