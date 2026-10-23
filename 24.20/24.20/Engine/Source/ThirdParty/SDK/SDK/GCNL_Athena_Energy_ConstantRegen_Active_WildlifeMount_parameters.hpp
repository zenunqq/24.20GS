#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_1C[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_139[0x7];
	class UAbilityAsync_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount) == 0x000008, "Wrong alignment on GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount");
static_assert(sizeof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount) == 0x000150, "Wrong size on GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, EntryPoint) == 0x000000, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_Event_MyTarget) == 0x000020, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_Event_Parameters) == 0x000028, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_Event_ParticleComponents) == 0x0000F8, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_Event_AudioComponents) == 0x000108, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_Event_BurstCameraShakeInstance) == 0x000118, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, K2Node_Event_BurstDecalInstance) == 0x000120, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x000128, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, CallFunc_Array_Get_Item) == 0x000130, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue) == 0x000140, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount, CallFunc_IsValid_ReturnValue_1) == 0x000148, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

}
