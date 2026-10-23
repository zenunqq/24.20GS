#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_Sliding_Oneshot_C_OnBurstGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_11C[0x4];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput_1;
};
static_assert(alignof(GCN_Sliding_Oneshot_C_OnBurstGeneric) == 0x000008, "Wrong alignment on GCN_Sliding_Oneshot_C_OnBurstGeneric");
static_assert(sizeof(GCN_Sliding_Oneshot_C_OnBurstGeneric) == 0x000140, "Wrong size on GCN_Sliding_Oneshot_C_OnBurstGeneric");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, MyTarget) == 0x000000, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, Parameters) == 0x000008, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, CallFunc_Array_Get_Item) == 0x000108, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, K2Node_DynamicCast_AsFort_Pawn) == 0x000110, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, CallFunc_IsLocallyViewed_ReturnValue) == 0x000119, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue) == 0x00011A, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00011B, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, CallFunc_SetBoolParameter_self_CastInput) == 0x000120, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::CallFunc_SetBoolParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCN_Sliding_Oneshot_C_OnBurstGeneric, CallFunc_SetBoolParameter_self_CastInput_1) == 0x000130, "Member 'GCN_Sliding_Oneshot_C_OnBurstGeneric::CallFunc_SetBoolParameter_self_CastInput_1' has a wrong offset!");

}
