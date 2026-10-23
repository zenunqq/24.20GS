#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class USkeletalMergingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class USkeletalMesh* MergeMeshes(const struct FSkeletalMeshMergeParams& Params_0);
	static class USkeleton* MergeSkeletons(const struct FSkeletonMergeParams& Params_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMergingLibrary">();
	}
	static class USkeletalMergingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMergingLibrary>();
	}
};
static_assert(alignof(USkeletalMergingLibrary) == 0x000008, "Wrong alignment on USkeletalMergingLibrary");
static_assert(sizeof(USkeletalMergingLibrary) == 0x000028, "Wrong size on USkeletalMergingLibrary");

}
