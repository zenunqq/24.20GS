#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached) == 0x000100, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached, EntryPoint) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached, K2Node_Event_MyTarget) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached, K2Node_Event_Parameters) == 0x000010, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached::K2Node_Event_AudioComponents' has a wrong offset!");

struct GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}
