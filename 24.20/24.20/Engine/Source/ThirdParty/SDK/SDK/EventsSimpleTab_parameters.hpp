#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FString                                 Temp_string_Variable;
	class FString                                 Temp_string_Variable_1;
	TDelegate<void(class UCommonButtonLegacy* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_34[0x4];
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_51[0x7];
	class FString                                 Temp_string_Variable_2;
	struct FLinearColor                           CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_79[0x7];
	class FString                                 Temp_string_Variable_3;
	struct FLinearColor                           CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	uint8                                         Pad_A1[0x3];
	struct FLinearColor                           CallFunc_Map_Find_Value_2;
	bool                                          CallFunc_Map_Find_ReturnValue_2;
	uint8                                         Pad_B5[0x3];
	struct FLinearColor                           CallFunc_Map_Find_Value_3;
	bool                                          CallFunc_Map_Find_ReturnValue_3;
	uint8                                         Pad_C9[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_E1[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class FText                                   K2Node_Select_Default;
	class FString                                 K2Node_CustomEvent_ParameterName;
	struct FLinearColor                           K2Node_CustomEvent_New_Color;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;
	bool                                          K2Node_CustomEvent_Selected;
	uint8                                         Pad_151[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;
	uint8                                         Pad_169[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_181[0x3];
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;
};
static_assert(alignof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab) == 0x000008, "Wrong alignment on EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab");
static_assert(sizeof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab) == 0x000198, "Wrong size on EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, EntryPoint) == 0x000000, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, Temp_string_Variable) == 0x000008, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, Temp_string_Variable_1) == 0x000018, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_TextToUpper_ReturnValue) == 0x000038, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_Event_IsDesignTime) == 0x000050, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, Temp_string_Variable_2) == 0x000058, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_Value) == 0x000068, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_ReturnValue) == 0x000078, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, Temp_string_Variable_3) == 0x000080, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_Value_1) == 0x000090, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_ReturnValue_1) == 0x0000A0, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_Value_2) == 0x0000A4, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_ReturnValue_2) == 0x0000B4, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_Value_3) == 0x0000B8, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_Map_Find_ReturnValue_3) == 0x0000C8, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_MakeStruct_SlateColor) == 0x0000CC, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, Temp_bool_Variable) == 0x0000E0, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E8, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_Select_Default) == 0x0000F0, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_CustomEvent_ParameterName) == 0x000108, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_CustomEvent_ParameterName' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_CustomEvent_New_Color) == 0x000118, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_CustomEvent_New_Color' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_BreakVector2D_X) == 0x000128, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_BreakVector2D_Y) == 0x000130, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_MakeStruct_Margin) == 0x000138, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_CustomEvent_Button) == 0x000148, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_CustomEvent_Selected) == 0x000150, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000158, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_PlayAnimationForward_ReturnValue) == 0x000160, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000168, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000170, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000178, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, CallFunc_IsMobileGame_ReturnValue) == 0x000180, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_MakeStruct_Left_ImplicitCast) == 0x000184, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_MakeStruct_Right_ImplicitCast) == 0x000188, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_MakeStruct_Top_ImplicitCast) == 0x00018C, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x000190, "Member 'EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");

struct EventsSimpleTab_C_OnSelectedChangedEvent final
{
public:
	class UCommonButtonLegacy*                    Button;
	bool                                          Selected_0;
};
static_assert(alignof(EventsSimpleTab_C_OnSelectedChangedEvent) == 0x000008, "Wrong alignment on EventsSimpleTab_C_OnSelectedChangedEvent");
static_assert(sizeof(EventsSimpleTab_C_OnSelectedChangedEvent) == 0x000010, "Wrong size on EventsSimpleTab_C_OnSelectedChangedEvent");
static_assert(offsetof(EventsSimpleTab_C_OnSelectedChangedEvent, Button) == 0x000000, "Member 'EventsSimpleTab_C_OnSelectedChangedEvent::Button' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_OnSelectedChangedEvent, Selected_0) == 0x000008, "Member 'EventsSimpleTab_C_OnSelectedChangedEvent::Selected_0' has a wrong offset!");

struct EventsSimpleTab_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(EventsSimpleTab_C_PreConstruct) == 0x000001, "Wrong alignment on EventsSimpleTab_C_PreConstruct");
static_assert(sizeof(EventsSimpleTab_C_PreConstruct) == 0x000001, "Wrong size on EventsSimpleTab_C_PreConstruct");
static_assert(offsetof(EventsSimpleTab_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'EventsSimpleTab_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct EventsSimpleTab_C_UpdateColor final
{
public:
	class FString                                 ParameterName;
	struct FLinearColor                           New_Color;
};
static_assert(alignof(EventsSimpleTab_C_UpdateColor) == 0x000008, "Wrong alignment on EventsSimpleTab_C_UpdateColor");
static_assert(sizeof(EventsSimpleTab_C_UpdateColor) == 0x000020, "Wrong size on EventsSimpleTab_C_UpdateColor");
static_assert(offsetof(EventsSimpleTab_C_UpdateColor, ParameterName) == 0x000000, "Member 'EventsSimpleTab_C_UpdateColor::ParameterName' has a wrong offset!");
static_assert(offsetof(EventsSimpleTab_C_UpdateColor, New_Color) == 0x000010, "Member 'EventsSimpleTab_C_UpdateColor::New_Color' has a wrong offset!");

}
