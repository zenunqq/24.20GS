#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaLobbyMatchmakingPlay_C final : public UFortAthenaMatchmakingWidgetLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowMatchmakingDetails;
	class UWidgetAnimation*                       NewModeViolation;
	class UCommonBorder*                          Border_BasePanel;
	class UHorizontalBox*                         Box_LimitedMatchmaking;
	class UIconTextButton_C*                      DebugCreativeServerSelect;
	class UImage*                                 MatchmakingSpinner;
	class UCommonBorder*                          NewModeBorder;
	class UVerticalBox*                           SpinnerAndTextContainer;
	class UCommonTextBlock*                       Text_ModeTitle;
	class UCommonTextBlock*                       TextBlock_ContentDownloadingHeader;
	class UCommonTextBlock*                       TextBlock_NewMode;
	class UOverlay*                               ViolatorContent;
	class UWidgetSwitcher*                        ViolatorSwitcher;
	TMulticastInlineDelegate<void()>              PlaylistsUpdated;
	struct FTimerHandle                           ShowNewPlaylistTimer;
	TMulticastInlineDelegate<void(const struct FPlaylistFrontEndData& Playlist_Data, class FText Playlist_CMS_Override, EFortLobbyType Lobby_Type)> OnPlaylistChanged;
	class USoundBase*                             MatchmakingSucceededSound;
	class UFortPlaylistAthena*                    PlaylistData;
	bool                                          IsShowingMatchmakingDetails;
	uint8                                         Pad_591[0x7];
	struct FSlateFontInfo                         PlaylistMainFont;
	struct FSlateFontInfo                         PlaylistActivityFont;
	class UFont*                                  PlaylistActivityFontFamily;
	class USoundBase*                             CreativeMatchmakingSucceededSound;

public:
	void AnimateViolator();
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void ExecuteUbergraph_AthenaLobbyMatchmakingPlay(int32 EntryPoint);
	void InitFonts();
	void OnAvailablePlaylistsUpdated();
	void OnCrossplayPreferencesChanged(bool IsCrossplayEnabled);
	void OnInitialized();
	void OnMatchmakingFinishedBlueprint(bool bSuccess, const class UFortPlaylistAthena* Playlist);
	void OnSetCancelButtonText(const class FText& CancelButtonText);
	void OnSetPlayButtonText(const class FText& PlayButtonText);
	void OnViolatorStyleRefreshed(const EFortMatchmakingViolatorStyle NewViolatorStyle);
	void PickMatchmakingSucceededSound(class USoundBase** SelectedMatchmakingSucceededSound);
	void PlaylistActivityChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& ActivityName, EFortLobbyType LobbyType);
	void PlaylistChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType);
	void SetBasePanelColor(const struct FLinearColor& NewColor);
	void ShouldShowMatchmakingDetails(bool bShow);
	void Update_Playlist_Info(struct FPlaylistFrontEndData& NewPlaylist, class FText& PlaylistTitleOverride, EFortLobbyType& LobbyType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobbyMatchmakingPlay_C">();
	}
	static class UAthenaLobbyMatchmakingPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobbyMatchmakingPlay_C>();
	}
};
static_assert(alignof(UAthenaLobbyMatchmakingPlay_C) == 0x000008, "Wrong alignment on UAthenaLobbyMatchmakingPlay_C");
static_assert(sizeof(UAthenaLobbyMatchmakingPlay_C) == 0x000658, "Wrong size on UAthenaLobbyMatchmakingPlay_C");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, UberGraphFrame) == 0x0004E8, "Member 'UAthenaLobbyMatchmakingPlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, ShowMatchmakingDetails) == 0x0004F0, "Member 'UAthenaLobbyMatchmakingPlay_C::ShowMatchmakingDetails' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, NewModeViolation) == 0x0004F8, "Member 'UAthenaLobbyMatchmakingPlay_C::NewModeViolation' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, Border_BasePanel) == 0x000500, "Member 'UAthenaLobbyMatchmakingPlay_C::Border_BasePanel' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, Box_LimitedMatchmaking) == 0x000508, "Member 'UAthenaLobbyMatchmakingPlay_C::Box_LimitedMatchmaking' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, DebugCreativeServerSelect) == 0x000510, "Member 'UAthenaLobbyMatchmakingPlay_C::DebugCreativeServerSelect' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, MatchmakingSpinner) == 0x000518, "Member 'UAthenaLobbyMatchmakingPlay_C::MatchmakingSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, NewModeBorder) == 0x000520, "Member 'UAthenaLobbyMatchmakingPlay_C::NewModeBorder' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, SpinnerAndTextContainer) == 0x000528, "Member 'UAthenaLobbyMatchmakingPlay_C::SpinnerAndTextContainer' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, Text_ModeTitle) == 0x000530, "Member 'UAthenaLobbyMatchmakingPlay_C::Text_ModeTitle' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, TextBlock_ContentDownloadingHeader) == 0x000538, "Member 'UAthenaLobbyMatchmakingPlay_C::TextBlock_ContentDownloadingHeader' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, TextBlock_NewMode) == 0x000540, "Member 'UAthenaLobbyMatchmakingPlay_C::TextBlock_NewMode' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, ViolatorContent) == 0x000548, "Member 'UAthenaLobbyMatchmakingPlay_C::ViolatorContent' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, ViolatorSwitcher) == 0x000550, "Member 'UAthenaLobbyMatchmakingPlay_C::ViolatorSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, PlaylistsUpdated) == 0x000558, "Member 'UAthenaLobbyMatchmakingPlay_C::PlaylistsUpdated' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, ShowNewPlaylistTimer) == 0x000568, "Member 'UAthenaLobbyMatchmakingPlay_C::ShowNewPlaylistTimer' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, OnPlaylistChanged) == 0x000570, "Member 'UAthenaLobbyMatchmakingPlay_C::OnPlaylistChanged' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, MatchmakingSucceededSound) == 0x000580, "Member 'UAthenaLobbyMatchmakingPlay_C::MatchmakingSucceededSound' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, PlaylistData) == 0x000588, "Member 'UAthenaLobbyMatchmakingPlay_C::PlaylistData' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, IsShowingMatchmakingDetails) == 0x000590, "Member 'UAthenaLobbyMatchmakingPlay_C::IsShowingMatchmakingDetails' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, PlaylistMainFont) == 0x000598, "Member 'UAthenaLobbyMatchmakingPlay_C::PlaylistMainFont' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, PlaylistActivityFont) == 0x0005F0, "Member 'UAthenaLobbyMatchmakingPlay_C::PlaylistActivityFont' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, PlaylistActivityFontFamily) == 0x000648, "Member 'UAthenaLobbyMatchmakingPlay_C::PlaylistActivityFontFamily' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyMatchmakingPlay_C, CreativeMatchmakingSucceededSound) == 0x000650, "Member 'UAthenaLobbyMatchmakingPlay_C::CreativeMatchmakingSucceededSound' has a wrong offset!");

}
