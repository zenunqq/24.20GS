#pragma once

#include "Basic.hpp"

#include "XpSubNotification_classes.hpp"
#include "XpSubNotification_parameters.hpp"

namespace SDK
{

void UXpSubNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UXpSubNotification_C::ExecuteUbergraph_XpSubNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "ExecuteUbergraph_XpSubNotification");

	Params::XpSubNotification_C_ExecuteUbergraph_XpSubNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpSubNotification_C::FinishedXpDisplayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "FinishedXpDisplayAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UXpSubNotification_C::Play_Intro_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "Play Intro Sound");

	UObject::ProcessEvent(Func, nullptr);
}

void UXpSubNotification_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "PreConstruct");

	Params::XpSubNotification_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpSubNotification_C::Reset_render_opacity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "Reset render opacity");

	UObject::ProcessEvent(Func, nullptr);
}

void UXpSubNotification_C::SetRewardValue(int32 RewardValue, EFortEarnedSubRewardType RewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "SetRewardValue");

	Params::XpSubNotification_C_SetRewardValue Parms{};

	Parms.RewardValue = RewardValue;
	Parms.RewardType = RewardType;

	UObject::ProcessEvent(Func, &Parms);
}

void UXpSubNotification_C::StartNotificationIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpSubNotification_C", "StartNotificationIntro");

	UObject::ProcessEvent(Func, nullptr);
}

}
