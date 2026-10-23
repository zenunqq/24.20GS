#pragma once

#include "Basic.hpp"

#include "BP_HoldableButton_BuyLevel_classes.hpp"
#include "BP_HoldableButton_BuyLevel_parameters.hpp"

namespace SDK
{

void UBP_HoldableButton_BuyLevel_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnHoldDecreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHoldDecreased");

	Params::BP_HoldableButton_BuyLevel_C_BP_OnHoldDecreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHoldEnded");

	Params::BP_HoldableButton_BuyLevel_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnHoldIncreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHoldIncreased");

	Params::BP_HoldableButton_BuyLevel_C_BP_OnHoldIncreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHoldStarted");

	Params::BP_HoldableButton_BuyLevel_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::ExecuteUbergraph_BP_HoldableButton_BuyLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "ExecuteUbergraph_BP_HoldableButton_BuyLevel");

	Params::BP_HoldableButton_BuyLevel_C_ExecuteUbergraph_BP_HoldableButton_BuyLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_HoldableButton_BuyLevel_C::FillComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "FillComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::PlayFillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "PlayFillSound");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_HoldableButton_BuyLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "PreConstruct");

	Params::BP_HoldableButton_BuyLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_HoldableButton_BuyLevel_C::StopFillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HoldableButton_BuyLevel_C", "StopFillSound");

	UObject::ProcessEvent(Func, nullptr);
}

}
