#include "pch.h"
#include "../../Public/Vehicles/FortAthenaVehicle.h"
#include "Engine/Source/Runtime/FortniteGame/Source/FortniteGame/Public/Items/FortInventory.h"

namespace
{
	struct VehicleSpawnEntry
	{
		const wchar_t* SpawnTag;
		const wchar_t* ClassPath;
	};

	const VehicleSpawnEntry VehicleSpawnTable[] =
	{
		{ L"Athena.Vehicle.SpawnLocation.Motorcycle.Dirtbike", L"/Dirtbike/Vehicle/Motorcycle_DirtBike_Vehicle.Motorcycle_DirtBike_Vehicle_C" },
		{ L"Athena.Vehicle.SpawnLocation.Motorcycle.Sportbike", L"/Sportbike/Vehicle/Motorcycle_Sport_Vehicle.Motorcycle_Sport_Vehicle_C" },
		{ L"Athena.Vehicle.SpawnLocation.Valet.BasicCar.Taxi", L"/Valet/TaxiCab/Valet_TaxiCab_Vehicle.Valet_TaxiCab_Vehicle_C" },
		{ L"Athena.Vehicle.SpawnLocation.Valet.BasicCar.Modded", L"/ModdedBasicCar/Vehicle/Valet_BasicCar_Vehicle_SuperSedan.Valet_BasicCar_Vehicle_SuperSedan_C" },
		{ L"Athena.Vehicle.SpawnLocation.Valet.BasicTruck.Upgraded", L"/Valet/BasicTruck/Valet_BasicTruck_Vehicle_Upgrade.Valet_BasicTruck_Vehicle_Upgrade_C" },
		{ L"Athena.Vehicle.SpawnLocation.Valet.BigRig.Upgraded", L"/Valet/BigRig/Valet_BigRig_Vehicle_Upgrade.Valet_BigRig_Vehicle_Upgrade_C" },
		{ L"Athena.Vehicle.SpawnLocation.Valet.SportsCar.Upgraded", L"/Valet/SportsCar/Valet_SportsCar_Vehicle_Upgrade.Valet_SportsCar_Vehicle_Upgrade_C" },
		{ L"Athena.Vehicle.SpawnLocation.Valet.BasicCar.Upgraded", L"/Valet/BasicCar/Valet_BasicCar_Vehicle_Upgrade.Valet_BasicCar_Vehicle_Upgrade_C" },
	};

	UFortWeaponItemDefinition* FindSeatWeapon(AActor* Vehicle, int32 SeatIndex)
	{
		auto SeatWeapons = (UFortVehicleSeatWeaponComponent*)Vehicle->GetComponentByClass(UFortVehicleSeatWeaponComponent::StaticClass());
		if (!SeatWeapons)
			return nullptr;

		for (auto& SeatDefinition : SeatWeapons->WeaponSeatDefinitions)
		{
			if (SeatDefinition.SeatIndex == SeatIndex)
				return SeatDefinition.VehicleWeapon;
		}

		return nullptr;
	}

	void EquipSeatWeapon(AFortPlayerPawn* PlayerPawn, UFortWeaponItemDefinition* Weapon)
	{
		auto PlayerController = (AFortPlayerController*)PlayerPawn->Controller;

		FFortRangedWeaponStats* Stats = FortInventory::GetStats(Weapon);
		FortInventory::GiveItem(PlayerController, Weapon, 1, Stats ? Stats->ClipSize : 0);

		FFortItemEntry* Entry = FortInventory::FindEntry(PlayerController, Weapon);
		if (!Entry)
			return;

		PlayerController->ServerExecuteInventoryItem(Entry->ItemGuid);
		PlayerController->ClientEquipItem(Entry->ItemGuid, true);
	}
}

void FortAthenaVehicle::SpawnVehicles()
{
	auto Spawners = Utils::GetAll<AFortAthenaLivingWorldStaticPointProvider>();

	UEAllocatedMap<FName, UClass*> VehicleClasses;
	for (const VehicleSpawnEntry& Entry : VehicleSpawnTable)
		VehicleClasses[FName(Entry.SpawnTag)] = Utils::FindObject<UClass>(Entry.ClassPath);

	for (auto& Spawner : Spawners)
	{
		UClass* VehicleClass = nullptr;
		for (auto& Tag : Spawner->FiltersTags.GameplayTags)
		{
			if (VehicleClasses.contains(Tag.TagName))
			{
				VehicleClass = VehicleClasses[Tag.TagName];
				break;
			}
		}

		if (!VehicleClass)
			continue;

		Utils::SpawnActor<AFortAthenaVehicle>(VehicleClass, Spawner->K2_GetActorLocation(), Spawner->K2_GetActorRotation());
	}

	Spawners.Free();
}

void FortAthenaVehicle::ServerMove(UObject* Context, FFrame& Stack)
{
	FReplicatedPhysicsPawnState State;
	Stack.StepCompiledIn(&State);
	Stack.IncrementCode();

	auto Pawn = (AFortPhysicsPawn*)Context;
	if (!Pawn->RootComponent)
		return;

	UPrimitiveComponent* Root = Pawn->RootComponent->Cast<UPrimitiveComponent>();
	if (!Root)
		return;

	FRotator Rotation = State.Rotation.Rotator();
	Rotation.Yaw = FRotator::UnwindDegrees(Rotation.Yaw);
	Rotation.Pitch = 0;
	Rotation.Roll = 0;

	Root->K2_SetWorldLocationAndRotation(State.Translation, Rotation, false, nullptr, true);
	Root->SetPhysicsLinearVelocity(State.LinearVelocity, 0, FName(0));
	Root->SetPhysicsAngularVelocityInDegrees(State.AngularVelocity, 0, FName(0));
}

void FortAthenaVehicle::EquipVehicleWeapon(APawn* Vehicle, AFortPlayerPawn* PlayerPawn, int32 SeatIndex)
{
	UFortWeaponItemDefinition* Weapon = FindSeatWeapon(Vehicle, SeatIndex);
	if (Weapon)
		EquipSeatWeapon(PlayerPawn, Weapon);
}

void FortAthenaVehicle::ServerOnExitVehicle(UObject* Context, FFrame& Stack)
{
	ETryExitVehicleBehavior ExitForceBehavior;
	bool bDestroyVehicleWhenForced;
	Stack.StepCompiledIn(&ExitForceBehavior);
	Stack.StepCompiledIn(&bDestroyVehicleWhenForced);
	Stack.IncrementCode();

	auto Pawn = (AFortPlayerPawn*)Context;
	auto PlayerController = (AFortPlayerController*)Pawn->Controller;
	auto Vehicle = Pawn->BP_GetVehicle();

	if (Vehicle)
	{
		auto SeatIndex = Vehicle->FindSeatIndex(PlayerController->MyFortPawn);
		UFortWeaponItemDefinition* SeatWeapon = FindSeatWeapon(Vehicle, SeatIndex);

		FFortItemEntry* SeatWeaponEntry = SeatWeapon ? FortInventory::FindEntry(PlayerController, SeatWeapon) : nullptr;
		if (SeatWeaponEntry)
		{
			auto PreviousWeapon = Pawn->PreviousWeapon;
			if (PreviousWeapon)
			{
				PlayerController->ServerExecuteInventoryItem(PreviousWeapon->ItemEntryGuid);
				PlayerController->ClientEquipItem(PreviousWeapon->ItemEntryGuid, true);
			}

			FortInventory::Remove(PlayerController, SeatWeaponEntry->ItemGuid);
		}
	}

	callOG(Pawn, L"/Script/FortniteGame.FortPlayerPawn", ServerOnExitVehicle, ExitForceBehavior, bDestroyVehicleWhenForced);
}

void FortAthenaVehicle::ServerUpdateTowhook(UObject* Context, FFrame& Stack)
{
	FVector_NetQuantizeNormal AimDirection;
	Stack.StepCompiledIn(&AimDirection);
	Stack.IncrementCode();

	auto Vehicle = (AFortOctopusVehicle*)Context;
	Vehicle->NetTowhookAimDir = AimDirection;
	Vehicle->OnRep_NetTowhookAimDir();
}

void FortAthenaVehicle::OnPawnEnterVehicle(__int64 VehicleInterface, AFortPlayerPawn* PlayerPawn, int32 SeatIndex)
{
	auto Vehicle = (AFortAthenaVehicle*)(VehicleInterface - 944);

	UFortWeaponItemDefinition* Weapon = FindSeatWeapon(Vehicle, SeatIndex);
	if (Weapon)
		EquipSeatWeapon(PlayerPawn, Weapon);

	OnPawnEnterVehicleOG(VehicleInterface, PlayerPawn, SeatIndex);
}

void FortAthenaVehicle::Hook()
{
	Utils::ExecHook(L"/Script/FortniteGame.FortPhysicsPawn.ServerMove", ServerMove);
	Utils::ExecHook(L"/Script/FortniteGame.FortPhysicsPawn.ServerMoveReliable", ServerMove);
	Utils::ExecHook(L"/Script/FortniteGame.FortPlayerPawn.ServerOnExitVehicle", ServerOnExitVehicle, ServerOnExitVehicleOG);
	Utils::ExecHook(L"/Script/FortniteGame.FortOctopusVehicle.ServerUpdateTowhook", ServerUpdateTowhook);
}
