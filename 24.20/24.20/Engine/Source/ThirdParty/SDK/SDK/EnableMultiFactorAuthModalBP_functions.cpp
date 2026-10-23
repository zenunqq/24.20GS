#pragma once

#include "Basic.hpp"

#include "EnableMultiFactorAuthModalBP_classes.hpp"
#include "EnableMultiFactorAuthModalBP_parameters.hpp"

namespace SDK
{

void UEnableMultiFactorAuthModalBP_C::AnimationFullyCompleteBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "AnimationFullyCompleteBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "ExecuteUbergraph_EnableMultiFactorAuthModalBP");

	Params::EnableMultiFactorAuthModalBP_C_ExecuteUbergraph_EnableMultiFactorAuthModalBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::HandleHeaderText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "HandleHeaderText");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::HandleSetScreenMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "HandleSetScreenMode");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavRight");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavUp");

	UObject::ProcessEvent(Func, nullptr);
}

void UEnableMultiFactorAuthModalBP_C::OnConsoleDisplayURLProvided(const class FText& UniquePlayerURLText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnConsoleDisplayURLProvided");

	Params::EnableMultiFactorAuthModalBP_C_OnConsoleDisplayURLProvided Parms{};

	Parms.UniquePlayerURLText = std::move(UniquePlayerURLText);

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::OnIncentivizedSet(bool bIncentivized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnIncentivizedSet");

	Params::EnableMultiFactorAuthModalBP_C_OnIncentivizedSet Parms{};

	Parms.bIncentivized = bIncentivized;

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::OnInputModeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnInputModeChanged");

	Params::EnableMultiFactorAuthModalBP_C_OnInputModeChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::OnSetExitButtonText(const class FText& NewButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnSetExitButtonText");

	Params::EnableMultiFactorAuthModalBP_C_OnSetExitButtonText Parms{};

	Parms.NewButtonText = std::move(NewButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::OnSetScreenConfiguration(bool bIsConsole)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnSetScreenConfiguration");

	Params::EnableMultiFactorAuthModalBP_C_OnSetScreenConfiguration Parms{};

	Parms.bIsConsole = bIsConsole;

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "PreConstruct");

	Params::EnableMultiFactorAuthModalBP_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UEnableMultiFactorAuthModalBP_C::ScaleTitleForCulture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "ScaleTitleForCulture");

	UObject::ProcessEvent(Func, nullptr);
}

}
