#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFrontendEventNotifications_C final : public UFortFrontendEventNotifications
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendEventNotifications_C">();
	}
	static class UFrontendEventNotifications_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendEventNotifications_C>();
	}
};
static_assert(alignof(UFrontendEventNotifications_C) == 0x000008, "Wrong alignment on UFrontendEventNotifications_C");
static_assert(sizeof(UFrontendEventNotifications_C) == 0x000368, "Wrong size on UFrontendEventNotifications_C");

}
