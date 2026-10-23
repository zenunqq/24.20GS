#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet final
{
public:
	bool                                          bDisabled;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet) == 0x000001, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet, bDisabled) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_BP_OnChallengeInfoSet::bDisabled' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected_0;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged, bIsSelected_0) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_BP_OnItemSelectionChanged::bIsSelected_0' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class FText                                   Temp_text_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_3F[0x1];
	class FText                                   Temp_text_Variable_1;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_1CB[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          K2Node_Event_bDisabled;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_202[0x6];
	struct FTimespan                              CallFunc_GetStartingUnlockTime_ReturnValue;
	class FText                                   CallFunc_GetFormattedTime_OutputString;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_28D[0x3];
	struct FTimespan                              CallFunc_GetStartingUnlockTime_ReturnValue_1;
	class FText                                   CallFunc_GetFormattedTime_OutputString_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_301[0x3];
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	ELockedWidgetUnlockType                       K2Node_Event_InUnlockType;
	bool                                          CallFunc_Greater_Int64Int64_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_42B[0x5];
	class FText                                   CallFunc_GetFinalDisplayName_DisplayName;
	class FText                                   K2Node_Select_Default_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_3;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;
	uint8                                         Pad_5F2[0x6];
	class FText                                   K2Node_Select_Default_2;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;
	class FText                                   K2Node_Select_Default_3;
	class FText                                   CallFunc_Format_ReturnValue_1;
	bool                                          CallFunc_TextIsEmpty_ReturnValue_2;
	uint8                                         Pad_671[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_3;
	class FText                                   K2Node_Select_Default_4;
	class FText                                   CallFunc_Format_ReturnValue_2;
	class FText                                   CallFunc_GetSingleLineDescription_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue_3;
	uint8                                         Pad_6D9[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;
	class FText                                   K2Node_Select_Default_5;
	class FText                                   CallFunc_Format_ReturnValue_3;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest) == 0x000010, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest) == 0x000770, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, EntryPoint) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_text_Variable) == 0x000020, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_bool_Variable) == 0x000038, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_byte_Variable) == 0x000039, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_byte_Variable_1) == 0x00003A, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_bool_Variable_1) == 0x00003B, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_bool_Variable_2) == 0x00003C, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_bool_Variable_3) == 0x00003D, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_bool_Variable_4) == 0x00003E, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_text_Variable_1) == 0x000040, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Event_MyGeometry) == 0x000058, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Event_MouseEvent_1) == 0x000098, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Event_MouseEvent) == 0x000130, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_IsUsingTouch_ReturnValue) == 0x0001C8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_IsUsingTouch_ReturnValue_1) == 0x0001C9, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Event_bIsSelected) == 0x0001CA, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimation_ReturnValue) == 0x0001D0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0001D8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001E0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0001E8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x0001F0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimation_ReturnValue_2) == 0x0001F8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Event_bDisabled) == 0x000200, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Event_bDisabled' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Select_Default) == 0x000201, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_GetStartingUnlockTime_ReturnValue) == 0x000208, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_GetStartingUnlockTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_GetFormattedTime_OutputString) == 0x000210, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_GetFormattedTime_OutputString' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData) == 0x000228, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_SlateColor) == 0x000278, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, Temp_bool_Variable_5) == 0x00028C, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_GetStartingUnlockTime_ReturnValue_1) == 0x000290, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_GetStartingUnlockTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_GetFormattedTime_OutputString_1) == 0x000298, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_GetFormattedTime_OutputString_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_1) == 0x0002B0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_IsValid_ReturnValue) == 0x000300, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000304, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000308, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_SlateBrush) == 0x000310, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003D0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000420, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Event_InUnlockType) == 0x000428, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Event_InUnlockType' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Greater_Int64Int64_ReturnValue) == 0x000429, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Greater_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_SwitchEnum_CmpSuccess) == 0x00042A, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_GetFinalDisplayName_DisplayName) == 0x000430, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_GetFinalDisplayName_DisplayName' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Select_Default_1) == 0x000448, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_3) == 0x000460, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_4) == 0x0004B0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_5) == 0x000500, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeArray_Array) == 0x000550, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeArray_Array_1) == 0x000560, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_6) == 0x000570, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeArray_Array_2) == 0x0005C0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_PlayAnimationReverse_ReturnValue_3) == 0x0005D0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_PlayAnimationReverse_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0005D8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_TextIsEmpty_ReturnValue) == 0x0005F0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_TextIsEmpty_ReturnValue_1) == 0x0005F1, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Select_Default_2) == 0x0005F8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Format_ReturnValue) == 0x000610, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000628, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Select_Default_3) == 0x000640, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Format_ReturnValue_1) == 0x000658, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_TextIsEmpty_ReturnValue_2) == 0x000670, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_TextIsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_MakeLiteralText_ReturnValue_3) == 0x000678, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_MakeLiteralText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Select_Default_4) == 0x000690, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Format_ReturnValue_2) == 0x0006A8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_GetSingleLineDescription_ReturnValue) == 0x0006C0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_GetSingleLineDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_TextIsEmpty_ReturnValue_3) == 0x0006D8, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_TextIsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeStruct_FormatArgumentData_7) == 0x0006E0, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_MakeArray_Array_3) == 0x000730, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, K2Node_Select_Default_5) == 0x000740, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest, CallFunc_Format_ReturnValue_3) == 0x000758, "Member 'AthenaChallengeListEntry_LockedQuest_C_ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest::CallFunc_Format_ReturnValue_3' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName final
{
public:
	class FText                                   DisplayName;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName) == 0x000020, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName, DisplayName) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName::DisplayName' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFinalDisplayName::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime final
{
public:
	struct FTimespan                              TimeRemaining;
	class FText                                   OutputString;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue;
	class FText                                   Temp_text_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_59[0x7];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime) == 0x000078, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, TimeRemaining) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::TimeRemaining' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, OutputString) == 0x000008, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::OutputString' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, Temp_bool_Variable) == 0x000020, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, CallFunc_GetTimespanAsText_ReturnValue) == 0x000028, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::CallFunc_GetTimespanAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, Temp_text_Variable) == 0x000040, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, CallFunc_TextIsEmpty_ReturnValue) == 0x000058, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime, K2Node_Select_Default) == 0x000060, "Member 'AthenaChallengeListEntry_LockedQuest_C_GetFormattedTime::K2Node_Select_Default' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText final
{
public:
	ELockedWidgetUnlockType                       InUnlockType;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText) == 0x000001, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText, InUnlockType) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_OnInitDisplayText::InUnlockType' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter) == 0x0000D8, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'AthenaChallengeListEntry_LockedQuest_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave");
static_assert(sizeof(AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave) == 0x000098, "Wrong size on AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave");
static_assert(offsetof(AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaChallengeListEntry_LockedQuest_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
