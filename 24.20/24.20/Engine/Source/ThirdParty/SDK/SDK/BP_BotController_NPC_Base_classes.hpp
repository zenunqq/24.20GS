#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "BP_PhoebeController_NonParticipant_classes.hpp"

namespace SDK
{

class ABP_BotController_NPC_Base_C final : public ABP_PhoebeController_NonParticipant_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortAthenaNpcPatrollingComponent*      FortAthenaNpcPatrolling;
	class UClass*                                 GE_Patrolling;
	struct FActiveGameplayEffectHandle            GE_PatrollingSpeedHandle;
	struct FRotator                               SavedRotationRate;
	struct FRotator                               PatrollingRotationRate;

public:
	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature();
	void BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature();
	void ExecuteUbergraph_BP_BotController_NPC_Base(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BotController_NPC_Base_C">();
	}
	static class ABP_BotController_NPC_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BotController_NPC_Base_C>();
	}
};
static_assert(alignof(ABP_BotController_NPC_Base_C) == 0x000010, "Wrong alignment on ABP_BotController_NPC_Base_C");
static_assert(sizeof(ABP_BotController_NPC_Base_C) == 0x001420, "Wrong size on ABP_BotController_NPC_Base_C");
static_assert(offsetof(ABP_BotController_NPC_Base_C, UberGraphFrame) == 0x0013C8, "Member 'ABP_BotController_NPC_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BotController_NPC_Base_C, FortAthenaNpcPatrolling) == 0x0013D0, "Member 'ABP_BotController_NPC_Base_C::FortAthenaNpcPatrolling' has a wrong offset!");
static_assert(offsetof(ABP_BotController_NPC_Base_C, GE_Patrolling) == 0x0013D8, "Member 'ABP_BotController_NPC_Base_C::GE_Patrolling' has a wrong offset!");
static_assert(offsetof(ABP_BotController_NPC_Base_C, GE_PatrollingSpeedHandle) == 0x0013E0, "Member 'ABP_BotController_NPC_Base_C::GE_PatrollingSpeedHandle' has a wrong offset!");
static_assert(offsetof(ABP_BotController_NPC_Base_C, SavedRotationRate) == 0x0013E8, "Member 'ABP_BotController_NPC_Base_C::SavedRotationRate' has a wrong offset!");
static_assert(offsetof(ABP_BotController_NPC_Base_C, PatrollingRotationRate) == 0x001400, "Member 'ABP_BotController_NPC_Base_C::PatrollingRotationRate' has a wrong offset!");

}
