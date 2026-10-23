#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_39[0x3];
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton) == 0x000008, "Wrong alignment on SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton");
static_assert(sizeof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton) == 0x000050, "Wrong size on SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, EntryPoint) == 0x000000, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_bool_Variable) == 0x000004, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_struct_Variable) == 0x000008, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_struct_Variable_1) == 0x000018, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Event_IsDesignTime) == 0x000038, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Select_Default) == 0x00003C, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Select_Default' has a wrong offset!");

struct SocialConfirmationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SocialConfirmationButton_C_PreConstruct) == 0x000001, "Wrong alignment on SocialConfirmationButton_C_PreConstruct");
static_assert(sizeof(SocialConfirmationButton_C_PreConstruct) == 0x000001, "Wrong size on SocialConfirmationButton_C_PreConstruct");
static_assert(offsetof(SocialConfirmationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SocialConfirmationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
