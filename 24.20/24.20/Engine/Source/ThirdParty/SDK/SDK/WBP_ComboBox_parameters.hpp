#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_UI_InputField_ContentSize_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"

namespace SDK::Params
{

struct WBP_ComboBox_C_SetContentSize final
{
public:
	E_UI_InputField_ContentSize                   Temp_byte_Variable;
	uint8                                         Pad_1[0x3];
	class FName                                   Temp_name_Variable;
	class FName                                   Temp_name_Variable_1;
	class FName                                   Temp_name_Variable_2;
	E_UI_InputField_ContentSize                   Temp_byte_Variable_1;
	uint8                                         Pad_11[0x7];
	class UObject*                                Temp_object_Variable;
	class UObject*                                Temp_object_Variable_1;
	class UObject*                                Temp_object_Variable_2;
	E_UI_InputField_ContentSize                   Temp_byte_Variable_2;
	uint8                                         Pad_31[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         K2Node_Select_Default;
	class FName                                   K2Node_Select_Default_1;
	class UObject*                                K2Node_Select_Default_2;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
};
static_assert(alignof(WBP_ComboBox_C_SetContentSize) == 0x000008, "Wrong alignment on WBP_ComboBox_C_SetContentSize");
static_assert(sizeof(WBP_ComboBox_C_SetContentSize) == 0x0000A8, "Wrong size on WBP_ComboBox_C_SetContentSize");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_byte_Variable) == 0x000000, "Member 'WBP_ComboBox_C_SetContentSize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_name_Variable) == 0x000004, "Member 'WBP_ComboBox_C_SetContentSize::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_name_Variable_1) == 0x000008, "Member 'WBP_ComboBox_C_SetContentSize::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_name_Variable_2) == 0x00000C, "Member 'WBP_ComboBox_C_SetContentSize::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_byte_Variable_1) == 0x000010, "Member 'WBP_ComboBox_C_SetContentSize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_object_Variable) == 0x000018, "Member 'WBP_ComboBox_C_SetContentSize::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_object_Variable_1) == 0x000020, "Member 'WBP_ComboBox_C_SetContentSize::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_object_Variable_2) == 0x000028, "Member 'WBP_ComboBox_C_SetContentSize::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_byte_Variable_2) == 0x000030, "Member 'WBP_ComboBox_C_SetContentSize::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_int_Variable) == 0x000034, "Member 'WBP_ComboBox_C_SetContentSize::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_int_Variable_1) == 0x000038, "Member 'WBP_ComboBox_C_SetContentSize::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, Temp_int_Variable_2) == 0x00003C, "Member 'WBP_ComboBox_C_SetContentSize::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, K2Node_Select_Default) == 0x000040, "Member 'WBP_ComboBox_C_SetContentSize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, K2Node_Select_Default_1) == 0x000044, "Member 'WBP_ComboBox_C_SetContentSize::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, K2Node_Select_Default_2) == 0x000048, "Member 'WBP_ComboBox_C_SetContentSize::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentSize, K2Node_MakeStruct_SlateFontInfo) == 0x000050, "Member 'WBP_ComboBox_C_SetContentSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

struct WBP_ComboBox_C_SetContentAlignment final
{
public:
	bool                                          Temp_bool_Variable;
	ETextJustify                                  Temp_byte_Variable;
	ETextJustify                                  Temp_byte_Variable_1;
	ETextJustify                                  K2Node_Select_Default;
};
static_assert(alignof(WBP_ComboBox_C_SetContentAlignment) == 0x000001, "Wrong alignment on WBP_ComboBox_C_SetContentAlignment");
static_assert(sizeof(WBP_ComboBox_C_SetContentAlignment) == 0x000004, "Wrong size on WBP_ComboBox_C_SetContentAlignment");
static_assert(offsetof(WBP_ComboBox_C_SetContentAlignment, Temp_bool_Variable) == 0x000000, "Member 'WBP_ComboBox_C_SetContentAlignment::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentAlignment, Temp_byte_Variable) == 0x000001, "Member 'WBP_ComboBox_C_SetContentAlignment::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentAlignment, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_ComboBox_C_SetContentAlignment::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetContentAlignment, K2Node_Select_Default) == 0x000003, "Member 'WBP_ComboBox_C_SetContentAlignment::K2Node_Select_Default' has a wrong offset!");

struct WBP_ComboBox_C_SetActionVisibility final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_3[0x5];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(WBP_ComboBox_C_SetActionVisibility) == 0x000008, "Wrong alignment on WBP_ComboBox_C_SetActionVisibility");
static_assert(sizeof(WBP_ComboBox_C_SetActionVisibility) == 0x000018, "Wrong size on WBP_ComboBox_C_SetActionVisibility");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_ComboBox_C_SetActionVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_ComboBox_C_SetActionVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_ComboBox_C_SetActionVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_ComboBox_C_SetActionVisibility::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'WBP_ComboBox_C_SetActionVisibility::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'WBP_ComboBox_C_SetActionVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'WBP_ComboBox_C_SetActionVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetActionVisibility, K2Node_Select_Default) == 0x000013, "Member 'WBP_ComboBox_C_SetActionVisibility::K2Node_Select_Default' has a wrong offset!");

struct WBP_ComboBox_C_Set_Focus_Visual final
{
public:
	bool                                          IsFocused;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
};
static_assert(alignof(WBP_ComboBox_C_Set_Focus_Visual) == 0x000004, "Wrong alignment on WBP_ComboBox_C_Set_Focus_Visual");
static_assert(sizeof(WBP_ComboBox_C_Set_Focus_Visual) == 0x000038, "Wrong size on WBP_ComboBox_C_Set_Focus_Visual");
static_assert(offsetof(WBP_ComboBox_C_Set_Focus_Visual, IsFocused) == 0x000000, "Member 'WBP_ComboBox_C_Set_Focus_Visual::IsFocused' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_Set_Focus_Visual, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'WBP_ComboBox_C_Set_Focus_Visual::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_Set_Focus_Visual, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'WBP_ComboBox_C_Set_Focus_Visual::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_Set_Focus_Visual, CallFunc_SelectColor_ReturnValue_1) == 0x000028, "Member 'WBP_ComboBox_C_Set_Focus_Visual::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");

struct WBP_ComboBox_C_SetText final
{
public:
	class FString                                 TextValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
};
static_assert(alignof(WBP_ComboBox_C_SetText) == 0x000008, "Wrong alignment on WBP_ComboBox_C_SetText");
static_assert(sizeof(WBP_ComboBox_C_SetText) == 0x000028, "Wrong size on WBP_ComboBox_C_SetText");
static_assert(offsetof(WBP_ComboBox_C_SetText, TextValue) == 0x000000, "Member 'WBP_ComboBox_C_SetText::TextValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_ComboBox_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

struct WBP_ComboBox_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(WBP_ComboBox_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_ComboBox_C_OnMouseLeave");
static_assert(sizeof(WBP_ComboBox_C_OnMouseLeave) == 0x000098, "Wrong size on WBP_ComboBox_C_OnMouseLeave");
static_assert(offsetof(WBP_ComboBox_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_ComboBox_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct WBP_ComboBox_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(WBP_ComboBox_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_ComboBox_C_OnMouseEnter");
static_assert(sizeof(WBP_ComboBox_C_OnMouseEnter) == 0x0000D8, "Wrong size on WBP_ComboBox_C_OnMouseEnter");
static_assert(offsetof(WBP_ComboBox_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_ComboBox_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'WBP_ComboBox_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct WBP_ComboBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_ComboBox_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ComboBox_C_PreConstruct");
static_assert(sizeof(WBP_ComboBox_C_PreConstruct) == 0x000001, "Wrong size on WBP_ComboBox_C_PreConstruct");
static_assert(offsetof(WBP_ComboBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ComboBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_ComboBox_C_OnInputDeviceChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(WBP_ComboBox_C_OnInputDeviceChanged) == 0x000001, "Wrong alignment on WBP_ComboBox_C_OnInputDeviceChanged");
static_assert(sizeof(WBP_ComboBox_C_OnInputDeviceChanged) == 0x000001, "Wrong size on WBP_ComboBox_C_OnInputDeviceChanged");
static_assert(offsetof(WBP_ComboBox_C_OnInputDeviceChanged, bNewInputType) == 0x000000, "Member 'WBP_ComboBox_C_OnInputDeviceChanged::bNewInputType' has a wrong offset!");

struct WBP_ComboBox_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(WBP_ComboBox_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_ComboBox_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_ComboBox_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_ComboBox_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_ComboBox_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_ComboBox_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

struct WBP_ComboBox_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(WBP_ComboBox_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_ComboBox_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_ComboBox_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_ComboBox_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_ComboBox_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_ComboBox_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

struct WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	uint8                                         Pad_2C[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;
	uint8                                         Pad_1C1[0x7];
	class FString                                 CallFunc_GetSelectedOption_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
};
static_assert(alignof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox) == 0x000008, "Wrong alignment on WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox");
static_assert(sizeof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox) == 0x0001F0, "Wrong size on WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, EntryPoint) == 0x000000, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_Event_InFocusEvent_1) == 0x00001C, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_Event_InFocusEvent) == 0x000024, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_Event_MyGeometry) == 0x000030, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_Event_MouseEvent_1) == 0x000070, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_Event_MouseEvent) == 0x000108, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0001A0, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001A8, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_ComponentBoundEvent_SelectedItem) == 0x0001B0, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_ComponentBoundEvent_SelectionType) == 0x0001C0, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_GetSelectedOption_ReturnValue) == 0x0001C8, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_GetSelectedOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0001D8, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0001E0, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_BooleanOR_ReturnValue) == 0x0001E8, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0001E9, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_Event_IsDesignTime) == 0x0001EA, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox, K2Node_CustomEvent_bNewInputType) == 0x0001EB, "Member 'WBP_ComboBox_C_ExecuteUbergraph_WBP_ComboBox::K2Node_CustomEvent_bNewInputType' has a wrong offset!");

struct WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;
	ESelectInfo                                   SelectionType;
};
static_assert(alignof(WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'WBP_ComboBox_C_BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

}
