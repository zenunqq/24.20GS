#pragma once

#include "Basic.hpp"

#include "ReplaceQuestButton_classes.hpp"
#include "ReplaceQuestButton_parameters.hpp"

namespace SDK
{

void UReplaceQuestButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::BP_OnHoldDecreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHoldDecreased");

	Params::ReplaceQuestButton_C_BP_OnHoldDecreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UReplaceQuestButton_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHoldEnded");

	Params::ReplaceQuestButton_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UReplaceQuestButton_C::BP_OnHoldIncreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHoldIncreased");

	Params::ReplaceQuestButton_C_BP_OnHoldIncreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UReplaceQuestButton_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHoldStarted");

	Params::ReplaceQuestButton_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UReplaceQuestButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::ExecuteUbergraph_ReplaceQuestButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "ExecuteUbergraph_ReplaceQuestButton");

	Params::ReplaceQuestButton_C_ExecuteUbergraph_ReplaceQuestButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UReplaceQuestButton_C::FillComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "FillComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::PlayFillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "PlayFillSound");

	UObject::ProcessEvent(Func, nullptr);
}

void UReplaceQuestButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "PreConstruct");

	Params::ReplaceQuestButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UReplaceQuestButton_C::StopFillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReplaceQuestButton_C", "StopFillSound");

	UObject::ProcessEvent(Func, nullptr);
}

}
