#pragma once

#include "Basic.hpp"

#include "InfernoRuntime_classes.hpp"

namespace SDK
{

class UVoxelFireAttachConditionHandler_C final : public UFortCurieElementAttachConditionHandlerVoxelFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoxelFireAttachConditionHandler_C">();
	}
	static class UVoxelFireAttachConditionHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoxelFireAttachConditionHandler_C>();
	}
};
static_assert(alignof(UVoxelFireAttachConditionHandler_C) == 0x000008, "Wrong alignment on UVoxelFireAttachConditionHandler_C");
static_assert(sizeof(UVoxelFireAttachConditionHandler_C) == 0x000040, "Wrong size on UVoxelFireAttachConditionHandler_C");

}
