#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	struct FVector                                CallFunc_GetLastUpdateVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_49[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	struct FGameplayAbilityActorInfo              K2Node_Event_ActorInfo;
};
static_assert(alignof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback) == 0x000008, "Wrong alignment on GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback");
static_assert(sizeof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback) == 0x0000A8, "Wrong size on GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, EntryPoint) == 0x000000, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue) == 0x000010, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000018, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, CallFunc_GetLastUpdateVelocity_ReturnValue) == 0x000020, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::CallFunc_GetLastUpdateVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, CallFunc_StartCameraShake_ReturnValue) == 0x000040, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000048, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000050, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback, K2Node_Event_ActorInfo) == 0x000060, "Member 'GA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback::K2Node_Event_ActorInfo' has a wrong offset!");

struct GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
};
static_assert(alignof(GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility) == 0x000008, "Wrong alignment on GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility");
static_assert(sizeof(GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility) == 0x000048, "Wrong size on GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility");
static_assert(offsetof(GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility::ActorInfo' has a wrong offset!");

}
