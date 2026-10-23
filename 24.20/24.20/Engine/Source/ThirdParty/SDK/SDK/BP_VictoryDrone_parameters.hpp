#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_VictoryDrone_C_Added_Death_Audio final
{
public:
	class USoundBase*                             Sound_to_Spawn;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
};
static_assert(alignof(BP_VictoryDrone_C_Added_Death_Audio) == 0x000008, "Wrong alignment on BP_VictoryDrone_C_Added_Death_Audio");
static_assert(sizeof(BP_VictoryDrone_C_Added_Death_Audio) == 0x000030, "Wrong size on BP_VictoryDrone_C_Added_Death_Audio");
static_assert(offsetof(BP_VictoryDrone_C_Added_Death_Audio, Sound_to_Spawn) == 0x000000, "Member 'BP_VictoryDrone_C_Added_Death_Audio::Sound_to_Spawn' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Added_Death_Audio, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_VictoryDrone_C_Added_Death_Audio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Added_Death_Audio, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_VictoryDrone_C_Added_Death_Audio::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Added_Death_Audio, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000028, "Member 'BP_VictoryDrone_C_Added_Death_Audio::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");

struct BP_VictoryDrone_C_Decoy_FX_Parameters final
{
public:
	TArray<struct FParticleSysParam>              Instance_Parameters;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_1;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_2;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_3;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_4;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_5;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_6;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_7;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_8;
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;
};
static_assert(alignof(BP_VictoryDrone_C_Decoy_FX_Parameters) == 0x000010, "Wrong alignment on BP_VictoryDrone_C_Decoy_FX_Parameters");
static_assert(sizeof(BP_VictoryDrone_C_Decoy_FX_Parameters) == 0x000800, "Wrong size on BP_VictoryDrone_C_Decoy_FX_Parameters");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, Instance_Parameters) == 0x000000, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::Instance_Parameters' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam) == 0x000010, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_1) == 0x0000F0, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_2) == 0x0001D0, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_2' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_3) == 0x0002B0, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_3' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_4) == 0x000390, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_4' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_5) == 0x000470, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_5' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_6) == 0x000550, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_6' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_7) == 0x000630, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_7' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_8) == 0x000710, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_8' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_Decoy_FX_Parameters, K2Node_MakeArray_Array) == 0x0007F0, "Member 'BP_VictoryDrone_C_Decoy_FX_Parameters::K2Node_MakeArray_Array' has a wrong offset!");

struct BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_29[0x7];
	class USoundBase*                             Temp_object_Variable;
	class UAnimMontage*                           K2Node_CustomEvent_Montage;
	bool                                          K2Node_CustomEvent_bInterrupted;
	uint8                                         Pad_41[0x3];
	float                                         K2Node_Event_DeltaSeconds;
	double                                        Temp_real_Variable_1;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_74[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;
	uint8                                         Pad_91[0x7];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_A9[0x3];
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_B2[0x6];
	double                                        K2Node_Select_Default;
	class USoundBase*                             K2Node_Select_Default_1;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone) == 0x000008, "Wrong alignment on BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone");
static_assert(sizeof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone) == 0x0000D0, "Wrong size on BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, EntryPoint) == 0x000000, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, Temp_real_Variable) == 0x000020, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, Temp_bool_Variable) == 0x000028, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, Temp_object_Variable) == 0x000030, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_CustomEvent_Montage) == 0x000038, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_CustomEvent_bInterrupted) == 0x000040, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_CustomEvent_bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_Event_DeltaSeconds) == 0x000044, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, Temp_real_Variable_1) == 0x000048, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000050, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_BreakRotator_Roll) == 0x000068, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_BreakRotator_Pitch) == 0x00006C, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_BreakRotator_Yaw) == 0x000070, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_MakeRotator_ReturnValue) == 0x000078, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000090, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_GetMaterial_ReturnValue) == 0x000098, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x0000A0, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x0000AC, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, Temp_bool_Variable_1) == 0x0000B1, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_Select_Default) == 0x0000B8, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, K2Node_Select_Default_1) == 0x0000C0, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone, CallFunc_Delay_Duration_ImplicitCast) == 0x0000C8, "Member 'BP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct BP_VictoryDrone_C_NotifyTeleportFinishedTriggered final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
};
static_assert(alignof(BP_VictoryDrone_C_NotifyTeleportFinishedTriggered) == 0x000001, "Wrong alignment on BP_VictoryDrone_C_NotifyTeleportFinishedTriggered");
static_assert(sizeof(BP_VictoryDrone_C_NotifyTeleportFinishedTriggered) == 0x000001, "Wrong size on BP_VictoryDrone_C_NotifyTeleportFinishedTriggered");
static_assert(offsetof(BP_VictoryDrone_C_NotifyTeleportFinishedTriggered, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_VictoryDrone_C_NotifyTeleportFinishedTriggered::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

struct BP_VictoryDrone_C_NPC_FX_Parameters final
{
public:
	TArray<struct FParticleSysParam>              Instance_Parameters;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_1;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_2;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_3;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_4;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_5;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_6;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_7;
	struct FParticleSysParam                      K2Node_MakeStruct_ParticleSysParam_8;
	TArray<struct FParticleSysParam>              K2Node_MakeArray_Array;
};
static_assert(alignof(BP_VictoryDrone_C_NPC_FX_Parameters) == 0x000010, "Wrong alignment on BP_VictoryDrone_C_NPC_FX_Parameters");
static_assert(sizeof(BP_VictoryDrone_C_NPC_FX_Parameters) == 0x000800, "Wrong size on BP_VictoryDrone_C_NPC_FX_Parameters");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, Instance_Parameters) == 0x000000, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::Instance_Parameters' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam) == 0x000010, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_1) == 0x0000F0, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_2) == 0x0001D0, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_2' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_3) == 0x0002B0, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_3' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_4) == 0x000390, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_4' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_5) == 0x000470, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_5' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_6) == 0x000550, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_6' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_7) == 0x000630, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_7' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeStruct_ParticleSysParam_8) == 0x000710, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeStruct_ParticleSysParam_8' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_NPC_FX_Parameters, K2Node_MakeArray_Array) == 0x0007F0, "Member 'BP_VictoryDrone_C_NPC_FX_Parameters::K2Node_MakeArray_Array' has a wrong offset!");

struct BP_VictoryDrone_C_OnSpawnOutAnimEnded final
{
public:
	class UAnimMontage*                           Montage;
	bool                                          bInterrupted;
};
static_assert(alignof(BP_VictoryDrone_C_OnSpawnOutAnimEnded) == 0x000008, "Wrong alignment on BP_VictoryDrone_C_OnSpawnOutAnimEnded");
static_assert(sizeof(BP_VictoryDrone_C_OnSpawnOutAnimEnded) == 0x000010, "Wrong size on BP_VictoryDrone_C_OnSpawnOutAnimEnded");
static_assert(offsetof(BP_VictoryDrone_C_OnSpawnOutAnimEnded, Montage) == 0x000000, "Member 'BP_VictoryDrone_C_OnSpawnOutAnimEnded::Montage' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_OnSpawnOutAnimEnded, bInterrupted) == 0x000008, "Member 'BP_VictoryDrone_C_OnSpawnOutAnimEnded::bInterrupted' has a wrong offset!");

struct BP_VictoryDrone_C_PlaySpawnAnim final
{
public:
	class UAnimMontage*                           Montage;
	double                                        NewLocalVar_0;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12[0x6];
	class UAnimationAsset*                        Temp_object_Variable;
	class UAnimationAsset*                        Temp_object_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_29[0x7];
	class UAnimationAsset*                        Temp_object_Variable_2;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_59[0x7];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_2;
	class UAnimationAsset*                        Temp_object_Variable_3;
	class UAnimationAsset*                        Temp_object_Variable_4;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class UAnimationAsset*                        K2Node_Select_Default;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_B9[0x3];
	TDelegate<void(class UAnimMontage* Montage, bool bInterrupted)> K2Node_CreateDelegate_OutputDelegate;
	class UAnimationAsset*                        K2Node_Select_Default_1;
	class UAnimationAsset*                        K2Node_Select_Default_2;
	class UAnimationAsset*                        K2Node_Select_Default_3;
	float                                         CallFunc_SetPlayRate_Rate_ImplicitCast;
};
static_assert(alignof(BP_VictoryDrone_C_PlaySpawnAnim) == 0x000008, "Wrong alignment on BP_VictoryDrone_C_PlaySpawnAnim");
static_assert(sizeof(BP_VictoryDrone_C_PlaySpawnAnim) == 0x0000E8, "Wrong size on BP_VictoryDrone_C_PlaySpawnAnim");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Montage) == 0x000000, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Montage' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, NewLocalVar_0) == 0x000008, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_bool_Variable) == 0x000010, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_object_Variable) == 0x000018, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_object_Variable_1) == 0x000020, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_bool_Variable_1) == 0x000028, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_object_Variable_2) == 0x000030, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_GetSocketLocation_ReturnValue) == 0x000038, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000050, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_bool_Variable_2) == 0x000058, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000060, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000068, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000080, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000088, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_SpawnEmitterAttached_ReturnValue_2) == 0x000090, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_SpawnEmitterAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_object_Variable_3) == 0x000098, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_object_Variable_4) == 0x0000A0, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_GetAnimInstance_ReturnValue) == 0x0000A8, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, K2Node_Select_Default) == 0x0000B0, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, Temp_bool_Variable_3) == 0x0000B8, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, K2Node_CreateDelegate_OutputDelegate) == 0x0000BC, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, K2Node_Select_Default_1) == 0x0000C8, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, K2Node_Select_Default_2) == 0x0000D0, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, K2Node_Select_Default_3) == 0x0000D8, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_VictoryDrone_C_PlaySpawnAnim, CallFunc_SetPlayRate_Rate_ImplicitCast) == 0x0000E0, "Member 'BP_VictoryDrone_C_PlaySpawnAnim::CallFunc_SetPlayRate_Rate_ImplicitCast' has a wrong offset!");

struct BP_VictoryDrone_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(BP_VictoryDrone_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_VictoryDrone_C_ReceiveTick");
static_assert(sizeof(BP_VictoryDrone_C_ReceiveTick) == 0x000004, "Wrong size on BP_VictoryDrone_C_ReceiveTick");
static_assert(offsetof(BP_VictoryDrone_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_VictoryDrone_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
