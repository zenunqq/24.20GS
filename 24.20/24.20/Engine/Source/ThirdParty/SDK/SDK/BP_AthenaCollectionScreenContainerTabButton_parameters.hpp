#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang final
{
public:
	bool                                          bShow;
};
static_assert(alignof(BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang) == 0x000001, "Wrong alignment on BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang");
static_assert(sizeof(BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang) == 0x000001, "Wrong size on BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang, bShow) == 0x000000, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_BP_ShowBang::bShow' has a wrong offset!");

struct BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_5[0x3];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x3];
	float                                         Temp_real_Variable_2;
	float                                         Temp_real_Variable_3;
	uint8                                         Pad_1C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	float                                         K2Node_Select_Default;
	uint8                                         Pad_2C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	bool                                          K2Node_Event_bShow;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_52[0x2];
	float                                         K2Node_Select_Default_1;
};
static_assert(alignof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton) == 0x000008, "Wrong alignment on BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton");
static_assert(sizeof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton) == 0x000058, "Wrong size on BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, EntryPoint) == 0x000000, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, Temp_real_Variable) == 0x000008, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, Temp_real_Variable_1) == 0x00000C, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, Temp_bool_Variable) == 0x000010, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, Temp_real_Variable_2) == 0x000014, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, Temp_real_Variable_3) == 0x000018, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, K2Node_Select_Default) == 0x000028, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, CallFunc_GetSelected_ReturnValue) == 0x000038, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000040, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000048, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, K2Node_Event_bShow) == 0x000050, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, Temp_bool_Variable_1) == 0x000051, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton, K2Node_Select_Default_1) == 0x000054, "Member 'BP_AthenaCollectionScreenContainerTabButton_C_ExecuteUbergraph_BP_AthenaCollectionScreenContainerTabButton::K2Node_Select_Default_1' has a wrong offset!");

}
