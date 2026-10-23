#pragma once

#include "Basic.hpp"

#include "VirtualHeightfieldMesh_classes.hpp"
#include "VirtualHeightfieldMesh_parameters.hpp"

namespace SDK
{

void UVirtualHeightfieldMeshComponent::GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VirtualHeightfieldMeshComponent", "GatherHideFlags");

	Params::VirtualHeightfieldMeshComponent_GatherHideFlags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InOutHidePrimitivesInEditor != nullptr)
		*InOutHidePrimitivesInEditor = Parms.InOutHidePrimitivesInEditor;

	if (InOutHidePrimitivesInGame != nullptr)
		*InOutHidePrimitivesInGame = Parms.InOutHidePrimitivesInGame;
}

}
