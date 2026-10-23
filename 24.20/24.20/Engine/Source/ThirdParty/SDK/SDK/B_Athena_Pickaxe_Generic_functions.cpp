#pragma once

#include "Basic.hpp"

#include "B_Athena_Pickaxe_Generic_classes.hpp"
#include "B_Athena_Pickaxe_Generic_parameters.hpp"

namespace SDK
{

void AB_Athena_Pickaxe_Generic_C::Anim_Trails_Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "Anim Trails Disable");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::Anim_Trails_Notify(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "Anim Trails Notify");

	Params::B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::Binding_Time_of_Day_Control(bool F_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "Binding Time of Day Control");

	Params::B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control Parms{};

	Parms.F_ = F_;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::BindSwingAnimTrailEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "BindSwingAnimTrailEvents");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "ExecuteUbergraph_B_Athena_Pickaxe_Generic");

	Params::B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::FootStepLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "FootStepLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::FootStepRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "FootStepRight");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::HandleKillWatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "HandleKillWatch");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::HandleWeaponHolstered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "HandleWeaponHolstered");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "Melee_Effect_Color");

	Params::B_Athena_Pickaxe_Generic_C_Melee_Effect_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = std::move(Parms.Melee_Color_Set);
}

void AB_Athena_Pickaxe_Generic_C::MeleeSwingLeft(bool First_Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "MeleeSwingLeft");

	Params::B_Athena_Pickaxe_Generic_C_MeleeSwingLeft Parms{};

	Parms.First_Left = First_Left;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::MeleeSwingLeft_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "MeleeSwingLeft_End");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::MeleeSwingRight(bool First_Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "MeleeSwingRight");

	Params::B_Athena_Pickaxe_Generic_C_MeleeSwingRight Parms{};

	Parms.First_Right = First_Right;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::MeleeSwingRight_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "MeleeSwingRight_End");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::OnEquippedWeaponDestory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnEquippedWeaponDestory");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnInitCosmeticAlterations");

	Params::B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations Parms{};

	Parms.CosmeticMod = std::move(CosmeticMod);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::OnInitWeaponCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnInitWeaponCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::OnInstigatorSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnInstigatorSet");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2");

	Params::B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnPlayImpactFX");

	Params::B_Athena_Pickaxe_Generic_C_OnPlayImpactFX Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnPlayWeaponFireFX");

	Params::B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::OnStatChanged_F171C56748FEA3E19F93088E968D3E21(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnStatChanged_F171C56748FEA3E19F93088E968D3E21");

	Params::B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21 Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::OnWeaponDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnWeaponDetached");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "OnWeaponVisibilityChanged");

	Params::B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged Parms{};

	Parms.bVisible = bVisible;
	Parms.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "PlayCQCPickaxeEnemyAudio");

	Params::B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio Parms{};

	Parms.Hit_Result = std::move(Hit_Result);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::PlayRClickImpacts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "PlayRClickImpacts");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::SetActiveAlterationIdleParticles(bool Active, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "SetActiveAlterationIdleParticles");

	Params::B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles Parms{};

	Parms.Active = Active;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::SetWpnRarity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "SetWpnRarity");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::SwingLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "SwingLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::SwingLeftEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "SwingLeftEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::SwingRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "SwingRight");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::SwingRightEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "SwingRightEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "TODCheck");

	Params::B_Athena_Pickaxe_Generic_C_TODCheck Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::UnbindSwingAnimTrailEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "UnbindSwingAnimTrailEvents");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::UpdateBasedOnKills(int32 Watched_Kills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "UpdateBasedOnKills");

	Params::B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills Parms{};

	Parms.Watched_Kills = Watched_Kills;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_Pickaxe_Generic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_Pickaxe_Generic_C::Vehicle_Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_Pickaxe_Generic_C", "Vehicle Passenger");

	Params::B_Athena_Pickaxe_Generic_C_Vehicle_Passenger Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;
	Parms.NewVehicle = NewVehicle;
	Parms.OldVehicle = OldVehicle;

	UObject::ProcessEvent(Func, &Parms);
}

}
