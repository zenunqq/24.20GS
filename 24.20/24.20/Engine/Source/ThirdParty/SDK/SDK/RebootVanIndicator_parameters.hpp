#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator) == 0x000008, "Wrong alignment on RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator");
static_assert(sizeof(RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator) == 0x000010, "Wrong size on RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator");
static_assert(offsetof(RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator, EntryPoint) == 0x000000, "Member 'RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
