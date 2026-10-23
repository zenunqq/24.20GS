#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UShowdownEventEmptySpacer_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownEventEmptySpacer_C">();
	}
	static class UShowdownEventEmptySpacer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownEventEmptySpacer_C>();
	}
};
static_assert(alignof(UShowdownEventEmptySpacer_C) == 0x000008, "Wrong alignment on UShowdownEventEmptySpacer_C");
static_assert(sizeof(UShowdownEventEmptySpacer_C) == 0x000268, "Wrong size on UShowdownEventEmptySpacer_C");

}
