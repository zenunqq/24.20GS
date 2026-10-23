#pragma once

#include "Basic.hpp"

#include "GC_Abilities_Death_FadeCapsule_Athena_classes.hpp"
#include "GC_Abilities_Death_FadeCapsule_Athena_parameters.hpp"

namespace SDK
{

void AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "CapsuleFadeTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "CapsuleFadeTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AGC_Abilities_Death_FadeCapsule_Athena_C::ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena");

	Params::GC_Abilities_Death_FadeCapsule_Athena_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Abilities_Death_FadeCapsule_Athena_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "K2_HandleGameplayCue");

	Params::GC_Abilities_Death_FadeCapsule_Athena_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void AGC_Abilities_Death_FadeCapsule_Athena_C::SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "SkeletalMeshSetup");

	Params::GC_Abilities_Death_FadeCapsule_Athena_C_SkeletalMeshSetup Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
