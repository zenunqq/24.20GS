#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FSkeletalMeshMergeParams final
{
public:
	TArray<struct FSkelMeshMergeSectionMapping>   MeshSectionMappings;
	TArray<struct FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh;
	TArray<class USkeletalMesh*>                  MeshesToMerge;
	int32                                         StripTopLODS;
	uint8                                         bNeedsCpuAccess : 1;
	uint8                                         bSkeletonBefore : 1;
	uint8                                         Pad_35[0x3];
	class USkeleton*                              Skeleton;
};
static_assert(alignof(FSkeletalMeshMergeParams) == 0x000008, "Wrong alignment on FSkeletalMeshMergeParams");
static_assert(sizeof(FSkeletalMeshMergeParams) == 0x000040, "Wrong size on FSkeletalMeshMergeParams");
static_assert(offsetof(FSkeletalMeshMergeParams, MeshSectionMappings) == 0x000000, "Member 'FSkeletalMeshMergeParams::MeshSectionMappings' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshMergeParams, UVTransformsPerMesh) == 0x000010, "Member 'FSkeletalMeshMergeParams::UVTransformsPerMesh' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshMergeParams, MeshesToMerge) == 0x000020, "Member 'FSkeletalMeshMergeParams::MeshesToMerge' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshMergeParams, StripTopLODS) == 0x000030, "Member 'FSkeletalMeshMergeParams::StripTopLODS' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshMergeParams, Skeleton) == 0x000038, "Member 'FSkeletalMeshMergeParams::Skeleton' has a wrong offset!");

struct FSkeletonMergeParams final
{
public:
	TArray<class USkeleton*>                      SkeletonsToMerge;
	bool                                          bMergeSockets;
	bool                                          bMergeVirtualBones;
	bool                                          bMergeCurveNames;
	bool                                          bMergeBlendProfiles;
	bool                                          bMergeAnimSlotGroups;
	bool                                          bCheckSkeletonsCompatibility;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(FSkeletonMergeParams) == 0x000008, "Wrong alignment on FSkeletonMergeParams");
static_assert(sizeof(FSkeletonMergeParams) == 0x000018, "Wrong size on FSkeletonMergeParams");
static_assert(offsetof(FSkeletonMergeParams, SkeletonsToMerge) == 0x000000, "Member 'FSkeletonMergeParams::SkeletonsToMerge' has a wrong offset!");
static_assert(offsetof(FSkeletonMergeParams, bMergeSockets) == 0x000010, "Member 'FSkeletonMergeParams::bMergeSockets' has a wrong offset!");
static_assert(offsetof(FSkeletonMergeParams, bMergeVirtualBones) == 0x000011, "Member 'FSkeletonMergeParams::bMergeVirtualBones' has a wrong offset!");
static_assert(offsetof(FSkeletonMergeParams, bMergeCurveNames) == 0x000012, "Member 'FSkeletonMergeParams::bMergeCurveNames' has a wrong offset!");
static_assert(offsetof(FSkeletonMergeParams, bMergeBlendProfiles) == 0x000013, "Member 'FSkeletonMergeParams::bMergeBlendProfiles' has a wrong offset!");
static_assert(offsetof(FSkeletonMergeParams, bMergeAnimSlotGroups) == 0x000014, "Member 'FSkeletonMergeParams::bMergeAnimSlotGroups' has a wrong offset!");
static_assert(offsetof(FSkeletonMergeParams, bCheckSkeletonsCompatibility) == 0x000015, "Member 'FSkeletonMergeParams::bCheckSkeletonsCompatibility' has a wrong offset!");

}
