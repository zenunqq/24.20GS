#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct DataflowBlueprintLibrary_EvaluateTerminalNodeByName final
{
public:
	class UDataflow*                              Dataflow;
	class FName                                   TerminalNodeName;
	uint8                                         Pad_C[0x4];
	class UObject*                                ResultAsset;
};
static_assert(alignof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName) == 0x000008, "Wrong alignment on DataflowBlueprintLibrary_EvaluateTerminalNodeByName");
static_assert(sizeof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName) == 0x000018, "Wrong size on DataflowBlueprintLibrary_EvaluateTerminalNodeByName");
static_assert(offsetof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName, Dataflow) == 0x000000, "Member 'DataflowBlueprintLibrary_EvaluateTerminalNodeByName::Dataflow' has a wrong offset!");
static_assert(offsetof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName, TerminalNodeName) == 0x000008, "Member 'DataflowBlueprintLibrary_EvaluateTerminalNodeByName::TerminalNodeName' has a wrong offset!");
static_assert(offsetof(DataflowBlueprintLibrary_EvaluateTerminalNodeByName, ResultAsset) == 0x000010, "Member 'DataflowBlueprintLibrary_EvaluateTerminalNodeByName::ResultAsset' has a wrong offset!");

}
