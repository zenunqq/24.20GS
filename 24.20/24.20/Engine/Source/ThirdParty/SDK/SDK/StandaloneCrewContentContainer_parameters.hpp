#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
};
static_assert(alignof(StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer) == 0x000008, "Wrong alignment on StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer");
static_assert(sizeof(StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer) == 0x000010, "Wrong size on StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer");
static_assert(offsetof(StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer, EntryPoint) == 0x000000, "Member 'StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'StandaloneCrewContentContainer_C_ExecuteUbergraph_StandaloneCrewContentContainer::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");

}
