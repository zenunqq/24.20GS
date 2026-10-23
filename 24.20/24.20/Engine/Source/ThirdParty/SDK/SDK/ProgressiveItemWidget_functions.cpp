#pragma once

#include "Basic.hpp"

#include "ProgressiveItemWidget_classes.hpp"
#include "ProgressiveItemWidget_parameters.hpp"

namespace SDK
{

void UProgressiveItemWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemWidget_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemWidget_C::ExecuteUbergraph_ProgressiveItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "ExecuteUbergraph_ProgressiveItemWidget");

	Params::ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemWidget_C::OnHighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "OnHighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemWidget_C::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "OnPeekStateChanged");

	Params::ProgressiveItemWidget_C_OnPeekStateChanged Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemWidget_C::OnStageItemChanged(const struct FProgressiveStageItemInfo& InStageItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "OnStageItemChanged");

	Params::ProgressiveItemWidget_C_OnStageItemChanged Parms{};

	Parms.InStageItemInfo = std::move(InStageItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemWidget_C::OnTileMaterialLoaded(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "OnTileMaterialLoaded");

	Params::ProgressiveItemWidget_C_OnTileMaterialLoaded Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemWidget_C::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "OnUnhighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UProgressiveItemWidget_C::Update_Subscribed_Visuals(bool IsSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemWidget_C", "Update Subscribed Visuals");

	Params::ProgressiveItemWidget_C_Update_Subscribed_Visuals Parms{};

	Parms.IsSubscribed = IsSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

}
