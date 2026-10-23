#pragma once

#include "Basic.hpp"

#include "TeamMicStack_classes.hpp"
#include "TeamMicStack_parameters.hpp"

namespace SDK
{

void UTeamMicStack_C::AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "AppendTeamMember");

	Params::TeamMicStack_C_AppendTeamMember Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);

	TeamMemberInfo = std::move(Parms.TeamMemberInfo);
}

void UTeamMicStack_C::ClearContents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "ClearContents");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeamMicStack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeamMicStack_C::ExecuteUbergraph_TeamMicStack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "ExecuteUbergraph_TeamMicStack");

	Params::TeamMicStack_C_ExecuteUbergraph_TeamMicStack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMicStack_C::HandlePartyLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "HandlePartyLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void UTeamMicStack_C::HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "HandleTeamMemberChanged");

	Params::TeamMicStack_C_HandleTeamMemberChanged Parms{};

	Parms.Member_Info = std::move(Member_Info);

	UObject::ProcessEvent(Func, &Parms);
}

void UTeamMicStack_C::HandleTeamMemberRemoved(int32 Member_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "HandleTeamMemberRemoved");

	Params::TeamMicStack_C_HandleTeamMemberRemoved Parms{};

	Parms.Member_Index = Member_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}
