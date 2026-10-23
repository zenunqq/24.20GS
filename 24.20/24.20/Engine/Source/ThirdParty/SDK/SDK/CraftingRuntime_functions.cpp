#pragma once

#include "Basic.hpp"

#include "CraftingRuntime_classes.hpp"
#include "CraftingRuntime_parameters.hpp"

namespace SDK
{

void ACraftingObjectBGA::HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftingObjectBGA", "HandleInteractionRangeBeginOverlap");

	Params::CraftingObjectBGA_HandleInteractionRangeBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ACraftingObjectBGA::HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftingObjectBGA", "HandleInteractionRangeEndOverlap");

	Params::CraftingObjectBGA_HandleInteractionRangeEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingCheatManager::StartSelfCrafting(class FName FormulaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftingCheatManager", "StartSelfCrafting");

	Params::CraftingCheatManager_StartSelfCrafting Parms{};

	Parms.FormulaName = FormulaName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingCheatManager::ToggleFreeCrafting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftingCheatManager", "ToggleFreeCrafting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCraftingObjectComponent::HandlePickupCraftingItemPickedUp(class AFortPickup* PickUp, class AFortPawn* InteractingPawn, const class UFortWorldItemDefinition* WorldItemDefinition, const struct FVector& PickupLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftingObjectComponent", "HandlePickupCraftingItemPickedUp");

	Params::CraftingObjectComponent_HandlePickupCraftingItemPickedUp Parms{};

	Parms.PickUp = PickUp;
	Parms.InteractingPawn = InteractingPawn;
	Parms.WorldItemDefinition = WorldItemDefinition;
	Parms.PickupLocation = std::move(PickupLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingObjectComponent::OnRep_CraftingObjectRepStateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftingObjectComponent", "OnRep_CraftingObjectRepStateData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ClientNotifyCraftingFailed(class AActor* CraftingObject, const struct FGameplayTagContainer& FailedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ClientNotifyCraftingFailed");

	Params::FortControllerComponent_CraftingNetworkEvents_ClientNotifyCraftingFailed Parms{};

	Parms.CraftingObject = CraftingObject;
	Parms.FailedReason = std::move(FailedReason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ClientNotifyCraftingSuccess(class AActor* CraftingObject, const class FName& FormulaRowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ClientNotifyCraftingSuccess");

	Params::FortControllerComponent_CraftingNetworkEvents_ClientNotifyCraftingSuccess Parms{};

	Parms.CraftingObject = CraftingObject;
	Parms.FormulaRowName = FormulaRowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::NotifyCraftingSuccess(class AActor* CraftingObject, const class FName& FormulaRowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "NotifyCraftingSuccess");

	Params::FortControllerComponent_CraftingNetworkEvents_NotifyCraftingSuccess Parms{};

	Parms.CraftingObject = CraftingObject;
	Parms.FormulaRowName = FormulaRowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerCancelCrafting(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerCancelCrafting");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerCancelCrafting Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerClaimCraftingResults(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerClaimCraftingResults");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerClaimCraftingResults Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerEjectItems(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerEjectItems");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerEjectItems Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerPauseCrafting(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerPauseCrafting");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerPauseCrafting Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* PickUp, const class FName& CraftingFormulaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerPickupItemAndStartCrafting");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerPickupItemAndStartCrafting Parms{};

	Parms.CraftingObject = CraftingObject;
	Parms.PickUp = PickUp;
	Parms.CraftingFormulaName = CraftingFormulaName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerReportCraftingSuccess(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerReportCraftingSuccess");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerReportCraftingSuccess Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerResumeCrafting(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerResumeCrafting");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerResumeCrafting Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerComponent_CraftingNetworkEvents::ServerStartCrafting(class AActor* CraftingObject, const class FName& CraftingFormulaName, const int32 NumberToCraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerComponent_CraftingNetworkEvents", "ServerStartCrafting");

	Params::FortControllerComponent_CraftingNetworkEvents_ServerStartCrafting Parms{};

	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaName = CraftingFormulaName;
	Parms.NumberToCraft = NumberToCraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameStateComponent_Crafting::OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_Crafting", "OnPlaylistDataReady");

	Params::FortGameStateComponent_Crafting_OnPlaylistDataReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameStateComponent_Crafting::OnRep_CraftingResultsList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_Crafting", "OnRep_CraftingResultsList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_CraftingComplete::OnCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, const class FName& FormulaRowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_CraftingComplete", "OnCraftingSuccess");

	Params::FortContextualTutorial_CraftingComplete_OnCraftingSuccess Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.FormulaRowName = FormulaRowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_CraftingReady::HandleFormulaCraftableChanged(const class FName& FormulaRowName, bool bIsCraftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_CraftingReady", "HandleFormulaCraftableChanged");

	Params::FortContextualTutorial_CraftingReady_HandleFormulaCraftableChanged Parms{};

	Parms.FormulaRowName = FormulaRowName;
	Parms.bIsCraftable = bIsCraftable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_CraftingTabOpen::HandleFormulaCraftableChanged(const class FName& FormulaRowName, bool bIsCraftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_CraftingTabOpen", "HandleFormulaCraftableChanged");

	Params::FortContextualTutorial_CraftingTabOpen_HandleFormulaCraftableChanged Parms{};

	Parms.FormulaRowName = FormulaRowName;
	Parms.bIsCraftable = bIsCraftable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_CraftingTabOpen::HandleInventoryTabChanged(const class FName InventoryTabNameId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_CraftingTabOpen", "HandleInventoryTabChanged");

	Params::FortContextualTutorial_CraftingTabOpen_HandleInventoryTabChanged Parms{};

	Parms.InventoryTabNameId = InventoryTabNameId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "CancelCrafting");

	Params::CraftingLibrary_CancelCrafting Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCraftingLibrary::CanCraftFormula(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, const class FName CraftingFormulaRow, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, const int32 NumberToCraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "CanCraftFormula");

	Params::CraftingLibrary_CanCraftFormula Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;
	Parms.NumberToCraft = NumberToCraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIngredientStates != nullptr)
		*OutIngredientStates = std::move(Parms.OutIngredientStates);

	return Parms.ReturnValue;
}

bool UCraftingLibrary::CanCraftFormulaWithAdditionalItems(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, const class FName CraftingFormulaRow, const TArray<struct FItemAndCount>& AdditionalItems, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, const int32 NumberToCraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "CanCraftFormulaWithAdditionalItems");

	Params::CraftingLibrary_CanCraftFormulaWithAdditionalItems Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;
	Parms.AdditionalItems = std::move(AdditionalItems);
	Parms.NumberToCraft = NumberToCraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIngredientStates != nullptr)
		*OutIngredientStates = std::move(Parms.OutIngredientStates);

	return Parms.ReturnValue;
}

void UCraftingLibrary::ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "ClaimCraftingResults");

	Params::CraftingLibrary_ClaimCraftingResults Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "EjectItems");

	Params::CraftingLibrary_EjectItems Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::GetAllCraftableFormulas(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class FName>* OutFormulas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetAllCraftableFormulas");

	Params::CraftingLibrary_GetAllCraftableFormulas Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFormulas != nullptr)
		*OutFormulas = std::move(Parms.OutFormulas);
}

void UCraftingLibrary::GetAllCraftingFormulas(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class FName>* OutFormulas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetAllCraftingFormulas");

	Params::CraftingLibrary_GetAllCraftingFormulas Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFormulas != nullptr)
		*OutFormulas = std::move(Parms.OutFormulas);
}

void UCraftingLibrary::GetAllValidIngredients(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<struct FGameplayTagContainer>* OutIngredients)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetAllValidIngredients");

	Params::CraftingLibrary_GetAllValidIngredients Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIngredients != nullptr)
		*OutIngredients = std::move(Parms.OutIngredients);
}

TArray<class UFortWorldItem*> UCraftingLibrary::GetCraftedResults_TempItems(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftedResults_TempItems");

	Params::CraftingLibrary_GetCraftedResults_TempItems Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCraftingLibrary::GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, const class FName& CraftingFormulaRow, TArray<struct FCraftingIngredientRequirement>* OutIngredientRequirements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingFormulaIngredientRequirements");

	Params::CraftingLibrary_GetCraftingFormulaIngredientRequirements Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIngredientRequirements != nullptr)
		*OutIngredientRequirements = std::move(Parms.OutIngredientRequirements);

	return Parms.ReturnValue;
}

class FName UCraftingLibrary::GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingFormulaNameBeingCrafted");

	Params::CraftingLibrary_GetCraftingFormulaNameBeingCrafted Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortWorldItem*> UCraftingLibrary::GetCraftingIngredients_TempItems(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingIngredients_TempItems");

	Params::CraftingLibrary_GetCraftingIngredients_TempItems Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECraftingObjectState UCraftingLibrary::GetCraftingObjectCraftingState(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingObjectCraftingState");

	Params::CraftingLibrary_GetCraftingObjectCraftingState Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateEndTime(const class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingObjectCurrentCraftingStateEndTime");

	Params::CraftingLibrary_GetCraftingObjectCurrentCraftingStateEndTime Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateStartTime(const class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingObjectCurrentCraftingStateStartTime");

	Params::CraftingLibrary_GetCraftingObjectCurrentCraftingStateStartTime Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCraftingLibrary::GetCraftingObjectCurrentCraftingStateTimeLeft(const class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingObjectCurrentCraftingStateTimeLeft");

	Params::CraftingLibrary_GetCraftingObjectCurrentCraftingStateTimeLeft Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCraftingLibrary::GetCraftingResultsForRowName(const class UObject* WorldContextObject, const class FName& CraftingFormulaRow, TArray<struct FItemAndCount>* OutResults, int32 NumToCraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetCraftingResultsForRowName");

	Params::CraftingLibrary_GetCraftingResultsForRowName Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CraftingFormulaRow = CraftingFormulaRow;
	Parms.NumToCraft = NumToCraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutResults != nullptr)
		*OutResults = std::move(Parms.OutResults);
}

TArray<class UFortWorldItem*> UCraftingLibrary::GetIngredientsInCraftingObject(class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetIngredientsInCraftingObject");

	Params::CraftingLibrary_GetIngredientsInCraftingObject Parms{};

	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCraftingLibrary::GetKnownCraftingFormulas(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class FName>* OutFormulas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetKnownCraftingFormulas");

	Params::CraftingLibrary_GetKnownCraftingFormulas Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFormulas != nullptr)
		*OutFormulas = std::move(Parms.OutFormulas);
}

void UCraftingLibrary::GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, const struct FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<class UFortItemDefinition>>* OutItemDefs, TArray<TSoftObjectPtr<class UObject>>* OutIcons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetUIDataForCraftingIngredientTags");

	Params::CraftingLibrary_GetUIDataForCraftingIngredientTags Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.IngredientTags = std::move(IngredientTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutItemDefs != nullptr)
		*OutItemDefs = std::move(Parms.OutItemDefs);

	if (OutIcons != nullptr)
		*OutIcons = std::move(Parms.OutIcons);
}

void UCraftingLibrary::GetValidIngredientsInInventory(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, TArray<class UFortWorldItem*>* OutIngredients)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GetValidIngredientsInInventory");

	Params::CraftingLibrary_GetValidIngredientsInInventory Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIngredients != nullptr)
		*OutIngredients = std::move(Parms.OutIngredients);
}

void UCraftingLibrary::GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, const struct FFortItemEntry& ItemEntryToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "GiveItemToCraftingObject");

	Params::CraftingLibrary_GiveItemToCraftingObject Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.ItemEntryToGrant = std::move(ItemEntryToGrant);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCraftingLibrary::IsValidIngredient(const class AFortPlayerController* FortPC, const class AActor* CraftingObject, const class UFortItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "IsValidIngredient");

	Params::CraftingLibrary_IsValidIngredient Parms{};

	Parms.FortPC = FortPC;
	Parms.CraftingObject = CraftingObject;
	Parms.ItemDef = ItemDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCraftingLibrary::PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "PauseCrafting");

	Params::CraftingLibrary_PauseCrafting Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* PickUp, const class FName& CraftingFormulaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "PickupItemAndStartCrafting");

	Params::CraftingLibrary_PickupItemAndStartCrafting Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.PickUp = PickUp;
	Parms.CraftingFormulaName = CraftingFormulaName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "ReportCraftingSuccess");

	Params::CraftingLibrary_ReportCraftingSuccess Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "ResumeCrafting");

	Params::CraftingLibrary_ResumeCrafting Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCraftingLibrary::StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, const class FName& CraftingFormulaName, const int32 NumberToCraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CraftingLibrary", "StartCrafting");

	Params::CraftingLibrary_StartCrafting Parms{};

	Parms.Instigator = Instigator;
	Parms.CraftingObject = CraftingObject;
	Parms.CraftingFormulaName = CraftingFormulaName;
	Parms.NumberToCraft = NumberToCraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
