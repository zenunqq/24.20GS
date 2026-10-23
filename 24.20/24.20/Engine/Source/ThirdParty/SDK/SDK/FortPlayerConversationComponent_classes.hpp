#pragma once

#include "Basic.hpp"

#include "FortniteConversationRuntime_classes.hpp"

namespace SDK
{

class UFortPlayerConversationComponent_C final : public UFortPlayerConversationComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortPlayerConversationComponent_C">();
	}
	static class UFortPlayerConversationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerConversationComponent_C>();
	}
};
static_assert(alignof(UFortPlayerConversationComponent_C) == 0x000008, "Wrong alignment on UFortPlayerConversationComponent_C");
static_assert(sizeof(UFortPlayerConversationComponent_C) == 0x0002C8, "Wrong size on UFortPlayerConversationComponent_C");

}
