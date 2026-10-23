#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCL_Rift_Teleport_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
};
static_assert(alignof(GCL_Rift_Teleport_C_OnRemove) == 0x000008, "Wrong alignment on GCL_Rift_Teleport_C_OnRemove");
static_assert(sizeof(GCL_Rift_Teleport_C_OnRemove) == 0x0000E0, "Wrong size on GCL_Rift_Teleport_C_OnRemove");
static_assert(offsetof(GCL_Rift_Teleport_C_OnRemove, MyTarget) == 0x000000, "Member 'GCL_Rift_Teleport_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_OnRemove, Parameters) == 0x000008, "Member 'GCL_Rift_Teleport_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCL_Rift_Teleport_C_OnRemove::ReturnValue' has a wrong offset!");

struct GCL_Rift_Teleport_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_E9[0x7];
	TScriptInterface<class ICameraLensEffectInterface> CallFunc_SpawnGenericCameraLensEffect_ReturnValue;
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshComponent_ReturnValue;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsDrivingVehicle_ReturnValue;
	uint8                                         Pad_132[0x6];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
};
static_assert(alignof(GCL_Rift_Teleport_C_WhileActive) == 0x000008, "Wrong alignment on GCL_Rift_Teleport_C_WhileActive");
static_assert(sizeof(GCL_Rift_Teleport_C_WhileActive) == 0x000140, "Wrong size on GCL_Rift_Teleport_C_WhileActive");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, MyTarget) == 0x000000, "Member 'GCL_Rift_Teleport_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, Parameters) == 0x000008, "Member 'GCL_Rift_Teleport_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, ReturnValue) == 0x0000D8, "Member 'GCL_Rift_Teleport_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000E0, "Member 'GCL_Rift_Teleport_C_WhileActive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GCL_Rift_Teleport_C_WhileActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_SpawnGenericCameraLensEffect_ReturnValue) == 0x0000F0, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_SpawnGenericCameraLensEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000100, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000108, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x000118, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000120, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000128, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_IsDrivingVehicle_ReturnValue) == 0x000131, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_IsDrivingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000138, "Member 'GCL_Rift_Teleport_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");

struct GCL_Rift_Teleport_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(GCL_Rift_Teleport_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCL_Rift_Teleport_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCL_Rift_Teleport_C_OnStartParticleSystemSpawned) == 0x0000D8, "Wrong size on GCL_Rift_Teleport_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCL_Rift_Teleport_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCL_Rift_Teleport_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCL_Rift_Teleport_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");

struct GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate final
{
public:
	class UParticleSystemComponent*               WhileActiveParticleSysComponent;
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate) == 0x000008, "Wrong alignment on GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate");
static_assert(sizeof(GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate) == 0x0000D8, "Wrong size on GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate");
static_assert(offsetof(GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate, WhileActiveParticleSysComponent) == 0x000000, "Member 'GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate::WhileActiveParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate, Parameters) == 0x000008, "Member 'GCL_Rift_Teleport_C_OnWhileActiveParticleSystemDeactivate::Parameters' has a wrong offset!");

}
