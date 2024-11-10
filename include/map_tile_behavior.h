#ifndef POKEPLATINUM_TILE_BEHAVIOR_H
#define POKEPLATINUM_TILE_BEHAVIOR_H

BOOL TileBehavior_IsTallGrass(u8 behavior);
BOOL TileBehavior_IsVeryTallGrass(u8 behavior);
BOOL TileBehavior_IsTable(u8 behavior);
BOOL TileBehavior_IsDoor(u8 behavior);
BOOL TileBehavior_IsWarpEntranceEast(u8 behavior);
BOOL TileBehavior_IsWarpEntranceWest(u8 behavior);
BOOL TileBehavior_IsWarpEntranceNorth(u8 behavior);
BOOL TileBehavior_IsWarpEntranceSouth(u8 behavior);
BOOL TileBehavior_IsWarpEast(u8 behavior);
BOOL TileBehavior_IsWarpWest(u8 behavior);
BOOL TileBehavior_IsWarpNorth(u8 behavior);
BOOL TileBehavior_IsWarpSouth(u8 behavior);
BOOL TileBehavior_IsSurfable(u8 behavior);
BOOL TileBehavior_IsSand(u8 behavior);
BOOL TileBehavior_IsShallowWater(u8 behavior);
BOOL TileBehavior_IsJumpNorth(u8 behavior);
BOOL TileBehavior_IsJumpSouth(u8 behavior);
BOOL TileBehavior_IsJumpWest(u8 behavior);
BOOL TileBehavior_IsJumpEast(u8 behavior);
BOOL TileBehavior_IsJumpNorthTwice(u8 behavior);
BOOL TileBehavior_IsJumpSouthTwice(u8 behavior);
BOOL TileBehavior_IsJumpWestTwice(u8 behavior);
BOOL TileBehavior_IsJumpEastTwice(u8 behavior);
BOOL TileBehavior_IsPC(u8 behavior);
BOOL TileBehavior_IsTownMap(u8 behavior);
BOOL TileBehavior_IsPastoriaGymHighGround(u8 behavior);
BOOL TileBehavior_IsPastoriaGymMiddleGround(u8 behavior);
BOOL TileBehavior_IsPastoriaGymLowGround(u8 behavior);
BOOL TileBehavior_IsPastoriaGymWater(u8 behavior);
BOOL TileBehavior_IsEscalatorFlipFace(u8 behavior);
BOOL TileBehavior_IsEscalator(u8 behavior);
BOOL TileBehavior_IsWarpStairsEast(u8 behavior);
BOOL TileBehavior_IsWarpStairsWest(u8 behavior);
BOOL TileBehavior_IsIce(u8 behavior);
BOOL TileBehavior_IsRockClimbNorthSouth(u8 behavior);
BOOL TileBehavior_IsRockClimbEastWest(u8 behavior);
BOOL TileBehavior_IsSmallBookshelf1(u8 behavior);
BOOL TileBehavior_IsSmallBookshelf2(u8 behavior);
BOOL TileBehavior_IsBookshelf1(u8 behavior);
BOOL TileBehavior_IsBookshelf2(u8 behavior);
BOOL TileBehavior_IsTrashCan(u8 behavior);
BOOL TileBehavior_IsMartShelf1(u8 behavior);
BOOL TileBehavior_IsMartShelf2(u8 behavior);
BOOL TileBehavior_IsMartShelf3(u8 behavior);
BOOL TileBehavior_IsMud(u8 behavior);
BOOL TileBehavior_IsDeepMud(u8 behavior);
BOOL TileBehavior_IsMudWithGrass(u8 behavior);
BOOL TileBehavior_IsDeepMudWithGrass(u8 behavior);
BOOL TileBehavior_IsSnow(u8 behavior);
BOOL TileBehavior_IsShallowSnow(u8 behavior);
BOOL TileBehavior_IsDeepSnow(u8 behavior);
BOOL TileBehavior_IsDeeperSnow(u8 behavior);
BOOL TileBehavior_IsDeepestSnow(u8 behavior);
BOOL TileBehavior_IsBikeSlope(u8 behavior);
BOOL TileBehavior_IsBikeSlopeTop(u8 behavior);
BOOL TileBehavior_IsBikeSlopeBottom(u8 behavior);
BOOL TileBehavior_IsBikeRampEastward(u8 behavior);
BOOL TileBehavior_IsBikeRampWestward(u8 behavior);
BOOL TileBehavior_IsCaveFloor(u8 behavior);
BOOL TileBehavior_IsWaterfall(u8 behavior);
BOOL TileBehavior_IsBikeParking(u8 behavior);
BOOL TileBehavior_BlocksMovementNorthward(u8 behavior);
BOOL TileBehavior_BlocksMovementSouthward(u8 behavior);
BOOL TileBehavior_BlocksMovementWestward(u8 behavior);
BOOL TileBehavior_BlocksMovementEastward(u8 behavior);
BOOL TileBehavior_IsPuddle(u8 behavior);
BOOL TileBehavior_HasEncounters(u8 behavior);
BOOL TileBehavior_IsTV(u8 behavior);
BOOL TileBehavior_HasReflectiveSurface(u8 behavior);
BOOL TileBehavior_IsSlideEastward(u8 behavior);
BOOL TileBehavior_IsSlideWestward(u8 behavior);
BOOL TileBehavior_IsSlideNorthward(u8 behavior);
BOOL TileBehavior_IsSlideSouthward(u8 behavior);
BOOL TileBehavior_IsWarpPanel(u8 behavior);
BOOL TileBehavior_IsBridgeStart(u8 behavior);
BOOL TileBehavior_IsBridge(u8 behavior);
BOOL TileBehavior_IsBridgeOverWater(u8 behavior);
BOOL TileBehavior_IsBridgeOverSand(u8 behavior);
BOOL TileBehavior_IsBridgeOverSnow(u8 behavior);
BOOL TileBehavior_IsBikeBridgeNorthSouth(u8 behavior);
BOOL TileBehavior_IsBikeBridgeEastWest(u8 behavior);
BOOL TileBehavior_IsNull(u8 behavior);
BOOL TileBehavior_IsReflective(u8 behavior);
BOOL TileBehavior_IsSnowWithShadows(u8 behavior);
BOOL TileBehavior_ForbidsExplorationKit(u8 behavior);

u8 GetNullTileBehaviorID(void);

#endif // POKEPLATINUM_TILE_BEHAVIOR_H
