#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UNiagaraComponent*>              ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;
	class AProp_PhysicsBoulder_Granite_C*         K2Node_DynamicCast_AsProp_Physics_Boulder_Granite;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class AProp_PhysicsBoulder_Desert_01_C*       K2Node_DynamicCast_AsProp_Physics_Boulder_Desert_01;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_131[0x7];
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue_1;
};
static_assert(alignof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara) == 0x000008, "Wrong alignment on GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara");
static_assert(sizeof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara) == 0x000170, "Wrong size on GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, MyTarget) == 0x000000, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, Parameters) == 0x000008, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, ParticleComponents) == 0x0000D8, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, AudioComponents) == 0x0000E8, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, BurstDecalInstance) == 0x000100, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, CallFunc_Array_Get_Item) == 0x000108, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, K2Node_DynamicCast_AsProp_Physics_Boulder_Granite) == 0x000110, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::K2Node_DynamicCast_AsProp_Physics_Boulder_Granite' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000120, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, K2Node_DynamicCast_AsProp_Physics_Boulder_Desert_01) == 0x000128, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::K2Node_DynamicCast_AsProp_Physics_Boulder_Desert_01' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, K2Node_DynamicCast_bSuccess_1) == 0x000130, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, CallFunc_GetComponentVelocity_ReturnValue) == 0x000138, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::CallFunc_GetComponentVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000150, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara, CallFunc_GetComponentVelocity_ReturnValue_1) == 0x000158, "Member 'GCN_CollisionEffects_PhysicsBoulder_C_OnBurstNiagara::CallFunc_GetComponentVelocity_ReturnValue_1' has a wrong offset!");

}
