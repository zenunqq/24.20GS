#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VirtualHeightfieldMeshComponent_GatherHideFlags final
{
public:
	bool                                          InOutHidePrimitivesInEditor;
	bool                                          InOutHidePrimitivesInGame;
};
static_assert(alignof(VirtualHeightfieldMeshComponent_GatherHideFlags) == 0x000001, "Wrong alignment on VirtualHeightfieldMeshComponent_GatherHideFlags");
static_assert(sizeof(VirtualHeightfieldMeshComponent_GatherHideFlags) == 0x000002, "Wrong size on VirtualHeightfieldMeshComponent_GatherHideFlags");
static_assert(offsetof(VirtualHeightfieldMeshComponent_GatherHideFlags, InOutHidePrimitivesInEditor) == 0x000000, "Member 'VirtualHeightfieldMeshComponent_GatherHideFlags::InOutHidePrimitivesInEditor' has a wrong offset!");
static_assert(offsetof(VirtualHeightfieldMeshComponent_GatherHideFlags, InOutHidePrimitivesInGame) == 0x000001, "Member 'VirtualHeightfieldMeshComponent_GatherHideFlags::InOutHidePrimitivesInGame' has a wrong offset!");

}
