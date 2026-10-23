#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteConversationUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteConversationRuntime_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UFortConversationOptionBrief : public UCommonUserWidget
{
public:
	void ConfigureBP(const struct FConversationContext& ClientContext, const struct FClientConversationOptionEntry& OptionEntry, const int32 SelectedIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationOptionBrief">();
	}
	static class UFortConversationOptionBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationOptionBrief>();
	}
};
static_assert(alignof(UFortConversationOptionBrief) == 0x000008, "Wrong alignment on UFortConversationOptionBrief");
static_assert(sizeof(UFortConversationOptionBrief) == 0x000290, "Wrong size on UFortConversationOptionBrief");

class UFortItemTransactionBrief : public UFortConversationOptionBrief
{
public:
	uint8                                         Pad_290[0x8];
	class UFortTransactionStrip*                  TransactionStrip_Main;
	class UFortItem*                              DisplayItem;

public:
	void OnTransactionInfoReceived(class UFortItem* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemTransactionBrief">();
	}
	static class UFortItemTransactionBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemTransactionBrief>();
	}
};
static_assert(alignof(UFortItemTransactionBrief) == 0x000008, "Wrong alignment on UFortItemTransactionBrief");
static_assert(sizeof(UFortItemTransactionBrief) == 0x0002A8, "Wrong size on UFortItemTransactionBrief");
static_assert(offsetof(UFortItemTransactionBrief, TransactionStrip_Main) == 0x000298, "Member 'UFortItemTransactionBrief::TransactionStrip_Main' has a wrong offset!");
static_assert(offsetof(UFortItemTransactionBrief, DisplayItem) == 0x0002A0, "Member 'UFortItemTransactionBrief::DisplayItem' has a wrong offset!");

class UFortApplyAbilityBrief final : public UFortItemTransactionBrief
{
public:
	class FText                                   PurchaseServiceText;
	class UCommonRichTextBlock*                   Text_Display;

public:
	void OnAbleToPurchase();
	void OnUnableToPurchase(EPreventAbilityUseReason Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortApplyAbilityBrief">();
	}
	static class UFortApplyAbilityBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortApplyAbilityBrief>();
	}
};
static_assert(alignof(UFortApplyAbilityBrief) == 0x000008, "Wrong alignment on UFortApplyAbilityBrief");
static_assert(sizeof(UFortApplyAbilityBrief) == 0x0002C8, "Wrong size on UFortApplyAbilityBrief");
static_assert(offsetof(UFortApplyAbilityBrief, PurchaseServiceText) == 0x0002A8, "Member 'UFortApplyAbilityBrief::PurchaseServiceText' has a wrong offset!");
static_assert(offsetof(UFortApplyAbilityBrief, Text_Display) == 0x0002C0, "Member 'UFortApplyAbilityBrief::Text_Display' has a wrong offset!");

class UFortBasicBrief final : public UFortConversationOptionBrief
{
public:
	void OnChoiceTextReceived(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBasicBrief">();
	}
	static class UFortBasicBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBasicBrief>();
	}
};
static_assert(alignof(UFortBasicBrief) == 0x000008, "Wrong alignment on UFortBasicBrief");
static_assert(sizeof(UFortBasicBrief) == 0x000290, "Wrong size on UFortBasicBrief");

class UFortBasicItemBrief final : public UFortConversationOptionBrief
{
public:
	uint8                                         Pad_290[0x8];
	class UCommonTextBlock*                       Text_TitleBar;
	class UFortTransactionStrip*                  TransactionStrip_Main;
	class UFortItem*                              DisplayItem;
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;

public:
	void OnAbleToUse(const bool bShowWarningMessage);
	void OnItemInfoReceived(class UFortItem* Item, int32 StackSize);
	void OnUnableToUse(const class FText& Reason);
	void OnUpdateDescriptionText(const class FText& DescriptionText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBasicItemBrief">();
	}
	static class UFortBasicItemBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBasicItemBrief>();
	}
};
static_assert(alignof(UFortBasicItemBrief) == 0x000008, "Wrong alignment on UFortBasicItemBrief");
static_assert(sizeof(UFortBasicItemBrief) == 0x000300, "Wrong size on UFortBasicItemBrief");
static_assert(offsetof(UFortBasicItemBrief, Text_TitleBar) == 0x000298, "Member 'UFortBasicItemBrief::Text_TitleBar' has a wrong offset!");
static_assert(offsetof(UFortBasicItemBrief, TransactionStrip_Main) == 0x0002A0, "Member 'UFortBasicItemBrief::TransactionStrip_Main' has a wrong offset!");
static_assert(offsetof(UFortBasicItemBrief, DisplayItem) == 0x0002A8, "Member 'UFortBasicItemBrief::DisplayItem' has a wrong offset!");
static_assert(offsetof(UFortBasicItemBrief, ServiceConfigs) == 0x0002B0, "Member 'UFortBasicItemBrief::ServiceConfigs' has a wrong offset!");

class UFortBuyBrief final : public UFortItemTransactionBrief
{
public:
	void OnDisplayUnavailability(ECannotBuyReason CannotBuyReason);
	void OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBuyBrief">();
	}
	static class UFortBuyBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBuyBrief>();
	}
};
static_assert(alignof(UFortBuyBrief) == 0x000008, "Wrong alignment on UFortBuyBrief");
static_assert(sizeof(UFortBuyBrief) == 0x0002A8, "Wrong size on UFortBuyBrief");

class UFortConversationMarker final : public UFortActorIndicatorWidget
{
public:
	uint8                                         Pad_378[0x38];
	struct FVector                                InitialOffset;
	struct FVector                                ManualOffset;
	float                                         MessageBubbleDuration;
	float                                         LastTextBubbleDuration;
	bool                                          bSetCustomInteractionWidgetOnlyWhenNeeded;
	uint8                                         Pad_3E9[0x7];
	class UCommonVisibilitySwitcher*              Switcher_States;
	class UWidget*                                Overlay_PreviewState;
	uint8                                         Pad_400[0x8];
	class UFortConversationMessageWidget*         ConversationMessage_Main;
	uint8                                         Pad_410[0x8];
	class UCommonTextBlock*                       Text_ParticipantName;
	uint8                                         Pad_420[0x8];
	class UFortKeybindWidget*                     Keybind_Nameplate;
	class UImage*                                 NPCIcon;
	class UTexture2D*                             CustomDialogMarkerIndicatorIcon;
	class UTexture2D*                             DefaultDialogMarkerIndicatorIcon;
	uint8                                         Pad_448[0x8];

public:
	void OnCanInteract(bool bCanInteract);
	void OnConversationActorProximityChanged(EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent);
	void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange);
	void OnMessageShownOverActor(class AActor* OverActor);
	void OnSetIndicatedActor(class AActor* NewIndicatorActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationMarker">();
	}
	static class UFortConversationMarker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationMarker>();
	}
};
static_assert(alignof(UFortConversationMarker) == 0x000008, "Wrong alignment on UFortConversationMarker");
static_assert(sizeof(UFortConversationMarker) == 0x000450, "Wrong size on UFortConversationMarker");
static_assert(offsetof(UFortConversationMarker, InitialOffset) == 0x0003B0, "Member 'UFortConversationMarker::InitialOffset' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, ManualOffset) == 0x0003C8, "Member 'UFortConversationMarker::ManualOffset' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, MessageBubbleDuration) == 0x0003E0, "Member 'UFortConversationMarker::MessageBubbleDuration' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, LastTextBubbleDuration) == 0x0003E4, "Member 'UFortConversationMarker::LastTextBubbleDuration' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, bSetCustomInteractionWidgetOnlyWhenNeeded) == 0x0003E8, "Member 'UFortConversationMarker::bSetCustomInteractionWidgetOnlyWhenNeeded' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Switcher_States) == 0x0003F0, "Member 'UFortConversationMarker::Switcher_States' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Overlay_PreviewState) == 0x0003F8, "Member 'UFortConversationMarker::Overlay_PreviewState' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, ConversationMessage_Main) == 0x000408, "Member 'UFortConversationMarker::ConversationMessage_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Text_ParticipantName) == 0x000418, "Member 'UFortConversationMarker::Text_ParticipantName' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Keybind_Nameplate) == 0x000428, "Member 'UFortConversationMarker::Keybind_Nameplate' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, NPCIcon) == 0x000430, "Member 'UFortConversationMarker::NPCIcon' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, CustomDialogMarkerIndicatorIcon) == 0x000438, "Member 'UFortConversationMarker::CustomDialogMarkerIndicatorIcon' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, DefaultDialogMarkerIndicatorIcon) == 0x000440, "Member 'UFortConversationMarker::DefaultDialogMarkerIndicatorIcon' has a wrong offset!");

class UFortConversationMessageWidget final : public UUserWidget
{
public:
	void OnMainMessageSet(const class FText& NPCName, const class FText& MessageBody);
	void OnMessageHidden();
	void OnMessageShown();
	void OnPreviewMessageSet(const class FText& PreviewText);
	void SetPreviewMessage(const class FText& MessageToSet);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationMessageWidget">();
	}
	static class UFortConversationMessageWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationMessageWidget>();
	}
};
static_assert(alignof(UFortConversationMessageWidget) == 0x000008, "Wrong alignment on UFortConversationMessageWidget");
static_assert(sizeof(UFortConversationMessageWidget) == 0x000268, "Wrong size on UFortConversationMessageWidget");

class UFortConversationOption final : public UFortRadialPickerEntry
{
public:
	class USoundBase*                             OnOptionConfirmedSound;
	class USoundBase*                             OnOptionHoveredSound;
	class UCommonVisibilitySwitcher*              Switcher_DisplayAsset;
	TSoftObjectPtr<class UObject>                 DefaultSoftTaskIcon;
	TSoftObjectPtr<class USoundBase>              DefaultConfirmChoiceSound;
	TSoftObjectPtr<class USoundBase>              DefaultHoverChoiceSound;
	uint8                                         Pad_1520[0x30];

public:
	void OnOptionConfirmed();
	void OnSetupFromDisplayAsset(class UObject* DisplayAsset);
	void OnSetupFromItemDef(class UFortItem* Item);
	void OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex);

	bool IsAvailable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationOption">();
	}
	static class UFortConversationOption* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationOption>();
	}
};
static_assert(alignof(UFortConversationOption) == 0x000010, "Wrong alignment on UFortConversationOption");
static_assert(sizeof(UFortConversationOption) == 0x001550, "Wrong size on UFortConversationOption");
static_assert(offsetof(UFortConversationOption, OnOptionConfirmedSound) == 0x001490, "Member 'UFortConversationOption::OnOptionConfirmedSound' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, OnOptionHoveredSound) == 0x001498, "Member 'UFortConversationOption::OnOptionHoveredSound' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, Switcher_DisplayAsset) == 0x0014A0, "Member 'UFortConversationOption::Switcher_DisplayAsset' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, DefaultSoftTaskIcon) == 0x0014A8, "Member 'UFortConversationOption::DefaultSoftTaskIcon' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, DefaultConfirmChoiceSound) == 0x0014D0, "Member 'UFortConversationOption::DefaultConfirmChoiceSound' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, DefaultHoverChoiceSound) == 0x0014F8, "Member 'UFortConversationOption::DefaultHoverChoiceSound' has a wrong offset!");

class UFortConversationOptionsPanel final : public UPanelWidget
{
public:
	uint8                                         Pad_160[0x10];
	int32                                         MaxRows;
	int32                                         MiddleColumnWidth;

public:
	class UPanelSlot* AddChildToDynamicPanel(class UWidget* Content);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationOptionsPanel">();
	}
	static class UFortConversationOptionsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationOptionsPanel>();
	}
};
static_assert(alignof(UFortConversationOptionsPanel) == 0x000008, "Wrong alignment on UFortConversationOptionsPanel");
static_assert(sizeof(UFortConversationOptionsPanel) == 0x000178, "Wrong size on UFortConversationOptionsPanel");
static_assert(offsetof(UFortConversationOptionsPanel, MaxRows) == 0x000170, "Member 'UFortConversationOptionsPanel::MaxRows' has a wrong offset!");
static_assert(offsetof(UFortConversationOptionsPanel, MiddleColumnWidth) == 0x000174, "Member 'UFortConversationOptionsPanel::MiddleColumnWidth' has a wrong offset!");

class UFortConversationScreen : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class UCommonVisibilitySwitcher*              Switcher_Details;
	uint8                                         Pad_3C8[0x38];
	class UInputComponent*                        ConversationInputComp;
	int32                                         CurrentlySelectedIndex;
	bool                                          bBlockOptionIntroAnimation;
	uint8                                         Pad_40D[0x3];
	class FName                                   RadialSelectionMaterialParameterName;
	uint8                                         Pad_414[0x4];
	TArray<struct FGameplayTag>                   TagPriorities;
	class FName                                   InteractActionNameKBM;
	class FName                                   ADSInputAction;
	class FName                                   InteractActionNameGamepad;
	uint8                                         Pad_434[0x4];
	struct FDataTableRowHandle                    ConfirmBinding;
	struct FDataTableRowHandle                    MakeSelectionBinding;
	struct FDataTableRowHandle                    ADSMouseBinding;
	struct FDataTableRowHandle                    CancelActionBinding;
	struct FDataTableRowHandle                    RightTriggerBinding;
	TMap<class FString, TSoftClassPtr<class UClass>> DetailsNodeTypeToBrief;
	TSoftClassPtr<class UClass>                   ChatBrief;
	class FString                                 DataDrivenBriefPrefix;
	TSoftClassPtr<class UClass>                   DataDrivenBrief;
	class UFortSlottedRadialMenu*                 RadialMenu_DialogOptions;
	class UImage*                                 Image_RadialHighlight;
	class UFortKeybindWidget*                     Keybind_Confirm;
	class UFortBasicBrief*                        BasicBrief_Main;
	class USizeBox*                               SizeBox_RadialMenu;
	class UWidget*                                Overlay_Details;
	class UWidget*                                Overlay_WheelContainer;
	class UImage*                                 Image_Background;
	class UImage*                                 Image_LoadingSpinner;

public:
	void EndConversation();
	void OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry);
	void OnConversationStarted();
	void OnItemSelected(int32 OriginalIndex);
	void OnOptionsPopulated();
	void OnSelectedItemAvailabilityChanged(bool bIsAvailable);

	bool ShouldBlockOptionIntroAnim() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortConversationScreen">();
	}
	static class UFortConversationScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationScreen>();
	}
};
static_assert(alignof(UFortConversationScreen) == 0x000008, "Wrong alignment on UFortConversationScreen");
static_assert(sizeof(UFortConversationScreen) == 0x000580, "Wrong size on UFortConversationScreen");
static_assert(offsetof(UFortConversationScreen, Switcher_Details) == 0x0003C0, "Member 'UFortConversationScreen::Switcher_Details' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ConversationInputComp) == 0x000400, "Member 'UFortConversationScreen::ConversationInputComp' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, CurrentlySelectedIndex) == 0x000408, "Member 'UFortConversationScreen::CurrentlySelectedIndex' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, bBlockOptionIntroAnimation) == 0x00040C, "Member 'UFortConversationScreen::bBlockOptionIntroAnimation' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, RadialSelectionMaterialParameterName) == 0x000410, "Member 'UFortConversationScreen::RadialSelectionMaterialParameterName' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, TagPriorities) == 0x000418, "Member 'UFortConversationScreen::TagPriorities' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, InteractActionNameKBM) == 0x000428, "Member 'UFortConversationScreen::InteractActionNameKBM' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ADSInputAction) == 0x00042C, "Member 'UFortConversationScreen::ADSInputAction' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, InteractActionNameGamepad) == 0x000430, "Member 'UFortConversationScreen::InteractActionNameGamepad' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ConfirmBinding) == 0x000438, "Member 'UFortConversationScreen::ConfirmBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, MakeSelectionBinding) == 0x000448, "Member 'UFortConversationScreen::MakeSelectionBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ADSMouseBinding) == 0x000458, "Member 'UFortConversationScreen::ADSMouseBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, CancelActionBinding) == 0x000468, "Member 'UFortConversationScreen::CancelActionBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, RightTriggerBinding) == 0x000478, "Member 'UFortConversationScreen::RightTriggerBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, DetailsNodeTypeToBrief) == 0x000488, "Member 'UFortConversationScreen::DetailsNodeTypeToBrief' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ChatBrief) == 0x0004D8, "Member 'UFortConversationScreen::ChatBrief' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, DataDrivenBriefPrefix) == 0x000500, "Member 'UFortConversationScreen::DataDrivenBriefPrefix' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, DataDrivenBrief) == 0x000510, "Member 'UFortConversationScreen::DataDrivenBrief' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, RadialMenu_DialogOptions) == 0x000538, "Member 'UFortConversationScreen::RadialMenu_DialogOptions' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Image_RadialHighlight) == 0x000540, "Member 'UFortConversationScreen::Image_RadialHighlight' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Keybind_Confirm) == 0x000548, "Member 'UFortConversationScreen::Keybind_Confirm' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, BasicBrief_Main) == 0x000550, "Member 'UFortConversationScreen::BasicBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, SizeBox_RadialMenu) == 0x000558, "Member 'UFortConversationScreen::SizeBox_RadialMenu' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Overlay_Details) == 0x000560, "Member 'UFortConversationScreen::Overlay_Details' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Overlay_WheelContainer) == 0x000568, "Member 'UFortConversationScreen::Overlay_WheelContainer' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Image_Background) == 0x000570, "Member 'UFortConversationScreen::Image_Background' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Image_LoadingSpinner) == 0x000578, "Member 'UFortConversationScreen::Image_LoadingSpinner' has a wrong offset!");

class UFortDataDrivenServiceBrief final : public UFortConversationOptionBrief
{
public:
	uint8                                         Pad_290[0x8];
	class UCommonTextBlock*                       Text_TitleBar;
	class UCommonRichTextBlock*                   RichText_Description;
	class UCommonTextBlock*                       Text_StockRemaining;
	class UFortTransactionStrip*                  TransactionStrip_Main;
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;

public:
	void OnAbleToPurchase();
	void OnTransactionInfoReceived(class UFortItem* Item);
	void OnUnableToPurchase(const class FText& Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDataDrivenServiceBrief">();
	}
	static class UFortDataDrivenServiceBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDataDrivenServiceBrief>();
	}
};
static_assert(alignof(UFortDataDrivenServiceBrief) == 0x000008, "Wrong alignment on UFortDataDrivenServiceBrief");
static_assert(sizeof(UFortDataDrivenServiceBrief) == 0x000308, "Wrong size on UFortDataDrivenServiceBrief");
static_assert(offsetof(UFortDataDrivenServiceBrief, Text_TitleBar) == 0x000298, "Member 'UFortDataDrivenServiceBrief::Text_TitleBar' has a wrong offset!");
static_assert(offsetof(UFortDataDrivenServiceBrief, RichText_Description) == 0x0002A0, "Member 'UFortDataDrivenServiceBrief::RichText_Description' has a wrong offset!");
static_assert(offsetof(UFortDataDrivenServiceBrief, Text_StockRemaining) == 0x0002A8, "Member 'UFortDataDrivenServiceBrief::Text_StockRemaining' has a wrong offset!");
static_assert(offsetof(UFortDataDrivenServiceBrief, TransactionStrip_Main) == 0x0002B0, "Member 'UFortDataDrivenServiceBrief::TransactionStrip_Main' has a wrong offset!");
static_assert(offsetof(UFortDataDrivenServiceBrief, ServiceConfigs) == 0x0002B8, "Member 'UFortDataDrivenServiceBrief::ServiceConfigs' has a wrong offset!");

class UFortDuelBrief final : public UFortItemTransactionBrief
{
public:
	class FText                                   TextTemplate;
	class UCommonRichTextBlock*                   Text_Objective;
	class UCommonTileView*                        TileView;

public:
	void DisplayLootItems(const TArray<class UFortItem*>& Items);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDuelBrief">();
	}
	static class UFortDuelBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDuelBrief>();
	}
};
static_assert(alignof(UFortDuelBrief) == 0x000008, "Wrong alignment on UFortDuelBrief");
static_assert(sizeof(UFortDuelBrief) == 0x0002D0, "Wrong size on UFortDuelBrief");
static_assert(offsetof(UFortDuelBrief, TextTemplate) == 0x0002A8, "Member 'UFortDuelBrief::TextTemplate' has a wrong offset!");
static_assert(offsetof(UFortDuelBrief, Text_Objective) == 0x0002C0, "Member 'UFortDuelBrief::Text_Objective' has a wrong offset!");
static_assert(offsetof(UFortDuelBrief, TileView) == 0x0002C8, "Member 'UFortDuelBrief::TileView' has a wrong offset!");

class UFortHireBrief final : public UFortItemTransactionBrief
{
public:
	class FText                                   TextTemplate;
	class UCommonRichTextBlock*                   Text_Objective;

public:
	void HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHireBrief">();
	}
	static class UFortHireBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHireBrief>();
	}
};
static_assert(alignof(UFortHireBrief) == 0x000008, "Wrong alignment on UFortHireBrief");
static_assert(sizeof(UFortHireBrief) == 0x0002C8, "Wrong size on UFortHireBrief");
static_assert(offsetof(UFortHireBrief, TextTemplate) == 0x0002A8, "Member 'UFortHireBrief::TextTemplate' has a wrong offset!");
static_assert(offsetof(UFortHireBrief, Text_Objective) == 0x0002C0, "Member 'UFortHireBrief::Text_Objective' has a wrong offset!");

class UFortIntelBrief final : public UFortItemTransactionBrief
{
public:
	class FText                                   TextTemplate;
	class UCommonRichTextBlock*                   Text_Objective;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortIntelBrief">();
	}
	static class UFortIntelBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortIntelBrief>();
	}
};
static_assert(alignof(UFortIntelBrief) == 0x000008, "Wrong alignment on UFortIntelBrief");
static_assert(sizeof(UFortIntelBrief) == 0x0002C8, "Wrong size on UFortIntelBrief");
static_assert(offsetof(UFortIntelBrief, TextTemplate) == 0x0002A8, "Member 'UFortIntelBrief::TextTemplate' has a wrong offset!");
static_assert(offsetof(UFortIntelBrief, Text_Objective) == 0x0002C0, "Member 'UFortIntelBrief::Text_Objective' has a wrong offset!");

class UFortItemFundBrief final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0xB0];
	class UCommonTextBlock*                       Text_TitleBar;
	class UCommonTextBlock*                       Text_ProgressPercent;
	class UCommonTextBlock*                       Text_ProgressCount;
	class UFortSimpleMaterialProgressBar*         Progress_Funding;
	class UFortLazyImage*                         LazyImage_Icon;
	class UFortTransactionStrip*                  TransactionStrip_Main;
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;

public:
	const class FText GetDataForKey(const class FString& Key, const bool bUseIndexAdjustment);
	void InitializeFromContext(const struct FConversationContext& ConversationContext);
	void OnIntializationComplete();
	void OnProgressUpdated(const float CurrentFundingFraction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemFundBrief">();
	}
	static class UFortItemFundBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemFundBrief>();
	}
};
static_assert(alignof(UFortItemFundBrief) == 0x000008, "Wrong alignment on UFortItemFundBrief");
static_assert(sizeof(UFortItemFundBrief) == 0x0003C0, "Wrong size on UFortItemFundBrief");
static_assert(offsetof(UFortItemFundBrief, Text_TitleBar) == 0x000340, "Member 'UFortItemFundBrief::Text_TitleBar' has a wrong offset!");
static_assert(offsetof(UFortItemFundBrief, Text_ProgressPercent) == 0x000348, "Member 'UFortItemFundBrief::Text_ProgressPercent' has a wrong offset!");
static_assert(offsetof(UFortItemFundBrief, Text_ProgressCount) == 0x000350, "Member 'UFortItemFundBrief::Text_ProgressCount' has a wrong offset!");
static_assert(offsetof(UFortItemFundBrief, Progress_Funding) == 0x000358, "Member 'UFortItemFundBrief::Progress_Funding' has a wrong offset!");
static_assert(offsetof(UFortItemFundBrief, LazyImage_Icon) == 0x000360, "Member 'UFortItemFundBrief::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UFortItemFundBrief, TransactionStrip_Main) == 0x000368, "Member 'UFortItemFundBrief::TransactionStrip_Main' has a wrong offset!");
static_assert(offsetof(UFortItemFundBrief, ServiceConfigs) == 0x000370, "Member 'UFortItemFundBrief::ServiceConfigs' has a wrong offset!");

class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{
public:
	uint8                                         Pad_290[0x8];
	class UFortItemFundBrief*                     Item_Entry;
	class UFortNPCTextDisplay*                    NPCTextDisplay;
	TMap<class FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSingleItemFundBrief">();
	}
	static class UFortSingleItemFundBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSingleItemFundBrief>();
	}
};
static_assert(alignof(UFortSingleItemFundBrief) == 0x000008, "Wrong alignment on UFortSingleItemFundBrief");
static_assert(sizeof(UFortSingleItemFundBrief) == 0x0002F8, "Wrong size on UFortSingleItemFundBrief");
static_assert(offsetof(UFortSingleItemFundBrief, Item_Entry) == 0x000298, "Member 'UFortSingleItemFundBrief::Item_Entry' has a wrong offset!");
static_assert(offsetof(UFortSingleItemFundBrief, NPCTextDisplay) == 0x0002A0, "Member 'UFortSingleItemFundBrief::NPCTextDisplay' has a wrong offset!");
static_assert(offsetof(UFortSingleItemFundBrief, ServiceConfigs) == 0x0002A8, "Member 'UFortSingleItemFundBrief::ServiceConfigs' has a wrong offset!");

class UFortMultiItemFundBrief final : public UFortSingleItemFundBrief
{
public:
	class UFortItemFundBrief*                     Item_EntrySecondary;
	class UFortItemFundBrief*                     Item_EntryTertiary;

public:
	void UpdateSelectedVisuals(int32 SelectedIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMultiItemFundBrief">();
	}
	static class UFortMultiItemFundBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMultiItemFundBrief>();
	}
};
static_assert(alignof(UFortMultiItemFundBrief) == 0x000008, "Wrong alignment on UFortMultiItemFundBrief");
static_assert(sizeof(UFortMultiItemFundBrief) == 0x000308, "Wrong size on UFortMultiItemFundBrief");
static_assert(offsetof(UFortMultiItemFundBrief, Item_EntrySecondary) == 0x0002F8, "Member 'UFortMultiItemFundBrief::Item_EntrySecondary' has a wrong offset!");
static_assert(offsetof(UFortMultiItemFundBrief, Item_EntryTertiary) == 0x000300, "Member 'UFortMultiItemFundBrief::Item_EntryTertiary' has a wrong offset!");

class UFortNPCTextDisplay final : public UUserWidget
{
public:
	class UCommonRichTextBlock*                   Text_Message;
	class UFortLazyImage*                         LazyImage_NPCImage;

public:
	void OnItemNameUpdated(const class FString& ItemName);
	void OnTextUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNPCTextDisplay">();
	}
	static class UFortNPCTextDisplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNPCTextDisplay>();
	}
};
static_assert(alignof(UFortNPCTextDisplay) == 0x000008, "Wrong alignment on UFortNPCTextDisplay");
static_assert(sizeof(UFortNPCTextDisplay) == 0x000278, "Wrong size on UFortNPCTextDisplay");
static_assert(offsetof(UFortNPCTextDisplay, Text_Message) == 0x000268, "Member 'UFortNPCTextDisplay::Text_Message' has a wrong offset!");
static_assert(offsetof(UFortNPCTextDisplay, LazyImage_NPCImage) == 0x000270, "Member 'UFortNPCTextDisplay::LazyImage_NPCImage' has a wrong offset!");

class UFortPlayerConversationUIComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TSoftClassPtr<class UClass>                   DialogWidgetSoftClass;
	TSoftClassPtr<class UClass>                   DialogMarkerSoftClass;
	TSoftClassPtr<class UClass>                   MobileDialogWidgetSoftClass;
	TArray<class UDynamicUIScene*>                SpectatorConversationScenes;
	TArray<class UDynamicUIScene*>                SpectatorMobileConversationScenes;
	TSubclassOf<class UUserWidget>                DialogWidgetClass;
	TSubclassOf<class UUserWidget>                DialogMarkerClass;
	struct FUserWidgetPool                        DialogWidgetPool;
	uint8                                         Pad_1D8[0xA8];

public:
	void OnMinigameStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerConversationUIComponent">();
	}
	static class UFortPlayerConversationUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerConversationUIComponent>();
	}
};
static_assert(alignof(UFortPlayerConversationUIComponent) == 0x000008, "Wrong alignment on UFortPlayerConversationUIComponent");
static_assert(sizeof(UFortPlayerConversationUIComponent) == 0x000280, "Wrong size on UFortPlayerConversationUIComponent");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogWidgetSoftClass) == 0x0000A8, "Member 'UFortPlayerConversationUIComponent::DialogWidgetSoftClass' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogMarkerSoftClass) == 0x0000D0, "Member 'UFortPlayerConversationUIComponent::DialogMarkerSoftClass' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, MobileDialogWidgetSoftClass) == 0x0000F8, "Member 'UFortPlayerConversationUIComponent::MobileDialogWidgetSoftClass' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, SpectatorConversationScenes) == 0x000120, "Member 'UFortPlayerConversationUIComponent::SpectatorConversationScenes' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, SpectatorMobileConversationScenes) == 0x000130, "Member 'UFortPlayerConversationUIComponent::SpectatorMobileConversationScenes' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogWidgetClass) == 0x000140, "Member 'UFortPlayerConversationUIComponent::DialogWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogMarkerClass) == 0x000148, "Member 'UFortPlayerConversationUIComponent::DialogMarkerClass' has a wrong offset!");
static_assert(offsetof(UFortPlayerConversationUIComponent, DialogWidgetPool) == 0x000150, "Member 'UFortPlayerConversationUIComponent::DialogWidgetPool' has a wrong offset!");

class UFortQuestBrief final : public UFortConversationOptionBrief
{
public:
	uint8                                         Pad_290[0x8];
	class FText                                   ThisMatchOnlyQuestText;
	class UCommonRichTextBlock*                   Text_Objective;
	class UCommonTextBlock*                       Text_MoneyReward;
	class UCommonTextBlock*                       Text_XpReward;
	class UCommonTextBlock*                       Text_ExpirationTime;
	class UCommonLazyImage*                       LazyImage_QuestProviderImage;
	class UOverlay*                               Overlay_QuestProvider;

public:
	void OnQuestExpirationTimeSet(const bool bDisplayExpirationTime);
	void OnQuestInformationRecieved(const class FText& Objective, const struct FFortRarityItemData& RarityData, const struct FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestBrief">();
	}
	static class UFortQuestBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestBrief>();
	}
};
static_assert(alignof(UFortQuestBrief) == 0x000008, "Wrong alignment on UFortQuestBrief");
static_assert(sizeof(UFortQuestBrief) == 0x0002E0, "Wrong size on UFortQuestBrief");
static_assert(offsetof(UFortQuestBrief, ThisMatchOnlyQuestText) == 0x000298, "Member 'UFortQuestBrief::ThisMatchOnlyQuestText' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_Objective) == 0x0002B0, "Member 'UFortQuestBrief::Text_Objective' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_MoneyReward) == 0x0002B8, "Member 'UFortQuestBrief::Text_MoneyReward' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_XpReward) == 0x0002C0, "Member 'UFortQuestBrief::Text_XpReward' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_ExpirationTime) == 0x0002C8, "Member 'UFortQuestBrief::Text_ExpirationTime' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, LazyImage_QuestProviderImage) == 0x0002D0, "Member 'UFortQuestBrief::LazyImage_QuestProviderImage' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Overlay_QuestProvider) == 0x0002D8, "Member 'UFortQuestBrief::Overlay_QuestProvider' has a wrong offset!");

class UFortShowFutureStormCircleBrief final : public UFortItemTransactionBrief
{
public:
	class FText                                   PurchaseServiceText;
	class UCommonRichTextBlock*                   Text_Display;

public:
	void OnAbleToPurchase();
	void OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortShowFutureStormCircleBrief">();
	}
	static class UFortShowFutureStormCircleBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortShowFutureStormCircleBrief>();
	}
};
static_assert(alignof(UFortShowFutureStormCircleBrief) == 0x000008, "Wrong alignment on UFortShowFutureStormCircleBrief");
static_assert(sizeof(UFortShowFutureStormCircleBrief) == 0x0002C8, "Wrong size on UFortShowFutureStormCircleBrief");
static_assert(offsetof(UFortShowFutureStormCircleBrief, PurchaseServiceText) == 0x0002A8, "Member 'UFortShowFutureStormCircleBrief::PurchaseServiceText' has a wrong offset!");
static_assert(offsetof(UFortShowFutureStormCircleBrief, Text_Display) == 0x0002C0, "Member 'UFortShowFutureStormCircleBrief::Text_Display' has a wrong offset!");

class UFortSingleOrMultiItemFundBrief final : public UFortConversationOptionBrief
{
public:
	uint8                                         Pad_290[0x8];
	TSoftClassPtr<class UClass>                   SingleItemBrief;
	TSoftClassPtr<class UClass>                   MultiItemsBrief;
	class UOverlay*                               Overlay_Brief;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSingleOrMultiItemFundBrief">();
	}
	static class UFortSingleOrMultiItemFundBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSingleOrMultiItemFundBrief>();
	}
};
static_assert(alignof(UFortSingleOrMultiItemFundBrief) == 0x000008, "Wrong alignment on UFortSingleOrMultiItemFundBrief");
static_assert(sizeof(UFortSingleOrMultiItemFundBrief) == 0x0002F0, "Wrong size on UFortSingleOrMultiItemFundBrief");
static_assert(offsetof(UFortSingleOrMultiItemFundBrief, SingleItemBrief) == 0x000298, "Member 'UFortSingleOrMultiItemFundBrief::SingleItemBrief' has a wrong offset!");
static_assert(offsetof(UFortSingleOrMultiItemFundBrief, MultiItemsBrief) == 0x0002C0, "Member 'UFortSingleOrMultiItemFundBrief::MultiItemsBrief' has a wrong offset!");
static_assert(offsetof(UFortSingleOrMultiItemFundBrief, Overlay_Brief) == 0x0002E8, "Member 'UFortSingleOrMultiItemFundBrief::Overlay_Brief' has a wrong offset!");

class UFortTransactionStrip final : public UUserWidget
{
public:
	class UCommonTextBlock*                       Text_CostDescription;
	class UFortWorldItemDefinition*               ResourceCurrency;
	uint8                                         Pad_278[0x10];

public:
	void HandleOnItemCountChanged(TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, class UFortItemDefinition* Definition, int32 Delta);
	void OnSetTransactionCostVisibility(const bool bVisible);
	void OnTransactionInfoReceived(const struct FFortServiceTransactionInfo& TransactionInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTransactionStrip">();
	}
	static class UFortTransactionStrip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTransactionStrip>();
	}
};
static_assert(alignof(UFortTransactionStrip) == 0x000008, "Wrong alignment on UFortTransactionStrip");
static_assert(sizeof(UFortTransactionStrip) == 0x000288, "Wrong size on UFortTransactionStrip");
static_assert(offsetof(UFortTransactionStrip, Text_CostDescription) == 0x000268, "Member 'UFortTransactionStrip::Text_CostDescription' has a wrong offset!");
static_assert(offsetof(UFortTransactionStrip, ResourceCurrency) == 0x000270, "Member 'UFortTransactionStrip::ResourceCurrency' has a wrong offset!");

class UFortUpgradeBrief final : public UFortItemTransactionBrief
{
public:
	void OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause);
	void OnUpgradeInfoReceived(class UFortItem* CurrentWeapon);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeBrief">();
	}
	static class UFortUpgradeBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeBrief>();
	}
};
static_assert(alignof(UFortUpgradeBrief) == 0x000008, "Wrong alignment on UFortUpgradeBrief");
static_assert(sizeof(UFortUpgradeBrief) == 0x0002A8, "Wrong size on UFortUpgradeBrief");

class UMobileConversationScreen final : public UFortConversationScreen
{
public:
	class UButton*                                MobileButtonConfirm;
	class UButton*                                MobileButtonTouchInformation;
	uint8                                         Pad_590[0x8];
	class UCommonButtonBase*                      MobileCloseButton;
	class UCommonVisibilitySwitcher*              Switcher_CenteredDetails;

public:
	void OnHandleConfirmClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MobileConversationScreen">();
	}
	static class UMobileConversationScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobileConversationScreen>();
	}
};
static_assert(alignof(UMobileConversationScreen) == 0x000008, "Wrong alignment on UMobileConversationScreen");
static_assert(sizeof(UMobileConversationScreen) == 0x0005A8, "Wrong size on UMobileConversationScreen");
static_assert(offsetof(UMobileConversationScreen, MobileButtonConfirm) == 0x000580, "Member 'UMobileConversationScreen::MobileButtonConfirm' has a wrong offset!");
static_assert(offsetof(UMobileConversationScreen, MobileButtonTouchInformation) == 0x000588, "Member 'UMobileConversationScreen::MobileButtonTouchInformation' has a wrong offset!");
static_assert(offsetof(UMobileConversationScreen, MobileCloseButton) == 0x000598, "Member 'UMobileConversationScreen::MobileCloseButton' has a wrong offset!");
static_assert(offsetof(UMobileConversationScreen, Switcher_CenteredDetails) == 0x0005A0, "Member 'UMobileConversationScreen::Switcher_CenteredDetails' has a wrong offset!");

}
