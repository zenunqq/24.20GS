#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class URedeemFriendCodeWindow_C final : public UFortRedeemCodeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCloseButton_C*                         Button_Cancel;
	class UIconTextButton_C*                      CancelButton;
	class UWidgetSwitcher*                        EntryProgressSwitcher;
	class UVerticalBox*                           EntryVBox;
	class UCommonTextBlock*                       ErrorText;
	class UImage*                                 Image_0;
	class ULightbox_C*                            Lightbox;
	class USizeBox*                               ProgressSizeBox;
	class UCommonTextBlock*                       ProgressText;
	class UVerticalBox*                           ProgressVBox;
	class UIconTextButton_C*                      RedeemButton;
	class UCommonTextBlock*                       Title;

public:
	void OnRedeemFriendCodeComplete(bool bSuccess, ERedeemCodeFailureReason FailureReason);
	void HandleRedeemCodeComplete(bool Success, ERedeemCodeFailureReason FailureReason);
	void ExecuteUbergraph_RedeemFriendCodeWindow(int32 EntryPoint);
	void Construct();
	void Close();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RedeemFriendCodeWindow_C">();
	}
	static class URedeemFriendCodeWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URedeemFriendCodeWindow_C>();
	}
};
static_assert(alignof(URedeemFriendCodeWindow_C) == 0x000008, "Wrong alignment on URedeemFriendCodeWindow_C");
static_assert(sizeof(URedeemFriendCodeWindow_C) == 0x000588, "Wrong size on URedeemFriendCodeWindow_C");
static_assert(offsetof(URedeemFriendCodeWindow_C, UberGraphFrame) == 0x000520, "Member 'URedeemFriendCodeWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, Button_Cancel) == 0x000528, "Member 'URedeemFriendCodeWindow_C::Button_Cancel' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, CancelButton) == 0x000530, "Member 'URedeemFriendCodeWindow_C::CancelButton' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, EntryProgressSwitcher) == 0x000538, "Member 'URedeemFriendCodeWindow_C::EntryProgressSwitcher' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, EntryVBox) == 0x000540, "Member 'URedeemFriendCodeWindow_C::EntryVBox' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, ErrorText) == 0x000548, "Member 'URedeemFriendCodeWindow_C::ErrorText' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, Image_0) == 0x000550, "Member 'URedeemFriendCodeWindow_C::Image_0' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, Lightbox) == 0x000558, "Member 'URedeemFriendCodeWindow_C::Lightbox' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, ProgressSizeBox) == 0x000560, "Member 'URedeemFriendCodeWindow_C::ProgressSizeBox' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, ProgressText) == 0x000568, "Member 'URedeemFriendCodeWindow_C::ProgressText' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, ProgressVBox) == 0x000570, "Member 'URedeemFriendCodeWindow_C::ProgressVBox' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, RedeemButton) == 0x000578, "Member 'URedeemFriendCodeWindow_C::RedeemButton' has a wrong offset!");
static_assert(offsetof(URedeemFriendCodeWindow_C, Title) == 0x000580, "Member 'URedeemFriendCodeWindow_C::Title' has a wrong offset!");

}
