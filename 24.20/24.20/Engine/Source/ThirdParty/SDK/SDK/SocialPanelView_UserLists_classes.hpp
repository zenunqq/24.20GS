#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialPanelView_UserLists_C final : public UFortSocialPanelView_UserLists
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       WeGameButtonHovered;
	class UWidgetAnimation*                       SwitcherTransition;
	class UWidgetAnimation*                       NoFriendsArrowBounce;
	class UWidgetAnimation*                       MenuAnchorItemOpen;
	class UWidgetAnimation*                       Open_0;
	class UWidgetAnimation*                       Open;
	class UImage*                                 bckgrnd;
	class UImage*                                 CircularThrobber_UserSearch;
	class UCommonRichTextBlock*                   CommonRichTextBlock_97;
	class UFortMobileImage*                       FortMobileImage_127;
	class UImage*                                 Image_MicDisabled;
	class UFortMobileImage*                       Image_MicIcon;
	class UFortMobileImage*                       Image_MicIcon_1;
	class UFortMobileImage*                       Image_MicIcon_2;
	class UImage*                                 Image_MicIcon_3;
	class UFortMobileImage*                       Image_TitleIcon;
	class UCommonRichTextBlock*                   RichText_LeavePlatformPartyTitle;
	class UCommonRichTextBlock*                   RichText_VoiceChatDisabled;
	class UCommonRichTextBlock*                   RichText_VoiceChatDisabledHeader;
	class UCommonRichTextBlock*                   RichText_VoiceChatDisabledWarningMessage;
	class URichTextBlock*                         RichTextBlock_0;
	class USocialPanel_FriendLinkButton_C*        SocialPanel_FriendLinkButton;
	class UCommonTextBlock*                       Text_LowPowerMode;

public:
	void BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Construct();
	void ExecuteUbergraph_SocialPanelView_UserLists(int32 EntryPoint);
	void OnSetVoiceChannelButtonText(const class FText& ButtonText);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanelView_UserLists_C">();
	}
	static class USocialPanelView_UserLists_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanelView_UserLists_C>();
	}
};
static_assert(alignof(USocialPanelView_UserLists_C) == 0x000008, "Wrong alignment on USocialPanelView_UserLists_C");
static_assert(sizeof(USocialPanelView_UserLists_C) == 0x000670, "Wrong size on USocialPanelView_UserLists_C");
static_assert(offsetof(USocialPanelView_UserLists_C, UberGraphFrame) == 0x0005B0, "Member 'USocialPanelView_UserLists_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, WeGameButtonHovered) == 0x0005B8, "Member 'USocialPanelView_UserLists_C::WeGameButtonHovered' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, SwitcherTransition) == 0x0005C0, "Member 'USocialPanelView_UserLists_C::SwitcherTransition' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, NoFriendsArrowBounce) == 0x0005C8, "Member 'USocialPanelView_UserLists_C::NoFriendsArrowBounce' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, MenuAnchorItemOpen) == 0x0005D0, "Member 'USocialPanelView_UserLists_C::MenuAnchorItemOpen' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Open_0) == 0x0005D8, "Member 'USocialPanelView_UserLists_C::Open_0' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Open) == 0x0005E0, "Member 'USocialPanelView_UserLists_C::Open' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, bckgrnd) == 0x0005E8, "Member 'USocialPanelView_UserLists_C::bckgrnd' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, CircularThrobber_UserSearch) == 0x0005F0, "Member 'USocialPanelView_UserLists_C::CircularThrobber_UserSearch' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, CommonRichTextBlock_97) == 0x0005F8, "Member 'USocialPanelView_UserLists_C::CommonRichTextBlock_97' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, FortMobileImage_127) == 0x000600, "Member 'USocialPanelView_UserLists_C::FortMobileImage_127' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicDisabled) == 0x000608, "Member 'USocialPanelView_UserLists_C::Image_MicDisabled' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon) == 0x000610, "Member 'USocialPanelView_UserLists_C::Image_MicIcon' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon_1) == 0x000618, "Member 'USocialPanelView_UserLists_C::Image_MicIcon_1' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon_2) == 0x000620, "Member 'USocialPanelView_UserLists_C::Image_MicIcon_2' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon_3) == 0x000628, "Member 'USocialPanelView_UserLists_C::Image_MicIcon_3' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_TitleIcon) == 0x000630, "Member 'USocialPanelView_UserLists_C::Image_TitleIcon' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichText_LeavePlatformPartyTitle) == 0x000638, "Member 'USocialPanelView_UserLists_C::RichText_LeavePlatformPartyTitle' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichText_VoiceChatDisabled) == 0x000640, "Member 'USocialPanelView_UserLists_C::RichText_VoiceChatDisabled' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichText_VoiceChatDisabledHeader) == 0x000648, "Member 'USocialPanelView_UserLists_C::RichText_VoiceChatDisabledHeader' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichText_VoiceChatDisabledWarningMessage) == 0x000650, "Member 'USocialPanelView_UserLists_C::RichText_VoiceChatDisabledWarningMessage' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichTextBlock_0) == 0x000658, "Member 'USocialPanelView_UserLists_C::RichTextBlock_0' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, SocialPanel_FriendLinkButton) == 0x000660, "Member 'USocialPanelView_UserLists_C::SocialPanel_FriendLinkButton' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Text_LowPowerMode) == 0x000668, "Member 'USocialPanelView_UserLists_C::Text_LowPowerMode' has a wrong offset!");

}
