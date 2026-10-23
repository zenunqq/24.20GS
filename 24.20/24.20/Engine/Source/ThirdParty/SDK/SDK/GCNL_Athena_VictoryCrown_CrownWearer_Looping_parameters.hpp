#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<class AFortPlayerController*>          Temp_object_Variable;
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;
	class AActor*                                 K2Node_Event_MyTarget_2;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_2;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	uint8                                         Pad_13D[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_145[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_3;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_4;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	uint8                                         Pad_389[0x7];
	double                                        CallFunc_GetVisualVolume_NewParam1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue_1;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	uint8                                         Pad_3C4[0x4];
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_3D2[0x6];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;
};
static_assert(alignof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping) == 0x000008, "Wrong alignment on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping");
static_assert(sizeof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping) == 0x000400, "Wrong size on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, EntryPoint) == 0x000000, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, Temp_object_Variable) == 0x000008, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_MakeArray_Array) == 0x000018, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_MyTarget_2) == 0x000028, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_Parameters_2) == 0x000030, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_ParticleComponents_2) == 0x000100, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_AudioComponents_2) == 0x000110, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_BurstCameraShakeInstance_1) == 0x000120, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_BurstDecalInstance_1) == 0x000128, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_CreateDelegate_OutputDelegate) == 0x000130, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00013C, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetValueAtLevel_ReturnValue) == 0x000140, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetValueAsBool_ReturnValue) == 0x000144, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000148, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x00014C, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetValueAtLevel_ReturnValue_3) == 0x000150, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetValueAtLevel_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetValueAtLevel_ReturnValue_4) == 0x000154, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetValueAtLevel_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000158, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000160, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000168, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_MyTarget_1) == 0x000170, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_Parameters_1) == 0x000178, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_ParticleComponents_1) == 0x000248, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_AudioComponents_1) == 0x000258, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_BurstCameraShakeInstance) == 0x000268, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_BurstDecalInstance) == 0x000270, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000278, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000280, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_MyTarget) == 0x000290, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_Parameters) == 0x000298, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_ParticleComponents) == 0x000368, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, K2Node_Event_AudioComponents) == 0x000378, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Array_Contains_ReturnValue) == 0x000388, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetVisualVolume_NewParam1) == 0x000390, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetVisualVolume_NewParam1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000398, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0003B0, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x0003B8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_GetActorTeam_ReturnValue) == 0x0003C0, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_IsPlaying_ReturnValue) == 0x0003C1, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_IsPlaying_ReturnValue_1) == 0x0003C2, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_IsPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0003C3, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Array_Get_Item) == 0x0003C8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_IsValid_ReturnValue) == 0x0003D0, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_IsValid_ReturnValue_1) == 0x0003D1, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0003D8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x0003E0, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0003E8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1) == 0x0003F0, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x0003F8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x0003FC, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");

struct GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume final
{
public:
	bool                                          IsFirstPerson;
	uint8                                         Pad_1[0x7];
	double                                        NewParam1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_1C[0x4];
	double                                        K2Node_Select_Default;
	double                                        K2Node_Select_Option_0_ImplicitCast;
	double                                        K2Node_Select_Option_1_ImplicitCast;
};
static_assert(alignof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume) == 0x000008, "Wrong alignment on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume");
static_assert(sizeof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume) == 0x000038, "Wrong size on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, IsFirstPerson) == 0x000000, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::IsFirstPerson' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, NewParam1) == 0x000008, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::NewParam1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, Temp_bool_Variable) == 0x000010, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, CallFunc_GetValueAtLevel_ReturnValue) == 0x000014, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000018, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, K2Node_Select_Default) == 0x000020, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, K2Node_Select_Option_0_ImplicitCast) == 0x000028, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume, K2Node_Select_Option_1_ImplicitCast) == 0x000030, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_GetVisualVolume::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

struct GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_VictoryCrown_CrownWearer_Looping_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
