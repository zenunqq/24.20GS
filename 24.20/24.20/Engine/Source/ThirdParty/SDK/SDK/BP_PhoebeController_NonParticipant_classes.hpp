#pragma once

#include "Basic.hpp"

#include "BP_PhoebePlayerController_classes.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x10) ABP_PhoebeController_NonParticipant_C : public ABP_PhoebePlayerController_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhoebeController_NonParticipant_C">();
	}
	static class ABP_PhoebeController_NonParticipant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhoebeController_NonParticipant_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_PhoebeController_NonParticipant_C) == 0x000010, "Wrong alignment on ABP_PhoebeController_NonParticipant_C");
static_assert(sizeof(ABP_PhoebeController_NonParticipant_C) == 0x0013D0, "Wrong size on ABP_PhoebeController_NonParticipant_C");

}
