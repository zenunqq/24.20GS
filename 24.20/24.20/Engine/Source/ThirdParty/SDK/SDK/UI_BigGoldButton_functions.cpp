#pragma once

#include "Basic.hpp"

#include "UI_BigGoldButton_classes.hpp"
#include "UI_BigGoldButton_parameters.hpp"

namespace SDK
{

void UUI_BigGoldButton_C::BindInputChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BindInputChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::BP_OnActionProgressDecreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnActionProgressDecreased");

	Params::UI_BigGoldButton_C_BP_OnActionProgressDecreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::BP_OnActionProgressIncreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnActionProgressIncreased");

	Params::UI_BigGoldButton_C_BP_OnActionProgressIncreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnHoldEnded");

	Params::UI_BigGoldButton_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnHoldStarted");

	Params::UI_BigGoldButton_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::EventHover(bool In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "EventHover");

	Params::UI_BigGoldButton_C_EventHover Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::ExecuteUbergraph_UI_BigGoldButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "ExecuteUbergraph_UI_BigGoldButton");

	Params::UI_BigGoldButton_C_ExecuteUbergraph_UI_BigGoldButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::InputChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "InputChanged");

	Params::UI_BigGoldButton_C_InputChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::OnCurrencyUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "OnCurrencyUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::OnHoldRequiredChanged(bool bHoldRequired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "OnHoldRequiredChanged");

	Params::UI_BigGoldButton_C_OnHoldRequiredChanged Parms{};

	Parms.bHoldRequired = bHoldRequired;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::OnProgressAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "OnProgressAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::OnProgressAnimationStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "OnProgressAnimationStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UUI_BigGoldButton_C::PlayHoldProgressAnimation(double HoldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "PlayHoldProgressAnimation");

	Params::UI_BigGoldButton_C_PlayHoldProgressAnimation Parms{};

	Parms.HoldPercent = HoldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "PreConstruct");

	Params::UI_BigGoldButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UUI_BigGoldButton_C::UpdateAnimationBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BigGoldButton_C", "UpdateAnimationBindings");

	UObject::ProcessEvent(Func, nullptr);
}

}
