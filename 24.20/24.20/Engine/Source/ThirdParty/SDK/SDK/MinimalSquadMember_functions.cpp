#pragma once

#include "Basic.hpp"

#include "MinimalSquadMember_classes.hpp"
#include "MinimalSquadMember_parameters.hpp"

namespace SDK
{

void UMinimalSquadMember_C::BP_OnTeamMemberEstablished(bool bHasValidMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "BP_OnTeamMemberEstablished");

	Params::MinimalSquadMember_C_BP_OnTeamMemberEstablished Parms{};

	Parms.bHasValidMember = bHasValidMember;

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadMember_C::ExecuteUbergraph_MinimalSquadMember(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "ExecuteUbergraph_MinimalSquadMember");

	Params::MinimalSquadMember_C_ExecuteUbergraph_MinimalSquadMember Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadMember_C::OnMemberGameReadinessChanged(EGameReadiness ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "OnMemberGameReadinessChanged");

	Params::MinimalSquadMember_C_OnMemberGameReadinessChanged Parms{};

	Parms.ReadyStatus = ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void UMinimalSquadMember_C::SetEmptyVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "SetEmptyVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UMinimalSquadMember_C::SetNotReadyVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "SetNotReadyVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UMinimalSquadMember_C::SetReadyVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "SetReadyVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UMinimalSquadMember_C::SetSitOutVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinimalSquadMember_C", "SetSitOutVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

}
