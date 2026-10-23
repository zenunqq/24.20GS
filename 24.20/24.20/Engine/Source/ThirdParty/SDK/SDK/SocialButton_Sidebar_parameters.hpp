#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_1B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	double                                        Temp_real_Variable_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_41[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	uint8                                         Pad_51[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;
	uint8                                         Pad_62[0x6];
	class UMaterialInstance*                      CallFunc_SelectMaterialInstance_ReturnValue;
	double                                        K2Node_Select_Default;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	double                                        Temp_real_Variable_3;
	bool                                          Temp_bool_Variable_2;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_92[0x6];
	double                                        K2Node_Select_Default_1;
	int32                                         K2Node_Event_FriendsOnline;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_A6[0x2];
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
};
static_assert(alignof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar) == 0x000008, "Wrong alignment on SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar");
static_assert(sizeof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar) == 0x0000B0, "Wrong size on SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, EntryPoint) == 0x000000, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_bool_Variable) == 0x000004, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_real_Variable) == 0x000008, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_real_Variable_1) == 0x000010, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_bool_Variable_1) == 0x000018, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_byte_Variable) == 0x000019, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_byte_Variable_1) == 0x00001A, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_IsMobileGame_ReturnValue) == 0x000028, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000030, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_real_Variable_2) == 0x000038, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_IsMobileGame_ReturnValue_1) == 0x000050, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x000058, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_BooleanAND_ReturnValue_1) == 0x000060, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_IsMobileGame_ReturnValue_2) == 0x000061, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_SelectMaterialInstance_ReturnValue) == 0x000068, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_SelectMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, K2Node_Select_Default) == 0x000070, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_SelectColor_ReturnValue) == 0x000078, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_real_Variable_3) == 0x000088, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, Temp_bool_Variable_2) == 0x000090, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, K2Node_Event_IsDesignTime) == 0x000091, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, K2Node_Select_Default_1) == 0x000098, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, K2Node_Event_FriendsOnline) == 0x0000A0, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::K2Node_Event_FriendsOnline' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_Greater_IntInt_ReturnValue) == 0x0000A4, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, K2Node_Select_Default_2) == 0x0000A5, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x0000A8, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x0000AC, "Member 'SocialButton_Sidebar_C_ExecuteUbergraph_SocialButton_Sidebar::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

struct SocialButton_Sidebar_C_OnNumFriendsTextUpdated final
{
public:
	int32                                         FriendsOnline;
};
static_assert(alignof(SocialButton_Sidebar_C_OnNumFriendsTextUpdated) == 0x000004, "Wrong alignment on SocialButton_Sidebar_C_OnNumFriendsTextUpdated");
static_assert(sizeof(SocialButton_Sidebar_C_OnNumFriendsTextUpdated) == 0x000004, "Wrong size on SocialButton_Sidebar_C_OnNumFriendsTextUpdated");
static_assert(offsetof(SocialButton_Sidebar_C_OnNumFriendsTextUpdated, FriendsOnline) == 0x000000, "Member 'SocialButton_Sidebar_C_OnNumFriendsTextUpdated::FriendsOnline' has a wrong offset!");

struct SocialButton_Sidebar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SocialButton_Sidebar_C_PreConstruct) == 0x000001, "Wrong alignment on SocialButton_Sidebar_C_PreConstruct");
static_assert(sizeof(SocialButton_Sidebar_C_PreConstruct) == 0x000001, "Wrong size on SocialButton_Sidebar_C_PreConstruct");
static_assert(offsetof(SocialButton_Sidebar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SocialButton_Sidebar_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
