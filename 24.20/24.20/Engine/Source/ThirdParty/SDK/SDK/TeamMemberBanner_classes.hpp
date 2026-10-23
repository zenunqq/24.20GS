#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTeamMemberBanner_C final : public UFortCampaignTeamMemberBanner
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UIconTextButton_C*                      ButtonPartyFinder;
	class UOverlay*                               Connected;
	class USizeBox*                               Connecting;
	class UImage*                                 Image_571;
	class UOverlay*                               Open;
	class UImage*                                 OpenImage;
	class UCommonWidgetSwitcherLegacy*            Switcher_MemberState;

public:
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_TeamMemberBanner(int32 EntryPoint);
	void HandleMouseHoverVisualState(bool Hover);
	void OnTeamMemberConnectionStateChanged(EFortMemberConnectionState NewConnectionState);
	void OpenPartyFinder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberBanner_C">();
	}
	static class UTeamMemberBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberBanner_C>();
	}
};
static_assert(alignof(UTeamMemberBanner_C) == 0x000010, "Wrong alignment on UTeamMemberBanner_C");
static_assert(sizeof(UTeamMemberBanner_C) == 0x0014B0, "Wrong size on UTeamMemberBanner_C");
static_assert(offsetof(UTeamMemberBanner_C, UberGraphFrame) == 0x001470, "Member 'UTeamMemberBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, ButtonPartyFinder) == 0x001478, "Member 'UTeamMemberBanner_C::ButtonPartyFinder' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Connected) == 0x001480, "Member 'UTeamMemberBanner_C::Connected' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Connecting) == 0x001488, "Member 'UTeamMemberBanner_C::Connecting' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Image_571) == 0x001490, "Member 'UTeamMemberBanner_C::Image_571' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Open) == 0x001498, "Member 'UTeamMemberBanner_C::Open' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, OpenImage) == 0x0014A0, "Member 'UTeamMemberBanner_C::OpenImage' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Switcher_MemberState) == 0x0014A8, "Member 'UTeamMemberBanner_C::Switcher_MemberState' has a wrong offset!");

}
