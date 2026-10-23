#pragma once

#include "Basic.hpp"

#include "MinimalSquadDisplay_classes.hpp"
#include "MinimalSquadDisplay_parameters.hpp"

namespace SDK
{

void UMinimalSquadDisplay_C::ExecuteUbergraph_MinimalSquadDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "ExecuteUbergraph_MinimalSquadDisplay");

	Params::MinimalSquadDisplay_C_ExecuteUbergraph_MinimalSquadDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadDisplay_C::OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB");

	Params::MinimalSquadDisplay_C_OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadDisplay_C::OnLoaded_86B795124D19C878C8559FA7E78726E0(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnLoaded_86B795124D19C878C8559FA7E78726E0");

	Params::MinimalSquadDisplay_C_OnLoaded_86B795124D19C878C8559FA7E78726E0 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadDisplay_C::OnSquadAssigned(const struct FAthenaTeamDisplayInfo& SquadStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnSquadAssigned");

	Params::MinimalSquadDisplay_C_OnSquadAssigned Parms{};

	Parms.SquadStyle = std::move(SquadStyle);

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadDisplay_C::OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadDisplay_C", "OnSquadIsEmptyChanged");

	Params::MinimalSquadDisplay_C_OnSquadIsEmptyChanged Parms{};

	Parms.bSquadIsEmpty = bSquadIsEmpty;
	Parms.bMultipleSquadsPopulated = bMultipleSquadsPopulated;

	UObject::ProcessEvent(Func, &Parms);
}

}
