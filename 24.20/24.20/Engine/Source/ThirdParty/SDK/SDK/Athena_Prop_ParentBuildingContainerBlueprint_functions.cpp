#pragma once

#include "Basic.hpp"

#include "Athena_Prop_ParentBuildingContainerBlueprint_classes.hpp"
#include "Athena_Prop_ParentBuildingContainerBlueprint_parameters.hpp"

namespace SDK
{

void AAthena_Prop_ParentBuildingContainerBlueprint_C::ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint");

	Params::Athena_Prop_ParentBuildingContainerBlueprint_C_ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables* OutVariables)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "GetTimeOfDayBlueprintDefaultVariables");

	Params::Athena_Prop_ParentBuildingContainerBlueprint_C_GetTimeOfDayBlueprintDefaultVariables Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutVariables != nullptr)
		*OutVariables = std::move(Parms.OutVariables);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::Loop_Animation_Curve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "Loop Animation Curve");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::OnBounceAnimationUpdate(const struct FFortBounceData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "OnBounceAnimationUpdate");

	Params::Athena_Prop_ParentBuildingContainerBlueprint_C_OnBounceAnimationUpdate Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "OnDayPhaseChanged");

	Params::Athena_Prop_ParentBuildingContainerBlueprint_C_OnDayPhaseChanged Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::OnSetSearched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "OnSetSearched");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AAthena_Prop_ParentBuildingContainerBlueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_Prop_ParentBuildingContainerBlueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
