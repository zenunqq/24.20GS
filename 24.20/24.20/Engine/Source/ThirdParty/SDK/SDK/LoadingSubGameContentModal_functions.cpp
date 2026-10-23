#pragma once

#include "Basic.hpp"

#include "LoadingSubGameContentModal_classes.hpp"
#include "LoadingSubGameContentModal_parameters.hpp"

namespace SDK
{

void ULoadingSubGameContentModal_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void ULoadingSubGameContentModal_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnAnimationFinished");

	Params::LoadingSubGameContentModal_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoadingSubGameContentModal_C::SetCancelButtonText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "SetCancelButtonText");

	Params::LoadingSubGameContentModal_C_SetCancelButtonText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void ULoadingSubGameContentModal_C::ExecuteUbergraph_LoadingSubGameContentModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "ExecuteUbergraph_LoadingSubGameContentModal");

	Params::LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoadingSubGameContentModal_C::OnUpdatedProgress(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "OnUpdatedProgress");

	Params::LoadingSubGameContentModal_C_OnUpdatedProgress Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}

void ULoadingSubGameContentModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingSubGameContentModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}
