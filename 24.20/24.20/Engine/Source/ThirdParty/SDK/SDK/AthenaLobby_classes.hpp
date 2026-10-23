#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaLobby_C final : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFeaturedCreativeContent_C*             FeaturedCreativeContent;
	class UNormalBangWrapper_C*                   QuestsBangWrapper;
	class UFancyToastWidget_C*                    StoreToastWidget;
	class UStoreToastRequest*                     StoreToastRequest;
	struct FTimerHandle                           TryShowToast;
	struct FDataTableRowHandle                    InputAction_InspectChallenges;

public:
	void AttemptToShowToast();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ConfigureGenericLinkButton();
	void Construct();
	void DisplayGlyphQuestUpdated(int32 NewGlyphs);
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint);
	void HandleLobbyColorSchemeChange(const struct FLinearColor& NewColorScheme, bool UseDefaultScheme);
	void HandleUnseenQuestsChanged(bool bHasUnseenQuests);
	void OnComplete_9036807A49B907A7A1B78EB727BAB97A(class UUserWidget* UserWidget);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnMatchmakingWidgetChanged();
	void OnPlaylistChanged(EFortLobbyType LobbyType, const class UFortPlaylistAthena* PlaylistData);
	void OnQuestsButtonVisibilityChanged(ESlateVisibility NewVisibility);
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void StartAthenaLobbyMusic();
	void TryToastAgainNextFrame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobby_C">();
	}
	static class UAthenaLobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobby_C>();
	}
};
static_assert(alignof(UAthenaLobby_C) == 0x000008, "Wrong alignment on UAthenaLobby_C");
static_assert(sizeof(UAthenaLobby_C) == 0x0007D8, "Wrong size on UAthenaLobby_C");
static_assert(offsetof(UAthenaLobby_C, UberGraphFrame) == 0x000798, "Member 'UAthenaLobby_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, FeaturedCreativeContent) == 0x0007A0, "Member 'UAthenaLobby_C::FeaturedCreativeContent' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, QuestsBangWrapper) == 0x0007A8, "Member 'UAthenaLobby_C::QuestsBangWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, StoreToastWidget) == 0x0007B0, "Member 'UAthenaLobby_C::StoreToastWidget' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, StoreToastRequest) == 0x0007B8, "Member 'UAthenaLobby_C::StoreToastRequest' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, TryShowToast) == 0x0007C0, "Member 'UAthenaLobby_C::TryShowToast' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputAction_InspectChallenges) == 0x0007C8, "Member 'UAthenaLobby_C::InputAction_InspectChallenges' has a wrong offset!");

}
