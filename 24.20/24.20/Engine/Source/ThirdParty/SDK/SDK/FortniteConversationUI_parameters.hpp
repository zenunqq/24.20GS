#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CommonConversationRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteConversationUI_structs.hpp"
#include "FortniteConversationRuntime_structs.hpp"

namespace SDK::Params
{

struct FortConversationOptionBrief_ConfigureBP final
{
public:
	struct FConversationContext                   ClientContext;
	struct FClientConversationOptionEntry         OptionEntry;
	int32                                         SelectedIndex;
	uint8                                         Pad_AC[0x4];
};
static_assert(alignof(FortConversationOptionBrief_ConfigureBP) == 0x000008, "Wrong alignment on FortConversationOptionBrief_ConfigureBP");
static_assert(sizeof(FortConversationOptionBrief_ConfigureBP) == 0x0000B0, "Wrong size on FortConversationOptionBrief_ConfigureBP");
static_assert(offsetof(FortConversationOptionBrief_ConfigureBP, ClientContext) == 0x000000, "Member 'FortConversationOptionBrief_ConfigureBP::ClientContext' has a wrong offset!");
static_assert(offsetof(FortConversationOptionBrief_ConfigureBP, OptionEntry) == 0x000038, "Member 'FortConversationOptionBrief_ConfigureBP::OptionEntry' has a wrong offset!");
static_assert(offsetof(FortConversationOptionBrief_ConfigureBP, SelectedIndex) == 0x0000A8, "Member 'FortConversationOptionBrief_ConfigureBP::SelectedIndex' has a wrong offset!");

struct FortItemTransactionBrief_OnTransactionInfoReceived final
{
public:
	class UFortItem*                              Item;
};
static_assert(alignof(FortItemTransactionBrief_OnTransactionInfoReceived) == 0x000008, "Wrong alignment on FortItemTransactionBrief_OnTransactionInfoReceived");
static_assert(sizeof(FortItemTransactionBrief_OnTransactionInfoReceived) == 0x000008, "Wrong size on FortItemTransactionBrief_OnTransactionInfoReceived");
static_assert(offsetof(FortItemTransactionBrief_OnTransactionInfoReceived, Item) == 0x000000, "Member 'FortItemTransactionBrief_OnTransactionInfoReceived::Item' has a wrong offset!");

struct FortApplyAbilityBrief_OnUnableToPurchase final
{
public:
	EPreventAbilityUseReason                      Reason;
};
static_assert(alignof(FortApplyAbilityBrief_OnUnableToPurchase) == 0x000001, "Wrong alignment on FortApplyAbilityBrief_OnUnableToPurchase");
static_assert(sizeof(FortApplyAbilityBrief_OnUnableToPurchase) == 0x000001, "Wrong size on FortApplyAbilityBrief_OnUnableToPurchase");
static_assert(offsetof(FortApplyAbilityBrief_OnUnableToPurchase, Reason) == 0x000000, "Member 'FortApplyAbilityBrief_OnUnableToPurchase::Reason' has a wrong offset!");

struct FortBasicBrief_OnChoiceTextReceived final
{
public:
	class FText                                   Text;
};
static_assert(alignof(FortBasicBrief_OnChoiceTextReceived) == 0x000008, "Wrong alignment on FortBasicBrief_OnChoiceTextReceived");
static_assert(sizeof(FortBasicBrief_OnChoiceTextReceived) == 0x000018, "Wrong size on FortBasicBrief_OnChoiceTextReceived");
static_assert(offsetof(FortBasicBrief_OnChoiceTextReceived, Text) == 0x000000, "Member 'FortBasicBrief_OnChoiceTextReceived::Text' has a wrong offset!");

struct FortBasicItemBrief_OnAbleToUse final
{
public:
	bool                                          bShowWarningMessage;
};
static_assert(alignof(FortBasicItemBrief_OnAbleToUse) == 0x000001, "Wrong alignment on FortBasicItemBrief_OnAbleToUse");
static_assert(sizeof(FortBasicItemBrief_OnAbleToUse) == 0x000001, "Wrong size on FortBasicItemBrief_OnAbleToUse");
static_assert(offsetof(FortBasicItemBrief_OnAbleToUse, bShowWarningMessage) == 0x000000, "Member 'FortBasicItemBrief_OnAbleToUse::bShowWarningMessage' has a wrong offset!");

struct FortBasicItemBrief_OnItemInfoReceived final
{
public:
	class UFortItem*                              Item;
	int32                                         StackSize;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FortBasicItemBrief_OnItemInfoReceived) == 0x000008, "Wrong alignment on FortBasicItemBrief_OnItemInfoReceived");
static_assert(sizeof(FortBasicItemBrief_OnItemInfoReceived) == 0x000010, "Wrong size on FortBasicItemBrief_OnItemInfoReceived");
static_assert(offsetof(FortBasicItemBrief_OnItemInfoReceived, Item) == 0x000000, "Member 'FortBasicItemBrief_OnItemInfoReceived::Item' has a wrong offset!");
static_assert(offsetof(FortBasicItemBrief_OnItemInfoReceived, StackSize) == 0x000008, "Member 'FortBasicItemBrief_OnItemInfoReceived::StackSize' has a wrong offset!");

struct FortBasicItemBrief_OnUnableToUse final
{
public:
	class FText                                   Reason;
};
static_assert(alignof(FortBasicItemBrief_OnUnableToUse) == 0x000008, "Wrong alignment on FortBasicItemBrief_OnUnableToUse");
static_assert(sizeof(FortBasicItemBrief_OnUnableToUse) == 0x000018, "Wrong size on FortBasicItemBrief_OnUnableToUse");
static_assert(offsetof(FortBasicItemBrief_OnUnableToUse, Reason) == 0x000000, "Member 'FortBasicItemBrief_OnUnableToUse::Reason' has a wrong offset!");

struct FortBasicItemBrief_OnUpdateDescriptionText final
{
public:
	class FText                                   DescriptionText;
};
static_assert(alignof(FortBasicItemBrief_OnUpdateDescriptionText) == 0x000008, "Wrong alignment on FortBasicItemBrief_OnUpdateDescriptionText");
static_assert(sizeof(FortBasicItemBrief_OnUpdateDescriptionText) == 0x000018, "Wrong size on FortBasicItemBrief_OnUpdateDescriptionText");
static_assert(offsetof(FortBasicItemBrief_OnUpdateDescriptionText, DescriptionText) == 0x000000, "Member 'FortBasicItemBrief_OnUpdateDescriptionText::DescriptionText' has a wrong offset!");

struct FortBuyBrief_OnDisplayUnavailability final
{
public:
	ECannotBuyReason                              CannotBuyReason;
};
static_assert(alignof(FortBuyBrief_OnDisplayUnavailability) == 0x000001, "Wrong alignment on FortBuyBrief_OnDisplayUnavailability");
static_assert(sizeof(FortBuyBrief_OnDisplayUnavailability) == 0x000001, "Wrong size on FortBuyBrief_OnDisplayUnavailability");
static_assert(offsetof(FortBuyBrief_OnDisplayUnavailability, CannotBuyReason) == 0x000000, "Member 'FortBuyBrief_OnDisplayUnavailability::CannotBuyReason' has a wrong offset!");

struct FortBuyBrief_OnPurchaseDataReceived final
{
public:
	int32                                         StackSize;
	int32                                         RemainingForSale;
};
static_assert(alignof(FortBuyBrief_OnPurchaseDataReceived) == 0x000004, "Wrong alignment on FortBuyBrief_OnPurchaseDataReceived");
static_assert(sizeof(FortBuyBrief_OnPurchaseDataReceived) == 0x000008, "Wrong size on FortBuyBrief_OnPurchaseDataReceived");
static_assert(offsetof(FortBuyBrief_OnPurchaseDataReceived, StackSize) == 0x000000, "Member 'FortBuyBrief_OnPurchaseDataReceived::StackSize' has a wrong offset!");
static_assert(offsetof(FortBuyBrief_OnPurchaseDataReceived, RemainingForSale) == 0x000004, "Member 'FortBuyBrief_OnPurchaseDataReceived::RemainingForSale' has a wrong offset!");

struct FortConversationMarker_OnCanInteract final
{
public:
	bool                                          bCanInteract;
};
static_assert(alignof(FortConversationMarker_OnCanInteract) == 0x000001, "Wrong alignment on FortConversationMarker_OnCanInteract");
static_assert(sizeof(FortConversationMarker_OnCanInteract) == 0x000001, "Wrong size on FortConversationMarker_OnCanInteract");
static_assert(offsetof(FortConversationMarker_OnCanInteract, bCanInteract) == 0x000000, "Member 'FortConversationMarker_OnCanInteract::bCanInteract' has a wrong offset!");

struct FortConversationMarker_OnConversationActorProximityChanged final
{
public:
	EInteractionRange                             TargetInteractionRange;
	uint8                                         Pad_1[0x7];
	class UFortNonPlayerConversationParticipantComponent* ConversationComponent;
};
static_assert(alignof(FortConversationMarker_OnConversationActorProximityChanged) == 0x000008, "Wrong alignment on FortConversationMarker_OnConversationActorProximityChanged");
static_assert(sizeof(FortConversationMarker_OnConversationActorProximityChanged) == 0x000010, "Wrong size on FortConversationMarker_OnConversationActorProximityChanged");
static_assert(offsetof(FortConversationMarker_OnConversationActorProximityChanged, TargetInteractionRange) == 0x000000, "Member 'FortConversationMarker_OnConversationActorProximityChanged::TargetInteractionRange' has a wrong offset!");
static_assert(offsetof(FortConversationMarker_OnConversationActorProximityChanged, ConversationComponent) == 0x000008, "Member 'FortConversationMarker_OnConversationActorProximityChanged::ConversationComponent' has a wrong offset!");

struct FortConversationMarker_OnInteractionRangeChanged final
{
public:
	EInteractionRange                             TargetInteractionRange;
};
static_assert(alignof(FortConversationMarker_OnInteractionRangeChanged) == 0x000001, "Wrong alignment on FortConversationMarker_OnInteractionRangeChanged");
static_assert(sizeof(FortConversationMarker_OnInteractionRangeChanged) == 0x000001, "Wrong size on FortConversationMarker_OnInteractionRangeChanged");
static_assert(offsetof(FortConversationMarker_OnInteractionRangeChanged, TargetInteractionRange) == 0x000000, "Member 'FortConversationMarker_OnInteractionRangeChanged::TargetInteractionRange' has a wrong offset!");

struct FortConversationMarker_OnMessageShownOverActor final
{
public:
	class AActor*                                 OverActor;
};
static_assert(alignof(FortConversationMarker_OnMessageShownOverActor) == 0x000008, "Wrong alignment on FortConversationMarker_OnMessageShownOverActor");
static_assert(sizeof(FortConversationMarker_OnMessageShownOverActor) == 0x000008, "Wrong size on FortConversationMarker_OnMessageShownOverActor");
static_assert(offsetof(FortConversationMarker_OnMessageShownOverActor, OverActor) == 0x000000, "Member 'FortConversationMarker_OnMessageShownOverActor::OverActor' has a wrong offset!");

struct FortConversationMarker_OnSetIndicatedActor final
{
public:
	class AActor*                                 NewIndicatorActor;
};
static_assert(alignof(FortConversationMarker_OnSetIndicatedActor) == 0x000008, "Wrong alignment on FortConversationMarker_OnSetIndicatedActor");
static_assert(sizeof(FortConversationMarker_OnSetIndicatedActor) == 0x000008, "Wrong size on FortConversationMarker_OnSetIndicatedActor");
static_assert(offsetof(FortConversationMarker_OnSetIndicatedActor, NewIndicatorActor) == 0x000000, "Member 'FortConversationMarker_OnSetIndicatedActor::NewIndicatorActor' has a wrong offset!");

struct FortConversationMessageWidget_OnMainMessageSet final
{
public:
	class FText                                   NPCName;
	class FText                                   MessageBody;
};
static_assert(alignof(FortConversationMessageWidget_OnMainMessageSet) == 0x000008, "Wrong alignment on FortConversationMessageWidget_OnMainMessageSet");
static_assert(sizeof(FortConversationMessageWidget_OnMainMessageSet) == 0x000030, "Wrong size on FortConversationMessageWidget_OnMainMessageSet");
static_assert(offsetof(FortConversationMessageWidget_OnMainMessageSet, NPCName) == 0x000000, "Member 'FortConversationMessageWidget_OnMainMessageSet::NPCName' has a wrong offset!");
static_assert(offsetof(FortConversationMessageWidget_OnMainMessageSet, MessageBody) == 0x000018, "Member 'FortConversationMessageWidget_OnMainMessageSet::MessageBody' has a wrong offset!");

struct FortConversationMessageWidget_OnPreviewMessageSet final
{
public:
	class FText                                   PreviewText;
};
static_assert(alignof(FortConversationMessageWidget_OnPreviewMessageSet) == 0x000008, "Wrong alignment on FortConversationMessageWidget_OnPreviewMessageSet");
static_assert(sizeof(FortConversationMessageWidget_OnPreviewMessageSet) == 0x000018, "Wrong size on FortConversationMessageWidget_OnPreviewMessageSet");
static_assert(offsetof(FortConversationMessageWidget_OnPreviewMessageSet, PreviewText) == 0x000000, "Member 'FortConversationMessageWidget_OnPreviewMessageSet::PreviewText' has a wrong offset!");

struct FortConversationMessageWidget_SetPreviewMessage final
{
public:
	class FText                                   MessageToSet;
};
static_assert(alignof(FortConversationMessageWidget_SetPreviewMessage) == 0x000008, "Wrong alignment on FortConversationMessageWidget_SetPreviewMessage");
static_assert(sizeof(FortConversationMessageWidget_SetPreviewMessage) == 0x000018, "Wrong size on FortConversationMessageWidget_SetPreviewMessage");
static_assert(offsetof(FortConversationMessageWidget_SetPreviewMessage, MessageToSet) == 0x000000, "Member 'FortConversationMessageWidget_SetPreviewMessage::MessageToSet' has a wrong offset!");

struct FortConversationOption_OnSetupFromDisplayAsset final
{
public:
	class UObject*                                DisplayAsset;
};
static_assert(alignof(FortConversationOption_OnSetupFromDisplayAsset) == 0x000008, "Wrong alignment on FortConversationOption_OnSetupFromDisplayAsset");
static_assert(sizeof(FortConversationOption_OnSetupFromDisplayAsset) == 0x000008, "Wrong size on FortConversationOption_OnSetupFromDisplayAsset");
static_assert(offsetof(FortConversationOption_OnSetupFromDisplayAsset, DisplayAsset) == 0x000000, "Member 'FortConversationOption_OnSetupFromDisplayAsset::DisplayAsset' has a wrong offset!");

struct FortConversationOption_OnSetupFromItemDef final
{
public:
	class UFortItem*                              Item;
};
static_assert(alignof(FortConversationOption_OnSetupFromItemDef) == 0x000008, "Wrong alignment on FortConversationOption_OnSetupFromItemDef");
static_assert(sizeof(FortConversationOption_OnSetupFromItemDef) == 0x000008, "Wrong size on FortConversationOption_OnSetupFromItemDef");
static_assert(offsetof(FortConversationOption_OnSetupFromItemDef, Item) == 0x000000, "Member 'FortConversationOption_OnSetupFromItemDef::Item' has a wrong offset!");

struct FortConversationOption_OnSetupPivotFromRadialInformation final
{
public:
	int32                                         NumElements;
	int32                                         ItemIndex;
};
static_assert(alignof(FortConversationOption_OnSetupPivotFromRadialInformation) == 0x000004, "Wrong alignment on FortConversationOption_OnSetupPivotFromRadialInformation");
static_assert(sizeof(FortConversationOption_OnSetupPivotFromRadialInformation) == 0x000008, "Wrong size on FortConversationOption_OnSetupPivotFromRadialInformation");
static_assert(offsetof(FortConversationOption_OnSetupPivotFromRadialInformation, NumElements) == 0x000000, "Member 'FortConversationOption_OnSetupPivotFromRadialInformation::NumElements' has a wrong offset!");
static_assert(offsetof(FortConversationOption_OnSetupPivotFromRadialInformation, ItemIndex) == 0x000004, "Member 'FortConversationOption_OnSetupPivotFromRadialInformation::ItemIndex' has a wrong offset!");

struct FortConversationOption_IsAvailable final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortConversationOption_IsAvailable) == 0x000001, "Wrong alignment on FortConversationOption_IsAvailable");
static_assert(sizeof(FortConversationOption_IsAvailable) == 0x000001, "Wrong size on FortConversationOption_IsAvailable");
static_assert(offsetof(FortConversationOption_IsAvailable, ReturnValue) == 0x000000, "Member 'FortConversationOption_IsAvailable::ReturnValue' has a wrong offset!");

struct FortConversationOptionsPanel_AddChildToDynamicPanel final
{
public:
	class UWidget*                                Content;
	class UPanelSlot*                             ReturnValue;
};
static_assert(alignof(FortConversationOptionsPanel_AddChildToDynamicPanel) == 0x000008, "Wrong alignment on FortConversationOptionsPanel_AddChildToDynamicPanel");
static_assert(sizeof(FortConversationOptionsPanel_AddChildToDynamicPanel) == 0x000010, "Wrong size on FortConversationOptionsPanel_AddChildToDynamicPanel");
static_assert(offsetof(FortConversationOptionsPanel_AddChildToDynamicPanel, Content) == 0x000000, "Member 'FortConversationOptionsPanel_AddChildToDynamicPanel::Content' has a wrong offset!");
static_assert(offsetof(FortConversationOptionsPanel_AddChildToDynamicPanel, ReturnValue) == 0x000008, "Member 'FortConversationOptionsPanel_AddChildToDynamicPanel::ReturnValue' has a wrong offset!");

struct FortConversationScreen_OnConversationOptionUnavailable final
{
public:
	class UFortRadialSlot*                        SelectedEntry;
};
static_assert(alignof(FortConversationScreen_OnConversationOptionUnavailable) == 0x000008, "Wrong alignment on FortConversationScreen_OnConversationOptionUnavailable");
static_assert(sizeof(FortConversationScreen_OnConversationOptionUnavailable) == 0x000008, "Wrong size on FortConversationScreen_OnConversationOptionUnavailable");
static_assert(offsetof(FortConversationScreen_OnConversationOptionUnavailable, SelectedEntry) == 0x000000, "Member 'FortConversationScreen_OnConversationOptionUnavailable::SelectedEntry' has a wrong offset!");

struct FortConversationScreen_OnItemSelected final
{
public:
	int32                                         OriginalIndex;
};
static_assert(alignof(FortConversationScreen_OnItemSelected) == 0x000004, "Wrong alignment on FortConversationScreen_OnItemSelected");
static_assert(sizeof(FortConversationScreen_OnItemSelected) == 0x000004, "Wrong size on FortConversationScreen_OnItemSelected");
static_assert(offsetof(FortConversationScreen_OnItemSelected, OriginalIndex) == 0x000000, "Member 'FortConversationScreen_OnItemSelected::OriginalIndex' has a wrong offset!");

struct FortConversationScreen_OnSelectedItemAvailabilityChanged final
{
public:
	bool                                          bIsAvailable;
};
static_assert(alignof(FortConversationScreen_OnSelectedItemAvailabilityChanged) == 0x000001, "Wrong alignment on FortConversationScreen_OnSelectedItemAvailabilityChanged");
static_assert(sizeof(FortConversationScreen_OnSelectedItemAvailabilityChanged) == 0x000001, "Wrong size on FortConversationScreen_OnSelectedItemAvailabilityChanged");
static_assert(offsetof(FortConversationScreen_OnSelectedItemAvailabilityChanged, bIsAvailable) == 0x000000, "Member 'FortConversationScreen_OnSelectedItemAvailabilityChanged::bIsAvailable' has a wrong offset!");

struct FortConversationScreen_ShouldBlockOptionIntroAnim final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortConversationScreen_ShouldBlockOptionIntroAnim) == 0x000001, "Wrong alignment on FortConversationScreen_ShouldBlockOptionIntroAnim");
static_assert(sizeof(FortConversationScreen_ShouldBlockOptionIntroAnim) == 0x000001, "Wrong size on FortConversationScreen_ShouldBlockOptionIntroAnim");
static_assert(offsetof(FortConversationScreen_ShouldBlockOptionIntroAnim, ReturnValue) == 0x000000, "Member 'FortConversationScreen_ShouldBlockOptionIntroAnim::ReturnValue' has a wrong offset!");

struct FortDataDrivenServiceBrief_OnTransactionInfoReceived final
{
public:
	class UFortItem*                              Item;
};
static_assert(alignof(FortDataDrivenServiceBrief_OnTransactionInfoReceived) == 0x000008, "Wrong alignment on FortDataDrivenServiceBrief_OnTransactionInfoReceived");
static_assert(sizeof(FortDataDrivenServiceBrief_OnTransactionInfoReceived) == 0x000008, "Wrong size on FortDataDrivenServiceBrief_OnTransactionInfoReceived");
static_assert(offsetof(FortDataDrivenServiceBrief_OnTransactionInfoReceived, Item) == 0x000000, "Member 'FortDataDrivenServiceBrief_OnTransactionInfoReceived::Item' has a wrong offset!");

struct FortDataDrivenServiceBrief_OnUnableToPurchase final
{
public:
	class FText                                   Reason;
};
static_assert(alignof(FortDataDrivenServiceBrief_OnUnableToPurchase) == 0x000008, "Wrong alignment on FortDataDrivenServiceBrief_OnUnableToPurchase");
static_assert(sizeof(FortDataDrivenServiceBrief_OnUnableToPurchase) == 0x000018, "Wrong size on FortDataDrivenServiceBrief_OnUnableToPurchase");
static_assert(offsetof(FortDataDrivenServiceBrief_OnUnableToPurchase, Reason) == 0x000000, "Member 'FortDataDrivenServiceBrief_OnUnableToPurchase::Reason' has a wrong offset!");

struct FortDuelBrief_DisplayLootItems final
{
public:
	TArray<class UFortItem*>                      Items;
};
static_assert(alignof(FortDuelBrief_DisplayLootItems) == 0x000008, "Wrong alignment on FortDuelBrief_DisplayLootItems");
static_assert(sizeof(FortDuelBrief_DisplayLootItems) == 0x000010, "Wrong size on FortDuelBrief_DisplayLootItems");
static_assert(offsetof(FortDuelBrief_DisplayLootItems, Items) == 0x000000, "Member 'FortDuelBrief_DisplayLootItems::Items' has a wrong offset!");

struct FortHireBrief_HandleNPCDismissal final
{
public:
	bool                                          bAtMaxNPCNum;
	bool                                          bWillDismissNPCAtHire;
};
static_assert(alignof(FortHireBrief_HandleNPCDismissal) == 0x000001, "Wrong alignment on FortHireBrief_HandleNPCDismissal");
static_assert(sizeof(FortHireBrief_HandleNPCDismissal) == 0x000002, "Wrong size on FortHireBrief_HandleNPCDismissal");
static_assert(offsetof(FortHireBrief_HandleNPCDismissal, bAtMaxNPCNum) == 0x000000, "Member 'FortHireBrief_HandleNPCDismissal::bAtMaxNPCNum' has a wrong offset!");
static_assert(offsetof(FortHireBrief_HandleNPCDismissal, bWillDismissNPCAtHire) == 0x000001, "Member 'FortHireBrief_HandleNPCDismissal::bWillDismissNPCAtHire' has a wrong offset!");

struct FortItemFundBrief_GetDataForKey final
{
public:
	class FString                                 Key;
	bool                                          bUseIndexAdjustment;
	uint8                                         Pad_11[0x7];
	class FText                                   ReturnValue;
};
static_assert(alignof(FortItemFundBrief_GetDataForKey) == 0x000008, "Wrong alignment on FortItemFundBrief_GetDataForKey");
static_assert(sizeof(FortItemFundBrief_GetDataForKey) == 0x000030, "Wrong size on FortItemFundBrief_GetDataForKey");
static_assert(offsetof(FortItemFundBrief_GetDataForKey, Key) == 0x000000, "Member 'FortItemFundBrief_GetDataForKey::Key' has a wrong offset!");
static_assert(offsetof(FortItemFundBrief_GetDataForKey, bUseIndexAdjustment) == 0x000010, "Member 'FortItemFundBrief_GetDataForKey::bUseIndexAdjustment' has a wrong offset!");
static_assert(offsetof(FortItemFundBrief_GetDataForKey, ReturnValue) == 0x000018, "Member 'FortItemFundBrief_GetDataForKey::ReturnValue' has a wrong offset!");

struct FortItemFundBrief_InitializeFromContext final
{
public:
	struct FConversationContext                   ConversationContext;
};
static_assert(alignof(FortItemFundBrief_InitializeFromContext) == 0x000008, "Wrong alignment on FortItemFundBrief_InitializeFromContext");
static_assert(sizeof(FortItemFundBrief_InitializeFromContext) == 0x000038, "Wrong size on FortItemFundBrief_InitializeFromContext");
static_assert(offsetof(FortItemFundBrief_InitializeFromContext, ConversationContext) == 0x000000, "Member 'FortItemFundBrief_InitializeFromContext::ConversationContext' has a wrong offset!");

struct FortItemFundBrief_OnProgressUpdated final
{
public:
	float                                         CurrentFundingFraction;
};
static_assert(alignof(FortItemFundBrief_OnProgressUpdated) == 0x000004, "Wrong alignment on FortItemFundBrief_OnProgressUpdated");
static_assert(sizeof(FortItemFundBrief_OnProgressUpdated) == 0x000004, "Wrong size on FortItemFundBrief_OnProgressUpdated");
static_assert(offsetof(FortItemFundBrief_OnProgressUpdated, CurrentFundingFraction) == 0x000000, "Member 'FortItemFundBrief_OnProgressUpdated::CurrentFundingFraction' has a wrong offset!");

struct FortMultiItemFundBrief_UpdateSelectedVisuals final
{
public:
	int32                                         SelectedIndex;
};
static_assert(alignof(FortMultiItemFundBrief_UpdateSelectedVisuals) == 0x000004, "Wrong alignment on FortMultiItemFundBrief_UpdateSelectedVisuals");
static_assert(sizeof(FortMultiItemFundBrief_UpdateSelectedVisuals) == 0x000004, "Wrong size on FortMultiItemFundBrief_UpdateSelectedVisuals");
static_assert(offsetof(FortMultiItemFundBrief_UpdateSelectedVisuals, SelectedIndex) == 0x000000, "Member 'FortMultiItemFundBrief_UpdateSelectedVisuals::SelectedIndex' has a wrong offset!");

struct FortNPCTextDisplay_OnItemNameUpdated final
{
public:
	class FString                                 ItemName;
};
static_assert(alignof(FortNPCTextDisplay_OnItemNameUpdated) == 0x000008, "Wrong alignment on FortNPCTextDisplay_OnItemNameUpdated");
static_assert(sizeof(FortNPCTextDisplay_OnItemNameUpdated) == 0x000010, "Wrong size on FortNPCTextDisplay_OnItemNameUpdated");
static_assert(offsetof(FortNPCTextDisplay_OnItemNameUpdated, ItemName) == 0x000000, "Member 'FortNPCTextDisplay_OnItemNameUpdated::ItemName' has a wrong offset!");

struct FortQuestBrief_OnQuestExpirationTimeSet final
{
public:
	bool                                          bDisplayExpirationTime;
};
static_assert(alignof(FortQuestBrief_OnQuestExpirationTimeSet) == 0x000001, "Wrong alignment on FortQuestBrief_OnQuestExpirationTimeSet");
static_assert(sizeof(FortQuestBrief_OnQuestExpirationTimeSet) == 0x000001, "Wrong size on FortQuestBrief_OnQuestExpirationTimeSet");
static_assert(offsetof(FortQuestBrief_OnQuestExpirationTimeSet, bDisplayExpirationTime) == 0x000000, "Member 'FortQuestBrief_OnQuestExpirationTimeSet::bDisplayExpirationTime' has a wrong offset!");

struct FortQuestBrief_OnQuestInformationRecieved final
{
public:
	class FText                                   Objective;
	struct FFortRarityItemData                    RarityData;
	struct FGameplayTag                           CategoryTag;
	int32                                         XPReward;
	int32                                         MoneyReward;
	uint8                                         Pad_A4[0x4];
};
static_assert(alignof(FortQuestBrief_OnQuestInformationRecieved) == 0x000008, "Wrong alignment on FortQuestBrief_OnQuestInformationRecieved");
static_assert(sizeof(FortQuestBrief_OnQuestInformationRecieved) == 0x0000A8, "Wrong size on FortQuestBrief_OnQuestInformationRecieved");
static_assert(offsetof(FortQuestBrief_OnQuestInformationRecieved, Objective) == 0x000000, "Member 'FortQuestBrief_OnQuestInformationRecieved::Objective' has a wrong offset!");
static_assert(offsetof(FortQuestBrief_OnQuestInformationRecieved, RarityData) == 0x000018, "Member 'FortQuestBrief_OnQuestInformationRecieved::RarityData' has a wrong offset!");
static_assert(offsetof(FortQuestBrief_OnQuestInformationRecieved, CategoryTag) == 0x000098, "Member 'FortQuestBrief_OnQuestInformationRecieved::CategoryTag' has a wrong offset!");
static_assert(offsetof(FortQuestBrief_OnQuestInformationRecieved, XPReward) == 0x00009C, "Member 'FortQuestBrief_OnQuestInformationRecieved::XPReward' has a wrong offset!");
static_assert(offsetof(FortQuestBrief_OnQuestInformationRecieved, MoneyReward) == 0x0000A0, "Member 'FortQuestBrief_OnQuestInformationRecieved::MoneyReward' has a wrong offset!");

struct FortShowFutureStormCircleBrief_OnUnableToPurchase final
{
public:
	EPreventUseStormCircleServiceReason           Reason;
};
static_assert(alignof(FortShowFutureStormCircleBrief_OnUnableToPurchase) == 0x000001, "Wrong alignment on FortShowFutureStormCircleBrief_OnUnableToPurchase");
static_assert(sizeof(FortShowFutureStormCircleBrief_OnUnableToPurchase) == 0x000001, "Wrong size on FortShowFutureStormCircleBrief_OnUnableToPurchase");
static_assert(offsetof(FortShowFutureStormCircleBrief_OnUnableToPurchase, Reason) == 0x000000, "Member 'FortShowFutureStormCircleBrief_OnUnableToPurchase::Reason' has a wrong offset!");

struct FortTransactionStrip_HandleOnItemCountChanged final
{
public:
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;
	class UFortItemDefinition*                    Definition;
	int32                                         Delta;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FortTransactionStrip_HandleOnItemCountChanged) == 0x000008, "Wrong alignment on FortTransactionStrip_HandleOnItemCountChanged");
static_assert(sizeof(FortTransactionStrip_HandleOnItemCountChanged) == 0x000020, "Wrong size on FortTransactionStrip_HandleOnItemCountChanged");
static_assert(offsetof(FortTransactionStrip_HandleOnItemCountChanged, InventoryOwner) == 0x000000, "Member 'FortTransactionStrip_HandleOnItemCountChanged::InventoryOwner' has a wrong offset!");
static_assert(offsetof(FortTransactionStrip_HandleOnItemCountChanged, Definition) == 0x000010, "Member 'FortTransactionStrip_HandleOnItemCountChanged::Definition' has a wrong offset!");
static_assert(offsetof(FortTransactionStrip_HandleOnItemCountChanged, Delta) == 0x000018, "Member 'FortTransactionStrip_HandleOnItemCountChanged::Delta' has a wrong offset!");

struct FortTransactionStrip_OnSetTransactionCostVisibility final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(FortTransactionStrip_OnSetTransactionCostVisibility) == 0x000001, "Wrong alignment on FortTransactionStrip_OnSetTransactionCostVisibility");
static_assert(sizeof(FortTransactionStrip_OnSetTransactionCostVisibility) == 0x000001, "Wrong size on FortTransactionStrip_OnSetTransactionCostVisibility");
static_assert(offsetof(FortTransactionStrip_OnSetTransactionCostVisibility, bVisible) == 0x000000, "Member 'FortTransactionStrip_OnSetTransactionCostVisibility::bVisible' has a wrong offset!");

struct FortTransactionStrip_OnTransactionInfoReceived final
{
public:
	struct FFortServiceTransactionInfo            TransactionInfo;
};
static_assert(alignof(FortTransactionStrip_OnTransactionInfoReceived) == 0x000004, "Wrong alignment on FortTransactionStrip_OnTransactionInfoReceived");
static_assert(sizeof(FortTransactionStrip_OnTransactionInfoReceived) == 0x00000C, "Wrong size on FortTransactionStrip_OnTransactionInfoReceived");
static_assert(offsetof(FortTransactionStrip_OnTransactionInfoReceived, TransactionInfo) == 0x000000, "Member 'FortTransactionStrip_OnTransactionInfoReceived::TransactionInfo' has a wrong offset!");

struct FortUpgradeBrief_OnUnableToUpgrade final
{
public:
	EFortWeaponUpgradeInteractionResult           CannotUpgradeCause;
};
static_assert(alignof(FortUpgradeBrief_OnUnableToUpgrade) == 0x000001, "Wrong alignment on FortUpgradeBrief_OnUnableToUpgrade");
static_assert(sizeof(FortUpgradeBrief_OnUnableToUpgrade) == 0x000001, "Wrong size on FortUpgradeBrief_OnUnableToUpgrade");
static_assert(offsetof(FortUpgradeBrief_OnUnableToUpgrade, CannotUpgradeCause) == 0x000000, "Member 'FortUpgradeBrief_OnUnableToUpgrade::CannotUpgradeCause' has a wrong offset!");

struct FortUpgradeBrief_OnUpgradeInfoReceived final
{
public:
	class UFortItem*                              CurrentWeapon;
};
static_assert(alignof(FortUpgradeBrief_OnUpgradeInfoReceived) == 0x000008, "Wrong alignment on FortUpgradeBrief_OnUpgradeInfoReceived");
static_assert(sizeof(FortUpgradeBrief_OnUpgradeInfoReceived) == 0x000008, "Wrong size on FortUpgradeBrief_OnUpgradeInfoReceived");
static_assert(offsetof(FortUpgradeBrief_OnUpgradeInfoReceived, CurrentWeapon) == 0x000000, "Member 'FortUpgradeBrief_OnUpgradeInfoReceived::CurrentWeapon' has a wrong offset!");

}
