#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DataRegistry_structs.hpp"
#include "CraftingRuntime_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCraftingSpaceComponent final : public UGameFrameworkComponent
{
public:
	struct FGameplayTagContainer                  CraftingSpaceTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CraftingSpaceComponent">();
	}
	static class UCraftingSpaceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftingSpaceComponent>();
	}
};
static_assert(alignof(UCraftingSpaceComponent) == 0x000008, "Wrong alignment on UCraftingSpaceComponent");
static_assert(sizeof(UCraftingSpaceComponent) == 0x0000C0, "Wrong size on UCraftingSpaceComponent");
static_assert(offsetof(UCraftingSpaceComponent, CraftingSpaceTags) == 0x0000A0, "Member 'UCraftingSpaceComponent::CraftingSpaceTags' has a wrong offset!");

class UCraftingGlobals final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CraftingGlobals">();
	}
	static class UCraftingGlobals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftingGlobals>();
	}
};
static_assert(alignof(UCraftingGlobals) == 0x000008, "Wrong alignment on UCraftingGlobals");
static_assert(sizeof(UCraftingGlobals) == 0x000028, "Wrong size on UCraftingGlobals");

class ACraftingObjectBGA final : public ABuildingGameplayActor
{
public:
	uint8                                         Pad_A30[0x8];
	class AFortInventory*                         Inventory;
	uint8                                         Pad_A40[0x18];
	class USphereComponent*                       SphereComponent_InteractionRange;
	TSoftClassPtr<class UClass>                   MenuWidget;
	class UWidgetComponent*                       WidgetComponent_PotContents;
	bool                                          bShowCraftingUI;
	bool                                          bSendEventMessageOnLocalInteract;
	uint8                                         Pad_A92[0x6];
	class UStaticMeshComponent*                   CraftingObjectMesh;

public:
	void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CraftingObjectBGA">();
	}
	static class ACraftingObjectBGA* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACraftingObjectBGA>();
	}
};
static_assert(alignof(ACraftingObjectBGA) == 0x000008, "Wrong alignment on ACraftingObjectBGA");
static_assert(sizeof(ACraftingObjectBGA) == 0x000AA0, "Wrong size on ACraftingObjectBGA");
static_assert(offsetof(ACraftingObjectBGA, Inventory) == 0x000A38, "Member 'ACraftingObjectBGA::Inventory' has a wrong offset!");
static_assert(offsetof(ACraftingObjectBGA, SphereComponent_InteractionRange) == 0x000A58, "Member 'ACraftingObjectBGA::SphereComponent_InteractionRange' has a wrong offset!");
static_assert(offsetof(ACraftingObjectBGA, MenuWidget) == 0x000A60, "Member 'ACraftingObjectBGA::MenuWidget' has a wrong offset!");
static_assert(offsetof(ACraftingObjectBGA, WidgetComponent_PotContents) == 0x000A88, "Member 'ACraftingObjectBGA::WidgetComponent_PotContents' has a wrong offset!");
static_assert(offsetof(ACraftingObjectBGA, bShowCraftingUI) == 0x000A90, "Member 'ACraftingObjectBGA::bShowCraftingUI' has a wrong offset!");
static_assert(offsetof(ACraftingObjectBGA, bSendEventMessageOnLocalInteract) == 0x000A91, "Member 'ACraftingObjectBGA::bSendEventMessageOnLocalInteract' has a wrong offset!");
static_assert(offsetof(ACraftingObjectBGA, CraftingObjectMesh) == 0x000A98, "Member 'ACraftingObjectBGA::CraftingObjectMesh' has a wrong offset!");

class UCraftingCheatManager final : public UChildCheatManager
{
public:
	void StartSelfCrafting(class FName FormulaName);
	void ToggleFreeCrafting();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CraftingCheatManager">();
	}
	static class UCraftingCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftingCheatManager>();
	}
};
static_assert(alignof(UCraftingCheatManager) == 0x000008, "Wrong alignment on UCraftingCheatManager");
static_assert(sizeof(UCraftingCheatManager) == 0x000028, "Wrong size on UCraftingCheatManager");

class UCraftingObjectComponent final : public UGameFrameworkComponent
{
public:
	TMulticastInlineDelegate<void(ECraftingObjectState CraftingState, float CraftingStateStartTime, float CraftingStateDuration)> CraftingObjectStateChanged;
	TMulticastInlineDelegate<void(class FName& FormulaRowName, bool bIsCraftable)> OnFormulaCraftableChanged;
	TMulticastInlineDelegate<void(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& FormulaRowName)> OnCraftingSuccess;
	struct FCraftingObjectRepStateData            CraftingObjectRepStateData;
	class FName                                   CraftingFormulaRow;
	int32                                         NumToCraft;
	TWeakObjectPtr<class AFortPlayerController>   CraftingInstigator;
	uint8                                         Pad_EC[0x4];
	TArray<struct FFortItemEntry>                 AllOfTheIngredientItems;
	TArray<int32>                                 NonConsumedIngredientItemIndices;
	class FString                                 LastIngredientStringForAnalytics;
	class FString                                 LastFormulaStringForAnalytics;
	class FString                                 LastResultsStringForAnalytics;
	TArray<struct FItemAndCount>                  CraftingResults;
	struct FGameplayAbilitySpecHandle             WhileCraftingAbilitySpecHandle;
	struct FGameplayAbilitySpecHandle             OwnerCraftingAbilitySpecHandle;
	struct FGameplayTag                           CraftingObjectTag;
	uint8                                         Pad_15C[0x4];
	struct FGameplayTagContainer                  CraftingObjectTags;
	struct FScalableFloat                         CraftingTimeLength;
	struct FScalableFloat                         ReadyTimeLength;
	struct FScalableFloat                         OverCraftingTimeLength;
	struct FScalableFloat                         ResettingTimeLength;
	class FName                                   OverCraftingLootTierKey;
	uint8                                         bTakeItemsAtCraftingStart : 1;
	uint8                                         bGiveIngredientsToCraftingObject : 1;
	uint8                                         bGiveIngredientsToInstigator : 1;
	uint8                                         Pad_225[0x3];
	struct FVector                                IngredientSpawnOffset;
	uint8                                         bGiveToCraftingObject : 1;
	uint8                                         bGiveResultToInstigator : 1;
	uint8                                         Pad_241[0x7];
	TSoftClassPtr<class UClass>                   OwnerCraftingAbility;
	TSoftClassPtr<class UClass>                   WhileCraftingAbility;
	struct FGameplayTagContainer                  CraftingFailedTags;
	class AFortPickup*                            PendingPickupCraftingItem;
	class FName                                   PendingPickupCraftingFormula;
	uint8                                         Pad_2C4[0x4];
	struct FFortItemEntry                         PendingPickupCraftingItemEntry;
	int32                                         PendingPickupHeldCount;
	uint8                                         Pad_46C[0xEC];
	bool                                          FreeCraftingEnabled;
	uint8                                         Pad_559[0x7];

public:
	void HandlePickupCraftingItemPickedUp(class AFortPickup* PickUp, class AFortPawn* InteractingPawn, const class UFortWorldItemDefinition* WorldItemDefinition, const struct FVector& PickupLocation);
	void OnRep_CraftingObjectRepStateData();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CraftingObjectComponent">();
	}
	static class UCraftingObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftingObjectComponent>();
	}
};
static_assert(alignof(UCraftingObjectComponent) == 0x000008, "Wrong alignment on UCraftingObjectComponent");
static_assert(sizeof(UCraftingObjectComponent) == 0x000560, "Wrong size on UCraftingObjectComponent");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectStateChanged) == 0x0000A0, "Member 'UCraftingObjectComponent::CraftingObjectStateChanged' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, OnFormulaCraftableChanged) == 0x0000B0, "Member 'UCraftingObjectComponent::OnFormulaCraftableChanged' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, OnCraftingSuccess) == 0x0000C0, "Member 'UCraftingObjectComponent::OnCraftingSuccess' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectRepStateData) == 0x0000D0, "Member 'UCraftingObjectComponent::CraftingObjectRepStateData' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingFormulaRow) == 0x0000DC, "Member 'UCraftingObjectComponent::CraftingFormulaRow' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, NumToCraft) == 0x0000E0, "Member 'UCraftingObjectComponent::NumToCraft' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingInstigator) == 0x0000E4, "Member 'UCraftingObjectComponent::CraftingInstigator' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, AllOfTheIngredientItems) == 0x0000F0, "Member 'UCraftingObjectComponent::AllOfTheIngredientItems' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, NonConsumedIngredientItemIndices) == 0x000100, "Member 'UCraftingObjectComponent::NonConsumedIngredientItemIndices' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, LastIngredientStringForAnalytics) == 0x000110, "Member 'UCraftingObjectComponent::LastIngredientStringForAnalytics' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, LastFormulaStringForAnalytics) == 0x000120, "Member 'UCraftingObjectComponent::LastFormulaStringForAnalytics' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, LastResultsStringForAnalytics) == 0x000130, "Member 'UCraftingObjectComponent::LastResultsStringForAnalytics' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingResults) == 0x000140, "Member 'UCraftingObjectComponent::CraftingResults' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, WhileCraftingAbilitySpecHandle) == 0x000150, "Member 'UCraftingObjectComponent::WhileCraftingAbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, OwnerCraftingAbilitySpecHandle) == 0x000154, "Member 'UCraftingObjectComponent::OwnerCraftingAbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectTag) == 0x000158, "Member 'UCraftingObjectComponent::CraftingObjectTag' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectTags) == 0x000160, "Member 'UCraftingObjectComponent::CraftingObjectTags' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingTimeLength) == 0x000180, "Member 'UCraftingObjectComponent::CraftingTimeLength' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, ReadyTimeLength) == 0x0001A8, "Member 'UCraftingObjectComponent::ReadyTimeLength' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, OverCraftingTimeLength) == 0x0001D0, "Member 'UCraftingObjectComponent::OverCraftingTimeLength' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, ResettingTimeLength) == 0x0001F8, "Member 'UCraftingObjectComponent::ResettingTimeLength' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, OverCraftingLootTierKey) == 0x000220, "Member 'UCraftingObjectComponent::OverCraftingLootTierKey' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, IngredientSpawnOffset) == 0x000228, "Member 'UCraftingObjectComponent::IngredientSpawnOffset' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, OwnerCraftingAbility) == 0x000248, "Member 'UCraftingObjectComponent::OwnerCraftingAbility' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, WhileCraftingAbility) == 0x000270, "Member 'UCraftingObjectComponent::WhileCraftingAbility' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, CraftingFailedTags) == 0x000298, "Member 'UCraftingObjectComponent::CraftingFailedTags' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, PendingPickupCraftingItem) == 0x0002B8, "Member 'UCraftingObjectComponent::PendingPickupCraftingItem' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, PendingPickupCraftingFormula) == 0x0002C0, "Member 'UCraftingObjectComponent::PendingPickupCraftingFormula' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, PendingPickupCraftingItemEntry) == 0x0002C8, "Member 'UCraftingObjectComponent::PendingPickupCraftingItemEntry' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, PendingPickupHeldCount) == 0x000468, "Member 'UCraftingObjectComponent::PendingPickupHeldCount' has a wrong offset!");
static_assert(offsetof(UCraftingObjectComponent, FreeCraftingEnabled) == 0x000558, "Member 'UCraftingObjectComponent::FreeCraftingEnabled' has a wrong offset!");

class UFortControllerComponent_CraftingNetworkEvents final : public UFortControllerComponent
{
public:
	TMulticastInlineDelegate<void(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& FormulaRowName)> OnCraftingSuccess;

public:
	void ClientNotifyCraftingFailed(class AActor* CraftingObject, const struct FGameplayTagContainer& FailedReason);
	void ClientNotifyCraftingSuccess(class AActor* CraftingObject, const class FName& FormulaRowName);
	void NotifyCraftingSuccess(class AActor* CraftingObject, const class FName& FormulaRowName);
	void ServerCancelCrafting(class AActor* CraftingObject);
	void ServerClaimCraftingResults(class AActor* CraftingObject);
	void ServerEjectItems(class AActor* CraftingObject);
	void ServerPauseCrafting(class AActor* CraftingObject);
	void ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* PickUp, const class FName& CraftingFormulaName);
	void ServerReportCraftingSuccess(class AActor* CraftingObject);
	void ServerResumeCrafting(class AActor* CraftingObject);
	void ServerStartCrafting(class AActor* CraftingObject, const class FName& CraftingFormulaName, const int32 NumberToCraft);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_CraftingNetworkEvents">();
	}
	static class UFortControllerComponent_CraftingNetworkEvents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_CraftingNetworkEvents>();
	}
};
static_assert(alignof(UFortControllerComponent_CraftingNetworkEvents) == 0x000008, "Wrong alignment on UFortControllerComponent_CraftingNetworkEvents");
static_assert(sizeof(UFortControllerComponent_CraftingNetworkEvents) == 0x0000B8, "Wrong size on UFortControllerComponent_CraftingNetworkEvents");
static_assert(offsetof(UFortControllerComponent_CraftingNetworkEvents, OnCraftingSuccess) == 0x0000A8, "Member 'UFortControllerComponent_CraftingNetworkEvents::OnCraftingSuccess' has a wrong offset!");

class UFortGameStateComponent_Crafting final : public UFortGameStateComponent
{
public:
	struct FDataRegistryType                      CraftingFormulaRegistryType;
	struct FDataRegistryType                      CraftingIngredientsUIDataRegistryType;
	uint8                                         Pad_A8[0x140];
	TArray<struct FCraftingResult>                CraftingResultsList;
	uint8                                         Pad_1F8[0x50];

public:
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_CraftingResultsList();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameStateComponent_Crafting">();
	}
	static class UFortGameStateComponent_Crafting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameStateComponent_Crafting>();
	}
};
static_assert(alignof(UFortGameStateComponent_Crafting) == 0x000008, "Wrong alignment on UFortGameStateComponent_Crafting");
static_assert(sizeof(UFortGameStateComponent_Crafting) == 0x000248, "Wrong size on UFortGameStateComponent_Crafting");
static_assert(offsetof(UFortGameStateComponent_Crafting, CraftingFormulaRegistryType) == 0x0000A0, "Member 'UFortGameStateComponent_Crafting::CraftingFormulaRegistryType' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_Crafting, CraftingIngredientsUIDataRegistryType) == 0x0000A4, "Member 'UFortGameStateComponent_Crafting::CraftingIngredientsUIDataRegistryType' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_Crafting, CraftingResultsList) == 0x0001E8, "Member 'UFortGameStateComponent_Crafting::CraftingResultsList' has a wrong offset!");

class UFortPickupInteractOverrideComponent_Crafting final : public UFortPickupInteractOverrideComponent
{
public:
	class UFortItemDefinition*                    LastPickupItemDef;
	class UFortItemDefinition*                    LastFocusedItemDef;
	class FName                                   LastTargetFormulaName;
	float                                         ContextualCraftingInteractDuration;
	ETInteractionType                             CachedInteractionType;
	EInteractionBeingAttempted                    CachedInteractionBeingAttempted;
	uint8                                         Pad_DA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPickupInteractOverrideComponent_Crafting">();
	}
	static class UFortPickupInteractOverrideComponent_Crafting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPickupInteractOverrideComponent_Crafting>();
	}
};
static_assert(alignof(UFortPickupInteractOverrideComponent_Crafting) == 0x000008, "Wrong alignment on UFortPickupInteractOverrideComponent_Crafting");
static_assert(sizeof(UFortPickupInteractOverrideComponent_Crafting) == 0x0000E0, "Wrong size on UFortPickupInteractOverrideComponent_Crafting");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, LastPickupItemDef) == 0x0000C0, "Member 'UFortPickupInteractOverrideComponent_Crafting::LastPickupItemDef' has a wrong offset!");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, LastFocusedItemDef) == 0x0000C8, "Member 'UFortPickupInteractOverrideComponent_Crafting::LastFocusedItemDef' has a wrong offset!");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, LastTargetFormulaName) == 0x0000D0, "Member 'UFortPickupInteractOverrideComponent_Crafting::LastTargetFormulaName' has a wrong offset!");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, ContextualCraftingInteractDuration) == 0x0000D4, "Member 'UFortPickupInteractOverrideComponent_Crafting::ContextualCraftingInteractDuration' has a wrong offset!");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, CachedInteractionType) == 0x0000D8, "Member 'UFortPickupInteractOverrideComponent_Crafting::CachedInteractionType' has a wrong offset!");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, CachedInteractionBeingAttempted) == 0x0000D9, "Member 'UFortPickupInteractOverrideComponent_Crafting::CachedInteractionBeingAttempted' has a wrong offset!");

class UFortContextualTutorial_CraftingComplete final : public UFortContextualTutorial
{
public:
	void OnCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, const class FName& FormulaRowName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortContextualTutorial_CraftingComplete">();
	}
	static class UFortContextualTutorial_CraftingComplete* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortContextualTutorial_CraftingComplete>();
	}
};
static_assert(alignof(UFortContextualTutorial_CraftingComplete) == 0x000008, "Wrong alignment on UFortContextualTutorial_CraftingComplete");
static_assert(sizeof(UFortContextualTutorial_CraftingComplete) == 0x0000F8, "Wrong size on UFortContextualTutorial_CraftingComplete");

class UFortContextualTutorial_CraftingReady final : public UFortContextualTutorial
{
public:
	void HandleFormulaCraftableChanged(const class FName& FormulaRowName, bool bIsCraftable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortContextualTutorial_CraftingReady">();
	}
	static class UFortContextualTutorial_CraftingReady* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortContextualTutorial_CraftingReady>();
	}
};
static_assert(alignof(UFortContextualTutorial_CraftingReady) == 0x000008, "Wrong alignment on UFortContextualTutorial_CraftingReady");
static_assert(sizeof(UFortContextualTutorial_CraftingReady) == 0x0000F8, "Wrong size on UFortContextualTutorial_CraftingReady");

class UFortContextualTutorial_CraftingTabOpen final : public UFortContextualTutorial
{
public:
	uint8                                         Pad_F8[0x8];

public:
	void HandleFormulaCraftableChanged(const class FName& FormulaRowName, bool bIsCraftable);
	void HandleInventoryTabChanged(const class FName InventoryTabNameId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortContextualTutorial_CraftingTabOpen">();
	}
	static class UFortContextualTutorial_CraftingTabOpen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortContextualTutorial_CraftingTabOpen>();
	}
};
static_assert(alignof(UFortContextualTutorial_CraftingTabOpen) == 0x000008, "Wrong alignment on UFortContextualTutorial_CraftingTabOpen");
static_assert(sizeof(UFortContextualTutorial_CraftingTabOpen) == 0x000100, "Wrong size on UFortContextualTutorial_CraftingTabOpen");

class UCraftingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	static bool CanCraftFormula(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, const class FName CraftingFormulaRow, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, const int32 NumberToCraft);
	static bool CanCraftFormulaWithAdditionalItems(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, const class FName CraftingFormulaRow, const TArray<struct FItemAndCount>& AdditionalItems, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, const int32 NumberToCraft);
	static void ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	static void EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	static void GetAllCraftableFormulas(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	static void GetAllCraftingFormulas(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	static void GetAllValidIngredients(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<struct FGameplayTagContainer>* OutIngredients);
	static TArray<class UFortWorldItem*> GetCraftedResults_TempItems(class AActor* CraftingObject);
	static bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, const class FName& CraftingFormulaRow, TArray<struct FCraftingIngredientRequirement>* OutIngredientRequirements);
	static class FName GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject);
	static TArray<class UFortWorldItem*> GetCraftingIngredients_TempItems(class AActor* CraftingObject);
	static ECraftingObjectState GetCraftingObjectCraftingState(class AActor* CraftingObject);
	static float GetCraftingObjectCurrentCraftingStateEndTime(const class AActor* CraftingObject);
	static float GetCraftingObjectCurrentCraftingStateStartTime(const class AActor* CraftingObject);
	static float GetCraftingObjectCurrentCraftingStateTimeLeft(const class AActor* CraftingObject);
	static void GetCraftingResultsForRowName(const class UObject* WorldContextObject, const class FName& CraftingFormulaRow, TArray<struct FItemAndCount>* OutResults, int32 NumToCraft);
	static TArray<class UFortWorldItem*> GetIngredientsInCraftingObject(class AActor* CraftingObject);
	static void GetKnownCraftingFormulas(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	static void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, const struct FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<class UFortItemDefinition>>* OutItemDefs, TArray<TSoftObjectPtr<class UObject>>* OutIcons);
	static void GetValidIngredientsInInventory(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class UFortWorldItem*>* OutIngredients);
	static void GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, const struct FFortItemEntry& ItemEntryToGrant);
	static bool IsValidIngredient(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, const class UFortItemDefinition* ItemDef);
	static void PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	static void PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* PickUp, const class FName& CraftingFormulaName);
	static void ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	static void ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	static void StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, const class FName& CraftingFormulaName, const int32 NumberToCraft);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CraftingLibrary">();
	}
	static class UCraftingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftingLibrary>();
	}
};
static_assert(alignof(UCraftingLibrary) == 0x000008, "Wrong alignment on UCraftingLibrary");
static_assert(sizeof(UCraftingLibrary) == 0x000028, "Wrong size on UCraftingLibrary");

}
