#pragma once

#include "Basic.hpp"

#include "BP_VendAISpawner_Base_classes.hpp"

namespace SDK
{

class ABP_VendAISpawner_Nug_C final : public ABP_VendAISpawner_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VendAISpawner_Nug_C">();
	}
	static class ABP_VendAISpawner_Nug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VendAISpawner_Nug_C>();
	}
};
static_assert(alignof(ABP_VendAISpawner_Nug_C) == 0x000008, "Wrong alignment on ABP_VendAISpawner_Nug_C");
static_assert(sizeof(ABP_VendAISpawner_Nug_C) == 0x0002B0, "Wrong size on ABP_VendAISpawner_Nug_C");

}
