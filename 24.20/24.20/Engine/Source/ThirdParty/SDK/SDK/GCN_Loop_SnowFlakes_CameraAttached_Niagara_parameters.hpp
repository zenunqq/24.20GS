#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_111[0x7];
	class UNiagaraSystem*                         CallFunc_GetAsset_ReturnValue;
	bool                                          CallFunc_IsNiagaraEffectEnabled_ReturnValue;
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara) == 0x000128, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, EntryPoint) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_MyTarget) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_Parameters) == 0x000010, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_Array_Get_Item) == 0x000100, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_DynamicCast_AsNiagara_Particle_System_Component) == 0x000108, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_DynamicCast_AsNiagara_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_GetAsset_ReturnValue) == 0x000118, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_IsNiagaraEffectEnabled_ReturnValue) == 0x000120, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_IsNiagaraEffectEnabled_ReturnValue' has a wrong offset!");

struct GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

}
