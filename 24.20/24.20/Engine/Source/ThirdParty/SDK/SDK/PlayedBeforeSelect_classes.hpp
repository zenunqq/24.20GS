#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPlayedBeforeSelect_C final : public UFortPlayedBeforeSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonTextBlock*                       CommonTextBlock_1;
	class UCommonTextBlock*                       CommonTextBlock_6;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_InviteOnly;
	class UInviteEventTitle_C*                    InviteEventTitle;
	class UWidgetSwitcher*                        LoginType_Switcher;
	class USafeZone*                              SafeZone_0;
	class USignInWidget_C*                        SignInWidget;

public:
	void OnActivated_1();
	void ExecuteUbergraph_PlayedBeforeSelect(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayedBeforeSelect_C">();
	}
	static class UPlayedBeforeSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayedBeforeSelect_C>();
	}
};
static_assert(alignof(UPlayedBeforeSelect_C) == 0x000008, "Wrong alignment on UPlayedBeforeSelect_C");
static_assert(sizeof(UPlayedBeforeSelect_C) == 0x000420, "Wrong size on UPlayedBeforeSelect_C");
static_assert(offsetof(UPlayedBeforeSelect_C, UberGraphFrame) == 0x0003D8, "Member 'UPlayedBeforeSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, Intro) == 0x0003E0, "Member 'UPlayedBeforeSelect_C::Intro' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, CommonTextBlock_1) == 0x0003E8, "Member 'UPlayedBeforeSelect_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, CommonTextBlock_6) == 0x0003F0, "Member 'UPlayedBeforeSelect_C::CommonTextBlock_6' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, CommonWidgetSwitcher_InviteOnly) == 0x0003F8, "Member 'UPlayedBeforeSelect_C::CommonWidgetSwitcher_InviteOnly' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, InviteEventTitle) == 0x000400, "Member 'UPlayedBeforeSelect_C::InviteEventTitle' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, LoginType_Switcher) == 0x000408, "Member 'UPlayedBeforeSelect_C::LoginType_Switcher' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, SafeZone_0) == 0x000410, "Member 'UPlayedBeforeSelect_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UPlayedBeforeSelect_C, SignInWidget) == 0x000418, "Member 'UPlayedBeforeSelect_C::SignInWidget' has a wrong offset!");

}
