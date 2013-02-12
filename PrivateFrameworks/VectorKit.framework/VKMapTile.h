/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKRasterTile, VKTile;

@interface VKMapTile : VKTile <NSCopying> {
    struct { 
        float x0; 
        float x1; 
        float y0; 
        float y1; 
    } _localBounds[26];
    float _maximumStyleZ;
    BOOL _needsRasterization;
    VKRasterTile *_rasterized;
    double _stateDates[26];
    id _stateMetas[26];
    unsigned int _states[26];
    VKTile *_tiles[26];
}

@property(readonly) float maximumStyleZ;
@property BOOL needsRasterization;
@property(retain) VKRasterTile * rasterized;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (struct { float x1; float x2; float x3; float x4; })localBoundsForLayer:(unsigned int)arg1;
- (float)maximumStyleZ;
- (BOOL)needsRasterization;
- (id)rasterized;
- (void)setNeedsRasterization:(BOOL)arg1;
- (void)setRasterized:(id)arg1;
- (void)setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned int)arg4;
- (id)tileForLayer:(unsigned int)arg1;
- (unsigned int)tileStateForLayer:(unsigned int)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;

@end