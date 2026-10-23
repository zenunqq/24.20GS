#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULoginInteractionHost_C final : public UFortLoginInteractions
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginInteractionHost_C">();
	}
	static class ULoginInteractionHost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginInteractionHost_C>();
	}
};
static_assert(alignof(ULoginInteractionHost_C) == 0x000008, "Wrong alignment on ULoginInteractionHost_C");
static_assert(sizeof(ULoginInteractionHost_C) == 0x0004F8, "Wrong size on ULoginInteractionHost_C");

}
