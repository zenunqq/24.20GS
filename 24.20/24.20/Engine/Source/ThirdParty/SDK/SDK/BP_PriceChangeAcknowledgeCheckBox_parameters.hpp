#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox) == 0x000008, "Wrong alignment on BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox");
static_assert(sizeof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox) == 0x000028, "Wrong size on BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox");
static_assert(offsetof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox, EntryPoint) == 0x000000, "Member 'BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000018, "Member 'BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

}
