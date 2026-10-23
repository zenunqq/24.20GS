#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonUI_classes.hpp"
#include "BattlePassBase_structs.hpp"
#include "BlueprintContext_classes.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class IBattlePassSubPageInterface final : public IInterface
{
public:
	void OnEnterSubPage();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassSubPageInterface">();
	}
	static class IBattlePassSubPageInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBattlePassSubPageInterface>();
	}
};
static_assert(alignof(IBattlePassSubPageInterface) == 0x000008, "Wrong alignment on IBattlePassSubPageInterface");
static_assert(sizeof(IBattlePassSubPageInterface) == 0x000028, "Wrong size on IBattlePassSubPageInterface");

class UBattlePassLandingPageBase : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x110];
	class UBattlePassLandingPageButton*           LastHoveredPageButton;
	class UCommonButtonGroupBase*                 LandingPageButtonGroupBase;
	uint8                                         Pad_4C8[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassLandingPageBase">();
	}
	static class UBattlePassLandingPageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassLandingPageBase>();
	}
};
static_assert(alignof(UBattlePassLandingPageBase) == 0x000008, "Wrong alignment on UBattlePassLandingPageBase");
static_assert(sizeof(UBattlePassLandingPageBase) == 0x0004E8, "Wrong size on UBattlePassLandingPageBase");
static_assert(offsetof(UBattlePassLandingPageBase, LastHoveredPageButton) == 0x0004B8, "Member 'UBattlePassLandingPageBase::LastHoveredPageButton' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageBase, LandingPageButtonGroupBase) == 0x0004C0, "Member 'UBattlePassLandingPageBase::LandingPageButtonGroupBase' has a wrong offset!");

class UBattlePassLandingPageButton : public UCommonButtonBase
{
public:
	EBattlePassView                               SubPageType;
	EBattlePassFeatures                           FeatureType;
	uint8                                         Pad_13E2[0x6];
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo;
	bool                                          bNeedsBattlePass;
	uint8                                         Pad_1479[0x7];
	class UFortChallengeBundleScheduleDefinition* DelayQuestSchedule;
	int32                                         DelayDaysSinceSeasonStart;
	uint8                                         Pad_148C[0x4];
	class UFortItemDefinition*                    RequiredItem;
	class UFortBangWrapper_NUI*                   BangWrapper;
	bool                                          bUsesTelemetry;
	uint8                                         Pad_14A1[0x3];
	struct FIntPoint                              Telemetry_Size;
	struct FIntPoint                              Telemetry_Position;
	uint8                                         Pad_14B4[0x4];
	struct FBattlePassLandingPageButtonTexts      DefaultTexts;
	struct FBattlePassLandingPageButtonTexts      DelayedTexts;
	struct FBattlePassLandingPageButtonTexts      SubscribedTexts;
	struct FBattlePassLandingPageButtonDisplayBehaviorData DisplayBehaviorData;
	uint8                                         Pad_15A8[0xB8];

public:
	void OnDisplayDetailsUpdated(const struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);
	void OnSetTileImageMaterial(class UMaterialInstance* Material);
	void OnShowDisplayDetails();
	void OnSubscriptionOwnershipUpdated(const bool bOwnsSubsciption);
	void OnSubscriptionTextureLoaded(class UTexture2D* Texture);

	const struct FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassLandingPageButton">();
	}
	static class UBattlePassLandingPageButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassLandingPageButton>();
	}
};
static_assert(alignof(UBattlePassLandingPageButton) == 0x000010, "Wrong alignment on UBattlePassLandingPageButton");
static_assert(sizeof(UBattlePassLandingPageButton) == 0x001660, "Wrong size on UBattlePassLandingPageButton");
static_assert(offsetof(UBattlePassLandingPageButton, SubPageType) == 0x0013E0, "Member 'UBattlePassLandingPageButton::SubPageType' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, FeatureType) == 0x0013E1, "Member 'UBattlePassLandingPageButton::FeatureType' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, PreviewInfo) == 0x0013E8, "Member 'UBattlePassLandingPageButton::PreviewInfo' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, bNeedsBattlePass) == 0x001478, "Member 'UBattlePassLandingPageButton::bNeedsBattlePass' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, DelayQuestSchedule) == 0x001480, "Member 'UBattlePassLandingPageButton::DelayQuestSchedule' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, DelayDaysSinceSeasonStart) == 0x001488, "Member 'UBattlePassLandingPageButton::DelayDaysSinceSeasonStart' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, RequiredItem) == 0x001490, "Member 'UBattlePassLandingPageButton::RequiredItem' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, BangWrapper) == 0x001498, "Member 'UBattlePassLandingPageButton::BangWrapper' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, bUsesTelemetry) == 0x0014A0, "Member 'UBattlePassLandingPageButton::bUsesTelemetry' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, Telemetry_Size) == 0x0014A4, "Member 'UBattlePassLandingPageButton::Telemetry_Size' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, Telemetry_Position) == 0x0014AC, "Member 'UBattlePassLandingPageButton::Telemetry_Position' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, DefaultTexts) == 0x0014B8, "Member 'UBattlePassLandingPageButton::DefaultTexts' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, DelayedTexts) == 0x001500, "Member 'UBattlePassLandingPageButton::DelayedTexts' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, SubscribedTexts) == 0x001548, "Member 'UBattlePassLandingPageButton::SubscribedTexts' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageButton, DisplayBehaviorData) == 0x001590, "Member 'UBattlePassLandingPageButton::DisplayBehaviorData' has a wrong offset!");

class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{
public:
	TSubclassOf<class UFortBattlePassResourceCounter> ResourceCounterClass;
	class UDynamicEntryBox*                       EntryBox_ResourceCounters;

public:
	void OnShowMoreInfo(bool bShouldShowMoreInfo);
	void ShowResourcesInfoModal();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassResourcesWidgetBase">();
	}
	static class UFortBattlePassResourcesWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassResourcesWidgetBase>();
	}
};
static_assert(alignof(UFortBattlePassResourcesWidgetBase) == 0x000008, "Wrong alignment on UFortBattlePassResourcesWidgetBase");
static_assert(sizeof(UFortBattlePassResourcesWidgetBase) == 0x0002A0, "Wrong size on UFortBattlePassResourcesWidgetBase");
static_assert(offsetof(UFortBattlePassResourcesWidgetBase, ResourceCounterClass) == 0x000290, "Member 'UFortBattlePassResourcesWidgetBase::ResourceCounterClass' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourcesWidgetBase, EntryBox_ResourceCounters) == 0x000298, "Member 'UFortBattlePassResourcesWidgetBase::EntryBox_ResourceCounters' has a wrong offset!");

class UBattlePassRewardPageBase : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x108];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassRewardPageBase">();
	}
	static class UBattlePassRewardPageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassRewardPageBase>();
	}
};
static_assert(alignof(UBattlePassRewardPageBase) == 0x000008, "Wrong alignment on UBattlePassRewardPageBase");
static_assert(sizeof(UBattlePassRewardPageBase) == 0x0004B0, "Wrong size on UBattlePassRewardPageBase");

class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{
public:
	uint8                                         Pad_268[0x20];
	class UProgressBar*                           ProgressBar;
	class UFortDynamicEntryBox*                   FortDynamicEntryBox_Items;
	class URichTextBlock*                         Text_CategoryTitle;
	class UFortBattlePassTile*                    PreviewedTile;
	int32                                         OwnedRewards;
	uint8                                         Pad_2AC[0x74];

public:
	void FocusTile(const int32 Index_0);
	void OnLockedProgressUpdated(const int32 CurrentlyOwnedBeforeCategory, const int32 TotalRewardsBeforeCategory, const float LockedProgress);
	void OnLockedStateChanged(const bool bCategoryLocked);
	void OnOwnedTilesUpdated(const int32 CurrentlyOwnedRewards, const int32 TotalRewards, const float CategoryProgress);
	void SetPreviewedTile(const int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassCustomSkinCategoryTile">();
	}
	static class UFortBattlePassCustomSkinCategoryTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassCustomSkinCategoryTile>();
	}
};
static_assert(alignof(UFortBattlePassCustomSkinCategoryTile) == 0x000008, "Wrong alignment on UFortBattlePassCustomSkinCategoryTile");
static_assert(sizeof(UFortBattlePassCustomSkinCategoryTile) == 0x000320, "Wrong size on UFortBattlePassCustomSkinCategoryTile");
static_assert(offsetof(UFortBattlePassCustomSkinCategoryTile, ProgressBar) == 0x000288, "Member 'UFortBattlePassCustomSkinCategoryTile::ProgressBar' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinCategoryTile, FortDynamicEntryBox_Items) == 0x000290, "Member 'UFortBattlePassCustomSkinCategoryTile::FortDynamicEntryBox_Items' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinCategoryTile, Text_CategoryTitle) == 0x000298, "Member 'UFortBattlePassCustomSkinCategoryTile::Text_CategoryTitle' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinCategoryTile, PreviewedTile) == 0x0002A0, "Member 'UFortBattlePassCustomSkinCategoryTile::PreviewedTile' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinCategoryTile, OwnedRewards) == 0x0002A8, "Member 'UFortBattlePassCustomSkinCategoryTile::OwnedRewards' has a wrong offset!");

class UBattlePassUIGameFeatureAction final : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UClass>                   BattlePassScreenClass;
	TSoftClassPtr<class UClass>                   BattlePassResourceWidgetClass;
	TSoftClassPtr<class UClass>                   BattlePassInfoModalClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassUIGameFeatureAction">();
	}
	static class UBattlePassUIGameFeatureAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassUIGameFeatureAction>();
	}
};
static_assert(alignof(UBattlePassUIGameFeatureAction) == 0x000008, "Wrong alignment on UBattlePassUIGameFeatureAction");
static_assert(sizeof(UBattlePassUIGameFeatureAction) == 0x0000A0, "Wrong size on UBattlePassUIGameFeatureAction");
static_assert(offsetof(UBattlePassUIGameFeatureAction, BattlePassScreenClass) == 0x000028, "Member 'UBattlePassUIGameFeatureAction::BattlePassScreenClass' has a wrong offset!");
static_assert(offsetof(UBattlePassUIGameFeatureAction, BattlePassResourceWidgetClass) == 0x000050, "Member 'UBattlePassUIGameFeatureAction::BattlePassResourceWidgetClass' has a wrong offset!");
static_assert(offsetof(UBattlePassUIGameFeatureAction, BattlePassInfoModalClass) == 0x000078, "Member 'UBattlePassUIGameFeatureAction::BattlePassInfoModalClass' has a wrong offset!");

class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x190];
	class UScrollBox*                             ScrollBox_Categories;
	class UFortDynamicEntryBox*                   FortDynamicEntryBox_Categories;
	uint8                                         Pad_548[0x8];
	class UBattlePassEnabledInputData*            EquipEnabledData;
	uint8                                         Pad_558[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassCustomSkinPageBase">();
	}
	static class UFortBattlePassCustomSkinPageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassCustomSkinPageBase>();
	}
};
static_assert(alignof(UFortBattlePassCustomSkinPageBase) == 0x000008, "Wrong alignment on UFortBattlePassCustomSkinPageBase");
static_assert(sizeof(UFortBattlePassCustomSkinPageBase) == 0x000560, "Wrong size on UFortBattlePassCustomSkinPageBase");
static_assert(offsetof(UFortBattlePassCustomSkinPageBase, ScrollBox_Categories) == 0x000538, "Member 'UFortBattlePassCustomSkinPageBase::ScrollBox_Categories' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinPageBase, FortDynamicEntryBox_Categories) == 0x000540, "Member 'UFortBattlePassCustomSkinPageBase::FortDynamicEntryBox_Categories' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinPageBase, EquipEnabledData) == 0x000550, "Member 'UFortBattlePassCustomSkinPageBase::EquipEnabledData' has a wrong offset!");

class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x108];
	class UCommonButtonBase*                      Button_Addition;
	class UCommonButtonBase*                      Button_Subtraction;
	class UDynamicEntryBox*                       DynamicEntryBox_TilesEntries;
	class UCommonVisibilitySwitcher*              Switcher_BottomButtons;
	class UFortHoldableButton*                    Button_BuyLevels;
	class UFortHoldableButton*                    Button_ClaimReward;
	class UAthenaSeasonItemData_BattleStar*       SeasonData_BattleStar;
	uint8                                         Pad_4E8[0x18];
	class UAthenaSeasonItemDefinition*            SeasonItemDefinition;
	class UFortBattlePassTile*                    FocusedReward;
	uint8                                         Pad_510[0x18];
	class UScrollBox*                             ScrollBox_Pages;

public:
	void HandleUserScrolled(float ScrollAmount);
	void OnCostChanged(const int32 Cost);
	void OnPageRangeChanged(const int32 FromPage, const int32 ToPage);
	void OnRewardCountChanged(const int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassBulkBuyPageBase">();
	}
	static class UFortBattlePassBulkBuyPageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassBulkBuyPageBase>();
	}
};
static_assert(alignof(UFortBattlePassBulkBuyPageBase) == 0x000008, "Wrong alignment on UFortBattlePassBulkBuyPageBase");
static_assert(sizeof(UFortBattlePassBulkBuyPageBase) == 0x000530, "Wrong size on UFortBattlePassBulkBuyPageBase");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, Button_Addition) == 0x0004B0, "Member 'UFortBattlePassBulkBuyPageBase::Button_Addition' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, Button_Subtraction) == 0x0004B8, "Member 'UFortBattlePassBulkBuyPageBase::Button_Subtraction' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, DynamicEntryBox_TilesEntries) == 0x0004C0, "Member 'UFortBattlePassBulkBuyPageBase::DynamicEntryBox_TilesEntries' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, Switcher_BottomButtons) == 0x0004C8, "Member 'UFortBattlePassBulkBuyPageBase::Switcher_BottomButtons' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, Button_BuyLevels) == 0x0004D0, "Member 'UFortBattlePassBulkBuyPageBase::Button_BuyLevels' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, Button_ClaimReward) == 0x0004D8, "Member 'UFortBattlePassBulkBuyPageBase::Button_ClaimReward' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, SeasonData_BattleStar) == 0x0004E0, "Member 'UFortBattlePassBulkBuyPageBase::SeasonData_BattleStar' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, SeasonItemDefinition) == 0x000500, "Member 'UFortBattlePassBulkBuyPageBase::SeasonItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, FocusedReward) == 0x000508, "Member 'UFortBattlePassBulkBuyPageBase::FocusedReward' has a wrong offset!");
static_assert(offsetof(UFortBattlePassBulkBuyPageBase, ScrollBox_Pages) == 0x000528, "Member 'UFortBattlePassBulkBuyPageBase::ScrollBox_Pages' has a wrong offset!");

class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x10];

public:
	void OnStateChanged(const bool bNewIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassCheckBoxButton">();
	}
	static class UFortBattlePassCheckBoxButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassCheckBoxButton>();
	}
};
static_assert(alignof(UFortBattlePassCheckBoxButton) == 0x000010, "Wrong alignment on UFortBattlePassCheckBoxButton");
static_assert(sizeof(UFortBattlePassCheckBoxButton) == 0x0013F0, "Wrong size on UFortBattlePassCheckBoxButton");

class UFortBattlePassContext final : public UBlueprintContextBase
{
public:
	uint8                                         Pad_30[0x8];
	TArray<class UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources;
	TArray<class UFortPersistentResourceItemDefinition*> AllSeasonalResources;
	TMap<ERewardPageType, struct FSeasonalResourceList> RewardPageSeasonalResources;

public:
	bool CanPurchaseBattlePassLevel() const;
	class FText GetCurrentChapterAsText(const bool bFullText) const;
	class FText GetCurrentSeasonNumberAsText(const bool bFullText) const;
	class FText GetDefaultDisclaimerText() const;
	class FText GetLevelPurchaseDisclaimerText() const;
	TArray<struct FSeasonCurrencyMcpData> GetSeasonalCurrencies() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassContext">();
	}
	static class UFortBattlePassContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassContext>();
	}
};
static_assert(alignof(UFortBattlePassContext) == 0x000008, "Wrong alignment on UFortBattlePassContext");
static_assert(sizeof(UFortBattlePassContext) == 0x0000A8, "Wrong size on UFortBattlePassContext");
static_assert(offsetof(UFortBattlePassContext, CustomizationPageSeasonalResources) == 0x000038, "Member 'UFortBattlePassContext::CustomizationPageSeasonalResources' has a wrong offset!");
static_assert(offsetof(UFortBattlePassContext, AllSeasonalResources) == 0x000048, "Member 'UFortBattlePassContext::AllSeasonalResources' has a wrong offset!");
static_assert(offsetof(UFortBattlePassContext, RewardPageSeasonalResources) == 0x000058, "Member 'UFortBattlePassContext::RewardPageSeasonalResources' has a wrong offset!");

class UFortBattlePassCurrencyPanel final : public UFortBattlePassResourcesWidgetBase
{
public:
	class UHorizontalBox*                         HBox_BattleStarContainer;
	class UCommonTextBlock*                       Text_BattleStar;
	class UHorizontalBox*                         HBox_CustomSkinContainer;
	class UCommonTextBlock*                       Text_CustomSkin;
	uint8                                         Pad_2C0[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassCurrencyPanel">();
	}
	static class UFortBattlePassCurrencyPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassCurrencyPanel>();
	}
};
static_assert(alignof(UFortBattlePassCurrencyPanel) == 0x000008, "Wrong alignment on UFortBattlePassCurrencyPanel");
static_assert(sizeof(UFortBattlePassCurrencyPanel) == 0x0002E0, "Wrong size on UFortBattlePassCurrencyPanel");
static_assert(offsetof(UFortBattlePassCurrencyPanel, HBox_BattleStarContainer) == 0x0002A0, "Member 'UFortBattlePassCurrencyPanel::HBox_BattleStarContainer' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCurrencyPanel, Text_BattleStar) == 0x0002A8, "Member 'UFortBattlePassCurrencyPanel::Text_BattleStar' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCurrencyPanel, HBox_CustomSkinContainer) == 0x0002B0, "Member 'UFortBattlePassCurrencyPanel::HBox_CustomSkinContainer' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCurrencyPanel, Text_CustomSkin) == 0x0002B8, "Member 'UFortBattlePassCurrencyPanel::Text_CustomSkin' has a wrong offset!");

class UFortBattlePassDynamicIcon : public UUserWidget
{
public:
	TSoftObjectPtr<class UObject>                 BattlePassDefaultIcon;
	TSoftObjectPtr<class UObject>                 BattlePassOwnedIcon;
	class UFortLazyImage*                         LazyImage_BattlePassIcon;

public:
	void OnBattlePassInfoUpdated(const bool bOwnsBattlePass) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassDynamicIcon">();
	}
	static class UFortBattlePassDynamicIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassDynamicIcon>();
	}
};
static_assert(alignof(UFortBattlePassDynamicIcon) == 0x000008, "Wrong alignment on UFortBattlePassDynamicIcon");
static_assert(sizeof(UFortBattlePassDynamicIcon) == 0x0002C0, "Wrong size on UFortBattlePassDynamicIcon");
static_assert(offsetof(UFortBattlePassDynamicIcon, BattlePassDefaultIcon) == 0x000268, "Member 'UFortBattlePassDynamicIcon::BattlePassDefaultIcon' has a wrong offset!");
static_assert(offsetof(UFortBattlePassDynamicIcon, BattlePassOwnedIcon) == 0x000290, "Member 'UFortBattlePassDynamicIcon::BattlePassOwnedIcon' has a wrong offset!");
static_assert(offsetof(UFortBattlePassDynamicIcon, LazyImage_BattlePassIcon) == 0x0002B8, "Member 'UFortBattlePassDynamicIcon::LazyImage_BattlePassIcon' has a wrong offset!");

class UFortBattlePassLevelCount : public UUserWidget
{
public:
	class UCommonTextBlock*                       Text_LevelCount;
	uint8                                         Pad_270[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassLevelCount">();
	}
	static class UFortBattlePassLevelCount* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassLevelCount>();
	}
};
static_assert(alignof(UFortBattlePassLevelCount) == 0x000008, "Wrong alignment on UFortBattlePassLevelCount");
static_assert(sizeof(UFortBattlePassLevelCount) == 0x000278, "Wrong size on UFortBattlePassLevelCount");
static_assert(offsetof(UFortBattlePassLevelCount, Text_LevelCount) == 0x000268, "Member 'UFortBattlePassLevelCount::Text_LevelCount' has a wrong offset!");

class UFortBattlePassPrerequisiteHeader : public UUserWidget
{
public:
	class UTextBlock*                             Text_Prerequisite;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassPrerequisiteHeader">();
	}
	static class UFortBattlePassPrerequisiteHeader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassPrerequisiteHeader>();
	}
};
static_assert(alignof(UFortBattlePassPrerequisiteHeader) == 0x000008, "Wrong alignment on UFortBattlePassPrerequisiteHeader");
static_assert(sizeof(UFortBattlePassPrerequisiteHeader) == 0x000270, "Wrong size on UFortBattlePassPrerequisiteHeader");
static_assert(offsetof(UFortBattlePassPrerequisiteHeader, Text_Prerequisite) == 0x000268, "Member 'UFortBattlePassPrerequisiteHeader::Text_Prerequisite' has a wrong offset!");

class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UCommonButtonBase*                      Button_Addition;
	class UCommonButtonBase*                      Button_BatchAddition;
	class UCommonButtonBase*                      Button_Subtraction;
	class UCommonButtonBase*                      Button_BatchSubtraction;
	class UCommonVisibilitySwitcher*              Switcher_PurchaseButtons;
	class UFortHoldableButton*                    Button_Purchase;
	class UCommonButtonBase*                      Button_GetVBucks;
	class UCommonButtonBase*                      Button_ReloadMtx;
	class UCommonButtonBase*                      Button_Back;
	class UFortBattlePassCheckBoxButton*          CheckBox_Bundle;
	class UCommonButtonBase*                      Button_CloseMobile;
	int32                                         CurrentLevel;
	bool                                          bIsOfferActive;
	uint8                                         Pad_40D[0x3];
	int32                                         CurrentVBucks;
	int32                                         CurrentBattleStars;
	int32                                         BatchNum;
	bool                                          bOfferUnavailable;
	uint8                                         Pad_41D[0x3];
	int32                                         MaxBundleLevel;
	int32                                         MaxLevel;
	int32                                         MaxLevelPurchases;
	int32                                         BundleAmount;
	class UFortItemDefinition*                    LevelPreviewItem;
	class UAthenaSeasonItemData_BattleStar*       BattleStarData;
	uint8                                         Pad_440[0x28];

public:
	void HandlePurchaseComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId);
	void HandlePurchaseMultiComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems, const TArray<class FString>& OfferIdList);
	bool IsReloadMtxEnabled();
	void OnAmountChangeButtonClicked();
	void OnOfferUnavailable();
	void OnPurchaseAmountChanged(const int32 NewAmount, const int32 LevelsLeft);
	void OnTotalPriceChanged(const int32 NewPrice);
	void OnUpdatePageUnlockText(const class FText& PageUnlockText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassPurchaseResourcesWidget">();
	}
	static class UFortBattlePassPurchaseResourcesWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassPurchaseResourcesWidget>();
	}
};
static_assert(alignof(UFortBattlePassPurchaseResourcesWidget) == 0x000008, "Wrong alignment on UFortBattlePassPurchaseResourcesWidget");
static_assert(sizeof(UFortBattlePassPurchaseResourcesWidget) == 0x000468, "Wrong size on UFortBattlePassPurchaseResourcesWidget");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_Addition) == 0x0003B0, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_Addition' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_BatchAddition) == 0x0003B8, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_BatchAddition' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_Subtraction) == 0x0003C0, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_Subtraction' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_BatchSubtraction) == 0x0003C8, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_BatchSubtraction' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Switcher_PurchaseButtons) == 0x0003D0, "Member 'UFortBattlePassPurchaseResourcesWidget::Switcher_PurchaseButtons' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_Purchase) == 0x0003D8, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_Purchase' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_GetVBucks) == 0x0003E0, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_GetVBucks' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_ReloadMtx) == 0x0003E8, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_ReloadMtx' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_Back) == 0x0003F0, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, CheckBox_Bundle) == 0x0003F8, "Member 'UFortBattlePassPurchaseResourcesWidget::CheckBox_Bundle' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, Button_CloseMobile) == 0x000400, "Member 'UFortBattlePassPurchaseResourcesWidget::Button_CloseMobile' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, CurrentLevel) == 0x000408, "Member 'UFortBattlePassPurchaseResourcesWidget::CurrentLevel' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, bIsOfferActive) == 0x00040C, "Member 'UFortBattlePassPurchaseResourcesWidget::bIsOfferActive' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, CurrentVBucks) == 0x000410, "Member 'UFortBattlePassPurchaseResourcesWidget::CurrentVBucks' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, CurrentBattleStars) == 0x000414, "Member 'UFortBattlePassPurchaseResourcesWidget::CurrentBattleStars' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, BatchNum) == 0x000418, "Member 'UFortBattlePassPurchaseResourcesWidget::BatchNum' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, bOfferUnavailable) == 0x00041C, "Member 'UFortBattlePassPurchaseResourcesWidget::bOfferUnavailable' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, MaxBundleLevel) == 0x000420, "Member 'UFortBattlePassPurchaseResourcesWidget::MaxBundleLevel' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, MaxLevel) == 0x000424, "Member 'UFortBattlePassPurchaseResourcesWidget::MaxLevel' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, MaxLevelPurchases) == 0x000428, "Member 'UFortBattlePassPurchaseResourcesWidget::MaxLevelPurchases' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, BundleAmount) == 0x00042C, "Member 'UFortBattlePassPurchaseResourcesWidget::BundleAmount' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, LevelPreviewItem) == 0x000430, "Member 'UFortBattlePassPurchaseResourcesWidget::LevelPreviewItem' has a wrong offset!");
static_assert(offsetof(UFortBattlePassPurchaseResourcesWidget, BattleStarData) == 0x000438, "Member 'UFortBattlePassPurchaseResourcesWidget::BattleStarData' has a wrong offset!");

class UFortBattlePassResourceCounter : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       Text_ResourceName;
	class UFortLazyImage*                         LazyImage_ResourceIcon;
	class UCommonTextBlock*                       Text_ResourceCount;
	class UFortPersistentResourceItemDefinition*  CurrentResource;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassResourceCounter">();
	}
	static class UFortBattlePassResourceCounter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassResourceCounter>();
	}
};
static_assert(alignof(UFortBattlePassResourceCounter) == 0x000008, "Wrong alignment on UFortBattlePassResourceCounter");
static_assert(sizeof(UFortBattlePassResourceCounter) == 0x0002B0, "Wrong size on UFortBattlePassResourceCounter");
static_assert(offsetof(UFortBattlePassResourceCounter, Text_ResourceName) == 0x000290, "Member 'UFortBattlePassResourceCounter::Text_ResourceName' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourceCounter, LazyImage_ResourceIcon) == 0x000298, "Member 'UFortBattlePassResourceCounter::LazyImage_ResourceIcon' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourceCounter, Text_ResourceCount) == 0x0002A0, "Member 'UFortBattlePassResourceCounter::Text_ResourceCount' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourceCounter, CurrentResource) == 0x0002A8, "Member 'UFortBattlePassResourceCounter::CurrentResource' has a wrong offset!");

class UFortBattlePassRewardGrid final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x68];
	TSubclassOf<class UFortBattlePassTileBase>    GridTileClass;
	TSubclassOf<class UFortBattlePassTileBase>    GridEmptyTileClass;
	struct FVector2D                              GridCellPadding;
	class UFortBattlePassRewardGridHeader*        PageHeader;
	class UGridPanel*                             GridPanel_Rewards;
	class UFortBattlePassTileBase*                DefaultFocusTile;
	TWeakObjectPtr<class UCommonButtonBase>       LastFocusedTile;
	uint8                                         Pad_450[0x28];

public:
	void OnPageSelected();
	void OnPageUnselected();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassRewardGrid">();
	}
	static class UFortBattlePassRewardGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassRewardGrid>();
	}
};
static_assert(alignof(UFortBattlePassRewardGrid) == 0x000008, "Wrong alignment on UFortBattlePassRewardGrid");
static_assert(sizeof(UFortBattlePassRewardGrid) == 0x000478, "Wrong size on UFortBattlePassRewardGrid");
static_assert(offsetof(UFortBattlePassRewardGrid, GridTileClass) == 0x000410, "Member 'UFortBattlePassRewardGrid::GridTileClass' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardGrid, GridEmptyTileClass) == 0x000418, "Member 'UFortBattlePassRewardGrid::GridEmptyTileClass' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardGrid, GridCellPadding) == 0x000420, "Member 'UFortBattlePassRewardGrid::GridCellPadding' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardGrid, PageHeader) == 0x000430, "Member 'UFortBattlePassRewardGrid::PageHeader' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardGrid, GridPanel_Rewards) == 0x000438, "Member 'UFortBattlePassRewardGrid::GridPanel_Rewards' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardGrid, DefaultFocusTile) == 0x000440, "Member 'UFortBattlePassRewardGrid::DefaultFocusTile' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardGrid, LastFocusedTile) == 0x000448, "Member 'UFortBattlePassRewardGrid::LastFocusedTile' has a wrong offset!");

class UFortBattlePassRewardGridHeader final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x8];

public:
	void OnBattlePassLevelSet(const int32 BattlePassLevel);
	void OnPageLocked(const int32 RequiredLevel, const int32 RequiredRewards, const bool IsTimeLocked, const struct FTimespan& TimeRemaining);
	void OnPageNumberSet(const int32 InPageNumber);
	void OnPageUnlocked(const int32 PurchasedRewards, const int32 TotalRewards);
	void OnSetPageCustomName(const class FText& CustomName);
	void OnSetPageType(const ERewardPageType PageType);

	int32 GetPageNumber() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassRewardGridHeader">();
	}
	static class UFortBattlePassRewardGridHeader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassRewardGridHeader>();
	}
};
static_assert(alignof(UFortBattlePassRewardGridHeader) == 0x000008, "Wrong alignment on UFortBattlePassRewardGridHeader");
static_assert(sizeof(UFortBattlePassRewardGridHeader) == 0x000270, "Wrong size on UFortBattlePassRewardGridHeader");

class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x40];
	TSubclassOf<class UFortBattlePassTileBase>    RewardTileClass;
	TSubclassOf<class UFortBattlePassTileBase>    RewardEmptyTileClass;
	TSubclassOf<class UFortBattlePassPrerequisiteHeader> PrerequisiteHeaderClass;
	struct FVector2D                              GridCellPadding;
	class UGridPanel*                             GridPanel_Rewards;
	class UFortBattlePassTileBase*                DefaultFocusTile;
	TWeakObjectPtr<class UCommonButtonBase>       LastFocusedTile;
	uint8                                         Pad_428[0x10];

public:
	void OnPageSelected();
	void OnPageUnselected();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassRewardTrack">();
	}
	static class UFortBattlePassRewardTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassRewardTrack>();
	}
};
static_assert(alignof(UFortBattlePassRewardTrack) == 0x000008, "Wrong alignment on UFortBattlePassRewardTrack");
static_assert(sizeof(UFortBattlePassRewardTrack) == 0x000438, "Wrong size on UFortBattlePassRewardTrack");
static_assert(offsetof(UFortBattlePassRewardTrack, RewardTileClass) == 0x0003E8, "Member 'UFortBattlePassRewardTrack::RewardTileClass' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardTrack, RewardEmptyTileClass) == 0x0003F0, "Member 'UFortBattlePassRewardTrack::RewardEmptyTileClass' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardTrack, PrerequisiteHeaderClass) == 0x0003F8, "Member 'UFortBattlePassRewardTrack::PrerequisiteHeaderClass' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardTrack, GridCellPadding) == 0x000400, "Member 'UFortBattlePassRewardTrack::GridCellPadding' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardTrack, GridPanel_Rewards) == 0x000410, "Member 'UFortBattlePassRewardTrack::GridPanel_Rewards' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardTrack, DefaultFocusTile) == 0x000418, "Member 'UFortBattlePassRewardTrack::DefaultFocusTile' has a wrong offset!");
static_assert(offsetof(UFortBattlePassRewardTrack, LastFocusedTile) == 0x000420, "Member 'UFortBattlePassRewardTrack::LastFocusedTile' has a wrong offset!");

class UFortBattlePassTileBase : public UFortHoldableButton
{
public:
	uint8                                         Pad_1478[0x8];
	ERewardPageType                               RewardPageType;
	uint8                                         Pad_1481[0x7];
	class USizeBox*                               SizeBox_Content;
	TMap<class FName, struct FLinearColor>        TileColors;
	struct FLinearColor                           OverlayDimColor;
	struct FVector2D                              TileDesiredCellSpan;
	float                                         UnitHeight;
	float                                         UnitWidth;
	uint8                                         Pad_1508[0x38];

public:
	void OnPeeked();
	void OnRevealed();
	void OnSetRequiresBattlePass(const bool bRequiresBP);
	void OnSetTileColors();
	void OnSizeChanged(const struct FVector2D& NewSize);
	void OnStateChanged(const EBattlePassTileAvailabilityStates NewState);
	void SetSize(const EPageItemTileSize TileSize, const struct FVector2D& CellSpacing);
	void SetState(const EBattlePassTileAvailabilityStates NewState);

	bool AreAnyGrantedItemsEquipped() const;
	const EBattlePassTileAvailabilityStates GetState() const;
	bool IsAvailable() const;
	bool IsLocked() const;
	bool IsOwned() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassTileBase">();
	}
	static class UFortBattlePassTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassTileBase>();
	}
};
static_assert(alignof(UFortBattlePassTileBase) == 0x000010, "Wrong alignment on UFortBattlePassTileBase");
static_assert(sizeof(UFortBattlePassTileBase) == 0x001540, "Wrong size on UFortBattlePassTileBase");
static_assert(offsetof(UFortBattlePassTileBase, RewardPageType) == 0x001480, "Member 'UFortBattlePassTileBase::RewardPageType' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTileBase, SizeBox_Content) == 0x001488, "Member 'UFortBattlePassTileBase::SizeBox_Content' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTileBase, TileColors) == 0x001490, "Member 'UFortBattlePassTileBase::TileColors' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTileBase, OverlayDimColor) == 0x0014E0, "Member 'UFortBattlePassTileBase::OverlayDimColor' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTileBase, TileDesiredCellSpan) == 0x0014F0, "Member 'UFortBattlePassTileBase::TileDesiredCellSpan' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTileBase, UnitHeight) == 0x001500, "Member 'UFortBattlePassTileBase::UnitHeight' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTileBase, UnitWidth) == 0x001504, "Member 'UFortBattlePassTileBase::UnitWidth' has a wrong offset!");

class UFortBattlePassTile : public UFortBattlePassTileBase
{
public:
	uint8                                         Pad_1540[0x18];
	class UFortLazyImage*                         Image_RewardItem;
	class UImage*                                 Image_Currency;
	bool                                          bIsOnBulkBuyMode;
	uint8                                         Pad_1569[0x57];

public:
	void OnAffordabilityChanged(const bool bHasEnougCurrency);
	void OnHighlighted();
	void OnLockedProgressUpdated(const float Progress, const int32 CurrentlyOwnedRewards, const int32 NeededRewards);
	void OnLockedStateUpdated(const bool OwnsBattlePass, const bool ParentUnlocked, const bool HasRemainingPrerequisites, const bool bIsDelayed);
	void OnPreviewed();
	void OnSetCurrencyAndPrice(const EBattlePassCurrencyType Currency, const int32 Price);
	void OnSetTrack(const bool bIsFreeTrack, const bool bOwnsBattlePass);
	void OnTilePreviewCycled();
	void OnUnhighlighted();
	void OnUnpreviewed();

	bool HasPrerequisites() const;
	bool IsAffordable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassTile">();
	}
	static class UFortBattlePassTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassTile>();
	}
};
static_assert(alignof(UFortBattlePassTile) == 0x000010, "Wrong alignment on UFortBattlePassTile");
static_assert(sizeof(UFortBattlePassTile) == 0x0015C0, "Wrong size on UFortBattlePassTile");
static_assert(offsetof(UFortBattlePassTile, Image_RewardItem) == 0x001558, "Member 'UFortBattlePassTile::Image_RewardItem' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTile, Image_Currency) == 0x001560, "Member 'UFortBattlePassTile::Image_Currency' has a wrong offset!");
static_assert(offsetof(UFortBattlePassTile, bIsOnBulkBuyMode) == 0x001568, "Member 'UFortBattlePassTile::bIsOnBulkBuyMode' has a wrong offset!");

class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                   Text_Tooltip;
	uint8                                         Pad_298[0x8];

public:
	void HideTooltip();
	void SetText(const class FText& Text);
	void SetTooltipEnabled(const bool bEnable);
	void ShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassTutorialTooltip">();
	}
	static class UFortBattlePassTutorialTooltip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassTutorialTooltip>();
	}
};
static_assert(alignof(UFortBattlePassTutorialTooltip) == 0x000008, "Wrong alignment on UFortBattlePassTutorialTooltip");
static_assert(sizeof(UFortBattlePassTutorialTooltip) == 0x0002A0, "Wrong size on UFortBattlePassTutorialTooltip");
static_assert(offsetof(UFortBattlePassTutorialTooltip, Text_Tooltip) == 0x000290, "Member 'UFortBattlePassTutorialTooltip::Text_Tooltip' has a wrong offset!");

class URebootRallyQuestPanel final : public UUserWidget
{
public:
	void OnRebootRallyEligibilityUpdated(bool bEligible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RebootRallyQuestPanel">();
	}
	static class URebootRallyQuestPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<URebootRallyQuestPanel>();
	}
};
static_assert(alignof(URebootRallyQuestPanel) == 0x000008, "Wrong alignment on URebootRallyQuestPanel");
static_assert(sizeof(URebootRallyQuestPanel) == 0x000268, "Wrong size on URebootRallyQuestPanel");

}
