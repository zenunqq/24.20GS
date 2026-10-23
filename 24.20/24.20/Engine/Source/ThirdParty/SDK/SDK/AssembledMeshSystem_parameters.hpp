#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet final
{
public:
	class APlayerState*                           Player;
	class APawn*                                  NewPawn;
	class APawn*                                  OldPawn;
};
static_assert(alignof(AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet) == 0x000008, "Wrong alignment on AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet");
static_assert(sizeof(AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet) == 0x000018, "Wrong size on AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet");
static_assert(offsetof(AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet, Player) == 0x000000, "Member 'AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet::Player' has a wrong offset!");
static_assert(offsetof(AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet, NewPawn) == 0x000008, "Member 'AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet::NewPawn' has a wrong offset!");
static_assert(offsetof(AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet, OldPawn) == 0x000010, "Member 'AssembledMeshCoordinatorComponent_OnPlayerStatePawnSet::OldPawn' has a wrong offset!");

struct AssembledMeshUserComponent_GetAttachToComponent final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;
};
static_assert(alignof(AssembledMeshUserComponent_GetAttachToComponent) == 0x000008, "Wrong alignment on AssembledMeshUserComponent_GetAttachToComponent");
static_assert(sizeof(AssembledMeshUserComponent_GetAttachToComponent) == 0x000008, "Wrong size on AssembledMeshUserComponent_GetAttachToComponent");
static_assert(offsetof(AssembledMeshUserComponent_GetAttachToComponent, ReturnValue) == 0x000000, "Member 'AssembledMeshUserComponent_GetAttachToComponent::ReturnValue' has a wrong offset!");

}
