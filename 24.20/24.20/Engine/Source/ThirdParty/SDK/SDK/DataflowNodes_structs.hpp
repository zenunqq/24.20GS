#pragma once

#include "Basic.hpp"

#include "DataflowCore_structs.hpp"

namespace SDK
{

struct FSelectionSetDataflowNode final : public FDataflowNode
{
public:
	class FString                                 Indices;
	TArray<int32>                                 IndicesOut;
};
static_assert(alignof(FSelectionSetDataflowNode) == 0x000008, "Wrong alignment on FSelectionSetDataflowNode");
static_assert(sizeof(FSelectionSetDataflowNode) == 0x000108, "Wrong size on FSelectionSetDataflowNode");
static_assert(offsetof(FSelectionSetDataflowNode, Indices) == 0x0000E8, "Member 'FSelectionSetDataflowNode::Indices' has a wrong offset!");
static_assert(offsetof(FSelectionSetDataflowNode, IndicesOut) == 0x0000F8, "Member 'FSelectionSetDataflowNode::IndicesOut' has a wrong offset!");

struct FGetSkeletalMeshDataflowNode final : public FDataflowNode
{
public:
	class USkeletalMesh*                          SkeletalMesh;
	class FName                                   PropertyName;
	uint8                                         Pad_F4[0x4];
};
static_assert(alignof(FGetSkeletalMeshDataflowNode) == 0x000008, "Wrong alignment on FGetSkeletalMeshDataflowNode");
static_assert(sizeof(FGetSkeletalMeshDataflowNode) == 0x0000F8, "Wrong size on FGetSkeletalMeshDataflowNode");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, SkeletalMesh) == 0x0000E8, "Member 'FGetSkeletalMeshDataflowNode::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FGetSkeletalMeshDataflowNode, PropertyName) == 0x0000F0, "Member 'FGetSkeletalMeshDataflowNode::PropertyName' has a wrong offset!");

struct FGetSkeletonDataflowNode final : public FDataflowNode
{
public:
	class USkeleton*                              Skeleton;
	class FName                                   PropertyName;
	uint8                                         Pad_F4[0x4];
};
static_assert(alignof(FGetSkeletonDataflowNode) == 0x000008, "Wrong alignment on FGetSkeletonDataflowNode");
static_assert(sizeof(FGetSkeletonDataflowNode) == 0x0000F8, "Wrong size on FGetSkeletonDataflowNode");
static_assert(offsetof(FGetSkeletonDataflowNode, Skeleton) == 0x0000E8, "Member 'FGetSkeletonDataflowNode::Skeleton' has a wrong offset!");
static_assert(offsetof(FGetSkeletonDataflowNode, PropertyName) == 0x0000F0, "Member 'FGetSkeletonDataflowNode::PropertyName' has a wrong offset!");

struct FSkeletalMeshBoneDataflowNode final : public FDataflowNode
{
public:
	class FName                                   BoneName;
	uint8                                         Pad_EC[0x4];
	class USkeletalMesh*                          SkeletalMesh;
	int32                                         BoneIndexOut;
	uint8                                         Pad_FC[0x4];
};
static_assert(alignof(FSkeletalMeshBoneDataflowNode) == 0x000008, "Wrong alignment on FSkeletalMeshBoneDataflowNode");
static_assert(sizeof(FSkeletalMeshBoneDataflowNode) == 0x000100, "Wrong size on FSkeletalMeshBoneDataflowNode");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneName) == 0x0000E8, "Member 'FSkeletalMeshBoneDataflowNode::BoneName' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, SkeletalMesh) == 0x0000F0, "Member 'FSkeletalMeshBoneDataflowNode::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneIndexOut) == 0x0000F8, "Member 'FSkeletalMeshBoneDataflowNode::BoneIndexOut' has a wrong offset!");

struct FGetStaticMeshDataflowNode final : public FDataflowNode
{
public:
	class UStaticMesh*                            StaticMesh;
	class FName                                   PropertyName;
	uint8                                         Pad_F4[0x4];
};
static_assert(alignof(FGetStaticMeshDataflowNode) == 0x000008, "Wrong alignment on FGetStaticMeshDataflowNode");
static_assert(sizeof(FGetStaticMeshDataflowNode) == 0x0000F8, "Wrong size on FGetStaticMeshDataflowNode");
static_assert(offsetof(FGetStaticMeshDataflowNode, StaticMesh) == 0x0000E8, "Member 'FGetStaticMeshDataflowNode::StaticMesh' has a wrong offset!");
static_assert(offsetof(FGetStaticMeshDataflowNode, PropertyName) == 0x0000F0, "Member 'FGetStaticMeshDataflowNode::PropertyName' has a wrong offset!");

}
