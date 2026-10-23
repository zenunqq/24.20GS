#pragma once

#include "Basic.hpp"

#include "BPS24_HoldableCloseButton_classes.hpp"
#include "BPS24_HoldableCloseButton_parameters.hpp"

namespace SDK
{

void UBPS24_HoldableCloseButton_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::BP_OnHoldDecreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHoldDecreased");

	Params::BPS24_HoldableCloseButton_C_BP_OnHoldDecreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHoldEnded");

	Params::BPS24_HoldableCloseButton_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::BP_OnHoldIncreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHoldIncreased");

	Params::BPS24_HoldableCloseButton_C_BP_OnHoldIncreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHoldStarted");

	Params::BPS24_HoldableCloseButton_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_HoldableCloseButton_C::ExecuteUbergraph_BPS24_HoldableCloseButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "ExecuteUbergraph_BPS24_HoldableCloseButton");

	Params::BPS24_HoldableCloseButton_C_ExecuteUbergraph_BPS24_HoldableCloseButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "PreConstruct");

	Params::BPS24_HoldableCloseButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::Update_style(bool Using_Gamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "Update style");

	Params::BPS24_HoldableCloseButton_C_Update_style Parms{};

	Parms.Using_Gamepad = Using_Gamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HoldableCloseButton_C::UpdateTextAndStyle(ECommonInputType Input_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HoldableCloseButton_C", "UpdateTextAndStyle");

	Params::BPS24_HoldableCloseButton_C_UpdateTextAndStyle Parms{};

	Parms.Input_Type = Input_Type;

	UObject::ProcessEvent(Func, &Parms);
}

}
