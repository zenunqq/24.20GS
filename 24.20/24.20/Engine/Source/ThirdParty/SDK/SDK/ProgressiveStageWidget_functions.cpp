#pragma once

#include "Basic.hpp"

#include "ProgressiveStageWidget_classes.hpp"
#include "ProgressiveStageWidget_parameters.hpp"

namespace SDK
{

class UFortProgressiveItemWidget* UProgressiveStageWidget_C::AddStageItemWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "AddStageItemWidget");

	Params::ProgressiveStageWidget_C_AddStageItemWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UProgressiveStageWidget_C::ClearStageItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "ClearStageItemWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveStageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveStageWidget_C::ExecuteUbergraph_ProgressiveStageWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "ExecuteUbergraph_ProgressiveStageWidget");

	Params::ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveStageWidget_C::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "OnPeekStateChanged");

	Params::ProgressiveStageWidget_C_OnPeekStateChanged Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveStageWidget_C::OnSetTooltipText(const class FText& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "OnSetTooltipText");

	Params::ProgressiveStageWidget_C_OnSetTooltipText Parms{};

	Parms.InToolTipText = std::move(InToolTipText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveStageWidget_C::OnSetTooltipVisible(const bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "OnSetTooltipVisible");

	Params::ProgressiveStageWidget_C_OnSetTooltipVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveStageWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "PreConstruct");

	Params::ProgressiveStageWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveStageWidget_C::Update_Subscribed_Visuals(bool IsSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageWidget_C", "Update Subscribed Visuals");

	Params::ProgressiveStageWidget_C_Update_Subscribed_Visuals Parms{};

	Parms.IsSubscribed = IsSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

}
