#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UItemInfoHeaderWidget_C final : public UFortItemBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UVerticalBox*                           AlternateBGContainer;
	class UCommonBorder*                          AlternateBorder;
	class UCommonBorder*                          AlternateRule;
	class UWidgetSwitcher*                        BackgroundSwitcher;
	class UFortCosmeticItemCard_C*                Card;
	class UVerticalBox*                           CardContainer;
	class UScrollBox*                             DetailsScrollBox;
	class UCommonBorder*                          HeaderBackground;
	class UVerticalBox*                           HeaderBGContainer;
	class UCommonBorder*                          HeaderRule;
	class UItemSeriesOrRarity_C*                  ItemSeriesOrRarity;
	class UCommonTextBlock*                       LockedTextBlock;
	class UImage*                                 LockImage;
	class UHorizontalBox*                         MainHB;
	class UCommonTextBlock*                       NameTextBlock;
	class UImage*                                 RarityGlow;
	class UImage*                                 RarityTypeSeperatorImage;
	class USizeBox*                               RemainingContainer;
	class UCommonTextBlock*                       RemainingText;
	class UCommonRichTextBlock*                   RichDescriptionBox;
	class UCommonRichTextBlock*                   RichDescriptionBox_TempForSizing;
	class UCommonBorder*                          RootBackground;
	class USizeBox*                               SizeBox_RichDesc;
	class UVerticalBox*                           TextContainer;
	class UCommonTextBlock*                       TypeTextBlock;
	int32                                         RemainingQuantity;
	bool                                          ShowCard;
	bool                                          Locked;
	uint8                                         Pad_37E[0x2];
	class FText                                   LockedReason;
	bool                                          ShowRemainingQuantity;
	bool                                          ShowDetails;
	EFortItemCardSize                             CardSize;
	bool                                          ShowDescription;
	uint8                                         Pad_39C[0x4];
	TMap<EFortItemType, class FText>              ItemAlternateName;

public:
	void ExecuteUbergraph_ItemInfoHeaderWidget(int32 EntryPoint);
	class FText GetAlternateNameForItem(class UFortItemDefinition* ItemDef);
	void HasValidItemDefinition(bool* HasValidDescription);
	void OnItemDefinitionChanged();
	void OverrideHeaderAndDescription(const class FText& Header, const class FText& Description, const class FText& ItemType, bool bUseAlternateHeaderBG, EFortRarity Rarity);
	void SetLocked(bool ShouldShowLocked, const class FText& LockReason);
	void SetRemainingQuantity(bool ShouldShowRemainingQuantity, int32 NewRemainingQuantity);
	void SetScrollWidget();
	void Setup(bool ShouldShowCard, EFortItemCardSize CardSize_0, bool ShouldShowDetails, bool ShouldShowDescription);
	void Update(class UFortItemDefinition* ItemDefinition_0, int32 Quantity);
	void UpdateCard();
	void UpdateColorRarity(const struct FFortColorPalette& Colors);
	void UpdateDetailVisibility();
	void UpdateLocked();
	void UpdateNameText(class UFortItemDefinition* ItemDefinition_0, int32 Quantity);
	void UpdateRemainingQuantity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInfoHeaderWidget_C">();
	}
	static class UItemInfoHeaderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInfoHeaderWidget_C>();
	}
};
static_assert(alignof(UItemInfoHeaderWidget_C) == 0x000008, "Wrong alignment on UItemInfoHeaderWidget_C");
static_assert(sizeof(UItemInfoHeaderWidget_C) == 0x0003F0, "Wrong size on UItemInfoHeaderWidget_C");
static_assert(offsetof(UItemInfoHeaderWidget_C, UberGraphFrame) == 0x0002A8, "Member 'UItemInfoHeaderWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, AlternateBGContainer) == 0x0002B0, "Member 'UItemInfoHeaderWidget_C::AlternateBGContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, AlternateBorder) == 0x0002B8, "Member 'UItemInfoHeaderWidget_C::AlternateBorder' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, AlternateRule) == 0x0002C0, "Member 'UItemInfoHeaderWidget_C::AlternateRule' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, BackgroundSwitcher) == 0x0002C8, "Member 'UItemInfoHeaderWidget_C::BackgroundSwitcher' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, Card) == 0x0002D0, "Member 'UItemInfoHeaderWidget_C::Card' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, CardContainer) == 0x0002D8, "Member 'UItemInfoHeaderWidget_C::CardContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, DetailsScrollBox) == 0x0002E0, "Member 'UItemInfoHeaderWidget_C::DetailsScrollBox' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, HeaderBackground) == 0x0002E8, "Member 'UItemInfoHeaderWidget_C::HeaderBackground' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, HeaderBGContainer) == 0x0002F0, "Member 'UItemInfoHeaderWidget_C::HeaderBGContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, HeaderRule) == 0x0002F8, "Member 'UItemInfoHeaderWidget_C::HeaderRule' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ItemSeriesOrRarity) == 0x000300, "Member 'UItemInfoHeaderWidget_C::ItemSeriesOrRarity' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, LockedTextBlock) == 0x000308, "Member 'UItemInfoHeaderWidget_C::LockedTextBlock' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, LockImage) == 0x000310, "Member 'UItemInfoHeaderWidget_C::LockImage' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, MainHB) == 0x000318, "Member 'UItemInfoHeaderWidget_C::MainHB' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, NameTextBlock) == 0x000320, "Member 'UItemInfoHeaderWidget_C::NameTextBlock' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RarityGlow) == 0x000328, "Member 'UItemInfoHeaderWidget_C::RarityGlow' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RarityTypeSeperatorImage) == 0x000330, "Member 'UItemInfoHeaderWidget_C::RarityTypeSeperatorImage' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RemainingContainer) == 0x000338, "Member 'UItemInfoHeaderWidget_C::RemainingContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RemainingText) == 0x000340, "Member 'UItemInfoHeaderWidget_C::RemainingText' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RichDescriptionBox) == 0x000348, "Member 'UItemInfoHeaderWidget_C::RichDescriptionBox' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RichDescriptionBox_TempForSizing) == 0x000350, "Member 'UItemInfoHeaderWidget_C::RichDescriptionBox_TempForSizing' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RootBackground) == 0x000358, "Member 'UItemInfoHeaderWidget_C::RootBackground' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, SizeBox_RichDesc) == 0x000360, "Member 'UItemInfoHeaderWidget_C::SizeBox_RichDesc' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, TextContainer) == 0x000368, "Member 'UItemInfoHeaderWidget_C::TextContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, TypeTextBlock) == 0x000370, "Member 'UItemInfoHeaderWidget_C::TypeTextBlock' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RemainingQuantity) == 0x000378, "Member 'UItemInfoHeaderWidget_C::RemainingQuantity' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowCard) == 0x00037C, "Member 'UItemInfoHeaderWidget_C::ShowCard' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, Locked) == 0x00037D, "Member 'UItemInfoHeaderWidget_C::Locked' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, LockedReason) == 0x000380, "Member 'UItemInfoHeaderWidget_C::LockedReason' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowRemainingQuantity) == 0x000398, "Member 'UItemInfoHeaderWidget_C::ShowRemainingQuantity' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowDetails) == 0x000399, "Member 'UItemInfoHeaderWidget_C::ShowDetails' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, CardSize) == 0x00039A, "Member 'UItemInfoHeaderWidget_C::CardSize' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowDescription) == 0x00039B, "Member 'UItemInfoHeaderWidget_C::ShowDescription' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ItemAlternateName) == 0x0003A0, "Member 'UItemInfoHeaderWidget_C::ItemAlternateName' has a wrong offset!");

}
