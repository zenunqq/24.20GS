#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UShowdownTournamentPosterFront_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBorder*                                Border_Alert;
	class UImage*                                 Image_LockIcon;
	class UImage*                                 Image_LockIconWorldCup;
	class UImage*                                 Image_PosterShadow;
	class UInvalidationBox*                       InvalidationBox_318;
	class UInvalidationBox*                       InvalidationBox_431;
	class UInvalidationBox*                       InvalidationBox_551;
	class UInvalidationBox*                       InvalidationBox_676;
	class UOverlay*                               OverlayEventLocked;
	class UOverlay*                               OverlayEventLockedWorldCup;
	class UScaleBox*                              ScaleBox_0;
	class UScaleBox*                              ScaleBox_1;
	class UShowdownPin_C*                         ShowdownPin;
	class UVerticalBox*                           StandardLayout;
	class UCommonWidgetSwitcherLegacy*            Switcher_PosterTextLayout;
	class UCommonTextBlock*                       Text_EventAlert;
	class UCommonTextBlock*                       TournamentDateText;
	class UCommonTextBlock*                       TournamentDateTextWorldCup;
	class UCommonTextBlock*                       TournamentTitle1;
	class UCommonTextBlock*                       TournamentTitle1WorldCup;
	class UCommonTextBlock*                       TournamentTitle2;
	class UCommonTextBlock*                       TournamentTitle2WorldCup;
	class UVerticalBox*                           WorldCupLayout;
	struct FSlateColor                            TitleColor;
	bool                                          HiddenWhileLoading;
	uint8                                         Pad_7ED[0x3];
	struct FSlateColor                            SubColor;
	bool                                          HidePin;
	EStretch                                      TournamentScaleboxStretch;

public:
	void BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature();
	void BP_ResetDetailView();
	void Construct();
	void ExecuteUbergraph_ShowdownTournamentPosterFront(int32 EntryPoint);
	void GetTournamentDateText(class FText* TournamentDate);
	void PreConstruct(bool IsDesignTime);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownTournamentPosterFront_C">();
	}
	static class UShowdownTournamentPosterFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownTournamentPosterFront_C>();
	}
};
static_assert(alignof(UShowdownTournamentPosterFront_C) == 0x000008, "Wrong alignment on UShowdownTournamentPosterFront_C");
static_assert(sizeof(UShowdownTournamentPosterFront_C) == 0x000808, "Wrong size on UShowdownTournamentPosterFront_C");
static_assert(offsetof(UShowdownTournamentPosterFront_C, UberGraphFrame) == 0x000718, "Member 'UShowdownTournamentPosterFront_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, Border_Alert) == 0x000720, "Member 'UShowdownTournamentPosterFront_C::Border_Alert' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, Image_LockIcon) == 0x000728, "Member 'UShowdownTournamentPosterFront_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, Image_LockIconWorldCup) == 0x000730, "Member 'UShowdownTournamentPosterFront_C::Image_LockIconWorldCup' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, Image_PosterShadow) == 0x000738, "Member 'UShowdownTournamentPosterFront_C::Image_PosterShadow' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, InvalidationBox_318) == 0x000740, "Member 'UShowdownTournamentPosterFront_C::InvalidationBox_318' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, InvalidationBox_431) == 0x000748, "Member 'UShowdownTournamentPosterFront_C::InvalidationBox_431' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, InvalidationBox_551) == 0x000750, "Member 'UShowdownTournamentPosterFront_C::InvalidationBox_551' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, InvalidationBox_676) == 0x000758, "Member 'UShowdownTournamentPosterFront_C::InvalidationBox_676' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, OverlayEventLocked) == 0x000760, "Member 'UShowdownTournamentPosterFront_C::OverlayEventLocked' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, OverlayEventLockedWorldCup) == 0x000768, "Member 'UShowdownTournamentPosterFront_C::OverlayEventLockedWorldCup' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, ScaleBox_0) == 0x000770, "Member 'UShowdownTournamentPosterFront_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, ScaleBox_1) == 0x000778, "Member 'UShowdownTournamentPosterFront_C::ScaleBox_1' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, ShowdownPin) == 0x000780, "Member 'UShowdownTournamentPosterFront_C::ShowdownPin' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, StandardLayout) == 0x000788, "Member 'UShowdownTournamentPosterFront_C::StandardLayout' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, Switcher_PosterTextLayout) == 0x000790, "Member 'UShowdownTournamentPosterFront_C::Switcher_PosterTextLayout' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, Text_EventAlert) == 0x000798, "Member 'UShowdownTournamentPosterFront_C::Text_EventAlert' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentDateText) == 0x0007A0, "Member 'UShowdownTournamentPosterFront_C::TournamentDateText' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentDateTextWorldCup) == 0x0007A8, "Member 'UShowdownTournamentPosterFront_C::TournamentDateTextWorldCup' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentTitle1) == 0x0007B0, "Member 'UShowdownTournamentPosterFront_C::TournamentTitle1' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentTitle1WorldCup) == 0x0007B8, "Member 'UShowdownTournamentPosterFront_C::TournamentTitle1WorldCup' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentTitle2) == 0x0007C0, "Member 'UShowdownTournamentPosterFront_C::TournamentTitle2' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentTitle2WorldCup) == 0x0007C8, "Member 'UShowdownTournamentPosterFront_C::TournamentTitle2WorldCup' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, WorldCupLayout) == 0x0007D0, "Member 'UShowdownTournamentPosterFront_C::WorldCupLayout' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TitleColor) == 0x0007D8, "Member 'UShowdownTournamentPosterFront_C::TitleColor' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, HiddenWhileLoading) == 0x0007EC, "Member 'UShowdownTournamentPosterFront_C::HiddenWhileLoading' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, SubColor) == 0x0007F0, "Member 'UShowdownTournamentPosterFront_C::SubColor' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, HidePin) == 0x000804, "Member 'UShowdownTournamentPosterFront_C::HidePin' has a wrong offset!");
static_assert(offsetof(UShowdownTournamentPosterFront_C, TournamentScaleboxStretch) == 0x000805, "Member 'UShowdownTournamentPosterFront_C::TournamentScaleboxStretch' has a wrong offset!");

}
