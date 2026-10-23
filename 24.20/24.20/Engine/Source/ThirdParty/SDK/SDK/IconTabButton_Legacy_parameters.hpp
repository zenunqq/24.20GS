#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_11[0x7];
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue_1;
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
	uint8                                         Pad_113[0xD];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	uint8                                         Pad_1E8[0x8];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy) == 0x000010, "Wrong alignment on IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy");
static_assert(sizeof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy) == 0x0002C0, "Wrong size on IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, EntryPoint) == 0x000000, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::EntryPoint' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000008, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, K2Node_Event_IsDesignTime) == 0x000010, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_GetCurrentTextStyleClass_ReturnValue_1) == 0x000018, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_GetCurrentTextStyleClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, K2Node_Event_TabLabelInfo) == 0x000020, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000110, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_GetSelected_ReturnValue) == 0x000111, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_GetSelected_ReturnValue_1) == 0x000112, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, K2Node_MakeStruct_SlateBrush) == 0x000120, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_GetContext_ReturnValue) == 0x0001E0, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, K2Node_MakeStruct_SlateBrush_1) == 0x0001F0, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_GetCurrentInputType_ReturnValue) == 0x0002B0, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002B1, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_IsMobileGame_ReturnValue) == 0x0002B2, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy, CallFunc_BooleanAND_ReturnValue) == 0x0002B3, "Member 'IconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct IconTabButton_Legacy_C_Play_Hover_Sound final
{
public:
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_1[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_21[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(IconTabButton_Legacy_C_Play_Hover_Sound) == 0x000008, "Wrong alignment on IconTabButton_Legacy_C_Play_Hover_Sound");
static_assert(sizeof(IconTabButton_Legacy_C_Play_Hover_Sound) == 0x000048, "Wrong size on IconTabButton_Legacy_C_Play_Hover_Sound");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_GetSelected_ReturnValue) == 0x000000, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000028, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000040, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_EqualEqual_TextText_ReturnValue_1) == 0x000041, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_EqualEqual_TextText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_BooleanOR_ReturnValue) == 0x000042, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Play_Hover_Sound, CallFunc_BooleanAND_ReturnValue) == 0x000043, "Member 'IconTabButton_Legacy_C_Play_Hover_Sound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct IconTabButton_Legacy_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(IconTabButton_Legacy_C_PreConstruct) == 0x000001, "Wrong alignment on IconTabButton_Legacy_C_PreConstruct");
static_assert(sizeof(IconTabButton_Legacy_C_PreConstruct) == 0x000001, "Wrong size on IconTabButton_Legacy_C_PreConstruct");
static_assert(offsetof(IconTabButton_Legacy_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'IconTabButton_Legacy_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct IconTabButton_Legacy_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;
};
static_assert(alignof(IconTabButton_Legacy_C_Set_Icon) == 0x000010, "Wrong alignment on IconTabButton_Legacy_C_Set_Icon");
static_assert(sizeof(IconTabButton_Legacy_C_Set_Icon) == 0x0000C0, "Wrong size on IconTabButton_Legacy_C_Set_Icon");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'IconTabButton_Legacy_C_Set_Icon::IconBrush_0' has a wrong offset!");

struct IconTabButton_Legacy_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;
};
static_assert(alignof(IconTabButton_Legacy_C_Set_Text) == 0x000008, "Wrong alignment on IconTabButton_Legacy_C_Set_Text");
static_assert(sizeof(IconTabButton_Legacy_C_Set_Text) == 0x000038, "Wrong size on IconTabButton_Legacy_C_Set_Text");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Text, ButtonText_0) == 0x000000, "Member 'IconTabButton_Legacy_C_Set_Text::ButtonText_0' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'IconTabButton_Legacy_C_Set_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Text, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'IconTabButton_Legacy_C_Set_Text::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Text, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'IconTabButton_Legacy_C_Set_Text::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Text, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'IconTabButton_Legacy_C_Set_Text::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Set_Text, CallFunc_Create_Basic_Tooltip_Output) == 0x000030, "Member 'IconTabButton_Legacy_C_Set_Text::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

struct IconTabButton_Legacy_C_SetChangeIconColorWhenSelected final
{
public:
	bool                                          ChangeColorWhenSelected;
	uint8                                         Pad_1[0x3];
	struct FSlateColor                            SelectedColor;
	struct FSlateColor                            UnselectedColor;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_2E[0x2];
	struct FSlateColor                            K2Node_Select_Default;
};
static_assert(alignof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected) == 0x000004, "Wrong alignment on IconTabButton_Legacy_C_SetChangeIconColorWhenSelected");
static_assert(sizeof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected) == 0x000044, "Wrong size on IconTabButton_Legacy_C_SetChangeIconColorWhenSelected");
static_assert(offsetof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected, ChangeColorWhenSelected) == 0x000000, "Member 'IconTabButton_Legacy_C_SetChangeIconColorWhenSelected::ChangeColorWhenSelected' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected, SelectedColor) == 0x000004, "Member 'IconTabButton_Legacy_C_SetChangeIconColorWhenSelected::SelectedColor' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected, UnselectedColor) == 0x000018, "Member 'IconTabButton_Legacy_C_SetChangeIconColorWhenSelected::UnselectedColor' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected, Temp_bool_Variable) == 0x00002C, "Member 'IconTabButton_Legacy_C_SetChangeIconColorWhenSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected, CallFunc_GetSelected_ReturnValue) == 0x00002D, "Member 'IconTabButton_Legacy_C_SetChangeIconColorWhenSelected::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_SetChangeIconColorWhenSelected, K2Node_Select_Default) == 0x000030, "Member 'IconTabButton_Legacy_C_SetChangeIconColorWhenSelected::K2Node_Select_Default' has a wrong offset!");

struct IconTabButton_Legacy_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(IconTabButton_Legacy_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on IconTabButton_Legacy_C_SetTabLabelInfo");
static_assert(sizeof(IconTabButton_Legacy_C_SetTabLabelInfo) == 0x0000F0, "Wrong size on IconTabButton_Legacy_C_SetTabLabelInfo");
static_assert(offsetof(IconTabButton_Legacy_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'IconTabButton_Legacy_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

struct IconTabButton_Legacy_C_SetTutorialBorderStyle final
{
public:
	class UClass*                                 BorderStyle;
};
static_assert(alignof(IconTabButton_Legacy_C_SetTutorialBorderStyle) == 0x000008, "Wrong alignment on IconTabButton_Legacy_C_SetTutorialBorderStyle");
static_assert(sizeof(IconTabButton_Legacy_C_SetTutorialBorderStyle) == 0x000008, "Wrong size on IconTabButton_Legacy_C_SetTutorialBorderStyle");
static_assert(offsetof(IconTabButton_Legacy_C_SetTutorialBorderStyle, BorderStyle) == 0x000000, "Member 'IconTabButton_Legacy_C_SetTutorialBorderStyle::BorderStyle' has a wrong offset!");

struct IconTabButton_Legacy_C_Update_Bang_State final
{
public:
	bool                                          bBangEnabled_0;
	uint8                                         Pad_1[0x3];
	int32                                         Count;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	bool                                          CallFunc_GetIsEnabled_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(IconTabButton_Legacy_C_Update_Bang_State) == 0x000004, "Wrong alignment on IconTabButton_Legacy_C_Update_Bang_State");
static_assert(sizeof(IconTabButton_Legacy_C_Update_Bang_State) == 0x00000C, "Wrong size on IconTabButton_Legacy_C_Update_Bang_State");
static_assert(offsetof(IconTabButton_Legacy_C_Update_Bang_State, bBangEnabled_0) == 0x000000, "Member 'IconTabButton_Legacy_C_Update_Bang_State::bBangEnabled_0' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Update_Bang_State, Count) == 0x000004, "Member 'IconTabButton_Legacy_C_Update_Bang_State::Count' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Update_Bang_State, CallFunc_GetIsEnabled_ReturnValue) == 0x000008, "Member 'IconTabButton_Legacy_C_Update_Bang_State::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Update_Bang_State, CallFunc_GetIsEnabled_ReturnValue_1) == 0x000009, "Member 'IconTabButton_Legacy_C_Update_Bang_State::CallFunc_GetIsEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Update_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'IconTabButton_Legacy_C_Update_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTabButton_Legacy_C_Update_Bang_State, CallFunc_BooleanAND_ReturnValue_1) == 0x00000B, "Member 'IconTabButton_Legacy_C_Update_Bang_State::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}
