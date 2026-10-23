#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo final
{
public:
	class FText                                   Subheading;
	bool                                          bSubscribed;
	uint8                                         Pad_19[0x3];
	int32                                         UnlockedStages;
	int32                                         MaxStages;
};
static_assert(alignof(ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo) == 0x000008, "Wrong alignment on ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo");
static_assert(sizeof(ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo) == 0x000028, "Wrong size on ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo");
static_assert(offsetof(ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo, Subheading) == 0x000000, "Member 'ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo::Subheading' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo, bSubscribed) == 0x000018, "Member 'ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo::bSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo, UnlockedStages) == 0x00001C, "Member 'ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo::UnlockedStages' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo, MaxStages) == 0x000020, "Member 'ProgressiveItemStateTitle_C_BP_OnSetHeaderInfo::MaxStages' has a wrong offset!");

struct ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class FText                                   K2Node_Event_Subheading;
	bool                                          K2Node_Event_bSubscribed;
	uint8                                         Pad_21[0x3];
	int32                                         K2Node_Event_UnlockedStages;
	int32                                         K2Node_Event_MaxStages;
};
static_assert(alignof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle) == 0x000008, "Wrong alignment on ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle");
static_assert(sizeof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle) == 0x000030, "Wrong size on ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle");
static_assert(offsetof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle, EntryPoint) == 0x000000, "Member 'ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle, K2Node_Event_Subheading) == 0x000008, "Member 'ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle::K2Node_Event_Subheading' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle, K2Node_Event_bSubscribed) == 0x000020, "Member 'ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle::K2Node_Event_bSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle, K2Node_Event_UnlockedStages) == 0x000024, "Member 'ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle::K2Node_Event_UnlockedStages' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle, K2Node_Event_MaxStages) == 0x000028, "Member 'ProgressiveItemStateTitle_C_ExecuteUbergraph_ProgressiveItemStateTitle::K2Node_Event_MaxStages' has a wrong offset!");

struct ProgressiveItemStateTitle_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ProgressiveItemStateTitle_C_PreConstruct) == 0x000001, "Wrong alignment on ProgressiveItemStateTitle_C_PreConstruct");
static_assert(sizeof(ProgressiveItemStateTitle_C_PreConstruct) == 0x000001, "Wrong size on ProgressiveItemStateTitle_C_PreConstruct");
static_assert(offsetof(ProgressiveItemStateTitle_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ProgressiveItemStateTitle_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag final
{
public:
	bool                                          Index_0;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	class FText                                   Temp_text_Variable;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag) == 0x000008, "Wrong alignment on ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag");
static_assert(sizeof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag) == 0x000060, "Wrong size on ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag, Index_0) == 0x000000, "Member 'ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag::Index_0' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag, Temp_bool_Variable) == 0x000001, "Member 'ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag, Temp_text_Variable) == 0x000008, "Member 'ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag, K2Node_MakeArray_Array) == 0x000020, "Member 'ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag, CallFunc_Format_ReturnValue) == 0x000030, "Member 'ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag, K2Node_Select_Default) == 0x000048, "Member 'ProgressiveItemStateTitle_C_Update_MultiBenefits_Tag::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveItemStateTitle_C_Update_Stages_Tag final
{
public:
	bool                                          Subscribed;
	uint8                                         Pad_1[0x3];
	int32                                         Current_Stage;
	int32                                         Max_Stage;
	struct FSlateColor                            Completed_Text_Color;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_21[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	uint8                                         Pad_4C[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_129[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_169[0x3];
	struct FSlateColor                            K2Node_Select_Default;
};
static_assert(alignof(ProgressiveItemStateTitle_C_Update_Stages_Tag) == 0x000008, "Wrong alignment on ProgressiveItemStateTitle_C_Update_Stages_Tag");
static_assert(sizeof(ProgressiveItemStateTitle_C_Update_Stages_Tag) == 0x000180, "Wrong size on ProgressiveItemStateTitle_C_Update_Stages_Tag");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, Subscribed) == 0x000000, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::Subscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, Current_Stage) == 0x000004, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::Current_Stage' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, Max_Stage) == 0x000008, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::Max_Stage' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, Completed_Text_Color) == 0x00000C, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::Completed_Text_Color' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_MakeStruct_SlateColor) == 0x000024, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000050, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000058, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_MakeArray_Array) == 0x000100, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_Format_ReturnValue) == 0x000110, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000128, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_MakeArray_Array_1) == 0x000130, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_Format_ReturnValue_1) == 0x000140, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, CallFunc_SelectColor_ReturnValue) == 0x000158, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, Temp_bool_Variable) == 0x000168, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Stages_Tag, K2Node_Select_Default) == 0x00016C, "Member 'ProgressiveItemStateTitle_C_Update_Stages_Tag::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveItemStateTitle_C_Update_Subheading final
{
public:
	class FText                                   Text_0;
	bool                                          Subscribed;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1A[0x2];
	struct FSlateColor                            K2Node_Select_Default;
};
static_assert(alignof(ProgressiveItemStateTitle_C_Update_Subheading) == 0x000008, "Wrong alignment on ProgressiveItemStateTitle_C_Update_Subheading");
static_assert(sizeof(ProgressiveItemStateTitle_C_Update_Subheading) == 0x000030, "Wrong size on ProgressiveItemStateTitle_C_Update_Subheading");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subheading, Text_0) == 0x000000, "Member 'ProgressiveItemStateTitle_C_Update_Subheading::Text_0' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subheading, Subscribed) == 0x000018, "Member 'ProgressiveItemStateTitle_C_Update_Subheading::Subscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subheading, Temp_bool_Variable) == 0x000019, "Member 'ProgressiveItemStateTitle_C_Update_Subheading::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subheading, K2Node_Select_Default) == 0x00001C, "Member 'ProgressiveItemStateTitle_C_Update_Subheading::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveItemStateTitle_C_Update_Subscribed_Tag final
{
public:
	bool                                          Subscribed;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	class FText                                   Temp_text_Variable;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag) == 0x000008, "Wrong alignment on ProgressiveItemStateTitle_C_Update_Subscribed_Tag");
static_assert(sizeof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag) == 0x000060, "Wrong size on ProgressiveItemStateTitle_C_Update_Subscribed_Tag");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag, Subscribed) == 0x000000, "Member 'ProgressiveItemStateTitle_C_Update_Subscribed_Tag::Subscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag, Temp_bool_Variable) == 0x000001, "Member 'ProgressiveItemStateTitle_C_Update_Subscribed_Tag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag, Temp_text_Variable) == 0x000008, "Member 'ProgressiveItemStateTitle_C_Update_Subscribed_Tag::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag, K2Node_MakeArray_Array) == 0x000020, "Member 'ProgressiveItemStateTitle_C_Update_Subscribed_Tag::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag, CallFunc_Format_ReturnValue) == 0x000030, "Member 'ProgressiveItemStateTitle_C_Update_Subscribed_Tag::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemStateTitle_C_Update_Subscribed_Tag, K2Node_Select_Default) == 0x000048, "Member 'ProgressiveItemStateTitle_C_Update_Subscribed_Tag::K2Node_Select_Default' has a wrong offset!");

}
