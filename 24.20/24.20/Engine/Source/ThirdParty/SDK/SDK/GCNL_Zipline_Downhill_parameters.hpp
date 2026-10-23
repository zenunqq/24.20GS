#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayCameras_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class AActor*                                 K2Node_Event_MyTarget_2;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_2;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_129[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	float                                         CallFunc_GetZiplineSpeedFactor_ReturnValue;
	uint8                                         Pad_334[0x4];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	double                                        CallFunc_Abs_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;
	class ULegacyCameraShake*                     CallFunc_Conv_LegacyCameraShake_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	struct FFOscillator                           K2Node_MakeStruct_FOscillator;
	struct FROscillator                           K2Node_MakeStruct_ROscillator;
	double                                        CallFunc_Abs_A_ImplicitCast;
	float                                         K2Node_MakeStruct_Amplitude_ImplicitCast;
	float                                         K2Node_MakeStruct_Frequency_ImplicitCast;
};
static_assert(alignof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill) == 0x000008, "Wrong alignment on GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill");
static_assert(sizeof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill) == 0x0003B0, "Wrong size on GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, EntryPoint) == 0x000000, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_MyTarget_2) == 0x000010, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_Parameters_2) == 0x000018, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_ParticleComponents_2) == 0x0000E8, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_AudioComponents_2) == 0x0000F8, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_BurstCameraShakeInstance_1) == 0x000108, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_BurstDecalInstance_1) == 0x000110, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000118, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000120, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_MyTarget_1) == 0x000130, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_Parameters_1) == 0x000138, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_ParticleComponents_1) == 0x000208, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_AudioComponents_1) == 0x000218, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_BurstCameraShakeInstance) == 0x000228, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_BurstDecalInstance) == 0x000230, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_MyTarget) == 0x000238, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_Parameters) == 0x000240, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_ParticleComponents) == 0x000310, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_Event_AudioComponents) == 0x000320, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_GetZiplineSpeedFactor_ReturnValue) == 0x000330, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_GetZiplineSpeedFactor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000338, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_Abs_ReturnValue) == 0x000340, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000348, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_StartCameraShake_ReturnValue) == 0x000350, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_Conv_LegacyCameraShake_ReturnValue) == 0x000358, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_Conv_LegacyCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_Lerp_ReturnValue) == 0x000360, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_Lerp_ReturnValue_1) == 0x000368, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_MakeStruct_FOscillator) == 0x000370, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_MakeStruct_FOscillator' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_MakeStruct_ROscillator) == 0x00037C, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_MakeStruct_ROscillator' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, CallFunc_Abs_A_ImplicitCast) == 0x0003A0, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::CallFunc_Abs_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_MakeStruct_Amplitude_ImplicitCast) == 0x0003A8, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_MakeStruct_Amplitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill, K2Node_MakeStruct_Frequency_ImplicitCast) == 0x0003AC, "Member 'GCNL_Zipline_Downhill_C_ExecuteUbergraph_GCNL_Zipline_Downhill::K2Node_MakeStruct_Frequency_ImplicitCast' has a wrong offset!");

struct GCNL_Zipline_Downhill_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Zipline_Downhill_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Zipline_Downhill_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Zipline_Downhill_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Zipline_Downhill_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Zipline_Downhill_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Zipline_Downhill_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Zipline_Downhill_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Zipline_Downhill_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Zipline_Downhill_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Zipline_Downhill_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Zipline_Downhill_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Zipline_Downhill_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Zipline_Downhill_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Zipline_Downhill_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Zipline_Downhill_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Zipline_Downhill_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Zipline_Downhill_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Zipline_Downhill_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Zipline_Downhill_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Zipline_Downhill_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Zipline_Downhill_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Zipline_Downhill_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Zipline_Downhill_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Zipline_Downhill_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Zipline_Downhill_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Zipline_Downhill_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Zipline_Downhill_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Zipline_Downhill_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Zipline_Downhill_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Downhill_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Zipline_Downhill_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
