#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ACLPlugin_structs.hpp"

namespace SDK::Params
{

struct AnimationCompressionLibraryDatabase_GetVisualFidelity final
{
public:
	class UAnimationCompressionLibraryDatabase*   DatabaseAsset;
	EACLVisualFidelity                            ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AnimationCompressionLibraryDatabase_GetVisualFidelity) == 0x000008, "Wrong alignment on AnimationCompressionLibraryDatabase_GetVisualFidelity");
static_assert(sizeof(AnimationCompressionLibraryDatabase_GetVisualFidelity) == 0x000010, "Wrong size on AnimationCompressionLibraryDatabase_GetVisualFidelity");
static_assert(offsetof(AnimationCompressionLibraryDatabase_GetVisualFidelity, DatabaseAsset) == 0x000000, "Member 'AnimationCompressionLibraryDatabase_GetVisualFidelity::DatabaseAsset' has a wrong offset!");
static_assert(offsetof(AnimationCompressionLibraryDatabase_GetVisualFidelity, ReturnValue) == 0x000008, "Member 'AnimationCompressionLibraryDatabase_GetVisualFidelity::ReturnValue' has a wrong offset!");

struct AnimationCompressionLibraryDatabase_SetVisualFidelity final
{
public:
	class UObject*                                WorldContextObject;
	struct FLatentActionInfo                      LatentInfo;
	class UAnimationCompressionLibraryDatabase*   DatabaseAsset;
	EACLVisualFidelityChangeResult                Result;
	EACLVisualFidelity                            VisualFidelity;
	uint8                                         Pad_2A[0x6];
};
static_assert(alignof(AnimationCompressionLibraryDatabase_SetVisualFidelity) == 0x000008, "Wrong alignment on AnimationCompressionLibraryDatabase_SetVisualFidelity");
static_assert(sizeof(AnimationCompressionLibraryDatabase_SetVisualFidelity) == 0x000030, "Wrong size on AnimationCompressionLibraryDatabase_SetVisualFidelity");
static_assert(offsetof(AnimationCompressionLibraryDatabase_SetVisualFidelity, WorldContextObject) == 0x000000, "Member 'AnimationCompressionLibraryDatabase_SetVisualFidelity::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationCompressionLibraryDatabase_SetVisualFidelity, LatentInfo) == 0x000008, "Member 'AnimationCompressionLibraryDatabase_SetVisualFidelity::LatentInfo' has a wrong offset!");
static_assert(offsetof(AnimationCompressionLibraryDatabase_SetVisualFidelity, DatabaseAsset) == 0x000020, "Member 'AnimationCompressionLibraryDatabase_SetVisualFidelity::DatabaseAsset' has a wrong offset!");
static_assert(offsetof(AnimationCompressionLibraryDatabase_SetVisualFidelity, Result) == 0x000028, "Member 'AnimationCompressionLibraryDatabase_SetVisualFidelity::Result' has a wrong offset!");
static_assert(offsetof(AnimationCompressionLibraryDatabase_SetVisualFidelity, VisualFidelity) == 0x000029, "Member 'AnimationCompressionLibraryDatabase_SetVisualFidelity::VisualFidelity' has a wrong offset!");

}
