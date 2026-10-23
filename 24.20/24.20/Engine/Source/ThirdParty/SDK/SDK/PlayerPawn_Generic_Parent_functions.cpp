#pragma once

#include "Basic.hpp"

#include "PlayerPawn_Generic_Parent_classes.hpp"
#include "PlayerPawn_Generic_Parent_parameters.hpp"

namespace SDK
{

void APlayerPawn_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ExecuteUbergraph_PlayerPawn_Generic_Parent");

	Params::PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_Parent_C::Entered_Water_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Entered Water Volume");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_Parent_C::Find_Stored_Char_Part_Materials(EFortCustomPartType PartType, bool* Found, int32* Index_0, TArray<class UMaterialInstanceDynamic*>* MIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Find Stored Char Part Materials");

	Params::PlayerPawn_Generic_Parent_C_Find_Stored_Char_Part_Materials Parms{};

	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;

	if (MIDs != nullptr)
		*MIDs = std::move(Parms.MIDs);
}

void APlayerPawn_Generic_Parent_C::Player_Creates_a_Splash(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Player Creates a Splash");

	Params::PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash Parms{};

	Parms.NewTransform = std::move(NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Generic_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Generic_Parent_C::ReinitializeWeaponMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ReinitializeWeaponMaterials");

	UObject::ProcessEvent(Func, nullptr);
}

}
