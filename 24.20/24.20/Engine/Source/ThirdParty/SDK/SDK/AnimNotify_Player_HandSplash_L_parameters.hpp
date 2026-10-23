#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotify_Player_HandSplash_L_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	class UFXSystemComponent*                     CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue;
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(AnimNotify_Player_HandSplash_L_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_Player_HandSplash_L_C_Received_Notify");
static_assert(sizeof(AnimNotify_Player_HandSplash_L_C_Received_Notify) == 0x000070, "Wrong size on AnimNotify_Player_HandSplash_L_C_Received_Notify");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000048, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue) == 0x000058, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, K2Node_DynamicCast_AsNiagara_Particle_System_Component) == 0x000060, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::K2Node_DynamicCast_AsNiagara_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(AnimNotify_Player_HandSplash_L_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'AnimNotify_Player_HandSplash_L_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
