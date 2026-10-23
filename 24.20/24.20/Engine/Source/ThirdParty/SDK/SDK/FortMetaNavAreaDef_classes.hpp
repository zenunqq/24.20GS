#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UFortMetaNavAreaDef_C final : public UFortMetaNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortMetaNavAreaDef_C">();
	}
	static class UFortMetaNavAreaDef_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMetaNavAreaDef_C>();
	}
};
static_assert(alignof(UFortMetaNavAreaDef_C) == 0x000008, "Wrong alignment on UFortMetaNavAreaDef_C");
static_assert(sizeof(UFortMetaNavAreaDef_C) == 0x000058, "Wrong size on UFortMetaNavAreaDef_C");

}
