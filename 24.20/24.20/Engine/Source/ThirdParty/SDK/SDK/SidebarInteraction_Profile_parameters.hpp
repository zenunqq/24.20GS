#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_7[0x1];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_1B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsPlatformOnlyFriend_ReturnValue;
	uint8                                         Pad_31[0x3];
	class FName                                   CallFunc_GetInteractionName_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_3E[0x2];
	double                                        K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_4A[0x2];
	float                                         CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast;
};
static_assert(alignof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile) == 0x000008, "Wrong alignment on SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile");
static_assert(sizeof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile) == 0x000050, "Wrong size on SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, EntryPoint) == 0x000000, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_byte_Variable) == 0x000004, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_byte_Variable_1) == 0x000005, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_bool_Variable) == 0x000006, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_real_Variable) == 0x000008, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_real_Variable_1) == 0x000010, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_bool_Variable_1) == 0x000018, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_byte_Variable_2) == 0x000019, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_byte_Variable_3) == 0x00001A, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_IsPlatformOnlyFriend_ReturnValue) == 0x000030, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_IsPlatformOnlyFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_GetInteractionName_ReturnValue) == 0x000034, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_GetInteractionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000038, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000039, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, K2Node_Select_Default) == 0x00003A, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x00003B, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_BooleanOR_ReturnValue) == 0x00003C, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_IsMobileGame_ReturnValue) == 0x00003D, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, K2Node_Select_Default_1) == 0x000040, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, Temp_bool_Variable_2) == 0x000048, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, K2Node_Select_Default_2) == 0x000049, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile, CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast) == 0x00004C, "Member 'SidebarInteraction_Profile_C_ExecuteUbergraph_SidebarInteraction_Profile::CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast' has a wrong offset!");

struct SidebarInteraction_Profile_C_SetArrow final
{
public:
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	double                                        Temp_real_Variable_3;
	double                                        Temp_real_Variable_4;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	EFortSidebarSocialInteractionArrow            Temp_byte_Variable_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_2D[0x3];
	double                                        K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_39[0x3];
	float                                         CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;
};
static_assert(alignof(SidebarInteraction_Profile_C_SetArrow) == 0x000008, "Wrong alignment on SidebarInteraction_Profile_C_SetArrow");
static_assert(sizeof(SidebarInteraction_Profile_C_SetArrow) == 0x000040, "Wrong size on SidebarInteraction_Profile_C_SetArrow");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_real_Variable) == 0x000000, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_real_Variable_1) == 0x000008, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_real_Variable_2) == 0x000010, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_real_Variable_3) == 0x000018, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_real_Variable_4) == 0x000020, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_bool_Variable) == 0x000028, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_byte_Variable) == 0x000029, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_byte_Variable_1) == 0x00002A, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, Temp_byte_Variable_2) == 0x00002B, "Member 'SidebarInteraction_Profile_C_SetArrow::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'SidebarInteraction_Profile_C_SetArrow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, K2Node_Select_Default) == 0x000030, "Member 'SidebarInteraction_Profile_C_SetArrow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, K2Node_Select_Default_1) == 0x000038, "Member 'SidebarInteraction_Profile_C_SetArrow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarInteraction_Profile_C_SetArrow, CallFunc_SetRenderTransformAngle_Angle_ImplicitCast) == 0x00003C, "Member 'SidebarInteraction_Profile_C_SetArrow::CallFunc_SetRenderTransformAngle_Angle_ImplicitCast' has a wrong offset!");

}
