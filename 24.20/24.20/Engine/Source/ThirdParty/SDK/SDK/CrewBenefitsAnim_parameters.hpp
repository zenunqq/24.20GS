#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim) == 0x000008, "Wrong alignment on CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim");
static_assert(sizeof(CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim) == 0x000010, "Wrong size on CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim");
static_assert(offsetof(CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim, EntryPoint) == 0x000000, "Member 'CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CrewBenefitsAnim_C_ExecuteUbergraph_CrewBenefitsAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
