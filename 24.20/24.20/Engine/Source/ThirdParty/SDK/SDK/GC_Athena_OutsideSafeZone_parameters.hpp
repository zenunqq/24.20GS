#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          K2Node_SwitchInteger_CmpSuccess;
	uint8                                         Pad_19[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue;
	struct FGameplayTag                           K2Node_Select_Default;
	uint8                                         Pad_2C[0x4];
	class UAmbientAudioSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          K2Node_Event_bEnabled;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_3A[0x6];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_149[0x7];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class UAmbientAudioSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_1;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	uint8                                         Pad_264[0x4];
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone");
static_assert(sizeof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone) == 0x000278, "Wrong size on GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, EntryPoint) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, Temp_int_Variable) == 0x000010, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00001C, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_Lerp_ReturnValue) == 0x000020, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Select_Default) == 0x000028, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000030, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_bEnabled) == 0x000038, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_bEnabled' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_MyTarget_1) == 0x000040, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_Parameters_1) == 0x000048, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_ParticleComponents_1) == 0x000118, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_AudioComponents_1) == 0x000128, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_Array_Get_Item) == 0x000138, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x000140, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_MyTarget) == 0x000150, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_Parameters) == 0x000158, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_ParticleComponents) == 0x000228, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_AudioComponents) == 0x000238, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_BurstCameraShakeInstance) == 0x000248, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, K2Node_Event_BurstDecalInstance) == 0x000250, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000258, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_Delay_Duration_ImplicitCast) == 0x000260, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000268, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000270, "Member 'GC_Athena_OutsideSafeZone_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY final
{
public:
	struct FVector                                Location_Local_Space;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_RandomFloat_ReturnValue;
	double                                        CallFunc_GetPI_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Cos_ReturnValue;
	double                                        CallFunc_Sin_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY");
static_assert(sizeof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY) == 0x0000B0, "Wrong size on GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, Location_Local_Space) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::Location_Local_Space' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_RandomFloat_ReturnValue) == 0x000030, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_GetPI_ReturnValue) == 0x000038, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_GetPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_RandomFloatInRange_ReturnValue) == 0x000040, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_Lerp_ReturnValue) == 0x000050, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_Cos_ReturnValue) == 0x000058, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_Cos_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_Sin_ReturnValue) == 0x000060, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_Sin_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000070, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_MakeVector_ReturnValue_1) == 0x000078, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_VLerp_ReturnValue) == 0x000090, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0000A8, "Member 'GC_Athena_OutsideSafeZone_C_Get_Location_in_Circle_XY::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric");
static_assert(sizeof(GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GC_Athena_OutsideSafeZone_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_C_OnRemovalGeneric");
static_assert(sizeof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric) == 0x000108, "Wrong size on GC_Athena_OutsideSafeZone_C_OnRemovalGeneric");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GC_Athena_OutsideSafeZone_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GC_Athena_OutsideSafeZone_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GC_Athena_OutsideSafeZone_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GC_Athena_OutsideSafeZone_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GC_Athena_OutsideSafeZone_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled) == 0x000001, "Wrong alignment on GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled");
static_assert(sizeof(GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled) == 0x000001, "Wrong size on GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled, bEnabled) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_C_OnStormEffectsEnabled::bEnabled' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	double                                        CallFunc_RandomFloat_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_181[0x7];
	struct FVector                                CallFunc_Get_Location_in_Circle_XY_Location_Local_Space;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes");
static_assert(sizeof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes) == 0x0001C0, "Wrong size on GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_BreakVector_X) == 0x000018, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_BreakVector_Y) == 0x000020, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_BreakVector_Z) == 0x000028, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_BreakVector_X_1) == 0x000030, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_BreakVector_Y_1) == 0x000038, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_BreakVector_Z_1) == 0x000040, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000060, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000078, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_RandomFloatInRange_ReturnValue) == 0x000158, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_FMax_ReturnValue) == 0x000160, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000168, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000170, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_RandomFloat_ReturnValue) == 0x000178, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000180, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_Get_Location_in_Circle_XY_Location_Local_Space) == 0x000188, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_Get_Location_in_Circle_XY_Location_Local_Space' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_Add_VectorVector_ReturnValue) == 0x0001A0, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x0001B8, "Member 'GC_Athena_OutsideSafeZone_C_Random_Lighting_Flashes::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

}
