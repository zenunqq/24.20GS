#pragma once

#include "Basic.hpp"

#include "Chooser_classes.hpp"
#include "Chooser_parameters.hpp"

namespace SDK
{

class UObject* UChooserFunctionLibrary::EvaluateChooser(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateChooser");

	Params::ChooserFunctionLibrary_EvaluateChooser Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UObject*> UChooserFunctionLibrary::EvaluateChooserMulti(const class UObject* ContextObject, const class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChooserFunctionLibrary", "EvaluateChooserMulti");

	Params::ChooserFunctionLibrary_EvaluateChooserMulti Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
