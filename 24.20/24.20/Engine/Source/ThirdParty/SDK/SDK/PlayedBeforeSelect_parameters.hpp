#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect) == 0x000008, "Wrong alignment on PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect");
static_assert(sizeof(PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect) == 0x000010, "Wrong size on PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect");
static_assert(offsetof(PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect, EntryPoint) == 0x000000, "Member 'PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
