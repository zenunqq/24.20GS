#pragma once

#include "Basic.hpp"

#include "AssembledMeshSystem_classes.hpp"
#include "AssembledMeshSystem_parameters.hpp"

namespace SDK
{

void UAssembledMeshCoordinatorComponent::OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssembledMeshCoordinatorComponent", "OnPlayerStatePawnSet");

	Params::AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class USkeletalMeshComponent* UAssembledMeshUserComponent::GetAttachToComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssembledMeshUserComponent", "GetAttachToComponent");

	Params::AssembledMeshUserComponent_GetAttachToComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAssembledMeshUserComponent::OnRep_MeshParts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssembledMeshUserComponent", "OnRep_MeshParts");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
