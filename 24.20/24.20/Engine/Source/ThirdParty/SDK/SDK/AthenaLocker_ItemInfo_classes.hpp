#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Slate_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaLocker_ItemInfo_C final : public UAthenaLockerItemInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       PulseAnim;
	class UBorder*                                Border_ItemRarity;
	class UBorder*                                Border_ItemType;
	class UBorder*                                Border_RarityTint;
	class UOverlay*                               ContentOverlay;
	class UHorizontalBox*                         ExclusiveCalloutBox;
	class UCommonRichTextBlock*                   ExclusiveCalloutText;
	class UWidgetSwitcher*                        IconSwitcher;
	class UImage*                                 Image_93;
	class UOverlay*                               OverrideDescriptionVisibility;
	class UOverlay*                               OverrideWarningVisibility;
	class UHorizontalBox*                         Rarity_Type;
	class USizeBox*                               SizeBox_0;
	class USpacer*                                VerticalSpacer;
	bool                                          ShowDescription;
	EHorizontalAlignment                          ContentAlignment;
	bool                                          CompactMode;

public:
	void ExecuteUbergraph_AthenaLocker_ItemInfo(int32 EntryPoint);
	void OnItemDefinitionSet(const class UFortItemDefinition* ItemDefinition);
	void OnNoItemSet();
	void OnUpdateAccessRestrictionWarning(bool bShouldShow, const class FText& WarningText, EAthenaLockerInfoRestrictionWarning WarningType);
	void PreConstruct(bool IsDesignTime);
	void UpdateRarityWidgets(const struct FFortColorPalette& InColor, EFortRarity InRarity, class UFortItemSeriesDefinition* InSeries, bool HideRarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLocker_ItemInfo_C">();
	}
	static class UAthenaLocker_ItemInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLocker_ItemInfo_C>();
	}
};
static_assert(alignof(UAthenaLocker_ItemInfo_C) == 0x000008, "Wrong alignment on UAthenaLocker_ItemInfo_C");
static_assert(sizeof(UAthenaLocker_ItemInfo_C) == 0x000330, "Wrong size on UAthenaLocker_ItemInfo_C");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, UberGraphFrame) == 0x0002B0, "Member 'UAthenaLocker_ItemInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, PulseAnim) == 0x0002B8, "Member 'UAthenaLocker_ItemInfo_C::PulseAnim' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_ItemRarity) == 0x0002C0, "Member 'UAthenaLocker_ItemInfo_C::Border_ItemRarity' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_ItemType) == 0x0002C8, "Member 'UAthenaLocker_ItemInfo_C::Border_ItemType' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_RarityTint) == 0x0002D0, "Member 'UAthenaLocker_ItemInfo_C::Border_RarityTint' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ContentOverlay) == 0x0002D8, "Member 'UAthenaLocker_ItemInfo_C::ContentOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ExclusiveCalloutBox) == 0x0002E0, "Member 'UAthenaLocker_ItemInfo_C::ExclusiveCalloutBox' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ExclusiveCalloutText) == 0x0002E8, "Member 'UAthenaLocker_ItemInfo_C::ExclusiveCalloutText' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, IconSwitcher) == 0x0002F0, "Member 'UAthenaLocker_ItemInfo_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Image_93) == 0x0002F8, "Member 'UAthenaLocker_ItemInfo_C::Image_93' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, OverrideDescriptionVisibility) == 0x000300, "Member 'UAthenaLocker_ItemInfo_C::OverrideDescriptionVisibility' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, OverrideWarningVisibility) == 0x000308, "Member 'UAthenaLocker_ItemInfo_C::OverrideWarningVisibility' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Rarity_Type) == 0x000310, "Member 'UAthenaLocker_ItemInfo_C::Rarity_Type' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, SizeBox_0) == 0x000318, "Member 'UAthenaLocker_ItemInfo_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, VerticalSpacer) == 0x000320, "Member 'UAthenaLocker_ItemInfo_C::VerticalSpacer' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ShowDescription) == 0x000328, "Member 'UAthenaLocker_ItemInfo_C::ShowDescription' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ContentAlignment) == 0x000329, "Member 'UAthenaLocker_ItemInfo_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, CompactMode) == 0x00032A, "Member 'UAthenaLocker_ItemInfo_C::CompactMode' has a wrong offset!");

}
