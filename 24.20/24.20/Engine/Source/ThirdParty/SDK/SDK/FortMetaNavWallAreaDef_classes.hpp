#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UFortMetaNavWallAreaDef_C final : public UFortMetaNavArea_Wall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortMetaNavWallAreaDef_C">();
	}
	static class UFortMetaNavWallAreaDef_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMetaNavWallAreaDef_C>();
	}
};
static_assert(alignof(UFortMetaNavWallAreaDef_C) == 0x000008, "Wrong alignment on UFortMetaNavWallAreaDef_C");
static_assert(sizeof(UFortMetaNavWallAreaDef_C) == 0x000058, "Wrong size on UFortMetaNavWallAreaDef_C");

}
