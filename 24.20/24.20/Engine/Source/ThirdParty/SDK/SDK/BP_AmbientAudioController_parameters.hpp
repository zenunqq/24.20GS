#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"

namespace SDK::Params
{

struct BP_AmbientAudioController_C_ApplyPlayerTags final
{
public:
	class AActor*                                 Player;
	TArray<struct FGameplayTag>                   Tag_Array;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(BP_AmbientAudioController_C_ApplyPlayerTags) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_ApplyPlayerTags");
static_assert(sizeof(BP_AmbientAudioController_C_ApplyPlayerTags) == 0x000100, "Wrong size on BP_AmbientAudioController_C_ApplyPlayerTags");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, Player) == 0x000000, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::Player' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, Tag_Array) == 0x000008, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::Tag_Array' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, CallFunc_Array_Get_Item) == 0x000024, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ApplyPlayerTags, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000030, "Member 'BP_AmbientAudioController_C_ApplyPlayerTags::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

struct BP_AmbientAudioController_C_CacheViewTarget final
{
public:
	class AActor*                                 NewViewTarget;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_9[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;
};
static_assert(alignof(BP_AmbientAudioController_C_CacheViewTarget) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_CacheViewTarget");
static_assert(sizeof(BP_AmbientAudioController_C_CacheViewTarget) == 0x000020, "Wrong size on BP_AmbientAudioController_C_CacheViewTarget");
static_assert(offsetof(BP_AmbientAudioController_C_CacheViewTarget, NewViewTarget) == 0x000000, "Member 'BP_AmbientAudioController_C_CacheViewTarget::NewViewTarget' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_CacheViewTarget, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'BP_AmbientAudioController_C_CacheViewTarget::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_CacheViewTarget, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000010, "Member 'BP_AmbientAudioController_C_CacheViewTarget::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_CacheViewTarget, CallFunc_GetViewTarget_ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_CacheViewTarget::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");

struct BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AGameStateBase*                         K2Node_CustomEvent_GameState;
	class AGameStateBase*                         Temp_object_Variable;
	class UFortAsyncAction_GameStateReady*        CallFunc_GameStateReadyAsync_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	EInteriorAudioState                           Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable;
	uint8                                         Pad_22[0x6];
	TArray<EInteriorAudioState>                   Temp_wildcard_Avoid_creating_array_every_time_Variable;
	struct FGameplayTag                           Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable_1;
	uint8                                         Pad_3C[0x4];
	TArray<struct FGameplayTag>                   Temp_wildcard_Avoid_creating_array_every_time_Variable_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_5D[0x3];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	TDelegate<void(class AGameStateBase* GameState)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	uint8                                         Pad_75[0x3];
	class UFortInteriorAudioSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;
	struct FInteriorAudioPlayerInfo               CallFunc_GetPlayerInfo_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1A2[0x2];
	struct FGameplayTag                           K2Node_CustomEvent_Curr_1;
	struct FGameplayTag                           K2Node_CustomEvent_Prev_1;
	EInteriorAudioState                           K2Node_CustomEvent_Curr;
	EInteriorAudioState                           K2Node_CustomEvent_Prev;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_1AF[0x1];
	class UReverbEffect*                          CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_1B9[0x7];
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue_2;
	uint8                                         Pad_1D1[0x7];
	class UAmbientAudioSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController");
static_assert(sizeof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController) == 0x0001E8, "Wrong size on BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, EntryPoint) == 0x000000, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CustomEvent_GameState) == 0x000008, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, Temp_object_Variable) == 0x000010, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GameStateReadyAsync_ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GameStateReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable) == 0x000021, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, Temp_wildcard_Avoid_creating_array_every_time_Variable) == 0x000028, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::Temp_wildcard_Avoid_creating_array_every_time_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable_1) == 0x000038, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, Temp_wildcard_Avoid_creating_array_every_time_Variable_1) == 0x000040, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::Temp_wildcard_Avoid_creating_array_every_time_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_IsDedicatedServer_ReturnValue) == 0x00005C, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000060, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Array_Contains_ReturnValue) == 0x000074, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000078, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetPlayerInfo_ReturnValue) == 0x000080, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetPlayerInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Array_Contains_ReturnValue_1) == 0x0001A0, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A1, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CustomEvent_Curr_1) == 0x0001A4, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CustomEvent_Curr_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CustomEvent_Prev_1) == 0x0001A8, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CustomEvent_Prev_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CustomEvent_Curr) == 0x0001AC, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CustomEvent_Curr' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_CustomEvent_Prev) == 0x0001AD, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_CustomEvent_Prev' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, K2Node_SwitchEnum_CmpSuccess) == 0x0001AE, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Map_Find_Value) == 0x0001B0, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Map_Find_ReturnValue) == 0x0001B8, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetCurrentLevelName_ReturnValue) == 0x0001C0, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_Array_Contains_ReturnValue_2) == 0x0001D0, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_Array_Contains_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x0001D8, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0001E0, "Member 'BP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct BP_AmbientAudioController_C_InitSnowCoverageComponent final
{
public:
	class AGameStateBase*                         Game_State;
	class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue;
};
static_assert(alignof(BP_AmbientAudioController_C_InitSnowCoverageComponent) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_InitSnowCoverageComponent");
static_assert(sizeof(BP_AmbientAudioController_C_InitSnowCoverageComponent) == 0x000010, "Wrong size on BP_AmbientAudioController_C_InitSnowCoverageComponent");
static_assert(offsetof(BP_AmbientAudioController_C_InitSnowCoverageComponent, Game_State) == 0x000000, "Member 'BP_AmbientAudioController_C_InitSnowCoverageComponent::Game_State' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_InitSnowCoverageComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_AmbientAudioController_C_InitSnowCoverageComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

struct BP_AmbientAudioController_C_On_Room_Size_Changed final
{
public:
	struct FGameplayTag                           Curr;
	struct FGameplayTag                           Prev;
};
static_assert(alignof(BP_AmbientAudioController_C_On_Room_Size_Changed) == 0x000004, "Wrong alignment on BP_AmbientAudioController_C_On_Room_Size_Changed");
static_assert(sizeof(BP_AmbientAudioController_C_On_Room_Size_Changed) == 0x000008, "Wrong size on BP_AmbientAudioController_C_On_Room_Size_Changed");
static_assert(offsetof(BP_AmbientAudioController_C_On_Room_Size_Changed, Curr) == 0x000000, "Member 'BP_AmbientAudioController_C_On_Room_Size_Changed::Curr' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_On_Room_Size_Changed, Prev) == 0x000004, "Member 'BP_AmbientAudioController_C_On_Room_Size_Changed::Prev' has a wrong offset!");

struct BP_AmbientAudioController_C_On_Room_State_Changed final
{
public:
	EInteriorAudioState                           Curr;
	EInteriorAudioState                           Prev;
};
static_assert(alignof(BP_AmbientAudioController_C_On_Room_State_Changed) == 0x000001, "Wrong alignment on BP_AmbientAudioController_C_On_Room_State_Changed");
static_assert(sizeof(BP_AmbientAudioController_C_On_Room_State_Changed) == 0x000002, "Wrong size on BP_AmbientAudioController_C_On_Room_State_Changed");
static_assert(offsetof(BP_AmbientAudioController_C_On_Room_State_Changed, Curr) == 0x000000, "Member 'BP_AmbientAudioController_C_On_Room_State_Changed::Curr' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_On_Room_State_Changed, Prev) == 0x000001, "Member 'BP_AmbientAudioController_C_On_Room_State_Changed::Prev' has a wrong offset!");

struct BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614 final
{
public:
	class AGameStateBase*                         GameState;
};
static_assert(alignof(BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614");
static_assert(sizeof(BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614) == 0x000008, "Wrong size on BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614");
static_assert(offsetof(BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614, GameState) == 0x000000, "Member 'BP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614::GameState' has a wrong offset!");

struct BP_AmbientAudioController_C_OnViewTargetChanged final
{
public:
	class AActor*                                 New_Target;
	class AActor*                                 Prev_Target;
};
static_assert(alignof(BP_AmbientAudioController_C_OnViewTargetChanged) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_OnViewTargetChanged");
static_assert(sizeof(BP_AmbientAudioController_C_OnViewTargetChanged) == 0x000010, "Wrong size on BP_AmbientAudioController_C_OnViewTargetChanged");
static_assert(offsetof(BP_AmbientAudioController_C_OnViewTargetChanged, New_Target) == 0x000000, "Member 'BP_AmbientAudioController_C_OnViewTargetChanged::New_Target' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_OnViewTargetChanged, Prev_Target) == 0x000008, "Member 'BP_AmbientAudioController_C_OnViewTargetChanged::Prev_Target' has a wrong offset!");

struct BP_AmbientAudioController_C_RemovePlayerTags final
{
public:
	class AActor*                                 Player;
	TArray<struct FGameplayTag>                   Array;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(BP_AmbientAudioController_C_RemovePlayerTags) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_RemovePlayerTags");
static_assert(sizeof(BP_AmbientAudioController_C_RemovePlayerTags) == 0x000100, "Wrong size on BP_AmbientAudioController_C_RemovePlayerTags");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, Player) == 0x000000, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::Player' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, Array) == 0x000008, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::Array' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, CallFunc_Array_Get_Item) == 0x000024, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_RemovePlayerTags, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000030, "Member 'BP_AmbientAudioController_C_RemovePlayerTags::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

struct BP_AmbientAudioController_C_UpdateSnowSetupBP final
{
public:
	class UAmbientAudioSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	EPhysicalSurface                              CallFunc_GetSpecialSurfaceType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsLocationInSpecialSurface_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_2B[0x1];
	float                                         CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast;
};
static_assert(alignof(BP_AmbientAudioController_C_UpdateSnowSetupBP) == 0x000008, "Wrong alignment on BP_AmbientAudioController_C_UpdateSnowSetupBP");
static_assert(sizeof(BP_AmbientAudioController_C_UpdateSnowSetupBP) == 0x000030, "Wrong size on BP_AmbientAudioController_C_UpdateSnowSetupBP");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000000, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_GetSpecialSurfaceType_ReturnValue) == 0x000009, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_GetSpecialSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_IsValid_ReturnValue_1) == 0x00000B, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_IsLocationInSpecialSurface_ReturnValue) == 0x000028, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_IsLocationInSpecialSurface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000029, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AmbientAudioController_C_UpdateSnowSetupBP, CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast) == 0x00002C, "Member 'BP_AmbientAudioController_C_UpdateSnowSetupBP::CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast' has a wrong offset!");

}
