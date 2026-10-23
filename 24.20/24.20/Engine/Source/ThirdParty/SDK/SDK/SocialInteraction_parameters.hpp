#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SocialInteraction_C_ExecuteUbergraph_SocialInteraction final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_19[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsPlatformOnlyFriend_ReturnValue;
	uint8                                         Pad_31[0x3];
	class FName                                   CallFunc_GetInteractionName_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction) == 0x000008, "Wrong alignment on SocialInteraction_C_ExecuteUbergraph_SocialInteraction");
static_assert(sizeof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction) == 0x000040, "Wrong size on SocialInteraction_C_ExecuteUbergraph_SocialInteraction");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, EntryPoint) == 0x000000, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, Temp_bool_Variable) == 0x000004, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, Temp_byte_Variable) == 0x00000C, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, Temp_byte_Variable_1) == 0x000018, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_IsPlatformOnlyFriend_ReturnValue) == 0x000030, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_IsPlatformOnlyFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_GetInteractionName_ReturnValue) == 0x000034, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_GetInteractionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000038, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, K2Node_Select_Default) == 0x000039, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x00003A, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialInteraction_C_ExecuteUbergraph_SocialInteraction, CallFunc_BooleanOR_ReturnValue) == 0x00003B, "Member 'SocialInteraction_C_ExecuteUbergraph_SocialInteraction::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
