#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal) == 0x000008, "Wrong alignment on Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal");
static_assert(sizeof(Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal) == 0x000010, "Wrong size on Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal");
static_assert(offsetof(Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal, EntryPoint) == 0x000000, "Member 'Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'Athena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
