#pragma once

#include "Basic.hpp"

#include "B_AthenaPlayerMarker_WithCustomization_classes.hpp"
#include "B_AthenaPlayerMarker_WithCustomization_parameters.hpp"

namespace SDK
{

void AB_AthenaPlayerMarker_WithCustomization_C::ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");

	Params::B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_AthenaPlayerMarker_WithCustomization_C::OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37");

	Params::B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_AthenaPlayerMarker_WithCustomization_C::OnMarkerHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnMarkerHidden");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_AthenaPlayerMarker_WithCustomization_C::OnMarkerPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnMarkerPlaced");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_AthenaPlayerMarker_WithCustomization_C::OnSetupMarker(const struct FFortWorldMarkerData& MarkerData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnSetupMarker");

	Params::B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker Parms{};

	Parms.MarkerData_0 = std::move(MarkerData_0);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_AthenaPlayerMarker_WithCustomization_C::UpdateTopper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "UpdateTopper");

	UObject::ProcessEvent(Func, nullptr);
}

}
