#pragma once

#include "Basic.hpp"

#include "Cinematic_TeamMics_classes.hpp"
#include "Cinematic_TeamMics_parameters.hpp"

namespace SDK
{

void UCinematic_TeamMics_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic-TeamMics_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_TeamMics_C::ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic-TeamMics_C", "ExecuteUbergraph_Cinematic-TeamMics");

	Params::Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_TeamMics_C::Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic-TeamMics_C", "Update");

	Params::Cinematic_TeamMics_C_Update Parms{};

	Parms.UpdatedMemberInfo = std::move(UpdatedMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}
