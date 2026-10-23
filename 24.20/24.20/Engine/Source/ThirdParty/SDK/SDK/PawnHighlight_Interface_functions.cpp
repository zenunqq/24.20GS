#pragma once

#include "Basic.hpp"

#include "PawnHighlight_Interface_classes.hpp"
#include "PawnHighlight_Interface_parameters.hpp"

namespace SDK
{

void IPawnHighlight_Interface_C::AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnHighlight_Interface_C", "AddHighlightFromSource");

	Params::PawnHighlight_Interface_C_AddHighlightFromSource Parms{};

	Parms.Source = Source;
	Parms.Highlight = std::move(Highlight);
	Parms.OnlyUpdateIfCurrent = OnlyUpdateIfCurrent;

	UObject::ProcessEvent(Func, &Parms);
}

void IPawnHighlight_Interface_C::RemoveHighlightFromSource(class UObject* Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PawnHighlight_Interface_C", "RemoveHighlightFromSource");

	Params::PawnHighlight_Interface_C_RemoveHighlightFromSource Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}

}
