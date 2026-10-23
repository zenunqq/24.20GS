#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_bNewIsChecked;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox) == 0x000008, "Wrong alignment on BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox");
static_assert(sizeof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox) == 0x000038, "Wrong size on BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, EntryPoint) == 0x000000, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, Temp_bool_Variable) == 0x000004, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, Temp_byte_Variable) == 0x000005, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, Temp_byte_Variable_1) == 0x000006, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, K2Node_Event_bNewIsChecked) == 0x000007, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::K2Node_Event_bNewIsChecked' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, K2Node_Select_Default) == 0x000008, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000030, "Member 'BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

struct BP_BuyResourcesBundleCheckBox_C_OnStateChanged final
{
public:
	bool                                          bNewIsChecked;
};
static_assert(alignof(BP_BuyResourcesBundleCheckBox_C_OnStateChanged) == 0x000001, "Wrong alignment on BP_BuyResourcesBundleCheckBox_C_OnStateChanged");
static_assert(sizeof(BP_BuyResourcesBundleCheckBox_C_OnStateChanged) == 0x000001, "Wrong size on BP_BuyResourcesBundleCheckBox_C_OnStateChanged");
static_assert(offsetof(BP_BuyResourcesBundleCheckBox_C_OnStateChanged, bNewIsChecked) == 0x000000, "Member 'BP_BuyResourcesBundleCheckBox_C_OnStateChanged::bNewIsChecked' has a wrong offset!");

}
