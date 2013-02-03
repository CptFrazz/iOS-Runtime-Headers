/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAudioVideoRoutingPopoverController, MPWildcatFullScreenVideoOverlay;

@interface MPWildcatFullScreenVideoViewController : MPAbstractFullScreenVideoViewController {
    unsigned int _firstVideoFrameDisplayed : 1;
    MPWildcatFullScreenVideoOverlay *_fullscreenVideoOverlay;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
}

- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_hideOverlayAnimationFinished:(id)arg1;
- (void)_rotationAnimationFinished:(id)arg1;
- (void)_setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2 interfaceOrientation:(NSInteger)arg3;
- (BOOL)canChangeScaleMode;
- (BOOL)controlsOverlayVisible;
- (void)dealloc;
- (void)firstVideoFrameDisplayedNotification:(id)arg1;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (id)init;
- (void)itemTypeAvailableNotification:(id)arg1;
- (void)loadView;
- (void)overlayDidDismissAlternateTracksPopover:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (id)overlayView;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setItem:(id)arg1;
- (void)setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)swipableView:(id)arg1 tappedWithCount:(NSUInteger)arg2 atLocation:(struct CGPoint { float x1; float x2; })arg3;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(NSUInteger)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willChangeToInterfaceOrientation:(NSInteger)arg1;

@end