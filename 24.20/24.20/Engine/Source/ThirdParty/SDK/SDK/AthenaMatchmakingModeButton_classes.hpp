#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UAthenaMatchmakingModeButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UWidgetAnimation*                       ConfirmSelection;
	class UImage*                                 ConfirmSelectionFlash;
	class UImage*                                 ConfirmSelectionShine;
	class UImage*                                 GameModeIcon;
	class UCommonTextBlock*                       GameModeName;
	class UImage*                                 LTMModeSubIcon;
	class UCommonTextBlock*                       SubGameModeName;
	class UHorizontalBox*                         SubGameModeNameHB;
	bool                                          FillSquad;
	uint8                                         Pad_1481[0x7];
	class UFortPlaylistAthena*                    PlaylistData;

public:
	void ExecuteUbergraph_AthenaMatchmakingModeButton(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PlaylistChanged(class UFortPlaylistAthena* NewPlaylist, const class FText& OverrideName);
	void RefreshFillText();
	void RefreshLimitedPoolWarning(bool IsCrossplayEnabled);
	void SetSquadFillText(bool bFill);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingModeButton_C">();
	}
	static class UAthenaMatchmakingModeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingModeButton_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingModeButton_C) == 0x000010, "Wrong alignment on UAthenaMatchmakingModeButton_C");
static_assert(sizeof(UAthenaMatchmakingModeButton_C) == 0x001490, "Wrong size on UAthenaMatchmakingModeButton_C");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, UberGraphFrame) == 0x001430, "Member 'UAthenaMatchmakingModeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, OnHover) == 0x001438, "Member 'UAthenaMatchmakingModeButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, ConfirmSelection) == 0x001440, "Member 'UAthenaMatchmakingModeButton_C::ConfirmSelection' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, ConfirmSelectionFlash) == 0x001448, "Member 'UAthenaMatchmakingModeButton_C::ConfirmSelectionFlash' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, ConfirmSelectionShine) == 0x001450, "Member 'UAthenaMatchmakingModeButton_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, GameModeIcon) == 0x001458, "Member 'UAthenaMatchmakingModeButton_C::GameModeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, GameModeName) == 0x001460, "Member 'UAthenaMatchmakingModeButton_C::GameModeName' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, LTMModeSubIcon) == 0x001468, "Member 'UAthenaMatchmakingModeButton_C::LTMModeSubIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, SubGameModeName) == 0x001470, "Member 'UAthenaMatchmakingModeButton_C::SubGameModeName' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, SubGameModeNameHB) == 0x001478, "Member 'UAthenaMatchmakingModeButton_C::SubGameModeNameHB' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, FillSquad) == 0x001480, "Member 'UAthenaMatchmakingModeButton_C::FillSquad' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingModeButton_C, PlaylistData) == 0x001488, "Member 'UAthenaMatchmakingModeButton_C::PlaylistData' has a wrong offset!");

}
