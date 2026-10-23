#pragma once

#include "Basic.hpp"

#include "ShowdownEventTile_classes.hpp"
#include "ShowdownEventTile_parameters.hpp"

namespace SDK
{

void UShowdownEventTile_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::EventColorize(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventColorize");

	Params::ShowdownEventTile_C_EventColorize Parms{};

	Parms.DisplayInfo = std::move(DisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::EventColorizeDispatch(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventColorizeDispatch");

	Params::ShowdownEventTile_C_EventColorizeDispatch Parms{};

	Parms.DisplayInfo = std::move(DisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::EventIntro(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventIntro");

	Params::ShowdownEventTile_C_EventIntro Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::EventMultiRoundStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventMultiRoundStyle");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTile_C::EventResize(bool Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventResize");

	Params::ShowdownEventTile_C_EventResize Parms{};

	Parms.Out = Out;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::EventSetState(EFortShowdownEventState EventState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "EventSetState");

	Params::ShowdownEventTile_C_EventSetState Parms{};

	Parms.EventState = EventState;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::ExecuteUbergraph_ShowdownEventTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "ExecuteUbergraph_ShowdownEventTile");

	Params::ShowdownEventTile_C_ExecuteUbergraph_ShowdownEventTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "OnAddedToFocusPath");

	Params::ShowdownEventTile_C_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "OnRemovedFromFocusPath");

	Params::ShowdownEventTile_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTile_C::SetData(const class FString& TournamentInfo, const class FString& EventInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTile_C", "SetData");

	Params::ShowdownEventTile_C_SetData Parms{};

	Parms.TournamentInfo = std::move(TournamentInfo);
	Parms.EventInfo = std::move(EventInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}
