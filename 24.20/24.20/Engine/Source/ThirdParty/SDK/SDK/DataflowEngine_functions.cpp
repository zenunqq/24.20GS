#pragma once

#include "Basic.hpp"

#include "DataflowEngine_classes.hpp"
#include "DataflowEngine_parameters.hpp"

namespace SDK
{

void UDataflowBlueprintLibrary::EvaluateTerminalNodeByName(class UDataflow* Dataflow, class FName TerminalNodeName, class UObject* ResultAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DataflowBlueprintLibrary", "EvaluateTerminalNodeByName");

	Params::DataflowBlueprintLibrary_EvaluateTerminalNodeByName Parms{};

	Parms.Dataflow = Dataflow;
	Parms.TerminalNodeName = TerminalNodeName;
	Parms.ResultAsset = ResultAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
