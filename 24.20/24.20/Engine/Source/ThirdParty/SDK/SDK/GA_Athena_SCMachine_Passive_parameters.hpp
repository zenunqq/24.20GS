#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active final
{
public:
	bool                                          bEnabled;
	bool                                          PlaylistValid;
	uint8                                         Pad_2[0x2];
	class FName                                   TestPlaylist;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UFortGameStateComponent_Reboot*         CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsResurrectionEnabled_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active) == 0x000028, "Wrong size on GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, bEnabled) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::bEnabled' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, PlaylistValid) == 0x000001, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::PlaylistValid' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, TestPlaylist) == 0x000004, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::TestPlaylist' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_IsResurrectionEnabled_ReturnValue) == 0x000020, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_IsResurrectionEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled final
{
public:
	bool                                          IsChipSpawnEnabled;
	uint8                                         Pad_1[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled) == 0x000020, "Wrong size on GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled, IsChipSpawnEnabled) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled::IsChipSpawnEnabled' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000008, "Member 'GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000018, "Member 'GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_GetValueAsBoolWithContext_ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	uint8                                         Pad_6[0xA];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_C1[0x7];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_Check_Resurrection_Active_bEnabled;
	uint8                                         Pad_E1[0xF];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_CustomEvent_FortPlayerPawnAthena;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class ABGA_Athena_SCMachine_Pickup_C*         CallFunc_FinishSpawningActor_ReturnValue;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_179[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_191[0x7];
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsBattleLabModePlaylist_ReturnValue;
	bool                                          CallFunc_IsRespawningAllowed_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_CheckPlayerChipSpawnEnabled_IsChipSpawnEnabled;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive) == 0x000010, "Wrong alignment on GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive) == 0x0001B0, "Wrong size on GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, EntryPoint) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetValueAsBoolWithContext_ReturnValue) == 0x000004, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetValueAsBoolWithContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetActorTeam_ReturnValue) == 0x000005, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000070, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BreakTransform_Location) == 0x000078, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BreakTransform_Rotation) == 0x000090, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BreakTransform_Scale) == 0x0000A8, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C8, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_Check_Resurrection_Active_bEnabled) == 0x0000E0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_Check_Resurrection_Active_bEnabled' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_MakeTransform_ReturnValue) == 0x0000F0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_CustomEvent_FortPlayerPawnAthena) == 0x000150, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_CustomEvent_FortPlayerPawnAthena' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000158, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_FinishSpawningActor_ReturnValue) == 0x000160, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetGameState_ReturnValue) == 0x000168, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000170, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_bSuccess) == 0x000178, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetGameState_ReturnValue_1) == 0x000180, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000188, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_bSuccess_1) == 0x000190, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_AsFort_Player_State) == 0x000198, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_bSuccess_2) == 0x0001A0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_IsBattleLabModePlaylist_ReturnValue) == 0x0001A1, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_IsBattleLabModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_IsRespawningAllowed_ReturnValue) == 0x0001A2, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_IsRespawningAllowed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_Not_PreBool_ReturnValue) == 0x0001A3, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_CheckPlayerChipSpawnEnabled_IsChipSpawnEnabled) == 0x0001A4, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_CheckPlayerChipSpawnEnabled_IsChipSpawnEnabled' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BooleanAND_ReturnValue) == 0x0001A5, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied final
{
public:
	class AFortPlayerPawnAthena*                  FortPlayerPawnAthena;
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied) == 0x000008, "Wrong size on GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied, FortPlayerPawnAthena) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied::FortPlayerPawnAthena' has a wrong offset!");

struct GA_Athena_SCMachine_Passive_C_SaveOutPlayer final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_SaveOutPlayer");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer) == 0x000018, "Wrong size on GA_Athena_SCMachine_Passive_C_SaveOutPlayer");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_SaveOutPlayer::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000008, "Member 'GA_Athena_SCMachine_Passive_C_SaveOutPlayer::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Athena_SCMachine_Passive_C_SaveOutPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
