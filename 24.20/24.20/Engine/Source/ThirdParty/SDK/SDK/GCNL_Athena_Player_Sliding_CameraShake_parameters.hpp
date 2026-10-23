#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayCameras_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget_2;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_2;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_211[0x7];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	int64                                         CallFunc_Conv_DoubleToInt64_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_249[0x7];
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;
	class ULegacyCameraShake*                     CallFunc_Conv_LegacyCameraShake_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_371[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	int64                                         CallFunc_Conv_DoubleToInt64_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	float                                         CallFunc_Divide_Int64Int64UsingFloatingPoint_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_3A9[0x7];
	double                                        CallFunc_FClamp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	struct FFOscillator                           K2Node_MakeStruct_FOscillator;
	struct FROscillator                           K2Node_MakeStruct_ROscillator;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_3FB[0x5];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_432[0x6];
	double                                        CallFunc_Conv_DoubleToInt64_InDouble_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;
	float                                         K2Node_MakeStruct_Frequency_ImplicitCast;
	float                                         K2Node_MakeStruct_Amplitude_ImplicitCast;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake");
static_assert(sizeof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake) == 0x000460, "Wrong size on GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, EntryPoint) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_MyTarget_2) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_Parameters_2) == 0x000010, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_ParticleComponents_2) == 0x0000E0, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_AudioComponents_2) == 0x0000F0, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_BurstCameraShakeInstance_1) == 0x000100, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_BurstDecalInstance_1) == 0x000108, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_MyTarget_1) == 0x000110, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_Parameters_1) == 0x000118, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_ParticleComponents_1) == 0x0001E8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_AudioComponents_1) == 0x0001F8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000208, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_DynamicCast_bSuccess) == 0x000210, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_GetVelocity_ReturnValue) == 0x000218, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_VSize_ReturnValue) == 0x000230, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000238, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Conv_DoubleToInt64_ReturnValue) == 0x000240, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Conv_DoubleToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_IsValid_ReturnValue) == 0x000248, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_StartCameraShake_ReturnValue) == 0x000250, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Conv_LegacyCameraShake_ReturnValue) == 0x000258, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Conv_LegacyCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_MyTarget) == 0x000260, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_Parameters) == 0x000268, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_ParticleComponents) == 0x000338, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_AudioComponents) == 0x000348, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_BurstCameraShakeInstance) == 0x000358, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_Event_BurstDecalInstance) == 0x000360, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000368, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_DynamicCast_bSuccess_1) == 0x000370, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_GetValueAtLevel_ReturnValue) == 0x000374, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Conv_DoubleToInt64_ReturnValue_1) == 0x000378, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Conv_DoubleToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_CreateDelegate_OutputDelegate) == 0x000380, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Divide_Int64Int64UsingFloatingPoint_ReturnValue) == 0x00038C, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Divide_Int64Int64UsingFloatingPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000390, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000398, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0003A0, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0003A8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_FClamp_ReturnValue) == 0x0003B0, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Lerp_ReturnValue) == 0x0003B8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Lerp_ReturnValue_1) == 0x0003C0, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_MakeStruct_FOscillator) == 0x0003C8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_MakeStruct_FOscillator' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_MakeStruct_ROscillator) == 0x0003D4, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_MakeStruct_ROscillator' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_IsLocallyViewed_ReturnValue) == 0x0003F8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_IsValid_ReturnValue_1) == 0x0003F9, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Not_PreBool_ReturnValue) == 0x0003FA, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000400, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_BreakVector_X) == 0x000418, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_BreakVector_Y) == 0x000420, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_BreakVector_Z) == 0x000428, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000430, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_BooleanOR_ReturnValue) == 0x000431, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Conv_DoubleToInt64_InDouble_ImplicitCast) == 0x000438, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Conv_DoubleToInt64_InDouble_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000440, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000448, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1) == 0x000450, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_MakeStruct_Frequency_ImplicitCast) == 0x000458, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_MakeStruct_Frequency_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake, K2Node_MakeStruct_Amplitude_ImplicitCast) == 0x00045C, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake::K2Node_MakeStruct_Amplitude_ImplicitCast' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Player_Sliding_CameraShake_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
