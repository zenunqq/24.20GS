#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature final
{
public:
	class UAudioComponent*                        AudioComponent;
	class FName                                   ParameterName;
	int32                                         OneshotIndex;
};
static_assert(alignof(GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature");
static_assert(sizeof(GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature) == 0x000010, "Wrong size on GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature");
static_assert(offsetof(GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature, AudioComponent) == 0x000000, "Member 'GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature::AudioComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature, ParameterName) == 0x000008, "Member 'GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature::ParameterName' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature, OneshotIndex) == 0x00000C, "Member 'GCNL_Athena_Tether_C_BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature::OneshotIndex' has a wrong offset!");

struct GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFXSystemComponent*                     CallFunc_GetPrimaryParticleComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	EInterfaceValidResult                         CallFunc_IsInterfaceValid_Result;
	EDynamicForceFeedbackAction                   Temp_byte_Variable;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_24[0x4];
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;
	uint8                                         Pad_41[0x3];
	float                                         K2Node_Event_DeltaSeconds;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	uint8                                         Pad_339[0x7];
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;
	uint8                                         Pad_481[0x7];
	class UAudioComponent*                        K2Node_ComponentBoundEvent_AudioComponent;
	class FName                                   K2Node_ComponentBoundEvent_ParameterName;
	int32                                         K2Node_ComponentBoundEvent_OneshotIndex;
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;
	uint8                                         Pad_49C[0x4];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_4B1[0x7];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;
	class ANPC_Pawn_Wildlife_Parent_C*            K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_4E9[0x7];
	TScriptInterface<class ICameraLensEffectInterface> CallFunc_AddGenericCameraLensEffect_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_505[0x3];
	double                                        CallFunc_Abs_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Abs_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	struct FVector                                CallFunc_GetVelocity_ReturnValue_1;
	class AFortWaterBodyActor*                    CallFunc_GetCurrentWaterBody_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_56A[0x6];
	class UObject*                                K2Node_CustomEvent_Object;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_SetCommonWaterFXParams_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_594[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	class AActor*                                 K2Node_DynamicCast_AsActor;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_5B9[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	class UFXSystemComponent*                     CallFunc_GetPrimaryParticleComponent_ReturnValue_1;
	EInterfaceValidResult                         CallFunc_IsInterfaceValid_Result_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_5D2[0x6];
	class AActor*                                 K2Node_DynamicCast_AsActor_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	EInterfaceValidResult                         CallFunc_IsInterfaceValid_Result_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	uint8                                         Pad_5E3[0x5];
	class UFXSystemComponent*                     CallFunc_GetPrimaryParticleComponent_ReturnValue_2;
	class AActor*                                 K2Node_DynamicCast_AsActor_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_5F9[0x7];
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;
	double                                        CallFunc_Dot_VectorVector_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_621[0x3];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	float                                         CallFunc_PlayDynamicForceFeedback_Intensity_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether");
static_assert(sizeof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether) == 0x000648, "Wrong size on GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, EntryPoint) == 0x000000, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetPrimaryParticleComponent_ReturnValue) == 0x000008, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetPrimaryParticleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000018, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsInterfaceValid_Result) == 0x000020, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsInterfaceValid_Result' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, Temp_byte_Variable) == 0x000021, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_SwitchEnum_CmpSuccess) == 0x000022, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsValid_ReturnValue_1) == 0x000023, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000028, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_MakeLiteralByte_ReturnValue) == 0x000040, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_DeltaSeconds) == 0x000044, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_MyTarget_1) == 0x000048, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_Parameters_1) == 0x000050, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_ParticleComponents_1) == 0x000120, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_AudioComponents_1) == 0x000130, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_BurstCameraShakeInstance_1) == 0x000140, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_BurstDecalInstance_1) == 0x000148, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000150, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_MyTarget) == 0x000230, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_Parameters) == 0x000238, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_ParticleComponents) == 0x000308, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_AudioComponents) == 0x000318, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_BurstCameraShakeInstance) == 0x000328, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_Event_BurstDecalInstance) == 0x000330, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000338, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetForwardVector_ReturnValue) == 0x000340, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetVelocity_ReturnValue) == 0x000358, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Normal_ReturnValue) == 0x000370, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Dot_VectorVector_ReturnValue) == 0x000388, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_VSize_ReturnValue) == 0x000390, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_MapRangeClamped_ReturnValue) == 0x000398, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x0003A0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000480, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_ComponentBoundEvent_AudioComponent) == 0x000488, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_ComponentBoundEvent_AudioComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_ComponentBoundEvent_ParameterName) == 0x000490, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_ComponentBoundEvent_ParameterName' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_ComponentBoundEvent_OneshotIndex) == 0x000494, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_ComponentBoundEvent_OneshotIndex' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000498, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_SetIntParameter_self_CastInput) == 0x0004A0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_SetIntParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsLocallyControlled_ReturnValue) == 0x0004B0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetActorForwardVector_ReturnValue) == 0x0004B8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x0004D0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetViewTarget_ReturnValue) == 0x0004D8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent) == 0x0004E0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_bSuccess) == 0x0004E8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_AddGenericCameraLensEffect_ReturnValue) == 0x0004F0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_AddGenericCameraLensEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Not_PreBool_ReturnValue) == 0x000500, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000501, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000502, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_BooleanOR_ReturnValue) == 0x000503, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_BooleanOR_ReturnValue_1) == 0x000504, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Abs_ReturnValue) == 0x000508, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_FClamp_ReturnValue) == 0x000510, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000518, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000520, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Abs_ReturnValue_1) == 0x000528, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000530, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000538, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetVelocity_ReturnValue_1) == 0x000540, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetCurrentWaterBody_ReturnValue) == 0x000558, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetCurrentWaterBody_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_VSize_ReturnValue_1) == 0x000560, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsValid_ReturnValue_2) == 0x000568, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000569, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_CustomEvent_Object) == 0x000570, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_CustomEvent_Object' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000578, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_bSuccess_1) == 0x000580, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000581, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000582, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_SetCommonWaterFXParams_ReturnValue) == 0x000583, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_SetCommonWaterFXParams_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000584, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_BooleanOR_ReturnValue_2) == 0x000585, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000586, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_BooleanAND_ReturnValue) == 0x000587, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_CreateDelegate_OutputDelegate) == 0x000588, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000598, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_FClamp_ReturnValue_1) == 0x0005A0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0005A8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_AsActor) == 0x0005B0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_bSuccess_2) == 0x0005B8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0005C0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetPrimaryParticleComponent_ReturnValue_1) == 0x0005C8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetPrimaryParticleComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsInterfaceValid_Result_1) == 0x0005D0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsInterfaceValid_Result_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_SwitchEnum_CmpSuccess_1) == 0x0005D1, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_AsActor_1) == 0x0005D8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_AsActor_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_bSuccess_3) == 0x0005E0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_IsInterfaceValid_Result_2) == 0x0005E1, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_IsInterfaceValid_Result_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_SwitchEnum_CmpSuccess_2) == 0x0005E2, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetPrimaryParticleComponent_ReturnValue_2) == 0x0005E8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetPrimaryParticleComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_AsActor_2) == 0x0005F0, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_AsActor_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, K2Node_DynamicCast_bSuccess_4) == 0x0005F8, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_GetForwardVector_ReturnValue_1) == 0x000600, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000618, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000620, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000624, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x000628, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000630, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x000634, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_SetFloatParameter_Param_ImplicitCast_2) == 0x000638, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_SetFloatParameter_Param_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_SetFloatParameter_Param_ImplicitCast_3) == 0x00063C, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_SetFloatParameter_Param_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_PlayDynamicForceFeedback_Intensity_ImplicitCast) == 0x000640, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_PlayDynamicForceFeedback_Intensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000644, "Member 'GCNL_Athena_Tether_C_ExecuteUbergraph_GCNL_Athena_Tether::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GCNL_Athena_Tether_C_InitializeTetherGCNL final
{
public:
	class UObject*                                Object;
};
static_assert(alignof(GCNL_Athena_Tether_C_InitializeTetherGCNL) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_InitializeTetherGCNL");
static_assert(sizeof(GCNL_Athena_Tether_C_InitializeTetherGCNL) == 0x000008, "Wrong size on GCNL_Athena_Tether_C_InitializeTetherGCNL");
static_assert(offsetof(GCNL_Athena_Tether_C_InitializeTetherGCNL, Object) == 0x000000, "Member 'GCNL_Athena_Tether_C_InitializeTetherGCNL::Object' has a wrong offset!");

struct GCNL_Athena_Tether_C_OnApplication final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Tether_C_OnApplication) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_OnApplication");
static_assert(sizeof(GCNL_Athena_Tether_C_OnApplication) == 0x000108, "Wrong size on GCNL_Athena_Tether_C_OnApplication");
static_assert(offsetof(GCNL_Athena_Tether_C_OnApplication, MyTarget) == 0x000000, "Member 'GCNL_Athena_Tether_C_OnApplication::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnApplication, Parameters) == 0x000008, "Member 'GCNL_Athena_Tether_C_OnApplication::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnApplication, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Tether_C_OnApplication::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnApplication, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Tether_C_OnApplication::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnApplication, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Tether_C_OnApplication::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnApplication, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Tether_C_OnApplication::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_Tether_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Tether_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_OnRemoval");
static_assert(sizeof(GCNL_Athena_Tether_C_OnRemoval) == 0x000108, "Wrong size on GCNL_Athena_Tether_C_OnRemoval");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Athena_Tether_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Athena_Tether_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Tether_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Tether_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Tether_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Tether_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_Tether_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
};
static_assert(alignof(GCNL_Athena_Tether_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_OnRemove");
static_assert(sizeof(GCNL_Athena_Tether_C_OnRemove) == 0x0000E0, "Wrong size on GCNL_Athena_Tether_C_OnRemove");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_Athena_Tether_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_Athena_Tether_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNL_Athena_Tether_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_OnRemove, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x0000D9, "Member 'GCNL_Athena_Tether_C_OnRemove::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

struct GCNL_Athena_Tether_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCNL_Athena_Tether_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_Athena_Tether_C_ReceiveTick");
static_assert(sizeof(GCNL_Athena_Tether_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_Athena_Tether_C_ReceiveTick");
static_assert(offsetof(GCNL_Athena_Tether_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_Athena_Tether_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct GCNL_Athena_Tether_C_UpdateAudio final
{
public:
	int32                                         Surface;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Abs_ReturnValue;
	float                                         CallFunc_SetFloatParameterExt_Value_ImplicitCast;
	uint8                                         Pad_1C[0x4];
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetFloatParameterExt_Value_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameterExt_Value_ImplicitCast_2;
};
static_assert(alignof(GCNL_Athena_Tether_C_UpdateAudio) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_UpdateAudio");
static_assert(sizeof(GCNL_Athena_Tether_C_UpdateAudio) == 0x000030, "Wrong size on GCNL_Athena_Tether_C_UpdateAudio");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, Surface) == 0x000000, "Member 'GCNL_Athena_Tether_C_UpdateAudio::Surface' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_Abs_ReturnValue) == 0x000010, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_SetFloatParameterExt_Value_ImplicitCast) == 0x000018, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_SetFloatParameterExt_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_SetFloatParameterExt_Value_ImplicitCast_1) == 0x000028, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_SetFloatParameterExt_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_UpdateAudio, CallFunc_SetFloatParameterExt_Value_ImplicitCast_2) == 0x00002C, "Member 'GCNL_Athena_Tether_C_UpdateAudio::CallFunc_SetFloatParameterExt_Value_ImplicitCast_2' has a wrong offset!");

struct GCNL_Athena_Tether_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
};
static_assert(alignof(GCNL_Athena_Tether_C_WhileActive) == 0x000008, "Wrong alignment on GCNL_Athena_Tether_C_WhileActive");
static_assert(sizeof(GCNL_Athena_Tether_C_WhileActive) == 0x0000E0, "Wrong size on GCNL_Athena_Tether_C_WhileActive");
static_assert(offsetof(GCNL_Athena_Tether_C_WhileActive, MyTarget) == 0x000000, "Member 'GCNL_Athena_Tether_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_WhileActive, Parameters) == 0x000008, "Member 'GCNL_Athena_Tether_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Tether_C_WhileActive, ReturnValue) == 0x0000D8, "Member 'GCNL_Athena_Tether_C_WhileActive::ReturnValue' has a wrong offset!");

}
