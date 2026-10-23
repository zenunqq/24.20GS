#pragma once

#include "Basic.hpp"

#include "InfernoRuntime_classes.hpp"

namespace SDK
{

class UVoxelFireAttachHandler_C final : public UFortCurieElementAttachHandlerVoxelFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoxelFireAttachHandler_C">();
	}
	static class UVoxelFireAttachHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoxelFireAttachHandler_C>();
	}
};
static_assert(alignof(UVoxelFireAttachHandler_C) == 0x000008, "Wrong alignment on UVoxelFireAttachHandler_C");
static_assert(sizeof(UVoxelFireAttachHandler_C) == 0x000090, "Wrong size on UVoxelFireAttachHandler_C");

}
