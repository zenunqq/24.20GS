#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UDiscoveryLobbyMatchmakingPlay_C final : public UFortAthenaMatchmakingWidgetLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_ShowMatchmakingDetails;
	class UWidgetAnimation*                       Anim_NewModeViolation;
	class UBorder*                                Border_DisableFillBP;
	class UBorder*                                Border_DisableLobbyBP;
	class UBorder*                                Border_DisableModeSetBP;
	class UHorizontalBox*                         Box_LimitedMatchmaking;
	class UWBP_UIKit_Button_Regular_C*            Button_ModeSet;
	class UWBP_PopupTooltip_C*                    DiscoveryTooltip_FirstTimeEntryFlow;
	class UWBP_PopupTooltip_C*                    DiscoveryTooltip_FirstTimeNotifcation;
	class UWBP_PopupTooltip_C*                    DiscoveryTooltip_SubmodeViolator;
	class UMatchmakingInputIndicator_C*           MatchmakingInputIndicator;
	class UOverlay*                               Overlay_2;
	class UOverlay*                               Overlay_Mobile;
	class UOverlay*                               Overlay_ModeSet;
	class UOverlay*                               Overlay_PlayButton;
	class USizeBox*                               SizeBox_Content;
	class UVerticalBox*                           SpinnerAndTextContainer;
	class UWidgetSwitcher*                        ViolatorSwitcher;
	struct FTimerHandle                           ShowNewPlaylistTimer;
	class USoundBase*                             MatchmakingSucceededSound;
	class UFortPlaylistAthena*                    PlaylistData;
	bool                                          IsShowingMatchmakingDetails;
	uint8                                         Pad_599[0x7];
	class USoundBase*                             CreativeMatchmakingSucceededSound;
	bool                                          IsShowingSubModeFirstTimeNotification;
	uint8                                         Pad_5A9[0x7];
	struct FTimerHandle                           Hide_ToolTip_Timer;
	bool                                          IsSubModeFirstTimeNotificationHidden;

public:
	void AnimateViolator();
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature();
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_3_OnShowChildModeChangedNotification__DelegateSignature(const class FText& DisplayName);
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_4_OnShowChildModeFirstTimeNotification__DelegateSignature();
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_5_OnHideChildModeFirstTimeNotification__DelegateSignature();
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay(int32 EntryPoint);
	void Hide_Tooltip_After_Delay();
	void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled);
	void OnInitialized();
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void OnLocalPlayerPromotedToLeader();
	void OnMatchmakingFinishedBlueprint(bool bSuccess, const class UFortPlaylistAthena* Playlist);
	void OnPlayButtonLockStateChanged(const bool bLockState);
	void OnPrivateMatchButtonEnabledStateUpdated(const bool bIsLocalPlayerPartyLeader, const bool bIsMatchmaking);
	void OnSetCancelButtonText(const class FText& CancelButtonText);
	void OnSetPlayButtonSecondaryText(const class FText& PlayButtonSecondaryText);
	void OnSetPlayButtonText(const class FText& PlayButtonText);
	void OnSquadFillButtonEnabledStateUpdated(const bool bIsLocalPlayerPartyLeader, const bool bIsMatchmaking);
	void OnViolatorStyleRefreshed(const EFortMatchmakingViolatorStyle NewViolatorStyle);
	void PickMatchmakingSucceededSound(class USoundBase** SelectedMatchmakingSucceededSound);
	void PlaylistChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType);
	void Set_Mobile_Style();
	void SetShowingDiscoveryEntryFlowToolTip(bool bShowTooltip);
	void ShouldShowMatchmakingDetails(bool bShow);
	void UpdateModeSetButtonText();

	class FText GetButtonPrivateMatchText() const;
	class FText GetButtonPublicMatchText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DiscoveryLobbyMatchmakingPlay_C">();
	}
	static class UDiscoveryLobbyMatchmakingPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscoveryLobbyMatchmakingPlay_C>();
	}
};
static_assert(alignof(UDiscoveryLobbyMatchmakingPlay_C) == 0x000008, "Wrong alignment on UDiscoveryLobbyMatchmakingPlay_C");
static_assert(sizeof(UDiscoveryLobbyMatchmakingPlay_C) == 0x0005C0, "Wrong size on UDiscoveryLobbyMatchmakingPlay_C");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, UberGraphFrame) == 0x0004E8, "Member 'UDiscoveryLobbyMatchmakingPlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Anim_ShowMatchmakingDetails) == 0x0004F0, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Anim_ShowMatchmakingDetails' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Anim_NewModeViolation) == 0x0004F8, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Anim_NewModeViolation' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Border_DisableFillBP) == 0x000500, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Border_DisableFillBP' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Border_DisableLobbyBP) == 0x000508, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Border_DisableLobbyBP' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Border_DisableModeSetBP) == 0x000510, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Border_DisableModeSetBP' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Box_LimitedMatchmaking) == 0x000518, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Box_LimitedMatchmaking' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Button_ModeSet) == 0x000520, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Button_ModeSet' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, DiscoveryTooltip_FirstTimeEntryFlow) == 0x000528, "Member 'UDiscoveryLobbyMatchmakingPlay_C::DiscoveryTooltip_FirstTimeEntryFlow' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, DiscoveryTooltip_FirstTimeNotifcation) == 0x000530, "Member 'UDiscoveryLobbyMatchmakingPlay_C::DiscoveryTooltip_FirstTimeNotifcation' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, DiscoveryTooltip_SubmodeViolator) == 0x000538, "Member 'UDiscoveryLobbyMatchmakingPlay_C::DiscoveryTooltip_SubmodeViolator' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, MatchmakingInputIndicator) == 0x000540, "Member 'UDiscoveryLobbyMatchmakingPlay_C::MatchmakingInputIndicator' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Overlay_2) == 0x000548, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Overlay_Mobile) == 0x000550, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Overlay_Mobile' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Overlay_ModeSet) == 0x000558, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Overlay_ModeSet' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Overlay_PlayButton) == 0x000560, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Overlay_PlayButton' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, SizeBox_Content) == 0x000568, "Member 'UDiscoveryLobbyMatchmakingPlay_C::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, SpinnerAndTextContainer) == 0x000570, "Member 'UDiscoveryLobbyMatchmakingPlay_C::SpinnerAndTextContainer' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, ViolatorSwitcher) == 0x000578, "Member 'UDiscoveryLobbyMatchmakingPlay_C::ViolatorSwitcher' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, ShowNewPlaylistTimer) == 0x000580, "Member 'UDiscoveryLobbyMatchmakingPlay_C::ShowNewPlaylistTimer' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, MatchmakingSucceededSound) == 0x000588, "Member 'UDiscoveryLobbyMatchmakingPlay_C::MatchmakingSucceededSound' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, PlaylistData) == 0x000590, "Member 'UDiscoveryLobbyMatchmakingPlay_C::PlaylistData' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, IsShowingMatchmakingDetails) == 0x000598, "Member 'UDiscoveryLobbyMatchmakingPlay_C::IsShowingMatchmakingDetails' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, CreativeMatchmakingSucceededSound) == 0x0005A0, "Member 'UDiscoveryLobbyMatchmakingPlay_C::CreativeMatchmakingSucceededSound' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, IsShowingSubModeFirstTimeNotification) == 0x0005A8, "Member 'UDiscoveryLobbyMatchmakingPlay_C::IsShowingSubModeFirstTimeNotification' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, Hide_ToolTip_Timer) == 0x0005B0, "Member 'UDiscoveryLobbyMatchmakingPlay_C::Hide_ToolTip_Timer' has a wrong offset!");
static_assert(offsetof(UDiscoveryLobbyMatchmakingPlay_C, IsSubModeFirstTimeNotificationHidden) == 0x0005B8, "Member 'UDiscoveryLobbyMatchmakingPlay_C::IsSubModeFirstTimeNotificationHidden' has a wrong offset!");

}
