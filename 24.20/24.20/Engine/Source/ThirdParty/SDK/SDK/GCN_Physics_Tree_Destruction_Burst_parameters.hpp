#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_10C[0x4];
	class ABGA_PhysicsTreeLog_C*                  K2Node_DynamicCast_AsBGA_Physics_Tree_Log;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_20D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric) == 0x000008, "Wrong alignment on GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric");
static_assert(sizeof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric) == 0x000218, "Wrong size on GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, MyTarget) == 0x000000, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, Parameters) == 0x000008, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, K2Node_DynamicCast_AsBGA_Physics_Tree_Log) == 0x000110, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::K2Node_DynamicCast_AsBGA_Physics_Tree_Log' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, Temp_int_Array_Index_Variable) == 0x00011C, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, CallFunc_Array_Get_Item) == 0x000120, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000128, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, Temp_int_Loop_Counter_Variable) == 0x000208, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, CallFunc_Less_IntInt_ReturnValue) == 0x00020C, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric, CallFunc_Add_IntInt_ReturnValue) == 0x000210, "Member 'GCN_Physics_Tree_Destruction_Burst_C_OnBurstGeneric::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
