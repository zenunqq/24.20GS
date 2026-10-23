#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SocialButton_C_ExecuteUbergraph_SocialButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_6[0x2];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	double                                        Temp_real_Variable_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	uint8                                         Pad_32[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_51[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	uint8                                         Pad_64[0x4];
	class UMaterialInstance*                      CallFunc_SelectMaterialInstance_ReturnValue;
	double                                        Temp_real_Variable_3;
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;
	uint8                                         Pad_79[0x7];
	double                                        K2Node_Select_Default;
	double                                        K2Node_Select_Default_1;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
};
static_assert(alignof(SocialButton_C_ExecuteUbergraph_SocialButton) == 0x000008, "Wrong alignment on SocialButton_C_ExecuteUbergraph_SocialButton");
static_assert(sizeof(SocialButton_C_ExecuteUbergraph_SocialButton) == 0x000098, "Wrong size on SocialButton_C_ExecuteUbergraph_SocialButton");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, EntryPoint) == 0x000000, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, Temp_bool_Variable) == 0x000004, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, Temp_bool_Variable_1) == 0x000005, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, Temp_real_Variable) == 0x000008, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, Temp_real_Variable_1) == 0x000010, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_IsMobileGame_ReturnValue) == 0x000018, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000020, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, Temp_real_Variable_2) == 0x000028, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_IsMobileGame_ReturnValue_1) == 0x000031, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000040, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x000048, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_BooleanAND_ReturnValue_1) == 0x000050, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_SelectColor_ReturnValue) == 0x000054, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_SelectMaterialInstance_ReturnValue) == 0x000068, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_SelectMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, Temp_real_Variable_3) == 0x000070, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_IsMobileGame_ReturnValue_2) == 0x000078, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, K2Node_Select_Default) == 0x000080, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, K2Node_Select_Default_1) == 0x000088, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000090, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SocialButton_C_ExecuteUbergraph_SocialButton, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x000094, "Member 'SocialButton_C_ExecuteUbergraph_SocialButton::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");

}
