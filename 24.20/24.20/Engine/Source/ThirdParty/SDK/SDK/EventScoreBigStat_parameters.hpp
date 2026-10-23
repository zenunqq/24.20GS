#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct EventScoreBigStat_C_SetData final
{
public:
	class FText                                   Label;
	int32                                         Value;
	int32                                         ValueContext;
	class FText                                   FormatterText;
	struct FFortTournamentDisplayInfo             Tournament_Display_Info;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_209[0x7];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_229[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(EventScoreBigStat_C_SetData) == 0x000008, "Wrong alignment on EventScoreBigStat_C_SetData");
static_assert(sizeof(EventScoreBigStat_C_SetData) == 0x0002C8, "Wrong size on EventScoreBigStat_C_SetData");
static_assert(offsetof(EventScoreBigStat_C_SetData, Label) == 0x000000, "Member 'EventScoreBigStat_C_SetData::Label' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Value) == 0x000018, "Member 'EventScoreBigStat_C_SetData::Value' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, ValueContext) == 0x00001C, "Member 'EventScoreBigStat_C_SetData::ValueContext' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, FormatterText) == 0x000020, "Member 'EventScoreBigStat_C_SetData::FormatterText' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Tournament_Display_Info) == 0x000038, "Member 'EventScoreBigStat_C_SetData::Tournament_Display_Info' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Greater_IntInt_ReturnValue) == 0x000208, "Member 'EventScoreBigStat_C_SetData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x000210, "Member 'EventScoreBigStat_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000228, "Member 'EventScoreBigStat_C_SetData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, K2Node_MakeStruct_FormatArgumentData) == 0x000230, "Member 'EventScoreBigStat_C_SetData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, K2Node_MakeArray_Array) == 0x000280, "Member 'EventScoreBigStat_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000290, "Member 'EventScoreBigStat_C_SetData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, CallFunc_Format_ReturnValue) == 0x0002A8, "Member 'EventScoreBigStat_C_SetData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Temp_byte_Variable) == 0x0002C0, "Member 'EventScoreBigStat_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Temp_byte_Variable_1) == 0x0002C1, "Member 'EventScoreBigStat_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, Temp_bool_Variable) == 0x0002C2, "Member 'EventScoreBigStat_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventScoreBigStat_C_SetData, K2Node_Select_Default) == 0x0002C3, "Member 'EventScoreBigStat_C_SetData::K2Node_Select_Default' has a wrong offset!");

}
