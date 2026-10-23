#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct TournamentDateEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(TournamentDateEntry_C_PreConstruct) == 0x000001, "Wrong alignment on TournamentDateEntry_C_PreConstruct");
static_assert(sizeof(TournamentDateEntry_C_PreConstruct) == 0x000001, "Wrong size on TournamentDateEntry_C_PreConstruct");
static_assert(offsetof(TournamentDateEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TournamentDateEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry final
{
public:
	int32                                         EntryPoint;
	EFortShowdownEventState                       CallFunc_GetEventTimeState_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_12[0x2];
	struct FLinearColor                           Temp_struct_Variable;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_26[0x2];
	class FText                                   Temp_text_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_41[0x7];
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_showdownData;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	struct FSlateColor                            K2Node_Select_Default_1;
	uint8                                         Pad_254[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	int32                                         Temp_int_Variable_1;
	uint8                                         Pad_26C[0x4];
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue;
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue;
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue;
	struct FLinearColor                           K2Node_Select_Default_2;
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;
	uint8                                         Pad_2C1[0x7];
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue_1;
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue;
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue_1;
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_2;
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_3;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_439[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	int32                                         K2Node_Select_Default_3;
	uint8                                         Pad_4A4[0x4];
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   K2Node_Select_Default_4;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry) == 0x000008, "Wrong alignment on TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry");
static_assert(sizeof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry) == 0x000558, "Wrong size on TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, EntryPoint) == 0x000000, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeState_ReturnValue) == 0x000004, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_int_Variable) == 0x000008, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable) == 0x00000D, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_byte_Variable) == 0x00000E, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_byte_Variable_1) == 0x00000F, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_1) == 0x000010, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default) == 0x000011, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_struct_Variable) == 0x000014, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_2) == 0x000024, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_3) == 0x000025, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_text_Variable) == 0x000028, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Event_IsDesignTime) == 0x000040, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_CustomEvent_showdownData) == 0x000048, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_CustomEvent_showdownData' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_SlateColor) == 0x000218, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_SlateColor_1) == 0x00022C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_1) == 0x000240, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000258, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_RandomFloatInRange_ReturnValue) == 0x000260, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_int_Variable_1) == 0x000268, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue) == 0x000270, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue) == 0x000278, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue) == 0x000290, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_2) == 0x000298, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue_1) == 0x0002A8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_EqualEqual_TextText_ReturnValue) == 0x0002C0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue_1) == 0x0002C8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeAsText_ReturnValue) == 0x0002D0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue_1) == 0x0002E8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData) == 0x0002F0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeAsText_ReturnValue_1) == 0x000340, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeAsText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue_2) == 0x000358, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_1) == 0x000360, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue_2) == 0x0003B0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue_2) == 0x0003C8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003D0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue_3) == 0x000420, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_4) == 0x000438, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_3) == 0x000440, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeArray_Array) == 0x000490, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_3) == 0x0004A0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_Format_ReturnValue) == 0x0004A8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_4) == 0x0004C0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_4) == 0x0004D8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeArray_Array_1) == 0x000528, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_Format_ReturnValue_1) == 0x000538, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000550, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct TournamentDateEntry_C_EventColor final
{
public:
	struct FFortTournamentDisplayInfo             showdownData;
};
static_assert(alignof(TournamentDateEntry_C_EventColor) == 0x000008, "Wrong alignment on TournamentDateEntry_C_EventColor");
static_assert(sizeof(TournamentDateEntry_C_EventColor) == 0x0001D0, "Wrong size on TournamentDateEntry_C_EventColor");
static_assert(offsetof(TournamentDateEntry_C_EventColor, showdownData) == 0x000000, "Member 'TournamentDateEntry_C_EventColor::showdownData' has a wrong offset!");

}
