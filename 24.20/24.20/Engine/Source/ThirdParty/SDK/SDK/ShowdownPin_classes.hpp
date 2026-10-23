#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UShowdownPin_C final : public UFortShowdownPin
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UWidgetAnimation*                       Focus;
	class UWidgetAnimation*                       Reveal;
	class UCommonTextBlock*                       CommonTextBlock_NoPinPts;
	class UCommonTextBlock*                       CommonTextBlock_PinPts;
	class UImage*                                 Image_PinShadow;
	class UOverlay*                               NoPinContent;
	class UCommonLazyImage*                       NoPinIcon;
	class UCommonTextBlock*                       NoPinPlusSign;
	class UCommonNumericTextBlock*                NoPinScoreText;
	class UCommonLazyImage*                       NoPinShadow;
	class UOverlay*                               PinContent;
	class UImage*                                 PinIcon;
	class UCommonWidgetSwitcherLegacy*            PinInfoSwitcher;
	class UCommonTextBlock*                       PinScoreText;
	class UVerticalBox*                           VerticalBox_PointValuesProgress;
	class UVerticalBox*                           VerticalBoxPointValues;
	bool                                          bRepresentsTournamentBestPin;
	bool                                          DEVShowPin;
	bool                                          HidePoints;
	uint8                                         Pad_7B3[0x1];
	int32                                         DEVPinScore;
	bool                                          colorSilhouette;
	bool                                          hideBackplate;

public:
	void ChooseScoreToDisplay(int32* ScoreToDisplay);
	void EventColorize();
	void EventFixPts(int32 Points);
	void EventRevealAnim();
	void EventSetTier(int32 Score);
	void ExecuteUbergraph_ShowdownPin(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownPin_C">();
	}
	static class UShowdownPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownPin_C>();
	}
};
static_assert(alignof(UShowdownPin_C) == 0x000008, "Wrong alignment on UShowdownPin_C");
static_assert(sizeof(UShowdownPin_C) == 0x0007C0, "Wrong size on UShowdownPin_C");
static_assert(offsetof(UShowdownPin_C, UberGraphFrame) == 0x000720, "Member 'UShowdownPin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, Hover) == 0x000728, "Member 'UShowdownPin_C::Hover' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, Focus) == 0x000730, "Member 'UShowdownPin_C::Focus' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, Reveal) == 0x000738, "Member 'UShowdownPin_C::Reveal' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, CommonTextBlock_NoPinPts) == 0x000740, "Member 'UShowdownPin_C::CommonTextBlock_NoPinPts' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, CommonTextBlock_PinPts) == 0x000748, "Member 'UShowdownPin_C::CommonTextBlock_PinPts' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, Image_PinShadow) == 0x000750, "Member 'UShowdownPin_C::Image_PinShadow' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, NoPinContent) == 0x000758, "Member 'UShowdownPin_C::NoPinContent' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, NoPinIcon) == 0x000760, "Member 'UShowdownPin_C::NoPinIcon' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, NoPinPlusSign) == 0x000768, "Member 'UShowdownPin_C::NoPinPlusSign' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, NoPinScoreText) == 0x000770, "Member 'UShowdownPin_C::NoPinScoreText' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, NoPinShadow) == 0x000778, "Member 'UShowdownPin_C::NoPinShadow' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, PinContent) == 0x000780, "Member 'UShowdownPin_C::PinContent' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, PinIcon) == 0x000788, "Member 'UShowdownPin_C::PinIcon' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, PinInfoSwitcher) == 0x000790, "Member 'UShowdownPin_C::PinInfoSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, PinScoreText) == 0x000798, "Member 'UShowdownPin_C::PinScoreText' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, VerticalBox_PointValuesProgress) == 0x0007A0, "Member 'UShowdownPin_C::VerticalBox_PointValuesProgress' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, VerticalBoxPointValues) == 0x0007A8, "Member 'UShowdownPin_C::VerticalBoxPointValues' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, bRepresentsTournamentBestPin) == 0x0007B0, "Member 'UShowdownPin_C::bRepresentsTournamentBestPin' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, DEVShowPin) == 0x0007B1, "Member 'UShowdownPin_C::DEVShowPin' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, HidePoints) == 0x0007B2, "Member 'UShowdownPin_C::HidePoints' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, DEVPinScore) == 0x0007B4, "Member 'UShowdownPin_C::DEVPinScore' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, colorSilhouette) == 0x0007B8, "Member 'UShowdownPin_C::colorSilhouette' has a wrong offset!");
static_assert(offsetof(UShowdownPin_C, hideBackplate) == 0x0007B9, "Member 'UShowdownPin_C::hideBackplate' has a wrong offset!");

}
