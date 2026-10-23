#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame final
{
public:
	bool                                          bHasOwnerLeftGame;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame) == 0x000001, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame, bHasOwnerLeftGame) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_BP_FormatForChallengeOwnerLeftGame::bHasOwnerLeftGame' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet final
{
public:
	bool                                          bDisabled;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet) == 0x000001, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet, bDisabled) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeInfoSet::bDisabled' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged final
{
public:
	bool                                          bChallengeSeen;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged) == 0x000001, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged, bChallengeSeen) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_BP_OnChallengeSeenChanged::bChallengeSeen' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet final
{
public:
	EFortRarity                                   Rarity;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet) == 0x000001, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet, Rarity) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_BP_OnRaritySet::Rarity' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet final
{
public:
	EAthenaChallengeTimerState                    TimerState;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet) == 0x000001, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet, TimerState) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_BP_OnTimerSet::TimerState' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          K2Node_Event_bIsCompleted;
	bool                                          K2Node_Event_bIsLocked;
	bool                                          K2Node_Event_bIsPartyAssisted;
	bool                                          K2Node_Event_bIsGroupChallenge;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          CallFunc_IsUsingGamepad_Return_Value;
	bool                                          CallFunc_IsUsingGamepad_Return_Value_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_193[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	EFortRarity                                   K2Node_Event_Rarity;
	uint8                                         Pad_1A9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	EAthenaChallengeTimerState                    K2Node_Event_TimerState;
	bool                                          K2Node_Event_bChallengeSeen;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_1BC[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          CallFunc_IsSelected_ReturnValue;
	uint8                                         Pad_1C9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsSelected_ReturnValue_1;
	bool                                          K2Node_Event_bDisabled;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          K2Node_Event_bHasOwnerLeftGame;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_1E2[0x6];
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;
	class FText                                   CallFunc_GetText_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	TArray<class FString>                         CallFunc_GetCharacterArrayFromString_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_2A5[0x3];
	const class UWidget*                          K2Node_Select_Default_2;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest) == 0x0002B0, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, EntryPoint) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_byte_Variable) == 0x000004, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_byte_Variable_1) == 0x000005, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_bool_Variable) == 0x000006, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_GetVisibility_ReturnValue) == 0x000007, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_InFocusEvent) == 0x000008, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_MyGeometry) == 0x000018, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_MouseEvent_1) == 0x000058, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_MouseEvent) == 0x0000F0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bIsCompleted) == 0x000188, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bIsCompleted' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bIsLocked) == 0x000189, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bIsLocked' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bIsPartyAssisted) == 0x00018A, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bIsPartyAssisted' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bIsGroupChallenge) == 0x00018B, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bIsGroupChallenge' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsUsingTouch_ReturnValue) == 0x00018C, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsUsingTouch_ReturnValue_1) == 0x00018D, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsUsingGamepad_Return_Value) == 0x00018E, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsUsingGamepad_Return_Value' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsUsingGamepad_Return_Value_1) == 0x00018F, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsUsingGamepad_Return_Value_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_BooleanOR_ReturnValue) == 0x000190, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_BooleanOR_ReturnValue_1) == 0x000191, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_bool_Variable_1) == 0x000192, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_PlayAnimation_ReturnValue) == 0x000198, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0001A0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_Rarity) == 0x0001A8, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_Rarity' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001B0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_byte_Variable_2) == 0x0001B8, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_TimerState) == 0x0001B9, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_TimerState' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bChallengeSeen) == 0x0001BA, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bChallengeSeen' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bIsSelected) == 0x0001BB, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0001C0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsSelected_ReturnValue) == 0x0001C8, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_PlayAnimation_ReturnValue_2) == 0x0001D0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsSelected_ReturnValue_1) == 0x0001D8, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bDisabled) == 0x0001D9, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bDisabled' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_IsMobileGame_ReturnValue) == 0x0001DA, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Select_Default) == 0x0001DB, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_byte_Variable_3) == 0x0001DC, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Event_bHasOwnerLeftGame) == 0x0001DD, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Event_bHasOwnerLeftGame' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, Temp_bool_Variable_2) == 0x0001DE, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_GetVisibility_ReturnValue_1) == 0x0001DF, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001E0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Select_Default_1) == 0x0001E1, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_BPGetRarityData_ReturnValue) == 0x0001E8, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_GetText_ReturnValue) == 0x000268, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_Conv_TextToString_ReturnValue) == 0x000280, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_GetCharacterArrayFromString_ReturnValue) == 0x000290, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_GetCharacterArrayFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_Array_Length_ReturnValue) == 0x0002A0, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, CallFunc_Greater_IntInt_ReturnValue) == 0x0002A4, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest, K2Node_Select_Default_2) == 0x0002A8, "Member 'AthenaChallengeListEntry_NpcQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest::K2Node_Select_Default_2' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad final
{
public:
	bool                                          Return_Value;
	uint8                                         Pad_1[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad) == 0x000018, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad, Return_Value) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad::Return_Value' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'AthenaChallengeListEntry_NpcQuest_C_IsUsingGamepad::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_OnFocusLost) == 0x000004, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_OnFocusLost");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_OnFocusLost) == 0x000008, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_OnFocusLost");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnFocusLost::InFocusEvent' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter) == 0x0000D8, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave) == 0x000098, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_OnSetState final
{
public:
	bool                                          bIsCompleted;
	bool                                          bIsLocked;
	bool                                          bIsPartyAssisted;
	bool                                          bIsGroupChallenge_0;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_OnSetState) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_OnSetState");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_OnSetState) == 0x000004, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_OnSetState");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnSetState, bIsCompleted) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnSetState::bIsCompleted' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnSetState, bIsLocked) == 0x000001, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnSetState::bIsLocked' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnSetState, bIsPartyAssisted) == 0x000002, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnSetState::bIsPartyAssisted' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_OnSetState, bIsGroupChallenge_0) == 0x000003, "Member 'AthenaChallengeListEntry_NpcQuest_C_OnSetState::bIsGroupChallenge_0' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_SetComplete final
{
public:
	bool                                          CallFunc_IsChallengeRefreshingDaily_ReturnValue;
	uint8                                         Pad_1[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	uint8                                         Pad_14[0x4];
	TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_SetComplete) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_SetComplete");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_SetComplete) == 0x000030, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_SetComplete");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetComplete, CallFunc_IsChallengeRefreshingDaily_ReturnValue) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetComplete::CallFunc_IsChallengeRefreshingDaily_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetComplete, K2Node_MakeStruct_Margin) == 0x000004, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetComplete::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetComplete, K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface) == 0x000018, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetComplete::K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetComplete, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetComplete::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_SetDefault final
{
public:
	bool                                          PartyAssisted;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_7[0x1];
	class FText                                   CallFunc_GetText_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_SetDefault) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_SetDefault");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_SetDefault) == 0x000028, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_SetDefault");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, PartyAssisted) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::PartyAssisted' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, Temp_bool_Variable) == 0x000001, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, Temp_byte_Variable) == 0x000002, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, Temp_byte_Variable_1) == 0x000003, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, Temp_bool_Variable_1) == 0x000004, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, Temp_byte_Variable_2) == 0x000005, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, Temp_byte_Variable_3) == 0x000006, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, K2Node_Select_Default) == 0x000021, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetDefault, K2Node_Select_Default_1) == 0x000022, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetDefault::K2Node_Select_Default_1' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer final
{
public:
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform_1;
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform_2;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer) == 0x0000A8, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer, K2Node_MakeStruct_WidgetTransform) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer, K2Node_MakeStruct_WidgetTransform_1) == 0x000038, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer::K2Node_MakeStruct_WidgetTransform_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer, K2Node_MakeStruct_WidgetTransform_2) == 0x000070, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetLockedWithTimer::K2Node_MakeStruct_WidgetTransform_2' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling final
{
public:
	EAthenaChallengeTimerState                    TimerState;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           HoverColor;
	struct FLinearColor                           DefaultColor;
	struct FLinearColor                           Temp_struct_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_35[0x3];
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	struct FLinearColor                           Temp_struct_Variable_4;
	struct FLinearColor                           Temp_struct_Variable_5;
	EAthenaChallengeTimerState                    Temp_byte_Variable;
	uint8                                         Pad_89[0x3];
	struct FLinearColor                           Temp_struct_Variable_6;
	struct FLinearColor                           Temp_struct_Variable_7;
	struct FLinearColor                           Temp_struct_Variable_8;
	struct FLinearColor                           Temp_struct_Variable_9;
	struct FLinearColor                           Temp_struct_Variable_10;
	struct FLinearColor                           Temp_struct_Variable_11;
	uint8                                         Pad_EC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	bool                                          CallFunc_GetIsCompleted_ReturnValue;
	bool                                          CallFunc_IsChallengeRefreshingDaily_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_FB[0x1];
	struct FLinearColor                           K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	EAthenaChallengeTimerState                    Temp_byte_Variable_1;
	uint8                                         Pad_10E[0x2];
	struct FLinearColor                           K2Node_Select_Default_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling) == 0x000138, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, TimerState) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::TimerState' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, HoverColor) == 0x000004, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::HoverColor' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, DefaultColor) == 0x000014, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::DefaultColor' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable) == 0x000024, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000034, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_1) == 0x000038, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_2) == 0x000048, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_3) == 0x000058, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_4) == 0x000068, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_5) == 0x000078, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_byte_Variable) == 0x000088, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_6) == 0x00008C, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_7) == 0x00009C, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_8) == 0x0000AC, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_8' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_9) == 0x0000BC, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_9' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_10) == 0x0000CC, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_10' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_struct_Variable_11) == 0x0000DC, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_struct_Variable_11' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x0000F0, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_GetIsCompleted_ReturnValue) == 0x0000F8, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_GetIsCompleted_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_IsChallengeRefreshingDaily_ReturnValue) == 0x0000F9, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_IsChallengeRefreshingDaily_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_BooleanAND_ReturnValue) == 0x0000FA, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, K2Node_Select_Default) == 0x0000FC, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00010C, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, Temp_byte_Variable_1) == 0x00010D, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, K2Node_Select_Default_1) == 0x000110, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_GetDynamicFontMaterial_ReturnValue_1) == 0x000120, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_GetDynamicFontMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_GetDynamicFontMaterial_ReturnValue_2) == 0x000128, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_GetDynamicFontMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000130, "Member 'AthenaChallengeListEntry_NpcQuest_C_SetTimerStyling::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge");
static_assert(sizeof(AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge) == 0x000004, "Wrong size on AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge, Temp_bool_Variable) == 0x000000, "Member 'AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge, Temp_byte_Variable) == 0x000001, "Member 'AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge, K2Node_Select_Default) == 0x000003, "Member 'AthenaChallengeListEntry_NpcQuest_C_UpdateGroupChallenge::K2Node_Select_Default' has a wrong offset!");

}
