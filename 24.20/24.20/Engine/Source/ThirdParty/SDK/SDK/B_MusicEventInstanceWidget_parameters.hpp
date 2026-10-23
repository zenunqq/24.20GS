#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged");
static_assert(sizeof(B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged");
static_assert(offsetof(B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

struct B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged");
static_assert(sizeof(B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged");
static_assert(offsetof(B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          K2Node_Event_bIsExpanded;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_7[0x1];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	uint8                                         Pad_4C[0x4];
	class UObject*                                K2Node_Event_ListItemObject;
	class UMusicEventInstance*                    K2Node_DynamicCast_AsMusic_Event_Instance;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_61[0x7];
	class FText                                   CallFunc_GetFormatText_Result;
	struct FSlateColor                            CallFunc_GetTextColor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget) == 0x000008, "Wrong alignment on B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget");
static_assert(sizeof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget) == 0x000098, "Wrong size on B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, EntryPoint) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_Event_bIsExpanded) == 0x000005, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_Event_bIsSelected) == 0x000006, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_Event_MyGeometry) == 0x000008, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_Event_InDeltaTime) == 0x000048, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_Event_ListItemObject) == 0x000050, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_DynamicCast_AsMusic_Event_Instance) == 0x000058, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_DynamicCast_AsMusic_Event_Instance' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, CallFunc_GetFormatText_Result) == 0x000068, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::CallFunc_GetFormatText_Result' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, CallFunc_GetTextColor_ReturnValue) == 0x000080, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::CallFunc_GetTextColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget, CallFunc_IsValid_ReturnValue_1) == 0x000094, "Member 'B_MusicEventInstanceWidget_C_ExecuteUbergraph_B_MusicEventInstanceWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct B_MusicEventInstanceWidget_C_GetFormatText final
{
public:
	class FText                                   Result;
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;
	float                                         CallFunc_GetDistSqToListener_ReturnValue;
	uint8                                         Pad_34[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	double                                        CallFunc_Sqrt_ReturnValue;
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	int32                                         CallFunc_GetPriority_ReturnValue;
	uint8                                         Pad_BC[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	class USoundBase*                             CallFunc_GetAsset_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;
	struct FMusicEventData                        CallFunc_GetEventData_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	class FString                                 CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	class FString                                 CallFunc_Split_LeftS;
	class FString                                 CallFunc_Split_RightS;
	bool                                          CallFunc_Split_ReturnValue;
	uint8                                         Pad_249[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	double                                        CallFunc_Sqrt_A_ImplicitCast;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_GetFormatText) == 0x000008, "Wrong alignment on B_MusicEventInstanceWidget_C_GetFormatText");
static_assert(sizeof(B_MusicEventInstanceWidget_C_GetFormatText) == 0x0002E8, "Wrong size on B_MusicEventInstanceWidget_C_GetFormatText");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, Result) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::Result' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000018, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetDistSqToListener_ReturnValue) == 0x000030, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetDistSqToListener_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Sqrt_ReturnValue) == 0x000088, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Sqrt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetDisplayName_ReturnValue) == 0x000090, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetPriority_ReturnValue) == 0x0000B8, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetPriority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000110, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetAsset_ReturnValue) == 0x000118, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, K2Node_MakeStruct_FormatArgumentData_2) == 0x000120, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetDisplayName_ReturnValue_1) == 0x000170, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetEventData_ReturnValue) == 0x000180, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetEventData_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B0, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001C8, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_GetDebugStringFromGameplayTag_ReturnValue) == 0x000218, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_GetDebugStringFromGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Split_LeftS) == 0x000228, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Split_RightS) == 0x000238, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Split_ReturnValue) == 0x000248, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000250, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, K2Node_MakeStruct_FormatArgumentData_4) == 0x000268, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, K2Node_MakeArray_Array) == 0x0002B8, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Format_ReturnValue) == 0x0002C8, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetFormatText, CallFunc_Sqrt_A_ImplicitCast) == 0x0002E0, "Member 'B_MusicEventInstanceWidget_C_GetFormatText::CallFunc_Sqrt_A_ImplicitCast' has a wrong offset!");

struct B_MusicEventInstanceWidget_C_GetTextColor final
{
public:
	struct FSlateColor                            ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_15[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	uint8                                         Pad_2C[0x4];
	double                                        CallFunc_FMin_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	bool                                          CallFunc_GetIsInFront_ReturnValue;
	uint8                                         Pad_4D[0x3];
	float                                         CallFunc_GetMaxDistance_ReturnValue;
	bool                                          CallFunc_GetIsAudible_ReturnValue;
	uint8                                         Pad_55[0x3];
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_61[0x3];
	struct FSlateColor                            K2Node_Select_Default;
	float                                         CallFunc_BreakColor_R;
	float                                         CallFunc_BreakColor_G;
	float                                         CallFunc_BreakColor_B;
	float                                         CallFunc_BreakColor_A;
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;
	uint8                                         Pad_AC[0x4];
	double                                        CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	float                                         CallFunc_MakeColor_A_ImplicitCast;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_GetTextColor) == 0x000008, "Wrong alignment on B_MusicEventInstanceWidget_C_GetTextColor");
static_assert(sizeof(B_MusicEventInstanceWidget_C_GetTextColor) == 0x0000C0, "Wrong size on B_MusicEventInstanceWidget_C_GetTextColor");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, ReturnValue) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, Temp_bool_Variable) == 0x000014, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_FMin_ReturnValue) == 0x000030, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_GetIsInFront_ReturnValue) == 0x00004C, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_GetIsInFront_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_GetMaxDistance_ReturnValue) == 0x000050, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_GetMaxDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_GetIsAudible_ReturnValue) == 0x000054, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_GetIsAudible_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_MapRangeClamped_ReturnValue) == 0x000058, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, K2Node_Select_Default) == 0x000064, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_BreakColor_R) == 0x000078, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_BreakColor_G) == 0x00007C, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_BreakColor_B) == 0x000080, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_BreakColor_A) == 0x000084, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_MakeColor_ReturnValue) == 0x000088, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, K2Node_MakeStruct_SlateColor_2) == 0x000098, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_MapRangeClamped_InRangeB_ImplicitCast) == 0x0000B0, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_MapRangeClamped_InRangeB_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_GetTextColor, CallFunc_MakeColor_A_ImplicitCast) == 0x0000B8, "Member 'B_MusicEventInstanceWidget_C_GetTextColor::CallFunc_MakeColor_A_ImplicitCast' has a wrong offset!");

struct B_MusicEventInstanceWidget_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on B_MusicEventInstanceWidget_C_OnListItemObjectSet");
static_assert(sizeof(B_MusicEventInstanceWidget_C_OnListItemObjectSet) == 0x000008, "Wrong size on B_MusicEventInstanceWidget_C_OnListItemObjectSet");
static_assert(offsetof(B_MusicEventInstanceWidget_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

struct B_MusicEventInstanceWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(B_MusicEventInstanceWidget_C_Tick) == 0x000008, "Wrong alignment on B_MusicEventInstanceWidget_C_Tick");
static_assert(sizeof(B_MusicEventInstanceWidget_C_Tick) == 0x000048, "Wrong size on B_MusicEventInstanceWidget_C_Tick");
static_assert(offsetof(B_MusicEventInstanceWidget_C_Tick, MyGeometry) == 0x000000, "Member 'B_MusicEventInstanceWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(B_MusicEventInstanceWidget_C_Tick, InDeltaTime) == 0x000040, "Member 'B_MusicEventInstanceWidget_C_Tick::InDeltaTime' has a wrong offset!");

}
