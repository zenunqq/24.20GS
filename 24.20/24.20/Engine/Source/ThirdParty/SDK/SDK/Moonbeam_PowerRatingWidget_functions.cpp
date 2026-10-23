#pragma once

#include "Basic.hpp"

#include "Moonbeam_PowerRatingWidget_classes.hpp"
#include "Moonbeam_PowerRatingWidget_parameters.hpp"

namespace SDK
{

void UMoonbeam_PowerRatingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UMoonbeam_PowerRatingWidget_C::ExecuteUbergraph_Moonbeam_PowerRatingWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "ExecuteUbergraph_Moonbeam_PowerRatingWidget");

	Params::Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMoonbeam_PowerRatingWidget_C::OnBasePowerRatingUpdated(int32 BasePowerRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnBasePowerRatingUpdated");

	Params::Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated Parms{};

	Parms.BasePowerRating = BasePowerRating;

	UObject::ProcessEvent(Func, &Parms);
}

void UMoonbeam_PowerRatingWidget_C::OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnPowerRatingProgressUpdated");

	Params::Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated Parms{};

	Parms.BaseRatingProgress = BaseRatingProgress;
	Parms.TeamRatingProgress = TeamRatingProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void UMoonbeam_PowerRatingWidget_C::OnTeamMembershipChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnTeamMembershipChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UMoonbeam_PowerRatingWidget_C::OnTeamPowerRatingUpdated(int32 TeamPowerRating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "OnTeamPowerRatingUpdated");

	Params::Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated Parms{};

	Parms.TeamPowerRating = TeamPowerRating;

	UObject::ProcessEvent(Func, &Parms);
}

void UMoonbeam_PowerRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "PreConstruct");

	Params::Moonbeam_PowerRatingWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UMoonbeam_PowerRatingWidget_C::SetBackgroundColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "SetBackgroundColor");

	Params::Moonbeam_PowerRatingWidget_C_SetBackgroundColor Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UMoonbeam_PowerRatingWidget_C::UpdateWidgetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Moonbeam_PowerRatingWidget_C", "UpdateWidgetState");

	UObject::ProcessEvent(Func, nullptr);
}

}
