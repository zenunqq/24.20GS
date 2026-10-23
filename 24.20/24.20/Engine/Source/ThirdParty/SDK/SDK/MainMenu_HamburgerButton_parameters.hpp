#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_11[0x7];
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	double                                        Temp_real_Variable_3;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	uint8                                         Pad_42[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_61[0x7];
	class UMaterialInstance*                      CallFunc_SelectMaterialInstance_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;
	uint8                                         Pad_81[0x7];
	double                                        K2Node_Select_Default;
	double                                        K2Node_Select_Default_1;
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
};
static_assert(alignof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton) == 0x000008, "Wrong alignment on MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton");
static_assert(sizeof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton) == 0x0000A0, "Wrong size on MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, EntryPoint) == 0x000000, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, Temp_bool_Variable) == 0x000004, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, Temp_real_Variable) == 0x000008, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, Temp_bool_Variable_1) == 0x000010, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, Temp_real_Variable_1) == 0x000018, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, Temp_real_Variable_2) == 0x000020, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_IsMobileGame_ReturnValue) == 0x000028, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000030, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, Temp_real_Variable_3) == 0x000038, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_IsMobileGame_ReturnValue_1) == 0x000041, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000050, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x000058, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_BooleanAND_ReturnValue_1) == 0x000060, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_SelectMaterialInstance_ReturnValue) == 0x000068, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_SelectMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_SelectColor_ReturnValue) == 0x000070, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_IsMobileGame_ReturnValue_2) == 0x000080, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, K2Node_Select_Default) == 0x000088, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, K2Node_Select_Default_1) == 0x000090, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x000098, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x00009C, "Member 'MainMenu_HamburgerButton_C_ExecuteUbergraph_MainMenu_HamburgerButton::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

}
