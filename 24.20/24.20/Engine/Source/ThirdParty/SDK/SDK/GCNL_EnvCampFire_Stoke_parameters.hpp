#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	TScriptInterface<class ICampfire_Interface_C> K2Node_DynamicCast_AsCampfire_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x7];
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;
	struct FVector                                CallFunc_GetLocationToSpawnFireVFX_WorldLocation;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_144[0x4];
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke) == 0x000008, "Wrong alignment on GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke");
static_assert(sizeof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke) == 0x000230, "Wrong size on GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, EntryPoint) == 0x000000, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, Temp_int_Array_Index_Variable) == 0x000008, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, K2Node_Event_MyTarget) == 0x000010, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, K2Node_Event_Parameters) == 0x000018, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, K2Node_Event_ParticleComponents) == 0x0000E8, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, K2Node_Event_AudioComponents) == 0x0000F8, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, K2Node_DynamicCast_AsCampfire_Interface) == 0x000108, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::K2Node_DynamicCast_AsCampfire_Interface' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, CallFunc_Array_Get_Item) == 0x000120, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, CallFunc_GetLocationToSpawnFireVFX_WorldLocation) == 0x000128, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::CallFunc_GetLocationToSpawnFireVFX_WorldLocation' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000148, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke, CallFunc_Less_IntInt_ReturnValue) == 0x000228, "Member 'GCNL_EnvCampFire_Stoke_C_ExecuteUbergraph_GCNL_EnvCampFire_Stoke::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct GCNL_EnvCampFire_Stoke_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_EnvCampFire_Stoke_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_EnvCampFire_Stoke_C_OnLoopingStart");
static_assert(sizeof(GCNL_EnvCampFire_Stoke_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_EnvCampFire_Stoke_C_OnLoopingStart");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_EnvCampFire_Stoke_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_EnvCampFire_Stoke_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_EnvCampFire_Stoke_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_EnvCampFire_Stoke_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_EnvCampFire_Stoke_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}
