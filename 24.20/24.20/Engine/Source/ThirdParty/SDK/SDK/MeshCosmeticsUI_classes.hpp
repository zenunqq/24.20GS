#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "MeshCosmeticsUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UFortVariantSprayCustomizerConfig final : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FFortVariantSprayCustomizerCosmeticOptions> SprayCustomizerOptions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVariantSprayCustomizerConfig">();
	}
	static class UFortVariantSprayCustomizerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVariantSprayCustomizerConfig>();
	}
};
static_assert(alignof(UFortVariantSprayCustomizerConfig) == 0x000008, "Wrong alignment on UFortVariantSprayCustomizerConfig");
static_assert(sizeof(UFortVariantSprayCustomizerConfig) == 0x000080, "Wrong size on UFortVariantSprayCustomizerConfig");
static_assert(offsetof(UFortVariantSprayCustomizerConfig, SprayCustomizerOptions) == 0x000030, "Member 'UFortVariantSprayCustomizerConfig::SprayCustomizerOptions' has a wrong offset!");

class UFortVariantRedirectorTile final : public UFortVariantEditorWidgetBase
{
public:
	class UDynamicEntryBox*                       EntryBox_VariantOptions;
	class UCommonTextBlock*                       Text_VariantName;
	TSoftClassPtr<class UClass>                   SprayCustomizerClass;
	class UFortVariantSprayCustomizerConfig*      SprayCustomizerConfig;
	struct FDataTableRowHandle                    ClearAllSlotsInputAction;
	struct FDataTableRowHandle                    RandomizeSpraysInputAction;
	TWeakObjectPtr<class UAthenaCosmeticItemDefinition> ItemDefinition;
	TArray<struct FFortVariantRedirectorTileLoadedEmoteToRandomize> LoadedEmotesToRandomize;
	uint8                                         Pad_3E8[0x68];

public:
	class UWidget* HandleBoundaryNavigation(EUINavigation InNavigation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVariantRedirectorTile">();
	}
	static class UFortVariantRedirectorTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVariantRedirectorTile>();
	}
};
static_assert(alignof(UFortVariantRedirectorTile) == 0x000008, "Wrong alignment on UFortVariantRedirectorTile");
static_assert(sizeof(UFortVariantRedirectorTile) == 0x000450, "Wrong size on UFortVariantRedirectorTile");
static_assert(offsetof(UFortVariantRedirectorTile, EntryBox_VariantOptions) == 0x000370, "Member 'UFortVariantRedirectorTile::EntryBox_VariantOptions' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, Text_VariantName) == 0x000378, "Member 'UFortVariantRedirectorTile::Text_VariantName' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, SprayCustomizerClass) == 0x000380, "Member 'UFortVariantRedirectorTile::SprayCustomizerClass' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, SprayCustomizerConfig) == 0x0003A8, "Member 'UFortVariantRedirectorTile::SprayCustomizerConfig' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, ClearAllSlotsInputAction) == 0x0003B0, "Member 'UFortVariantRedirectorTile::ClearAllSlotsInputAction' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, RandomizeSpraysInputAction) == 0x0003C0, "Member 'UFortVariantRedirectorTile::RandomizeSpraysInputAction' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, ItemDefinition) == 0x0003D0, "Member 'UFortVariantRedirectorTile::ItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortVariantRedirectorTile, LoadedEmotesToRandomize) == 0x0003D8, "Member 'UFortVariantRedirectorTile::LoadedEmotesToRandomize' has a wrong offset!");

class UFortVariantRedirectorTileButton final : public UCommonButtonBase
{
public:
	class UFortLazyImage*                         LazyImage_TileIcon;
	uint8                                         Pad_13E8[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVariantRedirectorTileButton">();
	}
	static class UFortVariantRedirectorTileButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVariantRedirectorTileButton>();
	}
};
static_assert(alignof(UFortVariantRedirectorTileButton) == 0x000010, "Wrong alignment on UFortVariantRedirectorTileButton");
static_assert(sizeof(UFortVariantRedirectorTileButton) == 0x001410, "Wrong size on UFortVariantRedirectorTileButton");
static_assert(offsetof(UFortVariantRedirectorTileButton, LazyImage_TileIcon) == 0x0013E0, "Member 'UFortVariantRedirectorTileButton::LazyImage_TileIcon' has a wrong offset!");

class UFortVariantSprayCustomizer final : public UFortItemPreviewScreen
{
public:
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_Confirm;
	class UCommonButtonBase*                      Button_HideArchivedItems;
	class UCommonButtonBase*                      Button_ShowArchivedItems;
	class UWidget*                                Widget_ArchivedItemsButtons;
	class UCommonButtonBase*                      Button_SpraysTab;
	class UCommonButtonBase*                      Button_SettingsTab;
	class UCommonButtonBase*                      Button_TouchClose;
	class UCommonActionWidget*                    ActionWidget_TabLeft;
	class UCommonActionWidget*                    ActionWidget_TabRight;
	class UCommonActivatableWidgetSwitcher*       Switcher_Tabs;
	class UWidget*                                Widget_Sprays;
	class UWidget*                                Widget_Settings;
	class UFortVariantItemTexturePicker*          TexturePicker_Sprays;
	class UFortVariantSprayCustomizerSetting*     Setting_Saturation;
	class UFortVariantSprayCustomizerSetting*     Setting_Wear;
	class UFortVariantSprayCustomizerSetting*     Setting_Scale;
	struct FDataTableRowHandle                    TabLeftAction;
	struct FDataTableRowHandle                    TabRightAction;
	struct FGameplayTag                           ItemShopPreviewSceneChangerTag;
	uint8                                         Pad_71C[0x4];
	class UCommonButtonGroupLegacy*               TabButtonGroup;
	TWeakObjectPtr<class UAthenaCosmeticItemDefinition> ItemDefinition;
	class UFortCustomizableObjectSprayVariant*    SprayVariant;
	uint8                                         Pad_738[0x98];

public:
	void BP_SetChannelSlotIcon(const TSoftObjectPtr<class UObject>& ChannelSlotIcon);
	void BP_SetVariantEditorMode(const bool bIsLockerMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVariantSprayCustomizer">();
	}
	static class UFortVariantSprayCustomizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVariantSprayCustomizer>();
	}
};
static_assert(alignof(UFortVariantSprayCustomizer) == 0x000008, "Wrong alignment on UFortVariantSprayCustomizer");
static_assert(sizeof(UFortVariantSprayCustomizer) == 0x0007D0, "Wrong size on UFortVariantSprayCustomizer");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_Back) == 0x000670, "Member 'UFortVariantSprayCustomizer::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_Confirm) == 0x000678, "Member 'UFortVariantSprayCustomizer::Button_Confirm' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_HideArchivedItems) == 0x000680, "Member 'UFortVariantSprayCustomizer::Button_HideArchivedItems' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_ShowArchivedItems) == 0x000688, "Member 'UFortVariantSprayCustomizer::Button_ShowArchivedItems' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Widget_ArchivedItemsButtons) == 0x000690, "Member 'UFortVariantSprayCustomizer::Widget_ArchivedItemsButtons' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_SpraysTab) == 0x000698, "Member 'UFortVariantSprayCustomizer::Button_SpraysTab' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_SettingsTab) == 0x0006A0, "Member 'UFortVariantSprayCustomizer::Button_SettingsTab' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Button_TouchClose) == 0x0006A8, "Member 'UFortVariantSprayCustomizer::Button_TouchClose' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, ActionWidget_TabLeft) == 0x0006B0, "Member 'UFortVariantSprayCustomizer::ActionWidget_TabLeft' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, ActionWidget_TabRight) == 0x0006B8, "Member 'UFortVariantSprayCustomizer::ActionWidget_TabRight' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Switcher_Tabs) == 0x0006C0, "Member 'UFortVariantSprayCustomizer::Switcher_Tabs' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Widget_Sprays) == 0x0006C8, "Member 'UFortVariantSprayCustomizer::Widget_Sprays' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Widget_Settings) == 0x0006D0, "Member 'UFortVariantSprayCustomizer::Widget_Settings' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, TexturePicker_Sprays) == 0x0006D8, "Member 'UFortVariantSprayCustomizer::TexturePicker_Sprays' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Setting_Saturation) == 0x0006E0, "Member 'UFortVariantSprayCustomizer::Setting_Saturation' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Setting_Wear) == 0x0006E8, "Member 'UFortVariantSprayCustomizer::Setting_Wear' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, Setting_Scale) == 0x0006F0, "Member 'UFortVariantSprayCustomizer::Setting_Scale' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, TabLeftAction) == 0x0006F8, "Member 'UFortVariantSprayCustomizer::TabLeftAction' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, TabRightAction) == 0x000708, "Member 'UFortVariantSprayCustomizer::TabRightAction' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, ItemShopPreviewSceneChangerTag) == 0x000718, "Member 'UFortVariantSprayCustomizer::ItemShopPreviewSceneChangerTag' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, TabButtonGroup) == 0x000720, "Member 'UFortVariantSprayCustomizer::TabButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, ItemDefinition) == 0x000728, "Member 'UFortVariantSprayCustomizer::ItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizer, SprayVariant) == 0x000730, "Member 'UFortVariantSprayCustomizer::SprayVariant' has a wrong offset!");

class UFortVariantSprayCustomizerSetting final : public UUserWidget
{
public:
	class UAnalogSlider*                          Slider_Value;
	float                                         CommitDelay;
	uint8                                         Pad_274[0x34];

public:
	void BP_OnChangeValue(const float Value, const float NormalizedValue);
	void BP_OnSetConstraints(const struct FFloatRange& Constraints);
	void HandleSliderValueChanged(float NormalizedValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVariantSprayCustomizerSetting">();
	}
	static class UFortVariantSprayCustomizerSetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVariantSprayCustomizerSetting>();
	}
};
static_assert(alignof(UFortVariantSprayCustomizerSetting) == 0x000008, "Wrong alignment on UFortVariantSprayCustomizerSetting");
static_assert(sizeof(UFortVariantSprayCustomizerSetting) == 0x0002A8, "Wrong size on UFortVariantSprayCustomizerSetting");
static_assert(offsetof(UFortVariantSprayCustomizerSetting, Slider_Value) == 0x000268, "Member 'UFortVariantSprayCustomizerSetting::Slider_Value' has a wrong offset!");
static_assert(offsetof(UFortVariantSprayCustomizerSetting, CommitDelay) == 0x000270, "Member 'UFortVariantSprayCustomizerSetting::CommitDelay' has a wrong offset!");

}
