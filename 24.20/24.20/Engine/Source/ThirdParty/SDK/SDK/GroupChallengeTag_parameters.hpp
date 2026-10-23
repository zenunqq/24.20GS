#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x3];
	struct FMargin                                K2Node_Select_Default;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
};
static_assert(alignof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag) == 0x000008, "Wrong alignment on GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag");
static_assert(sizeof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag) == 0x000048, "Wrong size on GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, EntryPoint) == 0x000000, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_Event_IsDesignTime) == 0x000004, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_MakeStruct_Margin) == 0x000010, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_MakeStruct_Margin_1) == 0x000020, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, Temp_bool_Variable) == 0x000030, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, K2Node_Select_Default) == 0x000034, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000044, "Member 'GroupChallengeTag_C_ExecuteUbergraph_GroupChallengeTag::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

struct GroupChallengeTag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(GroupChallengeTag_C_PreConstruct) == 0x000001, "Wrong alignment on GroupChallengeTag_C_PreConstruct");
static_assert(sizeof(GroupChallengeTag_C_PreConstruct) == 0x000001, "Wrong size on GroupChallengeTag_C_PreConstruct");
static_assert(offsetof(GroupChallengeTag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GroupChallengeTag_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct GroupChallengeTag_C_SetRarity final
{
public:
	EFortRarity                                   Rarity;
	uint8                                         Pad_1[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(GroupChallengeTag_C_SetRarity) == 0x000008, "Wrong alignment on GroupChallengeTag_C_SetRarity");
static_assert(sizeof(GroupChallengeTag_C_SetRarity) == 0x0000A0, "Wrong size on GroupChallengeTag_C_SetRarity");
static_assert(offsetof(GroupChallengeTag_C_SetRarity, Rarity) == 0x000000, "Member 'GroupChallengeTag_C_SetRarity::Rarity' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_SetRarity, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'GroupChallengeTag_C_SetRarity::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_SetRarity, CallFunc_BPGetRarityData_ReturnValue) == 0x000018, "Member 'GroupChallengeTag_C_SetRarity::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GroupChallengeTag_C_SetRarity, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000098, "Member 'GroupChallengeTag_C_SetRarity::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
