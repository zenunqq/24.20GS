#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FSkeletonCachePair final
{
public:
	class UAnimSequence*                          Skeletons;
	class UGeometryCache*                         Cache;
};
static_assert(alignof(FSkeletonCachePair) == 0x000008, "Wrong alignment on FSkeletonCachePair");
static_assert(sizeof(FSkeletonCachePair) == 0x000010, "Wrong size on FSkeletonCachePair");
static_assert(offsetof(FSkeletonCachePair, Skeletons) == 0x000000, "Member 'FSkeletonCachePair::Skeletons' has a wrong offset!");
static_assert(offsetof(FSkeletonCachePair, Cache) == 0x000008, "Member 'FSkeletonCachePair::Cache' has a wrong offset!");

struct FClothPartEditorData final
{
public:
	int32                                         PCACoeffNum;
	uint8                                         Pad_4[0x4];
	class FString                                 VertexMapPath;
	int32                                         MeshIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FClothPartEditorData) == 0x000008, "Wrong alignment on FClothPartEditorData");
static_assert(sizeof(FClothPartEditorData) == 0x000020, "Wrong size on FClothPartEditorData");
static_assert(offsetof(FClothPartEditorData, PCACoeffNum) == 0x000000, "Member 'FClothPartEditorData::PCACoeffNum' has a wrong offset!");
static_assert(offsetof(FClothPartEditorData, VertexMapPath) == 0x000008, "Member 'FClothPartEditorData::VertexMapPath' has a wrong offset!");
static_assert(offsetof(FClothPartEditorData, MeshIndex) == 0x000018, "Member 'FClothPartEditorData::MeshIndex' has a wrong offset!");

struct FClothPartData final
{
public:
	int32                                         PCACoeffNum;
	uint32                                        PCACoeffStart;
	uint32                                        NumVertices;
	uint32                                        NumNeighbors;
	TArray<uint32>                                VertexMap;
	TArray<float>                                 PCABasis;
	TArray<float>                                 VertexMean;
	TArray<float>                                 NeighborCoeffs;
	TArray<float>                                 NeighborOffsets;
};
static_assert(alignof(FClothPartData) == 0x000008, "Wrong alignment on FClothPartData");
static_assert(sizeof(FClothPartData) == 0x000060, "Wrong size on FClothPartData");
static_assert(offsetof(FClothPartData, PCACoeffNum) == 0x000000, "Member 'FClothPartData::PCACoeffNum' has a wrong offset!");
static_assert(offsetof(FClothPartData, PCACoeffStart) == 0x000004, "Member 'FClothPartData::PCACoeffStart' has a wrong offset!");
static_assert(offsetof(FClothPartData, NumVertices) == 0x000008, "Member 'FClothPartData::NumVertices' has a wrong offset!");
static_assert(offsetof(FClothPartData, NumNeighbors) == 0x00000C, "Member 'FClothPartData::NumNeighbors' has a wrong offset!");
static_assert(offsetof(FClothPartData, VertexMap) == 0x000010, "Member 'FClothPartData::VertexMap' has a wrong offset!");
static_assert(offsetof(FClothPartData, PCABasis) == 0x000020, "Member 'FClothPartData::PCABasis' has a wrong offset!");
static_assert(offsetof(FClothPartData, VertexMean) == 0x000030, "Member 'FClothPartData::VertexMean' has a wrong offset!");
static_assert(offsetof(FClothPartData, NeighborCoeffs) == 0x000040, "Member 'FClothPartData::NeighborCoeffs' has a wrong offset!");
static_assert(offsetof(FClothPartData, NeighborOffsets) == 0x000050, "Member 'FClothPartData::NeighborOffsets' has a wrong offset!");

}
