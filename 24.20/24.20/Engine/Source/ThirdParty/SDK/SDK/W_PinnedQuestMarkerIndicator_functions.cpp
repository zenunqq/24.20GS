#pragma once

#include "Basic.hpp"

#include "W_PinnedQuestMarkerIndicator_classes.hpp"
#include "W_PinnedQuestMarkerIndicator_parameters.hpp"

namespace SDK
{

void UW_PinnedQuestMarkerIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UW_PinnedQuestMarkerIndicator_C::ExecuteUbergraph_W_PinnedQuestMarkerIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "ExecuteUbergraph_W_PinnedQuestMarkerIndicator");

	Params::W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

float UW_PinnedQuestMarkerIndicator_C::GetRemovalDuration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "GetRemovalDuration");

	Params::W_PinnedQuestMarkerIndicator_C_GetRemovalDuration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UW_PinnedQuestMarkerIndicator_C::NotifyWillBeRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "NotifyWillBeRemoved");

	UObject::ProcessEvent(Func, nullptr);
}

void UW_PinnedQuestMarkerIndicator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "PreConstruct");

	Params::W_PinnedQuestMarkerIndicator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

class UCanvasPanel* UW_PinnedQuestMarkerIndicator_C::GetCanvasPanelContainer(EFortActorIndicatorContainerWidget ContainerEnum) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "GetCanvasPanelContainer");

	Params::W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer Parms{};

	Parms.ContainerEnum = ContainerEnum;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class AActor* UW_PinnedQuestMarkerIndicator_C::GetIndicatedActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PinnedQuestMarkerIndicator_C", "GetIndicatedActor");

	Params::W_PinnedQuestMarkerIndicator_C_GetIndicatedActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
