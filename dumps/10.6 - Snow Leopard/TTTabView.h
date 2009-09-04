/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTabView.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class NSAnimation, NSImage, TTTabViewItem;

@interface TTTabView : NSTabView <NSAnimationDelegate, NSMenuDelegate>
{
    struct CGRect _overflowImageRect;
    struct CGRect _tabFrame;
    TTTabViewItem *_draggedTab;
    TTTabViewItem *_draggedTabOnCloseImage;
    unsigned long long _draggedTabInitialIndex;
    struct CGPoint _lastMouseDownLocation;
    float _tabDraggedXOffset;
    float _tabDraggedYOffset;
    float _tabDraggedXOffsetBeyondBounds;
    BOOL _showOverflowTabMenu;
    BOOL _isShowingOverflowMenu;
    BOOL _isMouseOffScreen;
    BOOL _isTabViewOnBottom;
    BOOL _showTabIfOnlyOne;
    BOOL _isRegisteredForDragEvents;
    NSImage *_overflowTabMenuImage;
    NSImage *_draggingImage;
    float TT_TAB_FRAME_BOTTOM;
    NSAnimation *_activeAnimation;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)initTabFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowDidChangeKey:(id)arg1;
- (BOOL)acceptsMouseMovedEvents;
- (BOOL)acceptsFirstResponder;
- (id)tabViewItemAtPoint:(struct CGPoint)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (struct CGPoint)recenterMouseInFloatingTab:(struct CGPoint)arg1;
- (struct CGPoint)reverseRecenterMouseInFloatingTab:(struct CGPoint)arg1;
- (void)registerForDragEvents;
- (void)unregisterForDragEvents;
- (BOOL)isValidDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)selectTabViewItem:(id)arg1;
- (void)selectNextTabViewItem:(id)arg1;
- (void)selectPreviousTabViewItem:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)addTabViewItem:(id)arg1;
- (void)addTabViewItem:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)isTabViewItemInOverflowMenu:(id)arg1;
- (long long)indexOfLastVisibleTabViewItem;
- (void)stopActiveAnimation;
- (void)startTabReorderAnimation:(id)arg1;
- (void)startSpringBackAnimation:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (struct CGRect)rectForTabViewItemForNumberOfTabs:(int)arg1;
- (struct CGRect)contentRect;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1;
- (void)removeTabViewTooltips;
- (struct CGRect)_tabRectAdjustedForOverlap:(struct CGRect)arg1;
- (struct CGRect)resizeRectToFitInsideBounds:(struct CGRect)arg1;
- (void)viewDidEndLiveResize;
- (void)resizeWindowToAccountForTabsBeingDisplayed:(int)arg1;
- (void)drawTabOverflowMenuImage;
- (void)drawBorderAndBackground;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(int)arg3 shouldCancel:(BOOL)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (void)selectTabFromMenu:(id)arg1;
- (id)lineColor;
- (BOOL)isFlipped;
- (void)setTabViewOnBottom:(BOOL)arg1;
- (BOOL)tabViewOnBottom;
- (void)setShowTabIfOnlyOne:(BOOL)arg1;
- (BOOL)showTabIfOnlyOne;
- (id)selectedTabViewItem;
- (struct CGRect)tabFrame;
- (void)setTabDraggedXOffset:(float)arg1;
- (float)tabDraggedXOffset;
- (float)tabDraggedYOffset;
- (void)setDraggedTab:(id)arg1;
- (id)draggedTab;
- (void)setOverflowTabMenuImage:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)accessibilityIsIgnored;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
