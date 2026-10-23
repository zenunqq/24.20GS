#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class ABGA_PhysicsTreeLog_C*                  K2Node_DynamicCast_AsBGA_Physics_Tree_Log;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_211[0x7];
	class ABGA_PhysicsTreeLog_C*                  K2Node_DynamicCast_AsBGA_Physics_Tree_Log_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_221[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
};
static_assert(alignof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree) == 0x000008, "Wrong alignment on GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree");
static_assert(sizeof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree) == 0x000240, "Wrong size on GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, EntryPoint) == 0x000000, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_MyTarget_1) == 0x000008, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_Parameters_1) == 0x000010, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_ParticleComponents_1) == 0x0000E0, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_AudioComponents_1) == 0x0000F0, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_MyTarget) == 0x000100, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_Parameters) == 0x000108, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_ParticleComponents) == 0x0001D8, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_AudioComponents) == 0x0001E8, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_BurstCameraShakeInstance) == 0x0001F8, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_Event_BurstDecalInstance) == 0x000200, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_DynamicCast_AsBGA_Physics_Tree_Log) == 0x000208, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_DynamicCast_AsBGA_Physics_Tree_Log' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_DynamicCast_bSuccess) == 0x000210, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_DynamicCast_AsBGA_Physics_Tree_Log_1) == 0x000218, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_DynamicCast_AsBGA_Physics_Tree_Log_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, K2Node_DynamicCast_bSuccess_1) == 0x000220, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000228, "Member 'GCNL_RollingEffects_PhysicsTree_C_ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

struct GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_RollingEffects_PhysicsTree_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
