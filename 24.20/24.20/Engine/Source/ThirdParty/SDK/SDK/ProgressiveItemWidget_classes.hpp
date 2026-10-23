#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UProgressiveItemWidget_C final : public UFortProgressiveItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Item_Hover;
	class UWidgetAnimation*                       Hover_Burst;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       NotCurrentRow;
	class UWidgetAnimation*                       Reveal_Hide;
	class UWidgetAnimation*                       GrowTile;
	class UImage*                                 DisableTintOverlay;
	class UHorizontalBox*                         HBox_locks;
	class UImage*                                 Image;
	class UImage*                                 Image_32;
	class UImage*                                 Image_RarityStripe;
	class UFortLazyImage*                         ItemCardImage;
	class UImage*                                 OffscreenOverlay;
	class UOverlay*                               Overlay_Delayed;
	class UFortMobileImage*                       Widget_ClaimedImage;
	class UFortMobileImage*                       Widget_LockedImage;
	bool                                          Selected;
	bool                                          Hovered;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_ProgressiveItemWidget(int32 EntryPoint);
	void OnHighlighted();
	void OnInitialized();
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnStageItemChanged(const struct FProgressiveStageItemInfo& InStageItemInfo);
	void OnTileMaterialLoaded(const bool bSubscribed);
	void OnUnhighlighted();
	void Update_Subscribed_Visuals(bool IsSubscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItemWidget_C">();
	}
	static class UProgressiveItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItemWidget_C>();
	}
};
static_assert(alignof(UProgressiveItemWidget_C) == 0x000010, "Wrong alignment on UProgressiveItemWidget_C");
static_assert(sizeof(UProgressiveItemWidget_C) == 0x001500, "Wrong size on UProgressiveItemWidget_C");
static_assert(offsetof(UProgressiveItemWidget_C, UberGraphFrame) == 0x001470, "Member 'UProgressiveItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Item_Hover) == 0x001478, "Member 'UProgressiveItemWidget_C::Item_Hover' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Hover_Burst) == 0x001480, "Member 'UProgressiveItemWidget_C::Hover_Burst' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Select) == 0x001488, "Member 'UProgressiveItemWidget_C::Select' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, NotCurrentRow) == 0x001490, "Member 'UProgressiveItemWidget_C::NotCurrentRow' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Reveal_Hide) == 0x001498, "Member 'UProgressiveItemWidget_C::Reveal_Hide' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, GrowTile) == 0x0014A0, "Member 'UProgressiveItemWidget_C::GrowTile' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, DisableTintOverlay) == 0x0014A8, "Member 'UProgressiveItemWidget_C::DisableTintOverlay' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, HBox_locks) == 0x0014B0, "Member 'UProgressiveItemWidget_C::HBox_locks' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Image) == 0x0014B8, "Member 'UProgressiveItemWidget_C::Image' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Image_32) == 0x0014C0, "Member 'UProgressiveItemWidget_C::Image_32' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Image_RarityStripe) == 0x0014C8, "Member 'UProgressiveItemWidget_C::Image_RarityStripe' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, ItemCardImage) == 0x0014D0, "Member 'UProgressiveItemWidget_C::ItemCardImage' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, OffscreenOverlay) == 0x0014D8, "Member 'UProgressiveItemWidget_C::OffscreenOverlay' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Overlay_Delayed) == 0x0014E0, "Member 'UProgressiveItemWidget_C::Overlay_Delayed' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Widget_ClaimedImage) == 0x0014E8, "Member 'UProgressiveItemWidget_C::Widget_ClaimedImage' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Widget_LockedImage) == 0x0014F0, "Member 'UProgressiveItemWidget_C::Widget_LockedImage' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Selected) == 0x0014F8, "Member 'UProgressiveItemWidget_C::Selected' has a wrong offset!");
static_assert(offsetof(UProgressiveItemWidget_C, Hovered) == 0x0014F9, "Member 'UProgressiveItemWidget_C::Hovered' has a wrong offset!");

}
