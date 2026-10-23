#pragma once

#include "Basic.hpp"

#include "PartyDisplayManagerBP_classes.hpp"
#include "PartyDisplayManagerBP_parameters.hpp"

namespace SDK
{

void APartyDisplayManagerBP_C::UpdatePreviewMeshTransforms()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "UpdatePreviewMeshTransforms");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::ShowItem(const class UFortItem* ItemToView, const struct FGuid& RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ShowItem");

	Params::PartyDisplayManagerBP_C_ShowItem Parms{};

	Parms.ItemToView = ItemToView;
	Parms.RequestID = std::move(RequestID);

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::SetupStaticMeshVisuals(class UStaticMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetupStaticMeshVisuals");

	Params::PartyDisplayManagerBP_C_SetupStaticMeshVisuals Parms{};

	Parms.NewMesh = NewMesh;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetupSkeletalMeshVisuals");

	Params::PartyDisplayManagerBP_C_SetupSkeletalMeshVisuals Parms{};

	Parms.NewMesh = NewMesh;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::SetupPrefabVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetupPrefabVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::Set_Character_Parts_Visibility(bool NewVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "Set Character Parts Visibility");

	Params::PartyDisplayManagerBP_C_Set_Character_Parts_Visibility Parms{};

	Parms.NewVisible = NewVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "SetUIOverrideVisuals");

	Params::PartyDisplayManagerBP_C_SetUIOverrideVisuals Parms{};

	Parms.Large_Texture = Large_Texture;
	Parms.Item = Item;
	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::ScaleAnimEvolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimEvolve__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::ScaleAnimEvolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimEvolve__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::RestoreTeleportMIDsInProgress(const class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "RestoreTeleportMIDsInProgress");

	Params::PartyDisplayManagerBP_C_RestoreTeleportMIDsInProgress Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::ScaleAnimLevel__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimLevel__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::ResOutPawnFromLobby(class AFortPlayerPawn* Pawn, int32 PartyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ResOutPawnFromLobby");

	Params::PartyDisplayManagerBP_C_ResOutPawnFromLobby Parms{};

	Parms.Pawn = Pawn;
	Parms.PartyIndex = PartyIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::ScaleAnimLevel__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ScaleAnimLevel__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::ResetVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ResetVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::ResetPreScaleLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ResetPreScaleLocations");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ReceiveTick");

	Params::PartyDisplayManagerBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::PostSetupPrefabVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "PostSetupPrefabVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::PlayLevelUpEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "PlayLevelUpEffect");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::PlayEvolutionEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "PlayEvolutionEffect");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::PerformScaleMeshFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "PerformScaleMeshFX");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::HoloMatColorPulse__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "HoloMatColorPulse__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "PartyMemberInProgressCheck");

	Params::PartyDisplayManagerBP_C_PartyMemberInProgressCheck Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::OnPlayerPawnAddedToLobby(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "OnPlayerPawnAddedToLobby");

	Params::PartyDisplayManagerBP_C_OnPlayerPawnAddedToLobby Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::HoloMatColorPulse__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "HoloMatColorPulse__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::OnMeshLODStreamingFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "OnMeshLODStreamingFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "HandlePartyMemberInProgressDisplayChanges");

	Params::PartyDisplayManagerBP_C_HandlePartyMemberInProgressDisplayChanges Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::OnEmoteSetupFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "OnEmoteSetupFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void APartyDisplayManagerBP_C::HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, const TArray<class UObject*>& LoadedAssets, const struct FGuid& RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "HandleLoadingAssetsForItemCompleted");

	Params::PartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted Parms{};

	Parms.ItemWhoseAssetsWereLoaded = ItemWhoseAssetsWereLoaded;
	Parms.LoadedAssets = std::move(LoadedAssets);
	Parms.RequestID = std::move(RequestID);

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetMeshForCurrentDisplayedItem");

	Params::PartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDisplayedMesh != nullptr)
		*OutDisplayedMesh = Parms.OutDisplayedMesh;
}

struct FTransform APartyDisplayManagerBP_C::GetWeaponPlacementTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetWeaponPlacementTransform");

	Params::PartyDisplayManagerBP_C_GetWeaponPlacementTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FTransform APartyDisplayManagerBP_C::GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetItemPreviewOffset");

	Params::PartyDisplayManagerBP_C_GetItemPreviewOffset Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FTransform APartyDisplayManagerBP_C::GetPreviewMeshWorldTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetPreviewMeshWorldTransform");

	Params::PartyDisplayManagerBP_C_GetPreviewMeshWorldTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void APartyDisplayManagerBP_C::GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetItemDefinitionToShow");

	Params::PartyDisplayManagerBP_C_GetItemDefinitionToShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDefinition != nullptr)
		*ItemDefinition = Parms.ItemDefinition;
}

void APartyDisplayManagerBP_C::Completed_01D864884864692DBB7035B0996A5437(class UFortItem* Item, const struct FGuid& RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "Completed_01D864884864692DBB7035B0996A5437");

	Params::PartyDisplayManagerBP_C_Completed_01D864884864692DBB7035B0996A5437 Parms{};

	Parms.Item = Item;
	Parms.RequestID = std::move(RequestID);

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::CharacterCustomizationFinished(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "CharacterCustomizationFinished");

	Params::PartyDisplayManagerBP_C_CharacterCustomizationFinished Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "ExecuteUbergraph_PartyDisplayManagerBP");

	Params::PartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APartyDisplayManagerBP_C::CelebrateWithFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "CelebrateWithFX");

	UObject::ProcessEvent(Func, nullptr);
}

class AActor* APartyDisplayManagerBP_C::GetPrefabActorForCurrentDisplayedItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyDisplayManagerBP_C", "GetPrefabActorForCurrentDisplayedItem");

	Params::PartyDisplayManagerBP_C_GetPrefabActorForCurrentDisplayedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
