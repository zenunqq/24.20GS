#pragma once

#include "Basic.hpp"

#include "SkeletalMerging_structs.hpp"

namespace SDK::Params
{

struct SkeletalMergingLibrary_MergeMeshes final
{
public:
	struct FSkeletalMeshMergeParams               Params_0;
	class USkeletalMesh*                          ReturnValue;
};
static_assert(alignof(SkeletalMergingLibrary_MergeMeshes) == 0x000008, "Wrong alignment on SkeletalMergingLibrary_MergeMeshes");
static_assert(sizeof(SkeletalMergingLibrary_MergeMeshes) == 0x000048, "Wrong size on SkeletalMergingLibrary_MergeMeshes");
static_assert(offsetof(SkeletalMergingLibrary_MergeMeshes, Params_0) == 0x000000, "Member 'SkeletalMergingLibrary_MergeMeshes::Params_0' has a wrong offset!");
static_assert(offsetof(SkeletalMergingLibrary_MergeMeshes, ReturnValue) == 0x000040, "Member 'SkeletalMergingLibrary_MergeMeshes::ReturnValue' has a wrong offset!");

struct SkeletalMergingLibrary_MergeSkeletons final
{
public:
	struct FSkeletonMergeParams                   Params_0;
	class USkeleton*                              ReturnValue;
};
static_assert(alignof(SkeletalMergingLibrary_MergeSkeletons) == 0x000008, "Wrong alignment on SkeletalMergingLibrary_MergeSkeletons");
static_assert(sizeof(SkeletalMergingLibrary_MergeSkeletons) == 0x000020, "Wrong size on SkeletalMergingLibrary_MergeSkeletons");
static_assert(offsetof(SkeletalMergingLibrary_MergeSkeletons, Params_0) == 0x000000, "Member 'SkeletalMergingLibrary_MergeSkeletons::Params_0' has a wrong offset!");
static_assert(offsetof(SkeletalMergingLibrary_MergeSkeletons, ReturnValue) == 0x000018, "Member 'SkeletalMergingLibrary_MergeSkeletons::ReturnValue' has a wrong offset!");

}
