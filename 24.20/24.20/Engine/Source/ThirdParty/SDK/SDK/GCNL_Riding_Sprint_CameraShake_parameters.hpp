#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_112[0x6];
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_121[0x7];
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake) == 0x000008, "Wrong alignment on GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake");
static_assert(sizeof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake) == 0x000138, "Wrong size on GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, EntryPoint) == 0x000000, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, CallFunc_StartCameraShake_ReturnValue) == 0x000100, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000108, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, CallFunc_IsValid_ReturnValue) == 0x000111, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000118, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, CallFunc_StartCameraShake_ReturnValue_1) == 0x000128, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::CallFunc_StartCameraShake_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake, CallFunc_IsValid_ReturnValue_2) == 0x000130, "Member 'GCNL_Riding_Sprint_CameraShake_C_ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Riding_Sprint_CameraShake_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GCNL_Riding_Sprint_CameraShake_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_Riding_Sprint_CameraShake_C_OnRemove");
static_assert(sizeof(GCNL_Riding_Sprint_CameraShake_C_OnRemove) == 0x0000E0, "Wrong size on GCNL_Riding_Sprint_CameraShake_C_OnRemove");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000D9, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Riding_Sprint_CameraShake_C_OnRemove, CallFunc_IsValid_ReturnValue_1) == 0x0000DA, "Member 'GCNL_Riding_Sprint_CameraShake_C_OnRemove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}
