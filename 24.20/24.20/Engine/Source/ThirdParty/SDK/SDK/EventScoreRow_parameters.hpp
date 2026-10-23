#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct EventScoreRow_C_SetData final
{
public:
	class FText                                   Label;
	int32                                         Value;
	uint8                                         Pad_1C[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
};
static_assert(alignof(EventScoreRow_C_SetData) == 0x000008, "Wrong alignment on EventScoreRow_C_SetData");
static_assert(sizeof(EventScoreRow_C_SetData) == 0x000038, "Wrong size on EventScoreRow_C_SetData");
static_assert(offsetof(EventScoreRow_C_SetData, Label) == 0x000000, "Member 'EventScoreRow_C_SetData::Label' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_SetData, Value) == 0x000018, "Member 'EventScoreRow_C_SetData::Value' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'EventScoreRow_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

struct EventScoreRow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(EventScoreRow_C_PreConstruct) == 0x000001, "Wrong alignment on EventScoreRow_C_PreConstruct");
static_assert(sizeof(EventScoreRow_C_PreConstruct) == 0x000001, "Wrong size on EventScoreRow_C_PreConstruct");
static_assert(offsetof(EventScoreRow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'EventScoreRow_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct EventScoreRow_C_ExecuteUbergraph_EventScoreRow final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow) == 0x000004, "Wrong alignment on EventScoreRow_C_ExecuteUbergraph_EventScoreRow");
static_assert(sizeof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow) == 0x00000C, "Wrong size on EventScoreRow_C_ExecuteUbergraph_EventScoreRow");
static_assert(offsetof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow, EntryPoint) == 0x000000, "Member 'EventScoreRow_C_ExecuteUbergraph_EventScoreRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow, Temp_bool_Variable) == 0x000004, "Member 'EventScoreRow_C_ExecuteUbergraph_EventScoreRow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow, Temp_byte_Variable) == 0x000005, "Member 'EventScoreRow_C_ExecuteUbergraph_EventScoreRow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow, Temp_byte_Variable_1) == 0x000006, "Member 'EventScoreRow_C_ExecuteUbergraph_EventScoreRow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow, K2Node_Event_IsDesignTime) == 0x000007, "Member 'EventScoreRow_C_ExecuteUbergraph_EventScoreRow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(EventScoreRow_C_ExecuteUbergraph_EventScoreRow, K2Node_Select_Default) == 0x000008, "Member 'EventScoreRow_C_ExecuteUbergraph_EventScoreRow::K2Node_Select_Default' has a wrong offset!");

}
