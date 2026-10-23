#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal) == 0x000008, "Wrong alignment on Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal");
static_assert(sizeof(Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal) == 0x000010, "Wrong size on Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal");
static_assert(offsetof(Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal, EntryPoint) == 0x000000, "Member 'Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'Athena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
