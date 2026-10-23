#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialButton_C final : public UFortSocialButton
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
	class UBorder*                                IconColor;
	class UFortMobileImage*                       Image_FriendIcon;
	class UImage*                                 Image_LeaderIcon;
	class UBorder*                                NumFriendsColor;
	class UImage*                                 PlayerIdentifier_Bkg;
	class USizeBox*                               VariableSize;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SocialButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialButton_C">();
	}
	static class USocialButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialButton_C>();
	}
};
static_assert(alignof(USocialButton_C) == 0x000010, "Wrong alignment on USocialButton_C");
static_assert(sizeof(USocialButton_C) == 0x0014C0, "Wrong size on USocialButton_C");
static_assert(offsetof(USocialButton_C, UberGraphFrame) == 0x001450, "Member 'USocialButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Indentifier_Outro) == 0x001458, "Member 'USocialButton_C::Indentifier_Outro' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Indentifier_Intro) == 0x001460, "Member 'USocialButton_C::Indentifier_Intro' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Hover_Grow) == 0x001468, "Member 'USocialButton_C::Hover_Grow' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Hover_Bounce) == 0x001470, "Member 'USocialButton_C::Hover_Bounce' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Hover) == 0x001478, "Member 'USocialButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Banner_MemberBanner) == 0x001480, "Member 'USocialButton_C::Banner_MemberBanner' has a wrong offset!");
static_assert(offsetof(USocialButton_C, ButtonBacking) == 0x001488, "Member 'USocialButton_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(USocialButton_C, IconColor) == 0x001490, "Member 'USocialButton_C::IconColor' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Image_FriendIcon) == 0x001498, "Member 'USocialButton_C::Image_FriendIcon' has a wrong offset!");
static_assert(offsetof(USocialButton_C, Image_LeaderIcon) == 0x0014A0, "Member 'USocialButton_C::Image_LeaderIcon' has a wrong offset!");
static_assert(offsetof(USocialButton_C, NumFriendsColor) == 0x0014A8, "Member 'USocialButton_C::NumFriendsColor' has a wrong offset!");
static_assert(offsetof(USocialButton_C, PlayerIdentifier_Bkg) == 0x0014B0, "Member 'USocialButton_C::PlayerIdentifier_Bkg' has a wrong offset!");
static_assert(offsetof(USocialButton_C, VariableSize) == 0x0014B8, "Member 'USocialButton_C::VariableSize' has a wrong offset!");

}
