#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BattlePassBase_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBPS24_BattlePassTile_C final : public UFortBattlePassTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Select_Premium;
	class UWidgetAnimation*                       GrowTile;
	class UWidgetAnimation*                       Hold_Completed;
	class UWidgetAnimation*                       Secondary_Hold_Progress;
	class UWidgetAnimation*                       Hold_Progress;
	class UWidgetAnimation*                       Hover_Burst;
	class UWidgetAnimation*                       Reveal_Hide;
	class UWidgetAnimation*                       Reveal;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       Item_Hover;
	class UCommonVisibilitySwitcher*              Availability_Switcher;
	class UOverlay*                               Available_State;
	class UBorder*                                Border_SelectTrim;
	class UBorder*                                Border_SelectTrim_1;
	class UImage*                                 EmptyBackground;
	class UHorizontalBox*                         Equipped_State;
	class UHorizontalBox*                         HB_PriceInfo;
	class UImage*                                 Image_Lock;
	class UImage*                                 Image_Preview;
	class UImage*                                 Image_PriceBg;
	class UImage*                                 Image_PriceBg_Tint;
	class UImage*                                 Image_Progress;
	class UFortLazyImage*                         Image_RewardItem_BG;
	class UImage*                                 InProgressBacking;
	class UOverlay*                               InProgressOverlay;
	class UCommonTextBlock*                       InProgressText;
	class UImage*                                 Locked_Overlay_Item;
	class UOverlay*                               Overlay_Input;
	class UHorizontalBox*                         Owned_State;
	class UCommonTextBlock*                       Text_Price;
	class UCommonVisibilitySwitcher*              VisibilitySwitcher_Included;
	bool                                          has_prerequisite;
	bool                                          Selected;
	bool                                          Hovered;
	bool                                          IsPremiumTile;
	bool                                          Locked;
	uint8                                         Pad_16C5[0x3];
	struct FLinearColor                           OverlayTintColor;
	class USoundBase*                             HoverSound;
	class USoundBase*                             HoldCompleteSound;
	bool                                          ProgressCompleted;

public:
	void BP_OnHoldCompleted();
	void BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHoldReset();
	void BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BPS24_BattlePassTile(int32 EntryPoint);
	void ForceRuntimeMaterialParams();
	void OnAffordabilityChanged(const bool bHasEnougCurrency);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnHighlighted();
	void OnLockedProgressUpdated(const float Progress, const int32 CurrentlyOwnedRewards, const int32 NeededRewards);
	void OnLockedStateUpdated(const bool OwnsBattlePass, const bool ParentUnlocked, const bool HasRemainingPrerequisites, const bool bIsDelayed);
	void OnPeeked();
	void OnPreviewed();
	void OnRevealed();
	void OnSetCurrencyAndPrice(const EBattlePassCurrencyType Currency, const int32 Price);
	void OnSetTileColors();
	void OnSetTrack(const bool bIsFreeTrack, const bool bOwnsBattlePass);
	void OnStateChanged(const EBattlePassTileAvailabilityStates NewState);
	void OnUnhighlighted();
	void OnUnpreviewed();
	void PreConstruct(bool IsDesignTime);
	void UpdateTileColors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_BattlePassTile_C">();
	}
	static class UBPS24_BattlePassTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_BattlePassTile_C>();
	}
};
static_assert(alignof(UBPS24_BattlePassTile_C) == 0x000010, "Wrong alignment on UBPS24_BattlePassTile_C");
static_assert(sizeof(UBPS24_BattlePassTile_C) == 0x0016F0, "Wrong size on UBPS24_BattlePassTile_C");
static_assert(offsetof(UBPS24_BattlePassTile_C, UberGraphFrame) == 0x0015C0, "Member 'UBPS24_BattlePassTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Select_Premium) == 0x0015C8, "Member 'UBPS24_BattlePassTile_C::Select_Premium' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, GrowTile) == 0x0015D0, "Member 'UBPS24_BattlePassTile_C::GrowTile' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Hold_Completed) == 0x0015D8, "Member 'UBPS24_BattlePassTile_C::Hold_Completed' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Secondary_Hold_Progress) == 0x0015E0, "Member 'UBPS24_BattlePassTile_C::Secondary_Hold_Progress' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Hold_Progress) == 0x0015E8, "Member 'UBPS24_BattlePassTile_C::Hold_Progress' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Hover_Burst) == 0x0015F0, "Member 'UBPS24_BattlePassTile_C::Hover_Burst' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Reveal_Hide) == 0x0015F8, "Member 'UBPS24_BattlePassTile_C::Reveal_Hide' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Reveal) == 0x001600, "Member 'UBPS24_BattlePassTile_C::Reveal' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Select) == 0x001608, "Member 'UBPS24_BattlePassTile_C::Select' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Item_Hover) == 0x001610, "Member 'UBPS24_BattlePassTile_C::Item_Hover' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Availability_Switcher) == 0x001618, "Member 'UBPS24_BattlePassTile_C::Availability_Switcher' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Available_State) == 0x001620, "Member 'UBPS24_BattlePassTile_C::Available_State' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Border_SelectTrim) == 0x001628, "Member 'UBPS24_BattlePassTile_C::Border_SelectTrim' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Border_SelectTrim_1) == 0x001630, "Member 'UBPS24_BattlePassTile_C::Border_SelectTrim_1' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, EmptyBackground) == 0x001638, "Member 'UBPS24_BattlePassTile_C::EmptyBackground' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Equipped_State) == 0x001640, "Member 'UBPS24_BattlePassTile_C::Equipped_State' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, HB_PriceInfo) == 0x001648, "Member 'UBPS24_BattlePassTile_C::HB_PriceInfo' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Image_Lock) == 0x001650, "Member 'UBPS24_BattlePassTile_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Image_Preview) == 0x001658, "Member 'UBPS24_BattlePassTile_C::Image_Preview' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Image_PriceBg) == 0x001660, "Member 'UBPS24_BattlePassTile_C::Image_PriceBg' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Image_PriceBg_Tint) == 0x001668, "Member 'UBPS24_BattlePassTile_C::Image_PriceBg_Tint' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Image_Progress) == 0x001670, "Member 'UBPS24_BattlePassTile_C::Image_Progress' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Image_RewardItem_BG) == 0x001678, "Member 'UBPS24_BattlePassTile_C::Image_RewardItem_BG' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, InProgressBacking) == 0x001680, "Member 'UBPS24_BattlePassTile_C::InProgressBacking' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, InProgressOverlay) == 0x001688, "Member 'UBPS24_BattlePassTile_C::InProgressOverlay' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, InProgressText) == 0x001690, "Member 'UBPS24_BattlePassTile_C::InProgressText' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Locked_Overlay_Item) == 0x001698, "Member 'UBPS24_BattlePassTile_C::Locked_Overlay_Item' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Overlay_Input) == 0x0016A0, "Member 'UBPS24_BattlePassTile_C::Overlay_Input' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Owned_State) == 0x0016A8, "Member 'UBPS24_BattlePassTile_C::Owned_State' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Text_Price) == 0x0016B0, "Member 'UBPS24_BattlePassTile_C::Text_Price' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, VisibilitySwitcher_Included) == 0x0016B8, "Member 'UBPS24_BattlePassTile_C::VisibilitySwitcher_Included' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, has_prerequisite) == 0x0016C0, "Member 'UBPS24_BattlePassTile_C::has_prerequisite' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Selected) == 0x0016C1, "Member 'UBPS24_BattlePassTile_C::Selected' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Hovered) == 0x0016C2, "Member 'UBPS24_BattlePassTile_C::Hovered' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, IsPremiumTile) == 0x0016C3, "Member 'UBPS24_BattlePassTile_C::IsPremiumTile' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, Locked) == 0x0016C4, "Member 'UBPS24_BattlePassTile_C::Locked' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, OverlayTintColor) == 0x0016C8, "Member 'UBPS24_BattlePassTile_C::OverlayTintColor' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, HoverSound) == 0x0016D8, "Member 'UBPS24_BattlePassTile_C::HoverSound' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, HoldCompleteSound) == 0x0016E0, "Member 'UBPS24_BattlePassTile_C::HoldCompleteSound' has a wrong offset!");
static_assert(offsetof(UBPS24_BattlePassTile_C, ProgressCompleted) == 0x0016E8, "Member 'UBPS24_BattlePassTile_C::ProgressCompleted' has a wrong offset!");

}
