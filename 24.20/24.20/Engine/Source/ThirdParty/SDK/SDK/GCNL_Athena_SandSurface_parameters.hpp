#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_6[0x2];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UNiagaraComponent*>              K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;
	bool                                          CallFunc_OnLocalPlayersTeam_Return_Value;
	bool                                          CallFunc_GetIsPlayingReplay_ReturnValue;
	uint8                                         Pad_10A[0x6];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	class AFortReplaySpectatorAthena*             K2Node_DynamicCast_AsFort_Replay_Spectator_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface) == 0x000008, "Wrong alignment on GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface");
static_assert(sizeof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface) == 0x000128, "Wrong size on GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, EntryPoint) == 0x000000, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_IsMobilePlatform_ReturnValue) == 0x000004, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_Array_Get_Item) == 0x000100, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_OnLocalPlayersTeam_Return_Value) == 0x000108, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_OnLocalPlayersTeam_Return_Value' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_GetIsPlayingReplay_ReturnValue) == 0x000109, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_GetIsPlayingReplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000110, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, K2Node_DynamicCast_AsFort_Replay_Spectator_Athena) == 0x000118, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::K2Node_DynamicCast_AsFort_Replay_Spectator_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'GCNL_Athena_SandSurface_C_ExecuteUbergraph_GCNL_Athena_SandSurface::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GCNL_Athena_SandSurface_C_OnLoopingStartNiagara final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UNiagaraComponent*>              ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_SandSurface_C_OnLoopingStartNiagara) == 0x000008, "Wrong alignment on GCNL_Athena_SandSurface_C_OnLoopingStartNiagara");
static_assert(sizeof(GCNL_Athena_SandSurface_C_OnLoopingStartNiagara) == 0x0000F8, "Wrong size on GCNL_Athena_SandSurface_C_OnLoopingStartNiagara");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnLoopingStartNiagara, MyTarget) == 0x000000, "Member 'GCNL_Athena_SandSurface_C_OnLoopingStartNiagara::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnLoopingStartNiagara, Parameters) == 0x000008, "Member 'GCNL_Athena_SandSurface_C_OnLoopingStartNiagara::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnLoopingStartNiagara, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_SandSurface_C_OnLoopingStartNiagara::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnLoopingStartNiagara, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_SandSurface_C_OnLoopingStartNiagara::AudioComponents' has a wrong offset!");

struct GCNL_Athena_SandSurface_C_OnPlayerFootstep final
{
public:
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_GetCachedStepSurfaceNormal_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x7];
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_42[0x2];
	int32                                         CallFunc_GetCachedFootstepIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_49[0x7];
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;
	struct FTransform                             CallFunc_SelectTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	uint8                                         Pad_1E8[0x8];
	struct FVector4                               CallFunc_MakeVector4_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	TArray<struct FVector4>                       K2Node_MakeArray_Array;
	struct FVector                                CallFunc_SelectVector_ReturnValue;
};
static_assert(alignof(GCNL_Athena_SandSurface_C_OnPlayerFootstep) == 0x000010, "Wrong alignment on GCNL_Athena_SandSurface_C_OnPlayerFootstep");
static_assert(sizeof(GCNL_Athena_SandSurface_C_OnPlayerFootstep) == 0x000250, "Wrong size on GCNL_Athena_SandSurface_C_OnPlayerFootstep");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetVelocity_ReturnValue) == 0x000000, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetCachedStepSurfaceNormal_ReturnValue) == 0x000018, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetCachedStepSurfaceNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetViewTarget_ReturnValue) == 0x000038, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_OnSameTeam_ReturnValue) == 0x000040, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetCachedFootstepIndex_ReturnValue) == 0x000044, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetCachedFootstepIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetSocketTransform_ReturnValue) == 0x000050, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetSocketTransform_ReturnValue_1) == 0x0000B0, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_SelectTransform_ReturnValue) == 0x000110, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_SelectTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_BreakTransform_Location) == 0x000170, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_BreakTransform_Rotation) == 0x000188, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_BreakTransform_Scale) == 0x0001A0, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_BreakVector_X) == 0x0001B8, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_BreakVector_Y) == 0x0001C0, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_BreakVector_Z) == 0x0001C8, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_GetForwardVector_ReturnValue) == 0x0001D0, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_MakeVector4_ReturnValue) == 0x0001F0, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_MakeVector4_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000210, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, K2Node_MakeArray_Array) == 0x000228, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SandSurface_C_OnPlayerFootstep, CallFunc_SelectVector_ReturnValue) == 0x000238, "Member 'GCNL_Athena_SandSurface_C_OnPlayerFootstep::CallFunc_SelectVector_ReturnValue' has a wrong offset!");

}
