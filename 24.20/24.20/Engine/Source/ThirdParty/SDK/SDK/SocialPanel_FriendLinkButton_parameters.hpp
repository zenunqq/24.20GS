#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton final
{
public:
	int32                                         EntryPoint;
	EFriendLinkShareButtonType                    Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	EFriendLinkShareButtonType                    K2Node_Event_Type;
	uint8                                         Pad_39[0x7];
	class UMaterialInterface*                     K2Node_Select_Default;
};
static_assert(alignof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton) == 0x000008, "Wrong alignment on SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton");
static_assert(sizeof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton) == 0x000048, "Wrong size on SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, EntryPoint) == 0x000000, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, Temp_byte_Variable) == 0x000004, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, Temp_object_Variable) == 0x000008, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, Temp_object_Variable_1) == 0x000010, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, Temp_object_Variable_2) == 0x000018, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, K2Node_Event_Type) == 0x000038, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::K2Node_Event_Type' has a wrong offset!");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton, K2Node_Select_Default) == 0x000040, "Member 'SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton::K2Node_Select_Default' has a wrong offset!");

struct SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet final
{
public:
	EFriendLinkShareButtonType                    Type;
};
static_assert(alignof(SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet) == 0x000001, "Wrong alignment on SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet");
static_assert(sizeof(SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet) == 0x000001, "Wrong size on SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet");
static_assert(offsetof(SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet, Type) == 0x000000, "Member 'SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet::Type' has a wrong offset!");

}
