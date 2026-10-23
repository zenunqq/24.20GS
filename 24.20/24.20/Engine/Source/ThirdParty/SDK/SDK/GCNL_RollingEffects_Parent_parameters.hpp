#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	class USoundBase*                             CallFunc_GetSoundAsset_Asset;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
};
static_assert(alignof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent) == 0x000008, "Wrong alignment on GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent");
static_assert(sizeof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent) == 0x000230, "Wrong size on GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, EntryPoint) == 0x000000, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_BurstCameraShakeInstance) == 0x000100, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_BurstDecalInstance) == 0x000108, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_MyTarget_1) == 0x000110, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_Parameters_1) == 0x000118, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_ParticleComponents_1) == 0x0001E8, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_AudioComponents_1) == 0x0001F8, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_BurstCameraShakeInstance_1) == 0x000208, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, K2Node_Event_BurstDecalInstance_1) == 0x000210, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, CallFunc_GetSoundAsset_Asset) == 0x000218, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::CallFunc_GetSoundAsset_Asset' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000220, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, CallFunc_IsValid_ReturnValue) == 0x000228, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000229, "Member 'GCNL_RollingEffects_Parent_C_ExecuteUbergraph_GCNL_RollingEffects_Parent::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

struct GCNL_RollingEffects_Parent_C_GetObjectSizeParam final
{
public:
	class AActor*                                 PhysicsObject_0;
	int32                                         Size;
	bool                                          CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue;
	bool                                          CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue_1;
};
static_assert(alignof(GCNL_RollingEffects_Parent_C_GetObjectSizeParam) == 0x000008, "Wrong alignment on GCNL_RollingEffects_Parent_C_GetObjectSizeParam");
static_assert(sizeof(GCNL_RollingEffects_Parent_C_GetObjectSizeParam) == 0x000010, "Wrong size on GCNL_RollingEffects_Parent_C_GetObjectSizeParam");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetObjectSizeParam, PhysicsObject_0) == 0x000000, "Member 'GCNL_RollingEffects_Parent_C_GetObjectSizeParam::PhysicsObject_0' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetObjectSizeParam, Size) == 0x000008, "Member 'GCNL_RollingEffects_Parent_C_GetObjectSizeParam::Size' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetObjectSizeParam, CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue) == 0x00000C, "Member 'GCNL_RollingEffects_Parent_C_GetObjectSizeParam::CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetObjectSizeParam, CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue_1) == 0x00000D, "Member 'GCNL_RollingEffects_Parent_C_GetObjectSizeParam::CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue_1' has a wrong offset!");

struct GCNL_RollingEffects_Parent_C_GetSoundAsset final
{
public:
	class AActor*                                 PhysicsObject_0;
	class USoundBase*                             Asset;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_GetObjectSizeParam_Size;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	class USoundBase*                             K2Node_Select_Default;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	class USoundBase*                             K2Node_Select_Default_1;
};
static_assert(alignof(GCNL_RollingEffects_Parent_C_GetSoundAsset) == 0x000008, "Wrong alignment on GCNL_RollingEffects_Parent_C_GetSoundAsset");
static_assert(sizeof(GCNL_RollingEffects_Parent_C_GetSoundAsset) == 0x000038, "Wrong size on GCNL_RollingEffects_Parent_C_GetSoundAsset");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, PhysicsObject_0) == 0x000000, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::PhysicsObject_0' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, Asset) == 0x000008, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::Asset' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, Temp_int_Variable) == 0x000010, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, CallFunc_GetObjectSizeParam_Size) == 0x000014, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::CallFunc_GetObjectSizeParam_Size' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, Temp_bool_Variable) == 0x000018, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, K2Node_Select_Default) == 0x000020, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_GetSoundAsset, K2Node_Select_Default_1) == 0x000030, "Member 'GCNL_RollingEffects_Parent_C_GetSoundAsset::K2Node_Select_Default_1' has a wrong offset!");

struct GCNL_RollingEffects_Parent_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_RollingEffects_Parent_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_RollingEffects_Parent_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_RollingEffects_Parent_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_RollingEffects_Parent_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_RollingEffects_Parent_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_RollingEffects_Parent_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_RollingEffects_Parent_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_RollingEffects_Parent_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_RollingEffects_Parent_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_RollingEffects_Parent_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_RollingEffects_Parent_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_RollingEffects_Parent_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_RollingEffects_Parent_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_RollingEffects_Parent_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_RollingEffects_Parent_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_RollingEffects_Parent_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_RollingEffects_Parent_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_RollingEffects_Parent_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
