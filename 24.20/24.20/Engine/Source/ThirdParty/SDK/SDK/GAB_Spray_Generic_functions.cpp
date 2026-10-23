#pragma once

#include "Basic.hpp"

#include "GAB_Spray_Generic_classes.hpp"
#include "GAB_Spray_Generic_parameters.hpp"

namespace SDK
{

void UGAB_Spray_Generic_C::ExecuteUbergraph_GAB_Spray_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Spray_Generic_C", "ExecuteUbergraph_GAB_Spray_Generic");

	Params::GAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

TSoftObjectPtr<class UAnimMontage> UGAB_Spray_Generic_C::GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, EFortCustomBodyType BodyType, EFortCustomGender Gender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Spray_Generic_C", "GetMontageToPlay");

	Params::GAB_Spray_Generic_C_GetMontageToPlay Parms{};

	Parms.EmoteAsset = EmoteAsset;
	Parms.BodyType = BodyType;
	Parms.Gender = Gender;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGAB_Spray_Generic_C::OnMontageStartedPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Spray_Generic_C", "OnMontageStartedPlaying");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_Spray_Generic_C::TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Spray_Generic_C", "TargetLineTrace");

	Params::GAB_Spray_Generic_C_TargetLineTrace Parms{};

	Parms.ActivatingPawn = ActivatingPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (HitSomething != nullptr)
		*HitSomething = Parms.HitSomething;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);
}

}
