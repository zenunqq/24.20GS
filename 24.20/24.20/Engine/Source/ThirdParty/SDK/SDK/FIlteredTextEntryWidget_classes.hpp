#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UFilteredTextEntryWidget_C final : public UFortEditableFilteredCountedTextBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Error;
	class UCommonTextBlock*                       CommonTextBlock_Prompt;
	class UCommonTextBlock*                       ErrorText;
	class UHorizontalBox*                         HorizontalBox_Info;
	class UImage*                                 Image_119;
	class UImage*                                 Image_Selected;
	class UCommonActionWidget*                    InputActionWidget;
	class UOverlay*                               Overlay_InputAction;
	class UOverlay*                               WarningImage;
	bool                                          bUseOverrideStyle;
	uint8                                         Pad_3F1[0xF];
	struct FEditableTextBoxStyle                  OverrideStyle;
	bool                                          bHideValidationInfo;
	ETextJustify                                  Justification;
	bool                                          ShowTextPrompt;
	uint8                                         Pad_1183[0x5];
	class UClass*                                 PromptTextStyle;
	class FText                                   PromptText;
	TMulticastInlineDelegate<void(class FText Text)> OnTextChanged;
	bool                                          bUseHintText;
	uint8                                         Pad_11B9[0x7];
	class FText                                   HintText;
	TMulticastInlineDelegate<void(class FText Text, bool BadText)> OnSanitizedTextReady;
	TMulticastInlineDelegate<void()>              OnTextCommitByEnter;
	bool                                          SanitizedTextReady;
	uint8                                         Pad_11F9[0x7];
	TMulticastInlineDelegate<void()>              OnTextCommitted;
	class FText                                   PersistentIDValidationErrorText;

public:
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void Construct();
	void ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint);
	void GetCurrentText(class FText* Text);
	void GetErrorText(bool Additional_Validator_Failed, class FText* Appropriate_Text);
	void HandleShowPrompt(const class FText& CurrentText);
	void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void SetTextFocus();
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, ETextJustify TextJustification, bool bShouldShowTextPrompt, const class FText& PromptDisplayText, class UClass* TextStyle);
	void ValidatePersistentID(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilteredTextEntryWidget_C">();
	}
	static class UFilteredTextEntryWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilteredTextEntryWidget_C>();
	}
};
static_assert(alignof(UFilteredTextEntryWidget_C) == 0x000010, "Wrong alignment on UFilteredTextEntryWidget_C");
static_assert(sizeof(UFilteredTextEntryWidget_C) == 0x001230, "Wrong size on UFilteredTextEntryWidget_C");
static_assert(offsetof(UFilteredTextEntryWidget_C, UberGraphFrame) == 0x0003A0, "Member 'UFilteredTextEntryWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Error) == 0x0003A8, "Member 'UFilteredTextEntryWidget_C::Error' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, CommonTextBlock_Prompt) == 0x0003B0, "Member 'UFilteredTextEntryWidget_C::CommonTextBlock_Prompt' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, ErrorText) == 0x0003B8, "Member 'UFilteredTextEntryWidget_C::ErrorText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, HorizontalBox_Info) == 0x0003C0, "Member 'UFilteredTextEntryWidget_C::HorizontalBox_Info' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Image_119) == 0x0003C8, "Member 'UFilteredTextEntryWidget_C::Image_119' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Image_Selected) == 0x0003D0, "Member 'UFilteredTextEntryWidget_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, InputActionWidget) == 0x0003D8, "Member 'UFilteredTextEntryWidget_C::InputActionWidget' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Overlay_InputAction) == 0x0003E0, "Member 'UFilteredTextEntryWidget_C::Overlay_InputAction' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, WarningImage) == 0x0003E8, "Member 'UFilteredTextEntryWidget_C::WarningImage' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, bUseOverrideStyle) == 0x0003F0, "Member 'UFilteredTextEntryWidget_C::bUseOverrideStyle' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OverrideStyle) == 0x000400, "Member 'UFilteredTextEntryWidget_C::OverrideStyle' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, bHideValidationInfo) == 0x001180, "Member 'UFilteredTextEntryWidget_C::bHideValidationInfo' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, Justification) == 0x001181, "Member 'UFilteredTextEntryWidget_C::Justification' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, ShowTextPrompt) == 0x001182, "Member 'UFilteredTextEntryWidget_C::ShowTextPrompt' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, PromptTextStyle) == 0x001188, "Member 'UFilteredTextEntryWidget_C::PromptTextStyle' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, PromptText) == 0x001190, "Member 'UFilteredTextEntryWidget_C::PromptText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnTextChanged) == 0x0011A8, "Member 'UFilteredTextEntryWidget_C::OnTextChanged' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, bUseHintText) == 0x0011B8, "Member 'UFilteredTextEntryWidget_C::bUseHintText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, HintText) == 0x0011C0, "Member 'UFilteredTextEntryWidget_C::HintText' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnSanitizedTextReady) == 0x0011D8, "Member 'UFilteredTextEntryWidget_C::OnSanitizedTextReady' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnTextCommitByEnter) == 0x0011E8, "Member 'UFilteredTextEntryWidget_C::OnTextCommitByEnter' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, SanitizedTextReady) == 0x0011F8, "Member 'UFilteredTextEntryWidget_C::SanitizedTextReady' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, OnTextCommitted) == 0x001200, "Member 'UFilteredTextEntryWidget_C::OnTextCommitted' has a wrong offset!");
static_assert(offsetof(UFilteredTextEntryWidget_C, PersistentIDValidationErrorText) == 0x001210, "Member 'UFilteredTextEntryWidget_C::PersistentIDValidationErrorText' has a wrong offset!");

}
