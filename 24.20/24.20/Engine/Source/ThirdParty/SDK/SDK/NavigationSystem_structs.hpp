#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class ERuntimeGenerationType : uint8
{
	Static                                   = 0,
	DynamicModifiersOnly                     = 1,
	Dynamic                                  = 2,
	LegacyGeneration                         = 3,
	ERuntimeGenerationType_MAX               = 4,
};

enum class ENavCostDisplay : uint8
{
	TotalCost                                = 0,
	HeuristicOnly                            = 1,
	RealCostOnly                             = 2,
	ENavCostDisplay_MAX                      = 3,
};

enum class ERecastPartitioning : uint8
{
	Monotone                                 = 0,
	Watershed                                = 1,
	ChunkyMonotone                           = 2,
	ERecastPartitioning_MAX                  = 3,
};

enum class EHeightFieldRenderMode : uint8
{
	Solid                                    = 0,
	Walkable                                 = 1,
	EHeightFieldRenderMode_MAX               = 2,
};

enum class ENavSystemOverridePolicy : uint8
{
	Override                                 = 0,
	Append                                   = 1,
	Skip                                     = 2,
	ENavSystemOverridePolicy_MAX             = 3,
};

struct FNavCollisionCylinder final
{
public:
	struct FVector                                Offset;
	float                                         Radius;
	float                                         Height;
};
static_assert(alignof(FNavCollisionCylinder) == 0x000008, "Wrong alignment on FNavCollisionCylinder");
static_assert(sizeof(FNavCollisionCylinder) == 0x000020, "Wrong size on FNavCollisionCylinder");
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x000000, "Member 'FNavCollisionCylinder::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Radius) == 0x000018, "Member 'FNavCollisionCylinder::Radius' has a wrong offset!");
static_assert(offsetof(FNavCollisionCylinder, Height) == 0x00001C, "Member 'FNavCollisionCylinder::Height' has a wrong offset!");

struct FNavCollisionBox final
{
public:
	struct FVector                                Offset;
	struct FVector                                Extent;
};
static_assert(alignof(FNavCollisionBox) == 0x000008, "Wrong alignment on FNavCollisionBox");
static_assert(sizeof(FNavCollisionBox) == 0x000030, "Wrong size on FNavCollisionBox");
static_assert(offsetof(FNavCollisionBox, Offset) == 0x000000, "Member 'FNavCollisionBox::Offset' has a wrong offset!");
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000018, "Member 'FNavCollisionBox::Extent' has a wrong offset!");

struct FNavigationFilterArea final
{
public:
	TSubclassOf<class UNavArea>                   AreaClass;
	float                                         TravelCostOverride;
	float                                         EnteringCostOverride;
	uint8                                         bIsExcluded : 1;
	uint8                                         bOverrideTravelCost : 1;
	uint8                                         bOverrideEnteringCost : 1;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FNavigationFilterArea) == 0x000008, "Wrong alignment on FNavigationFilterArea");
static_assert(sizeof(FNavigationFilterArea) == 0x000018, "Wrong size on FNavigationFilterArea");
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x000000, "Member 'FNavigationFilterArea::AreaClass' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, TravelCostOverride) == 0x000008, "Member 'FNavigationFilterArea::TravelCostOverride' has a wrong offset!");
static_assert(offsetof(FNavigationFilterArea, EnteringCostOverride) == 0x00000C, "Member 'FNavigationFilterArea::EnteringCostOverride' has a wrong offset!");

struct alignas(0x04) FNavigationFilterFlags final
{
public:
	uint8                                         bNavFlag0 : 1;
	uint8                                         bNavFlag1 : 1;
	uint8                                         bNavFlag2 : 1;
	uint8                                         bNavFlag3 : 1;
	uint8                                         bNavFlag4 : 1;
	uint8                                         bNavFlag5 : 1;
	uint8                                         bNavFlag6 : 1;
	uint8                                         bNavFlag7 : 1;
	uint8                                         bNavFlag8 : 1;
	uint8                                         bNavFlag9 : 1;
	uint8                                         bNavFlag10 : 1;
	uint8                                         bNavFlag11 : 1;
	uint8                                         bNavFlag12 : 1;
	uint8                                         bNavFlag13 : 1;
	uint8                                         bNavFlag14 : 1;
	uint8                                         bNavFlag15 : 1;
	uint8                                         Pad_2[0x2];
};
static_assert(alignof(FNavigationFilterFlags) == 0x000004, "Wrong alignment on FNavigationFilterFlags");
static_assert(sizeof(FNavigationFilterFlags) == 0x000004, "Wrong size on FNavigationFilterFlags");

struct alignas(0x08) FNavGraphEdge final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FNavGraphEdge) == 0x000008, "Wrong alignment on FNavGraphEdge");
static_assert(sizeof(FNavGraphEdge) == 0x000018, "Wrong size on FNavGraphEdge");

struct FNavGraphNode final
{
public:
	class UObject*                                Owner;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FNavGraphNode) == 0x000008, "Wrong alignment on FNavGraphNode");
static_assert(sizeof(FNavGraphNode) == 0x000018, "Wrong size on FNavGraphNode");
static_assert(offsetof(FNavGraphNode, Owner) == 0x000000, "Member 'FNavGraphNode::Owner' has a wrong offset!");

struct FSupportedAreaData final
{
public:
	class FString                                 AreaClassName;
	int32                                         AreaID;
	uint8                                         Pad_14[0x4];
	TSubclassOf<class UObject>                    AreaClass;
};
static_assert(alignof(FSupportedAreaData) == 0x000008, "Wrong alignment on FSupportedAreaData");
static_assert(sizeof(FSupportedAreaData) == 0x000020, "Wrong size on FSupportedAreaData");
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x000000, "Member 'FSupportedAreaData::AreaClassName' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaID) == 0x000010, "Member 'FSupportedAreaData::AreaID' has a wrong offset!");
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x000018, "Member 'FSupportedAreaData::AreaClass' has a wrong offset!");

struct FNavLinkCustomInstanceData final : public FActorComponentInstanceData
{
public:
	uint32                                        NavLinkUserId;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FNavLinkCustomInstanceData) == 0x000008, "Wrong alignment on FNavLinkCustomInstanceData");
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x000070, "Wrong size on FNavLinkCustomInstanceData");
static_assert(offsetof(FNavLinkCustomInstanceData, NavLinkUserId) == 0x000068, "Member 'FNavLinkCustomInstanceData::NavLinkUserId' has a wrong offset!");

struct FRecastNavMeshGenerationProperties final
{
public:
	int32                                         TilePoolSize;
	float                                         TileSizeUU;
	float                                         CellSize;
	float                                         CellHeight;
	float                                         AgentRadius;
	float                                         AgentHeight;
	float                                         AgentMaxSlope;
	float                                         AgentMaxStepHeight;
	float                                         MinRegionArea;
	float                                         MergeRegionSize;
	float                                         MaxSimplificationError;
	int32                                         TileNumberHardLimit;
	ERecastPartitioning                           RegionPartitioning;
	ERecastPartitioning                           LayerPartitioning;
	uint8                                         Pad_32[0x2];
	int32                                         RegionChunkSplits;
	int32                                         LayerChunkSplits;
	uint8                                         bSortNavigationAreasByCost : 1;
	uint8                                         bPerformVoxelFiltering : 1;
	uint8                                         bMarkLowHeightAreas : 1;
	uint8                                         bUseExtraTopCellWhenMarkingAreas : 1;
	uint8                                         bFilterLowSpanSequences : 1;
	uint8                                         bFilterLowSpanFromTileCache : 1;
	uint8                                         bFixedTilePoolSize : 1;
	uint8                                         bIsWorldPartitioned : 1;
	uint8                                         Pad_3D[0x3];
};
static_assert(alignof(FRecastNavMeshGenerationProperties) == 0x000004, "Wrong alignment on FRecastNavMeshGenerationProperties");
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x000040, "Wrong size on FRecastNavMeshGenerationProperties");
static_assert(offsetof(FRecastNavMeshGenerationProperties, TilePoolSize) == 0x000000, "Member 'FRecastNavMeshGenerationProperties::TilePoolSize' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, TileSizeUU) == 0x000004, "Member 'FRecastNavMeshGenerationProperties::TileSizeUU' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, CellSize) == 0x000008, "Member 'FRecastNavMeshGenerationProperties::CellSize' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, CellHeight) == 0x00000C, "Member 'FRecastNavMeshGenerationProperties::CellHeight' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentRadius) == 0x000010, "Member 'FRecastNavMeshGenerationProperties::AgentRadius' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentHeight) == 0x000014, "Member 'FRecastNavMeshGenerationProperties::AgentHeight' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentMaxSlope) == 0x000018, "Member 'FRecastNavMeshGenerationProperties::AgentMaxSlope' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, AgentMaxStepHeight) == 0x00001C, "Member 'FRecastNavMeshGenerationProperties::AgentMaxStepHeight' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, MinRegionArea) == 0x000020, "Member 'FRecastNavMeshGenerationProperties::MinRegionArea' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, MergeRegionSize) == 0x000024, "Member 'FRecastNavMeshGenerationProperties::MergeRegionSize' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, MaxSimplificationError) == 0x000028, "Member 'FRecastNavMeshGenerationProperties::MaxSimplificationError' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, TileNumberHardLimit) == 0x00002C, "Member 'FRecastNavMeshGenerationProperties::TileNumberHardLimit' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionPartitioning) == 0x000030, "Member 'FRecastNavMeshGenerationProperties::RegionPartitioning' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerPartitioning) == 0x000031, "Member 'FRecastNavMeshGenerationProperties::LayerPartitioning' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, RegionChunkSplits) == 0x000034, "Member 'FRecastNavMeshGenerationProperties::RegionChunkSplits' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshGenerationProperties, LayerChunkSplits) == 0x000038, "Member 'FRecastNavMeshGenerationProperties::LayerChunkSplits' has a wrong offset!");

struct FRecastNavMeshTileGenerationDebug final
{
public:
	uint8                                         bEnabled : 1;
	uint8                                         Pad_1[0x3];
	struct FIntVector                             TileCoordinate;
	uint8                                         bGenerateDebugTileOnly : 1;
	uint8                                         bCollisionGeometry : 1;
	uint8                                         Pad_11[0x3];
	EHeightFieldRenderMode                        HeightFieldRenderMode;
	uint8                                         Pad_15[0x3];
	uint8                                         bHeightfieldFromRasterization : 1;
	uint8                                         bHeightfieldPostInclusionBoundsFiltering : 1;
	uint8                                         bHeightfieldPostHeightFiltering : 1;
	uint8                                         bHeightfieldBounds : 1;
	uint8                                         bCompactHeightfield : 1;
	uint8                                         bCompactHeightfieldEroded : 1;
	uint8                                         bCompactHeightfieldRegions : 1;
	uint8                                         bCompactHeightfieldDistances : 1;
	uint8                                         bTileCacheLayerAreas : 1;
	uint8                                         bTileCacheLayerRegions : 1;
	uint8                                         bTileCacheContours : 1;
	uint8                                         bTileCachePolyMesh : 1;
	uint8                                         bTileCacheDetailMesh : 1;
	uint8                                         Pad_1A[0x2];
};
static_assert(alignof(FRecastNavMeshTileGenerationDebug) == 0x000004, "Wrong alignment on FRecastNavMeshTileGenerationDebug");
static_assert(sizeof(FRecastNavMeshTileGenerationDebug) == 0x00001C, "Wrong size on FRecastNavMeshTileGenerationDebug");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, TileCoordinate) == 0x000004, "Member 'FRecastNavMeshTileGenerationDebug::TileCoordinate' has a wrong offset!");
static_assert(offsetof(FRecastNavMeshTileGenerationDebug, HeightFieldRenderMode) == 0x000014, "Member 'FRecastNavMeshTileGenerationDebug::HeightFieldRenderMode' has a wrong offset!");

struct FNavMeshResolutionParam final
{
public:
	float                                         CellSize;
	float                                         CellHeight;
};
static_assert(alignof(FNavMeshResolutionParam) == 0x000004, "Wrong alignment on FNavMeshResolutionParam");
static_assert(sizeof(FNavMeshResolutionParam) == 0x000008, "Wrong size on FNavMeshResolutionParam");
static_assert(offsetof(FNavMeshResolutionParam, CellSize) == 0x000000, "Member 'FNavMeshResolutionParam::CellSize' has a wrong offset!");
static_assert(offsetof(FNavMeshResolutionParam, CellHeight) == 0x000004, "Member 'FNavMeshResolutionParam::CellHeight' has a wrong offset!");

}
