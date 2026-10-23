#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget)> K2Node_CreateDelegate_OutputDelegate;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_111[0x7];
	class APawn*                                  K2Node_DynamicCast_AsPawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_121[0x7];
	class UFortMovementComp_Character*            CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_133[0x5];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerController*                  K2Node_CustomEvent_PlayerController;
	class AActor*                                 K2Node_CustomEvent_OldViewTarget;
	class AActor*                                 K2Node_CustomEvent_NewViewTarget;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
	uint8                                         Pad_25A[0x6];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines");
static_assert(sizeof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines) == 0x000280, "Wrong size on GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, EntryPoint) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_MyTarget_1) == 0x000010, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_Parameters_1) == 0x000018, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_ParticleComponents_1) == 0x0000E8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_AudioComponents_1) == 0x0000F8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_Array_Get_Item) == 0x000108, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_DynamicCast_AsPawn) == 0x000118, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_GetComponentByClass_ReturnValue) == 0x000128, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_IsValid_ReturnValue_1) == 0x000130, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000131, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_Not_PreBool_ReturnValue) == 0x000132, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_MyTarget) == 0x000138, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_Parameters) == 0x000140, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_ParticleComponents) == 0x000210, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_AudioComponents) == 0x000220, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_BurstCameraShakeInstance) == 0x000230, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_Event_BurstDecalInstance) == 0x000238, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_CustomEvent_PlayerController) == 0x000240, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_CustomEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_CustomEvent_OldViewTarget) == 0x000248, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_CustomEvent_OldViewTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_CustomEvent_NewViewTarget) == 0x000250, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_CustomEvent_NewViewTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_IsValid_ReturnValue_2) == 0x000258, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_IsLocallyViewed_ReturnValue) == 0x000259, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_K2_SetTimer_ReturnValue) == 0x000260, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000268, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000270, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines, K2Node_DynamicCast_bSuccess_1) == 0x000278, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed final
{
public:
	class AFortPlayerController*                  PlayerController;
	class AActor*                                 OldViewTarget;
	class AActor*                                 NewViewTarget;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed");
static_assert(sizeof(GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed) == 0x000018, "Wrong size on GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed, PlayerController) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed::PlayerController' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed, OldViewTarget) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed::OldViewTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed, NewViewTarget) == 0x000010, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_On_View_Target_Changed::NewViewTarget' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer final
{
public:
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer");
static_assert(sizeof(GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer) == 0x000010, "Wrong size on GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer, CallFunc_K2_SetTimer_ReturnValue) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer, CallFunc_IsLocallyViewed_ReturnValue) == 0x000009, "Member 'GCNL_Athena_Player_Sliding_Speedlines_C_RefreshDustStateTimer::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");

}
