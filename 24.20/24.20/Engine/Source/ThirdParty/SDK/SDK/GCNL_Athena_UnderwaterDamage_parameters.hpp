#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget_2;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_2;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_239[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_249[0x7];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	TScriptInterface<class ICameraLensEffectInterface> CallFunc_SpawnGenericCameraLensEffect_ReturnValue;
	class UFXSystemComponent*                     CallFunc_GetPrimaryParticleComponent_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;
	uint8                                         Pad_36B[0x5];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_391[0x3];
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	float                                         CallFunc_ClientStartCameraShake_Scale_ImplicitCast;
};
static_assert(alignof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage) == 0x000008, "Wrong alignment on GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage");
static_assert(sizeof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage) == 0x0003A8, "Wrong size on GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, EntryPoint) == 0x000000, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_MapRangeClamped_ReturnValue) == 0x000010, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_MyTarget_2) == 0x000020, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_Parameters_2) == 0x000028, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_ParticleComponents_2) == 0x0000F8, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_AudioComponents_2) == 0x000108, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_BurstCameraShakeInstance_1) == 0x000118, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_BurstDecalInstance_1) == 0x000120, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_MyTarget_1) == 0x000128, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_Parameters_1) == 0x000130, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_ParticleComponents_1) == 0x000200, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_AudioComponents_1) == 0x000210, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_BurstCameraShakeInstance) == 0x000220, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_BurstDecalInstance) == 0x000228, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000230, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_DynamicCast_bSuccess) == 0x000238, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000240, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_DynamicCast_bSuccess_1) == 0x000248, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_MyTarget) == 0x000250, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_Parameters) == 0x000258, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_ParticleComponents) == 0x000328, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_Event_AudioComponents) == 0x000338, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_SpawnGenericCameraLensEffect_ReturnValue) == 0x000348, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_SpawnGenericCameraLensEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_GetPrimaryParticleComponent_ReturnValue) == 0x000358, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_GetPrimaryParticleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x000360, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, K2Node_DynamicCast_bSuccess_2) == 0x000368, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_IsLocallyControlled_ReturnValue) == 0x000369, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x00036A, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000370, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_SpawnSound2D_ReturnValue) == 0x000378, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_SetFloatParameter_self_CastInput) == 0x000380, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000390, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000394, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000398, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00039C, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage, CallFunc_ClientStartCameraShake_Scale_ImplicitCast) == 0x0003A0, "Member 'GCNL_Athena_UnderwaterDamage_C_ExecuteUbergraph_GCNL_Athena_UnderwaterDamage::CallFunc_ClientStartCameraShake_Scale_ImplicitCast' has a wrong offset!");

struct GCNL_Athena_UnderwaterDamage_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_UnderwaterDamage_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Athena_UnderwaterDamage_C_OnLoopingStart");
static_assert(sizeof(GCNL_Athena_UnderwaterDamage_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_Athena_UnderwaterDamage_C_OnLoopingStart");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Athena_UnderwaterDamage_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Athena_UnderwaterDamage_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCNL_Athena_UnderwaterDamage_C_OnRecurring final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_UnderwaterDamage_C_OnRecurring) == 0x000008, "Wrong alignment on GCNL_Athena_UnderwaterDamage_C_OnRecurring");
static_assert(sizeof(GCNL_Athena_UnderwaterDamage_C_OnRecurring) == 0x000108, "Wrong size on GCNL_Athena_UnderwaterDamage_C_OnRecurring");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRecurring, MyTarget) == 0x000000, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRecurring::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRecurring, Parameters) == 0x000008, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRecurring::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRecurring, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRecurring::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRecurring, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRecurring::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRecurring, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRecurring::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRecurring, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRecurring::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_UnderwaterDamage_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_UnderwaterDamage_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Athena_UnderwaterDamage_C_OnRemoval");
static_assert(sizeof(GCNL_Athena_UnderwaterDamage_C_OnRemoval) == 0x000108, "Wrong size on GCNL_Athena_UnderwaterDamage_C_OnRemoval");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_UnderwaterDamage_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_UnderwaterDamage_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
