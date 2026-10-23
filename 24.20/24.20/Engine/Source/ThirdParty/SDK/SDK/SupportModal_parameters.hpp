#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SupportModal_C_ExecuteUbergraph_SupportModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(SupportModal_C_ExecuteUbergraph_SupportModal) == 0x000008, "Wrong alignment on SupportModal_C_ExecuteUbergraph_SupportModal");
static_assert(sizeof(SupportModal_C_ExecuteUbergraph_SupportModal) == 0x000010, "Wrong size on SupportModal_C_ExecuteUbergraph_SupportModal");
static_assert(offsetof(SupportModal_C_ExecuteUbergraph_SupportModal, EntryPoint) == 0x000000, "Member 'SupportModal_C_ExecuteUbergraph_SupportModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(SupportModal_C_ExecuteUbergraph_SupportModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SupportModal_C_ExecuteUbergraph_SupportModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
