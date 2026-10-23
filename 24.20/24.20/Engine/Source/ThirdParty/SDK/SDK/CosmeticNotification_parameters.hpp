#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct CosmeticNotification_C_UpdateQuestRewardVisuals final
{
public:
	const class UFortItemDefinition*              RewardItem;
	EFortRarity                                   QuestRarity;
};
static_assert(alignof(CosmeticNotification_C_UpdateQuestRewardVisuals) == 0x000008, "Wrong alignment on CosmeticNotification_C_UpdateQuestRewardVisuals");
static_assert(sizeof(CosmeticNotification_C_UpdateQuestRewardVisuals) == 0x000010, "Wrong size on CosmeticNotification_C_UpdateQuestRewardVisuals");
static_assert(offsetof(CosmeticNotification_C_UpdateQuestRewardVisuals, RewardItem) == 0x000000, "Member 'CosmeticNotification_C_UpdateQuestRewardVisuals::RewardItem' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_UpdateQuestRewardVisuals, QuestRarity) == 0x000008, "Member 'CosmeticNotification_C_UpdateQuestRewardVisuals::QuestRarity' has a wrong offset!");

struct CosmeticNotification_C_UpdateLevelUpVisuals final
{
public:
	const class UFortItemDefinition*              RewardItem;
};
static_assert(alignof(CosmeticNotification_C_UpdateLevelUpVisuals) == 0x000008, "Wrong alignment on CosmeticNotification_C_UpdateLevelUpVisuals");
static_assert(sizeof(CosmeticNotification_C_UpdateLevelUpVisuals) == 0x000008, "Wrong size on CosmeticNotification_C_UpdateLevelUpVisuals");
static_assert(offsetof(CosmeticNotification_C_UpdateLevelUpVisuals, RewardItem) == 0x000000, "Member 'CosmeticNotification_C_UpdateLevelUpVisuals::RewardItem' has a wrong offset!");

struct CosmeticNotification_C_SetStyle_QuestCosmetic final
{
public:
	EFortRarity                                   Rarity;
	uint8                                         Pad_1[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(CosmeticNotification_C_SetStyle_QuestCosmetic) == 0x000008, "Wrong alignment on CosmeticNotification_C_SetStyle_QuestCosmetic");
static_assert(sizeof(CosmeticNotification_C_SetStyle_QuestCosmetic) == 0x000010, "Wrong size on CosmeticNotification_C_SetStyle_QuestCosmetic");
static_assert(offsetof(CosmeticNotification_C_SetStyle_QuestCosmetic, Rarity) == 0x000000, "Member 'CosmeticNotification_C_SetStyle_QuestCosmetic::Rarity' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_SetStyle_QuestCosmetic, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CosmeticNotification_C_SetStyle_QuestCosmetic::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct CosmeticNotification_C_SetStyle_LevelUp final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(CosmeticNotification_C_SetStyle_LevelUp) == 0x000008, "Wrong alignment on CosmeticNotification_C_SetStyle_LevelUp");
static_assert(sizeof(CosmeticNotification_C_SetStyle_LevelUp) == 0x000008, "Wrong size on CosmeticNotification_C_SetStyle_LevelUp");
static_assert(offsetof(CosmeticNotification_C_SetStyle_LevelUp, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'CosmeticNotification_C_SetStyle_LevelUp::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct CosmeticNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(CosmeticNotification_C_PreConstruct) == 0x000001, "Wrong alignment on CosmeticNotification_C_PreConstruct");
static_assert(sizeof(CosmeticNotification_C_PreConstruct) == 0x000001, "Wrong size on CosmeticNotification_C_PreConstruct");
static_assert(offsetof(CosmeticNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CosmeticNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;
	uint8                                         Pad_2A[0x2];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	float                                         K2Node_Select_Default;
	const class UFortItemDefinition*              K2Node_Event_RewardItem_1;
	EFortRarity                                   K2Node_Event_QuestRarity;
	uint8                                         Pad_41[0x7];
	const class UFortItemDefinition*              K2Node_Event_RewardItem;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_62[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification) == 0x000008, "Wrong alignment on CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification");
static_assert(sizeof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification) == 0x000078, "Wrong size on CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, EntryPoint) == 0x000000, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_GetObjectClass_ReturnValue) == 0x000020, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, Temp_bool_Variable) == 0x000028, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_ClassIsChildOf_ReturnValue) == 0x000029, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, Temp_real_Variable) == 0x00002C, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, Temp_real_Variable_1) == 0x000030, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_Select_Default) == 0x000034, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_Event_RewardItem_1) == 0x000038, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_Event_RewardItem_1' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_Event_QuestRarity) == 0x000040, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_Event_QuestRarity' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_Event_RewardItem) == 0x000048, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_Event_RewardItem' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_PlayAnimationForward_ReturnValue) == 0x000050, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000058, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_IsMobileGame_ReturnValue) == 0x000060, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_Event_IsDesignTime) == 0x000061, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'CosmeticNotification_C_ExecuteUbergraph_CosmeticNotification::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
