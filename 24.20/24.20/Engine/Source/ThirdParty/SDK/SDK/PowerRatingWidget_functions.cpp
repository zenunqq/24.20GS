#pragma once

#include "Basic.hpp"

#include "PowerRatingWidget_classes.hpp"
#include "PowerRatingWidget_parameters.hpp"

namespace SDK
{

void UPowerRatingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerRatingWidget_C::ExecuteUbergraph_PowerRatingWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "ExecuteUbergraph_PowerRatingWidget");

	Params::PowerRatingWidget_C_ExecuteUbergraph_PowerRatingWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerRatingWidget_C::OnBasePowerRatingUpdated(int32 BasePowerRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "OnBasePowerRatingUpdated");

	Params::PowerRatingWidget_C_OnBasePowerRatingUpdated Parms{};

	Parms.BasePowerRating = BasePowerRating;

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerRatingWidget_C::OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "OnPowerRatingProgressUpdated");

	Params::PowerRatingWidget_C_OnPowerRatingProgressUpdated Parms{};

	Parms.BaseRatingProgress = BaseRatingProgress;
	Parms.TeamRatingProgress = TeamRatingProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerRatingWidget_C::OnTeamMembershipChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "OnTeamMembershipChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UPowerRatingWidget_C::OnTeamPowerRatingUpdated(int32 TeamPowerRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "OnTeamPowerRatingUpdated");

	Params::PowerRatingWidget_C_OnTeamPowerRatingUpdated Parms{};

	Parms.TeamPowerRating = TeamPowerRating;

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "PreConstruct");

	Params::PowerRatingWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPowerRatingWidget_C::UpdateWidgetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRatingWidget_C", "UpdateWidgetState");

	UObject::ProcessEvent(Func, nullptr);
}

}
