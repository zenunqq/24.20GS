#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UTeamMemberPedestal_Nameplate_C final : public UFortTeamMemberPedestalNameplate
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       NotReadyTextColor;
	class UWidgetAnimation*                       ReadyTextColor;
	class UWidgetAnimation*                       On_Ready_Change_Text;
	class UFortHUDElementWrapper_C*               FortHUDElementWrapper;
	class USizeBox*                               SB_InputAction;
	class UScaleBox*                              ScaleBox_0;
	class UTeamMemberPedestal_ActivatableContainer_C* TeamMemberPedestal_ActivatableContainer;
	class USizeBox*                               Widget_PlayerLevel;
	uint8                                         Pad_1548[0x8];
	struct FFortTeamMemberInfo                    TeamMemberInfo;
	bool                                          bHovered;
	uint8                                         Pad_17A1[0x3];
	struct FLinearColor                           ReadyColor;
	struct FLinearColor                           NotReadyColor;
	uint8                                         Pad_17C4[0x4];
	class USoundBase*                             UnReadySound;
	class USoundBase*                             ReadySound;
	class FText                                   AddFriendText;
	class FText                                   AcceptedInviteText;
	class FText                                   AcceptFriendRequestText;
	class FText                                   SentInviteText;
	ESlateVisibility                              FALSE_0;
	EFrontEndCamera                               DefaultOldCameraValue;

public:
	void UpdateInputActionVisibility();
	void Update_Add_Friend_Button_Visuals(bool IsUsingTouch);
	void OnReadyStatusChanged(EGameReadiness GameReadiness, bool bIsDownloading);
	void OnPlayReadyAudio(bool bIsReadyForMatchmaking);
	void OnInputChanged(ECommonInputType bNewInputType);
	void OnInitialized();
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnFriendStatusUpdated(const EFortFriendRequestStatus FriendRequestStatus);
	void OnCurrentSubGameChanged(ESubGame NewSubGame);
	void HandleInputMethodChanged(ECommonInputType bNewInputType);
	ESlateVisibility GetInputActionVisibility();
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BP_OnTeamMemberEstablished(bool bHasValidMember);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_Nameplate_C">();
	}
	static class UTeamMemberPedestal_Nameplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_Nameplate_C>();
	}
};
static_assert(alignof(UTeamMemberPedestal_Nameplate_C) == 0x000010, "Wrong alignment on UTeamMemberPedestal_Nameplate_C");
static_assert(sizeof(UTeamMemberPedestal_Nameplate_C) == 0x001840, "Wrong size on UTeamMemberPedestal_Nameplate_C");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, UberGraphFrame) == 0x001500, "Member 'UTeamMemberPedestal_Nameplate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, NotReadyTextColor) == 0x001508, "Member 'UTeamMemberPedestal_Nameplate_C::NotReadyTextColor' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, ReadyTextColor) == 0x001510, "Member 'UTeamMemberPedestal_Nameplate_C::ReadyTextColor' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, On_Ready_Change_Text) == 0x001518, "Member 'UTeamMemberPedestal_Nameplate_C::On_Ready_Change_Text' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, FortHUDElementWrapper) == 0x001520, "Member 'UTeamMemberPedestal_Nameplate_C::FortHUDElementWrapper' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, SB_InputAction) == 0x001528, "Member 'UTeamMemberPedestal_Nameplate_C::SB_InputAction' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, ScaleBox_0) == 0x001530, "Member 'UTeamMemberPedestal_Nameplate_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, TeamMemberPedestal_ActivatableContainer) == 0x001538, "Member 'UTeamMemberPedestal_Nameplate_C::TeamMemberPedestal_ActivatableContainer' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, Widget_PlayerLevel) == 0x001540, "Member 'UTeamMemberPedestal_Nameplate_C::Widget_PlayerLevel' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, TeamMemberInfo) == 0x001550, "Member 'UTeamMemberPedestal_Nameplate_C::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, bHovered) == 0x0017A0, "Member 'UTeamMemberPedestal_Nameplate_C::bHovered' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, ReadyColor) == 0x0017A4, "Member 'UTeamMemberPedestal_Nameplate_C::ReadyColor' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, NotReadyColor) == 0x0017B4, "Member 'UTeamMemberPedestal_Nameplate_C::NotReadyColor' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, UnReadySound) == 0x0017C8, "Member 'UTeamMemberPedestal_Nameplate_C::UnReadySound' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, ReadySound) == 0x0017D0, "Member 'UTeamMemberPedestal_Nameplate_C::ReadySound' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, AddFriendText) == 0x0017D8, "Member 'UTeamMemberPedestal_Nameplate_C::AddFriendText' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, AcceptedInviteText) == 0x0017F0, "Member 'UTeamMemberPedestal_Nameplate_C::AcceptedInviteText' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, AcceptFriendRequestText) == 0x001808, "Member 'UTeamMemberPedestal_Nameplate_C::AcceptFriendRequestText' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, SentInviteText) == 0x001820, "Member 'UTeamMemberPedestal_Nameplate_C::SentInviteText' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, FALSE_0) == 0x001838, "Member 'UTeamMemberPedestal_Nameplate_C::FALSE_0' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_Nameplate_C, DefaultOldCameraValue) == 0x001839, "Member 'UTeamMemberPedestal_Nameplate_C::DefaultOldCameraValue' has a wrong offset!");

}
