#pragma once

#include "Basic.hpp"

#include "EventModeRuntime_classes.hpp"

namespace SDK
{

class UEventMode_Activator_Component_C final : public UFortGameFrameworkComponent_EventMode
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventMode_Activator_Component_C">();
	}
	static class UEventMode_Activator_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventMode_Activator_Component_C>();
	}
};
static_assert(alignof(UEventMode_Activator_Component_C) == 0x000008, "Wrong alignment on UEventMode_Activator_Component_C");
static_assert(sizeof(UEventMode_Activator_Component_C) == 0x000220, "Wrong size on UEventMode_Activator_Component_C");

}
