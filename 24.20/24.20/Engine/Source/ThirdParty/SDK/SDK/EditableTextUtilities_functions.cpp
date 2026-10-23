#pragma once

#include "Basic.hpp"

#include "EditableTextUtilities_classes.hpp"
#include "EditableTextUtilities_parameters.hpp"

namespace SDK
{

void UEditableTextUtilities_C::CheckIfNeedsTrimming(const class FText& Text, int32 Limit, class UObject* __WorldContext, class FText* TrimmedText, bool* WasTrimmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableTextUtilities_C", "CheckIfNeedsTrimming");

	Params::EditableTextUtilities_C_CheckIfNeedsTrimming Parms{};

	Parms.Text = std::move(Text);
	Parms.Limit = Limit;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TrimmedText != nullptr)
		*TrimmedText = std::move(Parms.TrimmedText);

	if (WasTrimmed != nullptr)
		*WasTrimmed = Parms.WasTrimmed;
}

void UEditableTextUtilities_C::LimitTextLength(class UWidget* EditableTextWidget, int32 Length, class UObject* __WorldContext, bool* WasTrimmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableTextUtilities_C", "LimitTextLength");

	Params::EditableTextUtilities_C_LimitTextLength Parms{};

	Parms.EditableTextWidget = EditableTextWidget;
	Parms.Length = Length;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WasTrimmed != nullptr)
		*WasTrimmed = Parms.WasTrimmed;
}

}
