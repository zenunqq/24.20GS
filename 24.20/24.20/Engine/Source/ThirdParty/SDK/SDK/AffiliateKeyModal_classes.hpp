#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAffiliateKeyModal_C final : public UFortAffilateModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       SuccessAnim;
	class UWidgetAnimation*                       Shake;
	class UImage*                                 Check;
	class UWBP_UIKit_Button_Regular_C*            CloseButton;
	class UCloseButton_C*                         CloseButton_Mobile;
	class UCommonTextBlock*                       CommonTextBlock_0;
	class UCommonTextBlock*                       CommonTextBlock_Title;
	class UCommonTextBlock*                       ConnectionError;
	class UCommonTextBlock*                       Description;
	class UCommonActionWidget*                    EditTextActionWidget;
	class UCommonTextBlock*                       EntryError;
	class UCommonTextBlock*                       ErrorPart2;
	class UWBP_UIKit_Button_Regular_C*            LaunchWebsite;
	class UImage*                                 McpWaitingSpinner;
	class UFortSimpleWidgetAnimationsPanel*       SimpleWidgetAnimationsPanel;
	class UCommonTextBlock*                       Warning;
	bool                                          Found;
	bool                                          ConnectionTimeout;
	uint8                                         Pad_5CA[0x6];
	TMulticastInlineDelegate<void()>              OnPopupClosed;
	bool                                          bSkipAutoPopulate;
	uint8                                         Pad_5E1[0x7];
	TMulticastInlineDelegate<void()>              OnSuccess;
	bool                                          bShakeAnimationIsPlaying;
	uint8                                         Pad_5F9[0x3];
	class FName                                   ShakeAnimation;
	bool                                          bIsAffiliateKeyReadOnly;

public:
	void BndEvt__AffiliateKey_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__AffiliateKeyModal_AcceptButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__AffiliateKeyModal_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__AffiliateKeyModal_LaunchWebsite_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_AffiliateKeyModal(int32 EntryPoint);
	void IsAffiliateKeyReadOnly(bool* bIsAffiliateKeyReadOnly_0);
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, const class FString& AffilateNameChecked);
	void OnInitialized();
	void OnSet(bool bSuccess);
	void SetupAffiliateField(const class FString& AffilateName);
	void WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AffiliateKeyModal_C">();
	}
	static class UAffiliateKeyModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAffiliateKeyModal_C>();
	}
};
static_assert(alignof(UAffiliateKeyModal_C) == 0x000008, "Wrong alignment on UAffiliateKeyModal_C");
static_assert(sizeof(UAffiliateKeyModal_C) == 0x000608, "Wrong size on UAffiliateKeyModal_C");
static_assert(offsetof(UAffiliateKeyModal_C, UberGraphFrame) == 0x000540, "Member 'UAffiliateKeyModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, SuccessAnim) == 0x000548, "Member 'UAffiliateKeyModal_C::SuccessAnim' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, Shake) == 0x000550, "Member 'UAffiliateKeyModal_C::Shake' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, Check) == 0x000558, "Member 'UAffiliateKeyModal_C::Check' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, CloseButton) == 0x000560, "Member 'UAffiliateKeyModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, CloseButton_Mobile) == 0x000568, "Member 'UAffiliateKeyModal_C::CloseButton_Mobile' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, CommonTextBlock_0) == 0x000570, "Member 'UAffiliateKeyModal_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, CommonTextBlock_Title) == 0x000578, "Member 'UAffiliateKeyModal_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, ConnectionError) == 0x000580, "Member 'UAffiliateKeyModal_C::ConnectionError' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, Description) == 0x000588, "Member 'UAffiliateKeyModal_C::Description' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, EditTextActionWidget) == 0x000590, "Member 'UAffiliateKeyModal_C::EditTextActionWidget' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, EntryError) == 0x000598, "Member 'UAffiliateKeyModal_C::EntryError' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, ErrorPart2) == 0x0005A0, "Member 'UAffiliateKeyModal_C::ErrorPart2' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, LaunchWebsite) == 0x0005A8, "Member 'UAffiliateKeyModal_C::LaunchWebsite' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, McpWaitingSpinner) == 0x0005B0, "Member 'UAffiliateKeyModal_C::McpWaitingSpinner' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, SimpleWidgetAnimationsPanel) == 0x0005B8, "Member 'UAffiliateKeyModal_C::SimpleWidgetAnimationsPanel' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, Warning) == 0x0005C0, "Member 'UAffiliateKeyModal_C::Warning' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, Found) == 0x0005C8, "Member 'UAffiliateKeyModal_C::Found' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, ConnectionTimeout) == 0x0005C9, "Member 'UAffiliateKeyModal_C::ConnectionTimeout' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, OnPopupClosed) == 0x0005D0, "Member 'UAffiliateKeyModal_C::OnPopupClosed' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, bSkipAutoPopulate) == 0x0005E0, "Member 'UAffiliateKeyModal_C::bSkipAutoPopulate' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, OnSuccess) == 0x0005E8, "Member 'UAffiliateKeyModal_C::OnSuccess' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, bShakeAnimationIsPlaying) == 0x0005F8, "Member 'UAffiliateKeyModal_C::bShakeAnimationIsPlaying' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, ShakeAnimation) == 0x0005FC, "Member 'UAffiliateKeyModal_C::ShakeAnimation' has a wrong offset!");
static_assert(offsetof(UAffiliateKeyModal_C, bIsAffiliateKeyReadOnly) == 0x000600, "Member 'UAffiliateKeyModal_C::bIsAffiliateKeyReadOnly' has a wrong offset!");

}
