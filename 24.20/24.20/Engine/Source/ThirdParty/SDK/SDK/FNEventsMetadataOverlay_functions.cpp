#pragma once

#include "Basic.hpp"

#include "FNEventsMetadataOverlay_classes.hpp"
#include "FNEventsMetadataOverlay_parameters.hpp"

namespace SDK
{

void UFNEventsMetadataOverlay_C::OnPartnerUpdateComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FNEventsMetadataOverlay_C", "OnPartnerUpdateComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFNEventsMetadataOverlay_C::ExecuteUbergraph_FNEventsMetadataOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FNEventsMetadataOverlay_C", "ExecuteUbergraph_FNEventsMetadataOverlay");

	Params::FNEventsMetadataOverlay_C_ExecuteUbergraph_FNEventsMetadataOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFNEventsMetadataOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FNEventsMetadataOverlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
