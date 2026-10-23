#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "CommonUILegacy_classes.hpp"
#include "StoreSelectionUI_structs.hpp"

namespace SDK
{

class UFortStoreSelectionData final : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UClass>                   StoreSelectionScreenClass;
	class FText                                   RegularStoreSelectedText;
	class FText                                   NonRegularStoreSelectedText;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSelectionData">();
	}
	static class UFortStoreSelectionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionData>();
	}
};
static_assert(alignof(UFortStoreSelectionData) == 0x000008, "Wrong alignment on UFortStoreSelectionData");
static_assert(sizeof(UFortStoreSelectionData) == 0x000578, "Wrong size on UFortStoreSelectionData");
static_assert(offsetof(UFortStoreSelectionData, StoreSelectionScreenClass) == 0x000520, "Member 'UFortStoreSelectionData::StoreSelectionScreenClass' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionData, RegularStoreSelectedText) == 0x000548, "Member 'UFortStoreSelectionData::RegularStoreSelectedText' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionData, NonRegularStoreSelectedText) == 0x000560, "Member 'UFortStoreSelectionData::NonRegularStoreSelectedText' has a wrong offset!");

class UFortStoreSelectionOptionEntry final : public UCommonButtonLegacy
{
public:
	class UFortLazyImage*                         Image_Icon;
	class UCommonTextBlock*                       Text_Description;
	class UCommonTextBlock*                       Text_Price;
	class UCommonRichTextBlock*                   RichText_Label;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSelectionOptionEntry">();
	}
	static class UFortStoreSelectionOptionEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionOptionEntry>();
	}
};
static_assert(alignof(UFortStoreSelectionOptionEntry) == 0x000010, "Wrong alignment on UFortStoreSelectionOptionEntry");
static_assert(sizeof(UFortStoreSelectionOptionEntry) == 0x001450, "Wrong size on UFortStoreSelectionOptionEntry");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Image_Icon) == 0x001430, "Member 'UFortStoreSelectionOptionEntry::Image_Icon' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Description) == 0x001438, "Member 'UFortStoreSelectionOptionEntry::Text_Description' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Price) == 0x001440, "Member 'UFortStoreSelectionOptionEntry::Text_Price' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, RichText_Label) == 0x001448, "Member 'UFortStoreSelectionOptionEntry::RichText_Label' has a wrong offset!");

class UFortStoreSelectionScreen final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4E0[0x8];
	class UCommonButtonGroupLegacy*               EntryBoxButtonGroup;
	class UFortRealMoneyOffer*                    StoreOffer;
	class UCommonLoadGuard*                       StoreOfferLoadGuard;
	class UCommonTextBlock*                       Text_Header;
	class UDynamicEntryBox*                       DynamicEntryBox_Options;
	class UCommonButtonLegacy*                    Button_Continue;
	class UCommonButtonLegacy*                    Button_Cancel;
	class UCommonRichTextBlock*                   RichText_InitiallySelectedHint;
	TScriptInterface<class IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;
	TArray<struct FItemData>                      StoreOptions;
	TSoftObjectPtr<class UFortMtxOfferData>       SoftDisplayAsset;
	struct FItemData                              ItemData[0xC];
	class FText                                   OptionalLabels[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSelectionScreen">();
	}
	static class UFortStoreSelectionScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionScreen>();
	}
};
static_assert(alignof(UFortStoreSelectionScreen) == 0x000008, "Wrong alignment on UFortStoreSelectionScreen");
static_assert(sizeof(UFortStoreSelectionScreen) == 0x000900, "Wrong size on UFortStoreSelectionScreen");
static_assert(offsetof(UFortStoreSelectionScreen, EntryBoxButtonGroup) == 0x0004E8, "Member 'UFortStoreSelectionScreen::EntryBoxButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOffer) == 0x0004F0, "Member 'UFortStoreSelectionScreen::StoreOffer' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOfferLoadGuard) == 0x0004F8, "Member 'UFortStoreSelectionScreen::StoreOfferLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Text_Header) == 0x000500, "Member 'UFortStoreSelectionScreen::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, DynamicEntryBox_Options) == 0x000508, "Member 'UFortStoreSelectionScreen::DynamicEntryBox_Options' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Continue) == 0x000510, "Member 'UFortStoreSelectionScreen::Button_Continue' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Cancel) == 0x000518, "Member 'UFortStoreSelectionScreen::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, RichText_InitiallySelectedHint) == 0x000520, "Member 'UFortStoreSelectionScreen::RichText_InitiallySelectedHint' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, PurchaseChoiceOwner) == 0x000528, "Member 'UFortStoreSelectionScreen::PurchaseChoiceOwner' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOptions) == 0x000538, "Member 'UFortStoreSelectionScreen::StoreOptions' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, SoftDisplayAsset) == 0x000548, "Member 'UFortStoreSelectionScreen::SoftDisplayAsset' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, ItemData) == 0x000570, "Member 'UFortStoreSelectionScreen::ItemData' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, OptionalLabels) == 0x0008D0, "Member 'UFortStoreSelectionScreen::OptionalLabels' has a wrong offset!");

}
