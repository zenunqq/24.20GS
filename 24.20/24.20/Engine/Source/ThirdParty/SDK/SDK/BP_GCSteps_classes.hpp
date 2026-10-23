#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UBP_GCSteps_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GCSteps_C">();
	}
	static class UBP_GCSteps_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GCSteps_C>();
	}
};
static_assert(alignof(UBP_GCSteps_C) == 0x000010, "Wrong alignment on UBP_GCSteps_C");
static_assert(sizeof(UBP_GCSteps_C) == 0x000210, "Wrong size on UBP_GCSteps_C");

}
