#pragma once

#include "Basic.hpp"

#include "GrindRailRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	TDelegate<void(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          K2Node_CustomEvent_bNewIsSprinting;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	EGrindRailBoosterMode                         K2Node_CustomEvent_PreviousBoosterMode;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	TDelegate<void(EGrindRailBoosterMode PreviousBoosterMode)> K2Node_CreateDelegate_OutputDelegate_2;
	class UBP_GrindingComponent_C*                CallFunc_GetComponentByClass_ReturnValue;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_3C[0x4];
	class AFortGrindRail*                         K2Node_CustomEvent_OldRail;
	class AFortGrindRail*                         K2Node_CustomEvent_NewRail;
	class AActor*                                 K2Node_Event_MyTarget_2;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_2;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_161[0x7];
	class ABGA_GrindRail_C*                       K2Node_DynamicCast_AsBGA_Grind_Rail;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_171[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
	bool                                          K2Node_Event_bNewState;
	uint8                                         Pad_285[0x3];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	TDelegate<void(bool bNewIsSprinting)>         K2Node_CreateDelegate_OutputDelegate_3;
	float                                         CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item_1;
	class UBP_GrindingComponent_C*                CallFunc_GetComponentByClass_ReturnValue_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_3C1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
};
static_assert(alignof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding) == 0x000008, "Wrong alignment on GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding");
static_assert(sizeof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding) == 0x0003D0, "Wrong size on GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, EntryPoint) == 0x000000, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CustomEvent_bNewIsSprinting) == 0x000020, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CustomEvent_bNewIsSprinting' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CustomEvent_PreviousBoosterMode) == 0x000022, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CustomEvent_PreviousBoosterMode' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_SwitchEnum_CmpSuccess_1) == 0x000023, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CustomEvent_OldRail) == 0x000040, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CustomEvent_OldRail' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CustomEvent_NewRail) == 0x000048, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CustomEvent_NewRail' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_MyTarget_2) == 0x000050, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_Parameters_2) == 0x000058, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_ParticleComponents_2) == 0x000128, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_AudioComponents_2) == 0x000138, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_BurstCameraShakeInstance_1) == 0x000148, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_BurstDecalInstance_1) == 0x000150, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000158, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_DynamicCast_AsBGA_Grind_Rail) == 0x000168, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_DynamicCast_AsBGA_Grind_Rail' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_DynamicCast_bSuccess_1) == 0x000170, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_MyTarget_1) == 0x000178, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_Parameters_1) == 0x000180, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_ParticleComponents_1) == 0x000250, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_AudioComponents_1) == 0x000260, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_BurstCameraShakeInstance) == 0x000270, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_BurstDecalInstance) == 0x000278, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000280, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_bNewState) == 0x000284, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_bNewState' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000288, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000290, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CreateDelegate_OutputDelegate_3) == 0x000298, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_GetConsoleVariableFloatValue_ReturnValue) == 0x0002A4, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_GetConsoleVariableFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_MyTarget) == 0x0002A8, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_Parameters) == 0x0002B0, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_ParticleComponents) == 0x000380, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_Event_AudioComponents) == 0x000390, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_Array_Get_Item) == 0x0003A0, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_Array_Get_Item_1) == 0x0003A8, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0003B0, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0003B8, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_DynamicCast_bSuccess_2) == 0x0003C0, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003C4, "Member 'GCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

struct GCNL_Grinding_C_GrindAudioState final
{
public:
	bool                                          Start;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_OnLocalPlayersTeam_Return_Value;
	bool                                          CallFunc_OnLocalPlayersTeam_Return_Value_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_6[0x2];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
};
static_assert(alignof(GCNL_Grinding_C_GrindAudioState) == 0x000008, "Wrong alignment on GCNL_Grinding_C_GrindAudioState");
static_assert(sizeof(GCNL_Grinding_C_GrindAudioState) == 0x000030, "Wrong size on GCNL_Grinding_C_GrindAudioState");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, Start) == 0x000000, "Member 'GCNL_Grinding_C_GrindAudioState::Start' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_OnLocalPlayersTeam_Return_Value) == 0x000003, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_OnLocalPlayersTeam_Return_Value' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_OnLocalPlayersTeam_Return_Value_1) == 0x000004, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_OnLocalPlayersTeam_Return_Value_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_IsValid_ReturnValue_2) == 0x000005, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000010, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000018, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000020, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_GrindAudioState, CallFunc_IsValid_ReturnValue_3) == 0x000028, "Member 'GCNL_Grinding_C_GrindAudioState::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

struct GCNL_Grinding_C_HandleGrindRailChanged final
{
public:
	class AFortGrindRail*                         OldRail;
	class AFortGrindRail*                         NewRail;
};
static_assert(alignof(GCNL_Grinding_C_HandleGrindRailChanged) == 0x000008, "Wrong alignment on GCNL_Grinding_C_HandleGrindRailChanged");
static_assert(sizeof(GCNL_Grinding_C_HandleGrindRailChanged) == 0x000010, "Wrong size on GCNL_Grinding_C_HandleGrindRailChanged");
static_assert(offsetof(GCNL_Grinding_C_HandleGrindRailChanged, OldRail) == 0x000000, "Member 'GCNL_Grinding_C_HandleGrindRailChanged::OldRail' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_HandleGrindRailChanged, NewRail) == 0x000008, "Member 'GCNL_Grinding_C_HandleGrindRailChanged::NewRail' has a wrong offset!");

struct GCNL_Grinding_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Grinding_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Grinding_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Grinding_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Grinding_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Grinding_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Grinding_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Grinding_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Grinding_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Grinding_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Grinding_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Grinding_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Grinding_C_OnForwardChanged final
{
public:
	bool                                          bNewState;
};
static_assert(alignof(GCNL_Grinding_C_OnForwardChanged) == 0x000001, "Wrong alignment on GCNL_Grinding_C_OnForwardChanged");
static_assert(sizeof(GCNL_Grinding_C_OnForwardChanged) == 0x000001, "Wrong size on GCNL_Grinding_C_OnForwardChanged");
static_assert(offsetof(GCNL_Grinding_C_OnForwardChanged, bNewState) == 0x000000, "Member 'GCNL_Grinding_C_OnForwardChanged::bNewState' has a wrong offset!");

struct GCNL_Grinding_C_OnGrindRailBoosterMode final
{
public:
	EGrindRailBoosterMode                         PreviousBoosterMode;
};
static_assert(alignof(GCNL_Grinding_C_OnGrindRailBoosterMode) == 0x000001, "Wrong alignment on GCNL_Grinding_C_OnGrindRailBoosterMode");
static_assert(sizeof(GCNL_Grinding_C_OnGrindRailBoosterMode) == 0x000001, "Wrong size on GCNL_Grinding_C_OnGrindRailBoosterMode");
static_assert(offsetof(GCNL_Grinding_C_OnGrindRailBoosterMode, PreviousBoosterMode) == 0x000000, "Member 'GCNL_Grinding_C_OnGrindRailBoosterMode::PreviousBoosterMode' has a wrong offset!");

struct GCNL_Grinding_C_OnGrindRailSprint final
{
public:
	bool                                          bNewIsSprinting;
};
static_assert(alignof(GCNL_Grinding_C_OnGrindRailSprint) == 0x000001, "Wrong alignment on GCNL_Grinding_C_OnGrindRailSprint");
static_assert(sizeof(GCNL_Grinding_C_OnGrindRailSprint) == 0x000001, "Wrong size on GCNL_Grinding_C_OnGrindRailSprint");
static_assert(offsetof(GCNL_Grinding_C_OnGrindRailSprint, bNewIsSprinting) == 0x000000, "Member 'GCNL_Grinding_C_OnGrindRailSprint::bNewIsSprinting' has a wrong offset!");

struct GCNL_Grinding_C_OnJumpedOff final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
};
static_assert(alignof(GCNL_Grinding_C_OnJumpedOff) == 0x000008, "Wrong alignment on GCNL_Grinding_C_OnJumpedOff");
static_assert(sizeof(GCNL_Grinding_C_OnJumpedOff) == 0x000010, "Wrong size on GCNL_Grinding_C_OnJumpedOff");
static_assert(offsetof(GCNL_Grinding_C_OnJumpedOff, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GCNL_Grinding_C_OnJumpedOff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnJumpedOff, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'GCNL_Grinding_C_OnJumpedOff::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

struct GCNL_Grinding_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Grinding_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Grinding_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Grinding_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Grinding_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Grinding_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Grinding_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Grinding_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Grinding_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Grinding_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Grinding_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Grinding_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Grinding_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Grinding_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Grinding_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Grinding_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Grinding_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Grinding_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Grinding_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Grinding_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Grinding_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Grinding_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Grinding_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCNL_Grinding_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_Grinding_C_ReceiveTick");
static_assert(sizeof(GCNL_Grinding_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_Grinding_C_ReceiveTick");
static_assert(offsetof(GCNL_Grinding_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_Grinding_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct GCNL_Grinding_C_UpdateAudioParams final
{
public:
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_15[0x3];
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	bool                                          CallFunc_IsGrinding_ReturnValue;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_2;
	double                                        CallFunc_FInterpTo_ReturnValue;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	double                                        CallFunc_Abs_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_1;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	double                                        CallFunc_FInterpTo_ReturnValue_1;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_3;
	uint8                                         Pad_84[0x4];
	double                                        CallFunc_FInterpTo_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_92[0x6];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_2;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_3;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_4;
	double                                        CallFunc_FInterpTo_ReturnValue_3;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_4;
	double                                        CallFunc_FInterpTo_ReturnValue_4;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_5;
	double                                        CallFunc_Abs_ReturnValue_1;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_5;
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;
	double                                        CallFunc_FInterpTo_ReturnValue_5;
	double                                        CallFunc_FInterpTo_Target_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast_1;
	double                                        CallFunc_FInterpTo_Target_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast_2;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast_3;
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;
	double                                        CallFunc_FInterpTo_Target_ImplicitCast_2;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast_4;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast_5;
	double                                        CallFunc_Abs_A_ImplicitCast;
};
static_assert(alignof(GCNL_Grinding_C_UpdateAudioParams) == 0x000008, "Wrong alignment on GCNL_Grinding_C_UpdateAudioParams");
static_assert(sizeof(GCNL_Grinding_C_UpdateAudioParams) == 0x000158, "Wrong size on GCNL_Grinding_C_UpdateAudioParams");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000000, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x00000C, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Conv_BoolToFloat_ReturnValue_1) == 0x000010, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Conv_BoolToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000014, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000018, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_IsGrinding_ReturnValue) == 0x000020, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_IsGrinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Conv_BoolToFloat_ReturnValue_2) == 0x000024, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Conv_BoolToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_ReturnValue) == 0x000028, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_GetWorldDeltaSeconds_ReturnValue_2) == 0x000030, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_GetWorldDeltaSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_GetWorldDeltaSeconds_ReturnValue_3) == 0x000040, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_GetWorldDeltaSeconds_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_self_CastInput) == 0x000048, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Abs_ReturnValue) == 0x000058, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_self_CastInput_1) == 0x000060, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_MapRangeClamped_ReturnValue) == 0x000070, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_ReturnValue_1) == 0x000078, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Conv_BoolToFloat_ReturnValue_3) == 0x000080, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Conv_BoolToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_ReturnValue_2) == 0x000088, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000090, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_BooleanOR_ReturnValue) == 0x000091, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_self_CastInput_2) == 0x000098, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_self_CastInput_3) == 0x0000A8, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_GetWorldDeltaSeconds_ReturnValue_4) == 0x0000B8, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_GetWorldDeltaSeconds_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_ReturnValue_3) == 0x0000C0, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_self_CastInput_4) == 0x0000C8, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_ReturnValue_4) == 0x0000D8, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_GetWorldDeltaSeconds_ReturnValue_5) == 0x0000E0, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_GetWorldDeltaSeconds_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Abs_ReturnValue_1) == 0x0000E8, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_self_CastInput_5) == 0x0000F0, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_self_CastInput_5' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_MapRangeClamped_ReturnValue_1) == 0x000100, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_ReturnValue_5) == 0x000108, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_Target_ImplicitCast) == 0x000110, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_Target_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000118, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000120, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_InFloat_ImplicitCast_1) == 0x000124, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_InFloat_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_Target_ImplicitCast_1) == 0x000128, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_Target_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_InFloat_ImplicitCast_2) == 0x000130, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_InFloat_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_InFloat_ImplicitCast_3) == 0x000134, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_InFloat_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x000138, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_FInterpTo_Target_ImplicitCast_2) == 0x000140, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_FInterpTo_Target_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_InFloat_ImplicitCast_4) == 0x000148, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_InFloat_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_SetFloatParameter_InFloat_ImplicitCast_5) == 0x00014C, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_SetFloatParameter_InFloat_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(GCNL_Grinding_C_UpdateAudioParams, CallFunc_Abs_A_ImplicitCast) == 0x000150, "Member 'GCNL_Grinding_C_UpdateAudioParams::CallFunc_Abs_A_ImplicitCast' has a wrong offset!");

}
