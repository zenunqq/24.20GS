#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UTeamMemberPedestal_Nameplate_AddFriendButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnUnhovered;
	class UWidgetAnimation*                       Reset;
	class UWidgetAnimation*                       Disabled;
	class UWidgetAnimation*                       PlayShine;
	class UWidgetAnimation*                       OnHovered;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UImage*                                 Image_ButtonTop;
	class USizeBox*                               SB_InputAction;
	class USizeBox*                               SizeBox_0;

public:
	void UpdateVisuals(bool IsUsingTouch);
	void SetInputActionVisibility(ESlateVisibility InVisibility);
	void SetButtonText(const class FText& InText);
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton(int32 EntryPoint);
	void Construct();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void BP_OnClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_Nameplate_AddFriendButton_C">();
	}
	static class UTeamMemberPedestal_Nameplate_AddFriendButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_Nameplate_AddFriendButton_C>();
	}
};
static_assert(alignof(UTeamMemberPedestal_Nameplate_AddFriendButton_C) == 0x000010, "Wrong alignment on UTeamMemberPedestal_Nameplate_AddFriendButton_C");
static_assert(sizeof(UTeamMemberPedestal_Nameplate_AddFriendButton_C) == 0x001480, "Wrong size on UTeamMemberPedestal_Nameplate_AddFriendButton_C");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, UberGraphFrame) == 0x001430, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, OnUnhovered) == 0x001438, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, Reset) == 0x001440, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::Reset' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, Disabled) == 0x001448, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::Disabled' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, PlayShine) == 0x001450, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::PlayShine' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, OnHovered) == 0x001458, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, CenterButtonTextWidget) == 0x001460, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, Image_ButtonTop) == 0x001468, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::Image_ButtonTop' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, SB_InputAction) == 0x001470, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::SB_InputAction' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_AddFriendButton_C, SizeBox_0) == 0x001478, "Member 'UTeamMemberPedestal_Nameplate_AddFriendButton_C::SizeBox_0' has a wrong offset!");

}
