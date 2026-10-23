#pragma once

#include "Basic.hpp"

#include "B_AthenaMapMarkerBase_classes.hpp"
#include "B_AthenaMapMarkerBase_parameters.hpp"

namespace SDK
{

void AB_AthenaMapMarkerBase_C::ExecuteUbergraph_B_AthenaMapMarkerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "ExecuteUbergraph_B_AthenaMapMarkerBase");

	Params::B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_AthenaMapMarkerBase_C::OnMarkerColorChanged(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnMarkerColorChanged");

	Params::B_AthenaMapMarkerBase_C_OnMarkerColorChanged Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_AthenaMapMarkerBase_C::OnMarkerPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnMarkerPlaced");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnProtoMarkerPlaced__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnProtoMarkerPlaced__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_AthenaMapMarkerBase_C::OnSetupMarker(const struct FFortWorldMarkerData& MarkerData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnSetupMarker");

	Params::B_AthenaMapMarkerBase_C_OnSetupMarker Parms{};

	Parms.MarkerData_0 = std::move(MarkerData_0);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_AthenaMapMarkerBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
