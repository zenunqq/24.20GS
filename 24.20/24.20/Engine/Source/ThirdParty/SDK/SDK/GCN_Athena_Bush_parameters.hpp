#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_21[0x7];
	double                                        CallFunc_VSize_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_43[0x5];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_7A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_91[0x7];
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue;
	uint8                                         Pad_389[0x7];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	uint8                                         Pad_398[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_454[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	class USoundBase*                             Temp_object_Variable;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_494[0x4];
	class USoundBase*                             Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_4A1[0x7];
	class USoundBase*                             K2Node_Select_Default;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	double                                        K2Node_VariableSet_TargetOpacity_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush) == 0x000010, "Wrong alignment on GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush");
static_assert(sizeof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush) == 0x0004D0, "Wrong size on GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, EntryPoint) == 0x000000, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_GetVelocity_ReturnValue) == 0x000008, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_VSize_ReturnValue) == 0x000028, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_FClamp_ReturnValue) == 0x000038, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000040, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000041, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsValid_ReturnValue_1) == 0x000042, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000048, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1) == 0x000070, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_IsLocallyControlled_ReturnValue) == 0x000079, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_AsFort_Player_Pawn_Athena_2) == 0x000088, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_AsFort_Player_Pawn_Athena_2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_DynamicCast_bSuccess_2) == 0x000090, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000098, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_MyTarget_1) == 0x000178, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_Parameters_1) == 0x000180, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_ParticleComponents_1) == 0x000250, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_AudioComponents_1) == 0x000260, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_MyTarget) == 0x000270, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_Parameters) == 0x000278, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_ParticleComponents) == 0x000348, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_AudioComponents) == 0x000358, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_BurstCameraShakeInstance) == 0x000368, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_BurstDecalInstance) == 0x000370, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_CreateDelegate_OutputDelegate_1) == 0x000378, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000384, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_EvaluateCurveTableRow_ReturnValue) == 0x000388, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_EvaluateCurveTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000390, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_GetTransform_ReturnValue) == 0x0003A0, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakTransform_Location) == 0x000400, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakTransform_Rotation) == 0x000418, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakTransform_Scale) == 0x000430, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakRotator_Roll) == 0x000448, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakRotator_Pitch) == 0x00044C, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_BreakRotator_Yaw) == 0x000450, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_MakeRotator_ReturnValue) == 0x000458, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_object_Variable) == 0x000470, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000478, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000480, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000488, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Event_DeltaSeconds) == 0x000490, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_object_Variable_1) == 0x000498, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, Temp_bool_Variable) == 0x0004A0, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_Select_Default) == 0x0004A8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0004B0, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, K2Node_VariableSet_TargetOpacity_ImplicitCast) == 0x0004B8, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::K2Node_VariableSet_TargetOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0004C0, "Member 'GCN_Athena_Bush_C_ExecuteUbergraph_GCN_Athena_Bush::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct GCN_Athena_Bush_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Athena_Bush_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_OnLoopingStart");
static_assert(sizeof(GCN_Athena_Bush_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Athena_Bush_C_OnLoopingStart");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Athena_Bush_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Athena_Bush_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_Bush_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_Bush_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCN_Athena_Bush_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Athena_Bush_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Athena_Bush_C_OnRemoval");
static_assert(sizeof(GCN_Athena_Bush_C_OnRemoval) == 0x000108, "Wrong size on GCN_Athena_Bush_C_OnRemoval");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Athena_Bush_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Athena_Bush_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_Bush_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_Bush_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Athena_Bush_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Bush_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Athena_Bush_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

struct GCN_Athena_Bush_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCN_Athena_Bush_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Athena_Bush_C_ReceiveTick");
static_assert(sizeof(GCN_Athena_Bush_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Athena_Bush_C_ReceiveTick");
static_assert(offsetof(GCN_Athena_Bush_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Athena_Bush_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
