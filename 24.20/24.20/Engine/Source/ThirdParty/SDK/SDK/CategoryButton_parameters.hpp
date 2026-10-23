#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct CategoryButton_C_ExecuteUbergraph_CategoryButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	bool                                          K2Node_CustomEvent_IsSelected;
	bool                                          K2Node_CustomEvent_IsHovered;
	uint8                                         Pad_2A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_42[0x6];
	double                                        K2Node_Select_Default;
	class FText                                   K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_71[0x3];
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
};
static_assert(alignof(CategoryButton_C_ExecuteUbergraph_CategoryButton) == 0x000008, "Wrong alignment on CategoryButton_C_ExecuteUbergraph_CategoryButton");
static_assert(sizeof(CategoryButton_C_ExecuteUbergraph_CategoryButton) == 0x000078, "Wrong size on CategoryButton_C_ExecuteUbergraph_CategoryButton");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, EntryPoint) == 0x000000, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, Temp_real_Variable) == 0x000008, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, Temp_real_Variable_1) == 0x000010, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, K2Node_CustomEvent_IsSelected) == 0x000028, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::K2Node_CustomEvent_IsSelected' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, K2Node_CustomEvent_IsHovered) == 0x000029, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::K2Node_CustomEvent_IsHovered' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000030, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000038, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, Temp_bool_Variable) == 0x000040, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, Temp_bool_Variable_1) == 0x000041, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, K2Node_Select_Default) == 0x000048, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, K2Node_Select_Default_1) == 0x000050, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000068, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, K2Node_Event_IsDesignTime) == 0x000070, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ExecuteUbergraph_CategoryButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000074, "Member 'CategoryButton_C_ExecuteUbergraph_CategoryButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

struct CategoryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(CategoryButton_C_PreConstruct) == 0x000001, "Wrong alignment on CategoryButton_C_PreConstruct");
static_assert(sizeof(CategoryButton_C_PreConstruct) == 0x000001, "Wrong size on CategoryButton_C_PreConstruct");
static_assert(offsetof(CategoryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CategoryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct CategoryButton_C_ResetState final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	double                                        K2Node_Select_Default;
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
};
static_assert(alignof(CategoryButton_C_ResetState) == 0x000008, "Wrong alignment on CategoryButton_C_ResetState");
static_assert(sizeof(CategoryButton_C_ResetState) == 0x000030, "Wrong size on CategoryButton_C_ResetState");
static_assert(offsetof(CategoryButton_C_ResetState, Temp_bool_Variable) == 0x000000, "Member 'CategoryButton_C_ResetState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ResetState, Temp_real_Variable) == 0x000008, "Member 'CategoryButton_C_ResetState::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ResetState, Temp_real_Variable_1) == 0x000010, "Member 'CategoryButton_C_ResetState::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ResetState, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'CategoryButton_C_ResetState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ResetState, K2Node_Select_Default) == 0x000020, "Member 'CategoryButton_C_ResetState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_ResetState, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000028, "Member 'CategoryButton_C_ResetState::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

struct CategoryButton_C_SetHovered final
{
public:
	bool                                          IsHovered_0;
};
static_assert(alignof(CategoryButton_C_SetHovered) == 0x000001, "Wrong alignment on CategoryButton_C_SetHovered");
static_assert(sizeof(CategoryButton_C_SetHovered) == 0x000001, "Wrong size on CategoryButton_C_SetHovered");
static_assert(offsetof(CategoryButton_C_SetHovered, IsHovered_0) == 0x000000, "Member 'CategoryButton_C_SetHovered::IsHovered_0' has a wrong offset!");

struct CategoryButton_C_SetSafeZonePadding final
{
public:
	bool                                          Pad_Left_0;
	bool                                          Pad_Right_0;
};
static_assert(alignof(CategoryButton_C_SetSafeZonePadding) == 0x000001, "Wrong alignment on CategoryButton_C_SetSafeZonePadding");
static_assert(sizeof(CategoryButton_C_SetSafeZonePadding) == 0x000002, "Wrong size on CategoryButton_C_SetSafeZonePadding");
static_assert(offsetof(CategoryButton_C_SetSafeZonePadding, Pad_Left_0) == 0x000000, "Member 'CategoryButton_C_SetSafeZonePadding::Pad_Left_0' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetSafeZonePadding, Pad_Right_0) == 0x000001, "Member 'CategoryButton_C_SetSafeZonePadding::Pad_Right_0' has a wrong offset!");

struct CategoryButton_C_SetSelected final
{
public:
	bool                                          IsSelected_0;
};
static_assert(alignof(CategoryButton_C_SetSelected) == 0x000001, "Wrong alignment on CategoryButton_C_SetSelected");
static_assert(sizeof(CategoryButton_C_SetSelected) == 0x000001, "Wrong size on CategoryButton_C_SetSelected");
static_assert(offsetof(CategoryButton_C_SetSelected, IsSelected_0) == 0x000000, "Member 'CategoryButton_C_SetSelected::IsSelected_0' has a wrong offset!");

struct CategoryButton_C_SetTitleText final
{
public:
	class FText                                   TitleText_0;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(CategoryButton_C_SetTitleText) == 0x000008, "Wrong alignment on CategoryButton_C_SetTitleText");
static_assert(sizeof(CategoryButton_C_SetTitleText) == 0x000020, "Wrong size on CategoryButton_C_SetTitleText");
static_assert(offsetof(CategoryButton_C_SetTitleText, TitleText_0) == 0x000000, "Member 'CategoryButton_C_SetTitleText::TitleText_0' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetTitleText, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'CategoryButton_C_SetTitleText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetTitleText, CallFunc_Not_PreBool_ReturnValue_1) == 0x000019, "Member 'CategoryButton_C_SetTitleText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetTitleText, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'CategoryButton_C_SetTitleText::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct CategoryButton_C_SetWarningStatus final
{
public:
	bool                                          WarningOn;
	uint8                                         Pad_1[0x7];
	class FText                                   WarningMessage;
	bool                                          PreviousIsWarningOn;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_27[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_31[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(CategoryButton_C_SetWarningStatus) == 0x000008, "Wrong alignment on CategoryButton_C_SetWarningStatus");
static_assert(sizeof(CategoryButton_C_SetWarningStatus) == 0x000048, "Wrong size on CategoryButton_C_SetWarningStatus");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, WarningOn) == 0x000000, "Member 'CategoryButton_C_SetWarningStatus::WarningOn' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, WarningMessage) == 0x000008, "Member 'CategoryButton_C_SetWarningStatus::WarningMessage' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, PreviousIsWarningOn) == 0x000020, "Member 'CategoryButton_C_SetWarningStatus::PreviousIsWarningOn' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, Temp_byte_Variable) == 0x000021, "Member 'CategoryButton_C_SetWarningStatus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, Temp_bool_Variable) == 0x000022, "Member 'CategoryButton_C_SetWarningStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, Temp_byte_Variable_1) == 0x000023, "Member 'CategoryButton_C_SetWarningStatus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, Temp_byte_Variable_2) == 0x000024, "Member 'CategoryButton_C_SetWarningStatus::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, Temp_byte_Variable_3) == 0x000025, "Member 'CategoryButton_C_SetWarningStatus::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, Temp_bool_Variable_1) == 0x000026, "Member 'CategoryButton_C_SetWarningStatus::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'CategoryButton_C_SetWarningStatus::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, K2Node_Select_Default) == 0x000030, "Member 'CategoryButton_C_SetWarningStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'CategoryButton_C_SetWarningStatus::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000040, "Member 'CategoryButton_C_SetWarningStatus::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'CategoryButton_C_SetWarningStatus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButton_C_SetWarningStatus, K2Node_Select_Default_1) == 0x000042, "Member 'CategoryButton_C_SetWarningStatus::K2Node_Select_Default_1' has a wrong offset!");

}
