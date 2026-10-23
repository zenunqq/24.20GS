#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;
};
static_assert(alignof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

struct FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;
	ETextCommit                                   CommitMethod;
};
static_assert(alignof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

struct FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_Event_bIsBadText;
	bool                                          K2Node_Event_bAdditionalValidationFailed;
	uint8                                         Pad_7[0x1];
	class FText                                   CallFunc_GetErrorText_Appropriate_Text;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_29[0x7];
	class FText                                   K2Node_ComponentBoundEvent_Text_1;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class FText                                   CallFunc_GetCurrentText_Text;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_1D1[0x7];
	class FText                                   K2Node_ComponentBoundEvent_Text;
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_1F4[0x4];
	class FText                                   K2Node_Event_Text;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	bool                                          CallFunc_IsPersistentIDValid_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget");
static_assert(sizeof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget) == 0x000228, "Wrong size on FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, EntryPoint) == 0x000000, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_bool_Variable) == 0x000004, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_bIsBadText) == 0x000005, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_bIsBadText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_bAdditionalValidationFailed) == 0x000006, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_bAdditionalValidationFailed' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_GetErrorText_Appropriate_Text) == 0x000008, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_GetErrorText_Appropriate_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_IsDesignTime) == 0x000028, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_ComponentBoundEvent_Text_1) == 0x000030, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_MyGeometry) == 0x000048, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_MouseEvent_1) == 0x000088, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_MouseEvent) == 0x000120, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_GetCurrentText_Text) == 0x0001B8, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_GetCurrentText_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable) == 0x0001D0, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_ComponentBoundEvent_Text) == 0x0001D8, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_ComponentBoundEvent_CommitMethod) == 0x0001F0, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001F1, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable_1) == 0x0001F2, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_bool_Variable_1) == 0x0001F3, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Event_Text) == 0x0001F8, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_Conv_TextToString_ReturnValue) == 0x000210, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_IsPersistentIDValid_ReturnValue) == 0x000220, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_IsPersistentIDValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Select_Default) == 0x000221, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable_2) == 0x000222, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_GetVisibility_ReturnValue) == 0x000223, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000224, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, Temp_byte_Variable_3) == 0x000225, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget, K2Node_Select_Default_1) == 0x000226, "Member 'FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget::K2Node_Select_Default_1' has a wrong offset!");

struct FilteredTextEntryWidget_C_GetCurrentText final
{
public:
	class FText                                   Text;
	class FText                                   CallFunc_GetText_ReturnValue;
};
static_assert(alignof(FilteredTextEntryWidget_C_GetCurrentText) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_GetCurrentText");
static_assert(sizeof(FilteredTextEntryWidget_C_GetCurrentText) == 0x000030, "Wrong size on FilteredTextEntryWidget_C_GetCurrentText");
static_assert(offsetof(FilteredTextEntryWidget_C_GetCurrentText, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_GetCurrentText::Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetCurrentText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'FilteredTextEntryWidget_C_GetCurrentText::CallFunc_GetText_ReturnValue' has a wrong offset!");

struct FilteredTextEntryWidget_C_GetErrorText final
{
public:
	bool                                          Additional_Validator_Failed;
	uint8                                         Pad_1[0x7];
	class FText                                   Appropriate_Text;
	class FText                                   Result;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(FilteredTextEntryWidget_C_GetErrorText) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_GetErrorText");
static_assert(sizeof(FilteredTextEntryWidget_C_GetErrorText) == 0x000040, "Wrong size on FilteredTextEntryWidget_C_GetErrorText");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, Additional_Validator_Failed) == 0x000000, "Member 'FilteredTextEntryWidget_C_GetErrorText::Additional_Validator_Failed' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, Appropriate_Text) == 0x000008, "Member 'FilteredTextEntryWidget_C_GetErrorText::Appropriate_Text' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, Result) == 0x000020, "Member 'FilteredTextEntryWidget_C_GetErrorText::Result' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, CallFunc_TextIsEmpty_ReturnValue) == 0x000038, "Member 'FilteredTextEntryWidget_C_GetErrorText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'FilteredTextEntryWidget_C_GetErrorText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_GetErrorText, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'FilteredTextEntryWidget_C_GetErrorText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct FilteredTextEntryWidget_C_HandleShowPrompt final
{
public:
	class FText                                   CurrentText;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_1B[0x5];
	class FText                                   CallFunc_GetEmptyText_ReturnValue;
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(FilteredTextEntryWidget_C_HandleShowPrompt) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_HandleShowPrompt");
static_assert(sizeof(FilteredTextEntryWidget_C_HandleShowPrompt) == 0x000040, "Wrong size on FilteredTextEntryWidget_C_HandleShowPrompt");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CurrentText) == 0x000000, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CurrentText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, Temp_bool_Variable) == 0x000018, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, Temp_byte_Variable) == 0x000019, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, Temp_byte_Variable_1) == 0x00001A, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CallFunc_GetEmptyText_ReturnValue) == 0x000020, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000038, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_HandleShowPrompt, K2Node_Select_Default) == 0x00003A, "Member 'FilteredTextEntryWidget_C_HandleShowPrompt::K2Node_Select_Default' has a wrong offset!");

struct FilteredTextEntryWidget_C_OnDirtyTextAttempted final
{
public:
	bool                                          bIsBadText;
	bool                                          bAdditionalValidationFailed;
};
static_assert(alignof(FilteredTextEntryWidget_C_OnDirtyTextAttempted) == 0x000001, "Wrong alignment on FilteredTextEntryWidget_C_OnDirtyTextAttempted");
static_assert(sizeof(FilteredTextEntryWidget_C_OnDirtyTextAttempted) == 0x000002, "Wrong size on FilteredTextEntryWidget_C_OnDirtyTextAttempted");
static_assert(offsetof(FilteredTextEntryWidget_C_OnDirtyTextAttempted, bIsBadText) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnDirtyTextAttempted::bIsBadText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnDirtyTextAttempted, bAdditionalValidationFailed) == 0x000001, "Member 'FilteredTextEntryWidget_C_OnDirtyTextAttempted::bAdditionalValidationFailed' has a wrong offset!");

struct FilteredTextEntryWidget_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(FilteredTextEntryWidget_C_OnMouseEnter) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnMouseEnter");
static_assert(sizeof(FilteredTextEntryWidget_C_OnMouseEnter) == 0x0000D8, "Wrong size on FilteredTextEntryWidget_C_OnMouseEnter");
static_assert(offsetof(FilteredTextEntryWidget_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'FilteredTextEntryWidget_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct FilteredTextEntryWidget_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(FilteredTextEntryWidget_C_OnMouseLeave) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_OnMouseLeave");
static_assert(sizeof(FilteredTextEntryWidget_C_OnMouseLeave) == 0x000098, "Wrong size on FilteredTextEntryWidget_C_OnMouseLeave");
static_assert(offsetof(FilteredTextEntryWidget_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'FilteredTextEntryWidget_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct FilteredTextEntryWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(FilteredTextEntryWidget_C_PreConstruct) == 0x000001, "Wrong alignment on FilteredTextEntryWidget_C_PreConstruct");
static_assert(sizeof(FilteredTextEntryWidget_C_PreConstruct) == 0x000001, "Wrong size on FilteredTextEntryWidget_C_PreConstruct");
static_assert(offsetof(FilteredTextEntryWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FilteredTextEntryWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct FilteredTextEntryWidget_C_UpdateConfiguration final
{
public:
	bool                                          bOverrideStyle;
	bool                                          bHideValidation;
	ETextJustify                                  TextJustification;
	bool                                          bShouldShowTextPrompt;
	uint8                                         Pad_4[0x4];
	class FText                                   PromptDisplayText;
	class UClass*                                 TextStyle;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_29[0x7];
	class FText                                   CallFunc_GetText_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(FilteredTextEntryWidget_C_UpdateConfiguration) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_UpdateConfiguration");
static_assert(sizeof(FilteredTextEntryWidget_C_UpdateConfiguration) == 0x000050, "Wrong size on FilteredTextEntryWidget_C_UpdateConfiguration");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, bOverrideStyle) == 0x000000, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::bOverrideStyle' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, bHideValidation) == 0x000001, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::bHideValidation' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, TextJustification) == 0x000002, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::TextJustification' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, bShouldShowTextPrompt) == 0x000003, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::bShouldShowTextPrompt' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, PromptDisplayText) == 0x000008, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::PromptDisplayText' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, TextStyle) == 0x000020, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::TextStyle' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, Temp_byte_Variable) == 0x000028, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, CallFunc_GetText_ReturnValue) == 0x000030, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, Temp_byte_Variable_1) == 0x000048, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, Temp_bool_Variable) == 0x000049, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FilteredTextEntryWidget_C_UpdateConfiguration, K2Node_Select_Default) == 0x00004A, "Member 'FilteredTextEntryWidget_C_UpdateConfiguration::K2Node_Select_Default' has a wrong offset!");

struct FilteredTextEntryWidget_C_ValidatePersistentID final
{
public:
	class FText                                   Text;
};
static_assert(alignof(FilteredTextEntryWidget_C_ValidatePersistentID) == 0x000008, "Wrong alignment on FilteredTextEntryWidget_C_ValidatePersistentID");
static_assert(sizeof(FilteredTextEntryWidget_C_ValidatePersistentID) == 0x000018, "Wrong size on FilteredTextEntryWidget_C_ValidatePersistentID");
static_assert(offsetof(FilteredTextEntryWidget_C_ValidatePersistentID, Text) == 0x000000, "Member 'FilteredTextEntryWidget_C_ValidatePersistentID::Text' has a wrong offset!");

}
