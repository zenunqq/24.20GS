#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UChatContainer_C final : public UFortChatContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       SizeAnimation;
	class UWidgetAnimation*                       FadeAnimation;
	class UCommonBorder*                          CommonBorderBackground;
	class UWBP_UIKit_Button_Quiet_C*              ConsoleChatShortcut;
	class UWidgetSwitcher*                        CursorModeSwitcher;
	class UImage*                                 FocusOutline;
	class UImage*                                 FocusOutline_Glow;
	class UImage*                                 Glow;
	class UHorizontalBox*                         HBox_Messages;
	class USizeBox*                               HBox_Tabs;
	class UHorizontalBox*                         HudContentHBox;
	class UImage*                                 Image_ChatBorderBackground;
	class UKeybindWidget_C*                       KeybindWidget;
	class USizeBox*                               SizeBox_ChatSize;
	class USizeBox*                               SizeBox_ConsoleButtonSpaceProvider;
	class UWidgetSwitcher*                        Switcher_SendButton;
	class UCommonTextBlock*                       Text_Disabled;
	EUMGSequencePlayMode                          NewVar_0;
	bool                                          CurrentlyUsingGamepad;
	bool                                          AnimationClosing;
	uint8                                         Pad_3A3[0x5];
	class USoundBase*                             WindowCloseSound;
	class USoundBase*                             WindowOpenSound;
	bool                                          IsChatOpen;

public:
	void BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_ChatContainer(int32 EntryPoint);
	void FocusChat();
	void HandleChatOpenChanged(bool bChatShouldBeOpen);
	void HandleCursorModeChanged(bool bEnabled, class FName ActionName, class UUserWidget* Widget);
	void OnChatOpenChanged(bool bShouldBeOpen);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnSendButtonDisplayChanged(bool bShowSendButton);
	void OnSizeAnimationComplete();
	void SetChatBoxStyle();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatContainer_C">();
	}
	static class UChatContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatContainer_C>();
	}
};
static_assert(alignof(UChatContainer_C) == 0x000008, "Wrong alignment on UChatContainer_C");
static_assert(sizeof(UChatContainer_C) == 0x0003C0, "Wrong size on UChatContainer_C");
static_assert(offsetof(UChatContainer_C, UberGraphFrame) == 0x000308, "Member 'UChatContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Hover) == 0x000310, "Member 'UChatContainer_C::Hover' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, SizeAnimation) == 0x000318, "Member 'UChatContainer_C::SizeAnimation' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, FadeAnimation) == 0x000320, "Member 'UChatContainer_C::FadeAnimation' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, CommonBorderBackground) == 0x000328, "Member 'UChatContainer_C::CommonBorderBackground' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, ConsoleChatShortcut) == 0x000330, "Member 'UChatContainer_C::ConsoleChatShortcut' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, CursorModeSwitcher) == 0x000338, "Member 'UChatContainer_C::CursorModeSwitcher' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, FocusOutline) == 0x000340, "Member 'UChatContainer_C::FocusOutline' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, FocusOutline_Glow) == 0x000348, "Member 'UChatContainer_C::FocusOutline_Glow' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Glow) == 0x000350, "Member 'UChatContainer_C::Glow' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, HBox_Messages) == 0x000358, "Member 'UChatContainer_C::HBox_Messages' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, HBox_Tabs) == 0x000360, "Member 'UChatContainer_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, HudContentHBox) == 0x000368, "Member 'UChatContainer_C::HudContentHBox' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Image_ChatBorderBackground) == 0x000370, "Member 'UChatContainer_C::Image_ChatBorderBackground' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, KeybindWidget) == 0x000378, "Member 'UChatContainer_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, SizeBox_ChatSize) == 0x000380, "Member 'UChatContainer_C::SizeBox_ChatSize' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, SizeBox_ConsoleButtonSpaceProvider) == 0x000388, "Member 'UChatContainer_C::SizeBox_ConsoleButtonSpaceProvider' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Switcher_SendButton) == 0x000390, "Member 'UChatContainer_C::Switcher_SendButton' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, Text_Disabled) == 0x000398, "Member 'UChatContainer_C::Text_Disabled' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, NewVar_0) == 0x0003A0, "Member 'UChatContainer_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, CurrentlyUsingGamepad) == 0x0003A1, "Member 'UChatContainer_C::CurrentlyUsingGamepad' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, AnimationClosing) == 0x0003A2, "Member 'UChatContainer_C::AnimationClosing' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, WindowCloseSound) == 0x0003A8, "Member 'UChatContainer_C::WindowCloseSound' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, WindowOpenSound) == 0x0003B0, "Member 'UChatContainer_C::WindowOpenSound' has a wrong offset!");
static_assert(offsetof(UChatContainer_C, IsChatOpen) == 0x0003B8, "Member 'UChatContainer_C::IsChatOpen' has a wrong offset!");

}
