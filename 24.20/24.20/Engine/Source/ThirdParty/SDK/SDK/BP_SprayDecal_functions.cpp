#pragma once

#include "Basic.hpp"

#include "BP_SprayDecal_classes.hpp"
#include "BP_SprayDecal_parameters.hpp"

namespace SDK
{

void ABP_SprayDecal_C::AddBoxCollisionForCreative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "AddBoxCollisionForCreative");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::CreateDecalComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "CreateDecalComponents");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::ExecuteUbergraph_BP_SprayDecal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "ExecuteUbergraph_BP_SprayDecal");

	Params::BP_SprayDecal_C_ExecuteUbergraph_BP_SprayDecal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::FindNearbyBuildingActorsAndBindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "FindNearbyBuildingActorsAndBindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}

struct FUniqueNetIdRepl ABP_SprayDecal_C::GetInstigatorPlayerId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "GetInstigatorPlayerId");

	Params::BP_SprayDecal_C_GetInstigatorPlayerId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABP_SprayDecal_C::Initialize_Spray_Spawned_from_Gameplay(double InDecalSize, class UAthenaSprayItemDefinition* InSprayAsset, class AFortPlayerController* InSpawningPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "Initialize Spray Spawned from Gameplay");

	Params::BP_SprayDecal_C_Initialize_Spray_Spawned_from_Gameplay Parms{};

	Parms.InDecalSize = InDecalSize;
	Parms.InSprayAsset = InSprayAsset;
	Parms.InSpawningPlayerController = InSpawningPlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnBounceOccurs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnBounceOccurs");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA");

	Params::BP_SprayDecal_C_OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnLoaded_F925FF00475A018319C73E9FB1540BC6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnLoaded_F925FF00475A018319C73E9FB1540BC6");

	Params::BP_SprayDecal_C_OnLoaded_F925FF00475A018319C73E9FB1540BC6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnNearbyTrapPlaced(class ABuildingTrap* Trap, bool bDetatched)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnNearbyTrapPlaced");

	Params::BP_SprayDecal_C_OnNearbyTrapPlaced Parms{};

	Parms.Trap = Trap;
	Parms.bDetatched = bDetatched;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnNearbyWallDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnNearbyWallDamaged");

	Params::BP_SprayDecal_C_OnNearbyWallDamaged Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnNearbyWallDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnNearbyWallDied");

	Params::BP_SprayDecal_C_OnNearbyWallDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnReady_B252FED346EAB98D54D786BD15C1CC7B(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnReady_B252FED346EAB98D54D786BD15C1CC7B");

	Params::BP_SprayDecal_C_OnReady_B252FED346EAB98D54D786BD15C1CC7B Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::OnRep_DecalFadeoutTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnRep_DecalFadeoutTime");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::OnSprayAssetReplicatedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnSprayAssetReplicatedDown");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::OnSprayInfoReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnSprayInfoReady");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::OnWallDestoryed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnWallDestoryed");

	Params::BP_SprayDecal_C_OnWallDestoryed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_SprayDecal_C::PostLevelSaveSpawnCleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "PostLevelSaveSpawnCleanup");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::StartSprayFadeOutDueToNewPlacement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "StartSprayFadeOutDueToNewPlacement");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::UnbindAndClearNearbyBuildingActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "UnbindAndClearNearbyBuildingActors");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_SprayDecal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
