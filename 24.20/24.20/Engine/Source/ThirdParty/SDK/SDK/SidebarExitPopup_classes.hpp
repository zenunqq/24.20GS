#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarExitPopup_C final : public UFortSidebarExitPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Border_SpacingMobile;
	class UOverlay*                               Overlay_Favorite;
	class UOverlay*                               Overlay_SAC;
	class UCommonTextBlock*                       Text_AreYouSure;
	class FText                                   LogoutAllowedNoButtonsText;
	class FText                                   LogoutAndQuitNotAllowedNoButtonsText;
	class FText                                   QuitAllowedNoButtonsText;
	bool                                          Is_A;
	uint8                                         Pad_4F9[0x7];
	class FText                                   LeaveExperienceConfirmationMessageText;
	class FText                                   LogoutConfirmationMessageText;
	class FText                                   ExitConfirmationMessageText;

public:
	void BndEvt__SidebarExitPopup_Button_ExitGame_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SidebarExitPopup_Button_LeaveExperience_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SidebarExitPopup_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SidebarExitPopup_Button_No_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SidebarExitPopup_Button_Yes_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_SidebarExitPopup(int32 EntryPoint);
	void OnButtonBaseClicked_Event(class UCommonButtonBase* Button);
	void OnInputMethodChanged(ECommonInputType NewInputType);
	void RefreshButtonsVisual(bool IsTouch);
	void UpdateNoEnabledButtonsText(const bool bAllowLogout, const bool bAllowQuit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarExitPopup_C">();
	}
	static class USidebarExitPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarExitPopup_C>();
	}
};
static_assert(alignof(USidebarExitPopup_C) == 0x000008, "Wrong alignment on USidebarExitPopup_C");
static_assert(sizeof(USidebarExitPopup_C) == 0x000548, "Wrong size on USidebarExitPopup_C");
static_assert(offsetof(USidebarExitPopup_C, UberGraphFrame) == 0x000488, "Member 'USidebarExitPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Border_SpacingMobile) == 0x000490, "Member 'USidebarExitPopup_C::Border_SpacingMobile' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Overlay_Favorite) == 0x000498, "Member 'USidebarExitPopup_C::Overlay_Favorite' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Overlay_SAC) == 0x0004A0, "Member 'USidebarExitPopup_C::Overlay_SAC' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Text_AreYouSure) == 0x0004A8, "Member 'USidebarExitPopup_C::Text_AreYouSure' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LogoutAllowedNoButtonsText) == 0x0004B0, "Member 'USidebarExitPopup_C::LogoutAllowedNoButtonsText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LogoutAndQuitNotAllowedNoButtonsText) == 0x0004C8, "Member 'USidebarExitPopup_C::LogoutAndQuitNotAllowedNoButtonsText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, QuitAllowedNoButtonsText) == 0x0004E0, "Member 'USidebarExitPopup_C::QuitAllowedNoButtonsText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, Is_A) == 0x0004F8, "Member 'USidebarExitPopup_C::Is_A' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LeaveExperienceConfirmationMessageText) == 0x000500, "Member 'USidebarExitPopup_C::LeaveExperienceConfirmationMessageText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, LogoutConfirmationMessageText) == 0x000518, "Member 'USidebarExitPopup_C::LogoutConfirmationMessageText' has a wrong offset!");
static_assert(offsetof(USidebarExitPopup_C, ExitConfirmationMessageText) == 0x000530, "Member 'USidebarExitPopup_C::ExitConfirmationMessageText' has a wrong offset!");

}
