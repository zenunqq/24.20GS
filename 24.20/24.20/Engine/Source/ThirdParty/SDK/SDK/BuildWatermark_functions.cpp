#pragma once

#include "Basic.hpp"

#include "BuildWatermark_classes.hpp"
#include "BuildWatermark_parameters.hpp"

namespace SDK
{

void UBuildWatermark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBuildWatermark_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "ExecuteUbergraph_BuildWatermark");

	Params::BuildWatermark_C_ExecuteUbergraph_BuildWatermark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBuildWatermark_C::HandlePartyJoined()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "HandlePartyJoined");

	UObject::ProcessEvent(Func, nullptr);
}

void UBuildWatermark_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "HandlePlayerStateChanged");

	Params::BuildWatermark_C_HandlePlayerStateChanged Parms{};

	Parms.PlayerInfo = std::move(PlayerInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}
