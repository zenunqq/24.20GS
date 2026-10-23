#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_B[0x1];
	struct FFortPublicAccountInfo                 K2Node_Event_Result;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward) == 0x000004, "Wrong alignment on PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward");
static_assert(sizeof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward) == 0x000044, "Wrong size on PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, EntryPoint) == 0x000000, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, Temp_bool_Variable) == 0x000004, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, Temp_byte_Variable) == 0x000005, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, Temp_byte_Variable_1) == 0x000006, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, Temp_bool_Variable_1) == 0x000007, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, Temp_byte_Variable_2) == 0x000008, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, Temp_byte_Variable_3) == 0x000009, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, K2Node_Event_IsDesignTime) == 0x00000A, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, K2Node_Event_Result) == 0x00000C, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::K2Node_Event_Result' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, K2Node_Select_Default) == 0x000040, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward, K2Node_Select_Default_1) == 0x000041, "Member 'PlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward::K2Node_Select_Default_1' has a wrong offset!");

struct PlayerBattlePassXpAndReward_C_OnAccountInfoChanged final
{
public:
	struct FFortPublicAccountInfo                 Result;
};
static_assert(alignof(PlayerBattlePassXpAndReward_C_OnAccountInfoChanged) == 0x000004, "Wrong alignment on PlayerBattlePassXpAndReward_C_OnAccountInfoChanged");
static_assert(sizeof(PlayerBattlePassXpAndReward_C_OnAccountInfoChanged) == 0x000034, "Wrong size on PlayerBattlePassXpAndReward_C_OnAccountInfoChanged");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_OnAccountInfoChanged, Result) == 0x000000, "Member 'PlayerBattlePassXpAndReward_C_OnAccountInfoChanged::Result' has a wrong offset!");

struct PlayerBattlePassXpAndReward_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PlayerBattlePassXpAndReward_C_PreConstruct) == 0x000001, "Wrong alignment on PlayerBattlePassXpAndReward_C_PreConstruct");
static_assert(sizeof(PlayerBattlePassXpAndReward_C_PreConstruct) == 0x000001, "Wrong size on PlayerBattlePassXpAndReward_C_PreConstruct");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PlayerBattlePassXpAndReward_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PlayerBattlePassXpAndReward_C_Refresh final
{
public:
	struct FFortPublicAccountInfo                 FortPublicAccountInfo;
	uint8                                         Pad_34[0x4];
	class FText                                   CallFunc_GetCurrentSeasonNumberAsText_ReturnValue;
	class FText                                   CallFunc_GetCurrentChapterAsText_ReturnValue;
};
static_assert(alignof(PlayerBattlePassXpAndReward_C_Refresh) == 0x000008, "Wrong alignment on PlayerBattlePassXpAndReward_C_Refresh");
static_assert(sizeof(PlayerBattlePassXpAndReward_C_Refresh) == 0x000068, "Wrong size on PlayerBattlePassXpAndReward_C_Refresh");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_Refresh, FortPublicAccountInfo) == 0x000000, "Member 'PlayerBattlePassXpAndReward_C_Refresh::FortPublicAccountInfo' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_Refresh, CallFunc_GetCurrentSeasonNumberAsText_ReturnValue) == 0x000038, "Member 'PlayerBattlePassXpAndReward_C_Refresh::CallFunc_GetCurrentSeasonNumberAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_Refresh, CallFunc_GetCurrentChapterAsText_ReturnValue) == 0x000050, "Member 'PlayerBattlePassXpAndReward_C_Refresh::CallFunc_GetCurrentChapterAsText_ReturnValue' has a wrong offset!");

struct PlayerBattlePassXpAndReward_C_SetupReward final
{
public:
	class UWidget*                                Container;
	class UTextBlock*                             RewardText;
	class UDailyQuestRewardInfo_Legacy_C*         RewardInfoWidget;
	bool                                          HasReward;
	uint8                                         Pad_19[0x3];
	struct FFortItemQuantityPair                  RewardItem;
	int32                                         LevelRewarded;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_2D[0x3];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(PlayerBattlePassXpAndReward_C_SetupReward) == 0x000008, "Wrong alignment on PlayerBattlePassXpAndReward_C_SetupReward");
static_assert(sizeof(PlayerBattlePassXpAndReward_C_SetupReward) == 0x000050, "Wrong size on PlayerBattlePassXpAndReward_C_SetupReward");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, Container) == 0x000000, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::Container' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, RewardText) == 0x000008, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::RewardText' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, RewardInfoWidget) == 0x000010, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::RewardInfoWidget' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, HasReward) == 0x000018, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::HasReward' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, RewardItem) == 0x00001C, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::RewardItem' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, LevelRewarded) == 0x000028, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::LevelRewarded' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, Temp_byte_Variable) == 0x00002C, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, Temp_byte_Variable_1) == 0x000049, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, Temp_bool_Variable) == 0x00004A, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBattlePassXpAndReward_C_SetupReward, K2Node_Select_Default) == 0x00004B, "Member 'PlayerBattlePassXpAndReward_C_SetupReward::K2Node_Select_Default' has a wrong offset!");

}
