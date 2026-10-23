#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USocialButton_Sidebar_C final : public UFortSocialButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Indentifier_Outro;
	class UWidgetAnimation*                       Indentifier_Intro;
	class UWidgetAnimation*                       Hover_Grow;
	class UWidgetAnimation*                       Hover_Bounce;
	class UWidgetAnimation*                       Hover;
	class UFortPlayerBanner*                      Banner_MemberBanner;
	class UImage*                                 ButtonBacking;
	class UHorizontalBox*                         HorizontalBox_InputAction;
	class UHorizontalBox*                         HorizontalBox_MeepHolder;
	class USizeBox*                               Icon_Meep;
	class UFortMobileImage*                       Image_FriendIcon;
	class UImage*                                 Image_LeaderIcon;
	class UFortMobileImage*                       MenuButtonIcon;
	class UImage*                                 PlayerIdentifier_Bkg;
	class USizeBox*                               VariableSize;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialButton_Sidebar(int32 EntryPoint);
	void OnInitialized();
	void OnNumFriendsTextUpdated(const int32 FriendsOnline);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialButton_Sidebar_C">();
	}
	static class USocialButton_Sidebar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialButton_Sidebar_C>();
	}
};
static_assert(alignof(USocialButton_Sidebar_C) == 0x000010, "Wrong alignment on USocialButton_Sidebar_C");
static_assert(sizeof(USocialButton_Sidebar_C) == 0x0014D0, "Wrong size on USocialButton_Sidebar_C");
static_assert(offsetof(USocialButton_Sidebar_C, UberGraphFrame) == 0x001450, "Member 'USocialButton_Sidebar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Indentifier_Outro) == 0x001458, "Member 'USocialButton_Sidebar_C::Indentifier_Outro' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Indentifier_Intro) == 0x001460, "Member 'USocialButton_Sidebar_C::Indentifier_Intro' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Hover_Grow) == 0x001468, "Member 'USocialButton_Sidebar_C::Hover_Grow' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Hover_Bounce) == 0x001470, "Member 'USocialButton_Sidebar_C::Hover_Bounce' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Hover) == 0x001478, "Member 'USocialButton_Sidebar_C::Hover' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Banner_MemberBanner) == 0x001480, "Member 'USocialButton_Sidebar_C::Banner_MemberBanner' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, ButtonBacking) == 0x001488, "Member 'USocialButton_Sidebar_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, HorizontalBox_InputAction) == 0x001490, "Member 'USocialButton_Sidebar_C::HorizontalBox_InputAction' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, HorizontalBox_MeepHolder) == 0x001498, "Member 'USocialButton_Sidebar_C::HorizontalBox_MeepHolder' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Icon_Meep) == 0x0014A0, "Member 'USocialButton_Sidebar_C::Icon_Meep' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Image_FriendIcon) == 0x0014A8, "Member 'USocialButton_Sidebar_C::Image_FriendIcon' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, Image_LeaderIcon) == 0x0014B0, "Member 'USocialButton_Sidebar_C::Image_LeaderIcon' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, MenuButtonIcon) == 0x0014B8, "Member 'USocialButton_Sidebar_C::MenuButtonIcon' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, PlayerIdentifier_Bkg) == 0x0014C0, "Member 'USocialButton_Sidebar_C::PlayerIdentifier_Bkg' has a wrong offset!");
static_assert(offsetof(USocialButton_Sidebar_C, VariableSize) == 0x0014C8, "Member 'USocialButton_Sidebar_C::VariableSize' has a wrong offset!");

}
