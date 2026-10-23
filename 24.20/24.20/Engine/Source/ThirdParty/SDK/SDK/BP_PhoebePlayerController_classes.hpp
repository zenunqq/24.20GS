#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x10) ABP_PhoebePlayerController_C : public AFortAthenaAIBotController
{
public:
	class UFortBlackboardComponent*               Blackboard1;
	class UFortAthenaAIBotBuildingComponent*      FortAthenaAIBotBuilding;
	class UAIPerceptionComponent*                 AIPerception;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhoebePlayerController_C">();
	}
	static class ABP_PhoebePlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhoebePlayerController_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_PhoebePlayerController_C) == 0x000010, "Wrong alignment on ABP_PhoebePlayerController_C");
static_assert(sizeof(ABP_PhoebePlayerController_C) == 0x0013D0, "Wrong size on ABP_PhoebePlayerController_C");
static_assert(offsetof(ABP_PhoebePlayerController_C, Blackboard1) == 0x0013B0, "Member 'ABP_PhoebePlayerController_C::Blackboard1' has a wrong offset!");
static_assert(offsetof(ABP_PhoebePlayerController_C, FortAthenaAIBotBuilding) == 0x0013B8, "Member 'ABP_PhoebePlayerController_C::FortAthenaAIBotBuilding' has a wrong offset!");
static_assert(offsetof(ABP_PhoebePlayerController_C, AIPerception) == 0x0013C0, "Member 'ABP_PhoebePlayerController_C::AIPerception' has a wrong offset!");

}
