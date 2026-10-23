#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
};
static_assert(alignof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel) == 0x000008, "Wrong alignment on GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel");
static_assert(sizeof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel) == 0x000240, "Wrong size on GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, EntryPoint) == 0x000000, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_MyTarget_1) == 0x000018, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_Parameters_1) == 0x000020, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_ParticleComponents_1) == 0x0000F0, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_AudioComponents_1) == 0x000100, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_BurstCameraShakeInstance_1) == 0x000110, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_BurstDecalInstance_1) == 0x000118, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_MyTarget) == 0x000120, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_Parameters) == 0x000128, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_ParticleComponents) == 0x0001F8, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_AudioComponents) == 0x000208, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_BurstCameraShakeInstance) == 0x000218, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_Event_BurstDecalInstance) == 0x000220, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, CallFunc_Array_Get_Item) == 0x000228, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000230, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, K2Node_DynamicCast_bSuccess) == 0x000238, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000239, "Member 'GCNL_Zipline_Travel_C_ExecuteUbergraph_GCNL_Zipline_Travel::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

struct GCNL_Zipline_Travel_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Zipline_Travel_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Zipline_Travel_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Zipline_Travel_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Zipline_Travel_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Zipline_Travel_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Zipline_Travel_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Zipline_Travel_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Zipline_Travel_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Zipline_Travel_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Zipline_Travel_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Zipline_Travel_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Zipline_Travel_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Zipline_Travel_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Zipline_Travel_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Zipline_Travel_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Zipline_Travel_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Zipline_Travel_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Zipline_Travel_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Zipline_Travel_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Zipline_Travel_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Zipline_Travel_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Zipline_Travel_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
