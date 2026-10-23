#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ShowdownTournamentDetailsScoringRule_C_SetData final
{
public:
	struct FFortShowdownScoringRuleInfo           ScoreRule;
	struct FFortTournamentDisplayInfo             TournamentDisplayInfo;
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_213[0x5];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_221[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int32                                         CallFunc_SelectInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	uint8                                         Pad_27D[0x3];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_289[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	int32                                         CallFunc_SelectInt_ReturnValue_1;
	uint8                                         Pad_2E4[0x4];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_314[0x4];
	class FText                                   Temp_text_Variable;
	struct FLinearColor                           K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_342[0x6];
	class UCMSContext*                            CallFunc_GetContext_ReturnValue;
	struct FFortShowdownScoringRuleDisplayInfo    CallFunc_GetScoringRuleDisplayInfo_ReturnValue;
	class FText                                   K2Node_Select_Default_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   K2Node_Select_Default_2;
};
static_assert(alignof(ShowdownTournamentDetailsScoringRule_C_SetData) == 0x000008, "Wrong alignment on ShowdownTournamentDetailsScoringRule_C_SetData");
static_assert(sizeof(ShowdownTournamentDetailsScoringRule_C_SetData) == 0x000418, "Wrong size on ShowdownTournamentDetailsScoringRule_C_SetData");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, ScoreRule) == 0x000000, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::ScoreRule' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, TournamentDisplayInfo) == 0x000020, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::TournamentDisplayInfo' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, Temp_struct_Variable) == 0x0001F0, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, Temp_struct_Variable_1) == 0x000200, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000210, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000211, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000212, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000218, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_BooleanAND_ReturnValue) == 0x000220, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, K2Node_MakeStruct_FormatArgumentData) == 0x000228, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_SelectInt_ReturnValue) == 0x000278, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00027C, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000280, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000288, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, K2Node_MakeStruct_FormatArgumentData_1) == 0x000290, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_SelectInt_ReturnValue_1) == 0x0002E0, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, K2Node_MakeArray_Array) == 0x0002E8, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x0002F8, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000310, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000311, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, Temp_bool_Variable) == 0x000312, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_BooleanAND_ReturnValue_1) == 0x000313, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, Temp_text_Variable) == 0x000318, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, K2Node_Select_Default) == 0x000330, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, Temp_bool_Variable_1) == 0x000340, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, Temp_bool_Variable_2) == 0x000341, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_GetContext_ReturnValue) == 0x000348, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_GetScoringRuleDisplayInfo_ReturnValue) == 0x000350, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_GetScoringRuleDisplayInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, K2Node_Select_Default_1) == 0x0003D0, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, CallFunc_Format_ReturnValue) == 0x0003E8, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownTournamentDetailsScoringRule_C_SetData, K2Node_Select_Default_2) == 0x000400, "Member 'ShowdownTournamentDetailsScoringRule_C_SetData::K2Node_Select_Default_2' has a wrong offset!");

}
