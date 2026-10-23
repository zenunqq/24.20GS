#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaSeasonItemRewardIcon_C_DeselectedAnim final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_DeselectedAnim) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_DeselectedAnim");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_DeselectedAnim) == 0x000010, "Wrong size on AthenaSeasonItemRewardIcon_C_DeselectedAnim");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_DeselectedAnim, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_DeselectedAnim::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_DeselectedAnim, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'AthenaSeasonItemRewardIcon_C_DeselectedAnim::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	const class UFortItemSeriesDefinition*        K2Node_Event_SeriesData;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_17[0x1];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_21[0x7];
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          CallFunc_HasPurchasedSeasonBook_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_6;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_36[0x2];
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESlateVisibility                              Temp_byte_Variable_7;
	uint8                                         Pad_42[0x6];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	const class UFortItem*                        K2Node_Event_RewardItem;
	TSoftObjectPtr<class UTexture2D>              K2Node_Event_RewardTexture;
	bool                                          K2Node_Event_bHasAdditionalStylesToDisplay;
	uint8                                         Pad_91[0x3];
	int32                                         K2Node_Event_RewardLevel;
	bool                                          K2Node_Event_bRequiresBattlePass;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_9A[0x6];
	class UFortPersistableItem*                   K2Node_DynamicCast_AsFort_Persistable_Item;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_AA[0x6];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_8;
	ESlateVisibility                              K2Node_Select_Default_2;
	ESlateVisibility                              Temp_byte_Variable_9;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_10;
	ESlateVisibility                              K2Node_Select_Default_3;
	ESlateVisibility                              Temp_byte_Variable_11;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default_4;
	bool                                          Temp_bool_Variable_5;
	ESlateVisibility                              K2Node_Select_Default_5;
	uint8                                         Pad_D7[0x1];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon) == 0x000100, "Wrong size on AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, EntryPoint) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_SeriesData) == 0x000008, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_SeriesData' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable) == 0x000010, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_bool_Variable) == 0x000011, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_1) == 0x000012, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_2) == 0x000013, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_bool_Variable_1) == 0x000014, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_3) == 0x000015, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_4) == 0x000016, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_bool_Variable_2) == 0x000020, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_GetAthenaProfile_ReturnValue) == 0x000028, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_GetAthenaProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_5) == 0x000030, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_HasPurchasedSeasonBook_ReturnValue) == 0x000031, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_HasPurchasedSeasonBook_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_6) == 0x000033, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_IsDesignTime) == 0x000034, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_BooleanAND_ReturnValue) == 0x000035, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_DynamicCast_AsOverlay_Slot) == 0x000038, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_DynamicCast_AsOverlay_Slot' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_7) == 0x000041, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_MakeStruct_Margin) == 0x000050, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_RewardItem) == 0x000060, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_RewardItem' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_RewardTexture) == 0x000068, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_RewardTexture' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_bHasAdditionalStylesToDisplay) == 0x000090, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_bHasAdditionalStylesToDisplay' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_RewardLevel) == 0x000094, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_RewardLevel' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Event_bRequiresBattlePass) == 0x000098, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Event_bRequiresBattlePass' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x000099, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_DynamicCast_AsFort_Persistable_Item) == 0x0000A0, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_DynamicCast_AsFort_Persistable_Item' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Select_Default) == 0x0000A9, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B0, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C8, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Select_Default_1) == 0x0000CA, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_bool_Variable_3) == 0x0000CB, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_8) == 0x0000CC, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Select_Default_2) == 0x0000CD, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_9) == 0x0000CE, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_bool_Variable_4) == 0x0000CF, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_10) == 0x0000D0, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Select_Default_3) == 0x0000D1, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_byte_Variable_11) == 0x0000D2, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_BooleanAND_ReturnValue_2) == 0x0000D3, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Select_Default_4) == 0x0000D4, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, Temp_bool_Variable_5) == 0x0000D5, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_Select_Default_5) == 0x0000D6, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000D8, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x0000E0, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x0000E4, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_MakeStruct_Top_ImplicitCast) == 0x0000E8, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, K2Node_MakeStruct_Right_ImplicitCast) == 0x0000EC, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1) == 0x0000F0, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1) == 0x0000F4, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000F8, "Member 'AthenaSeasonItemRewardIcon_C_ExecuteUbergraph_AthenaSeasonItemRewardIcon::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim final
{
public:
	bool                                          bLeftRewardSelected;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim) == 0x000018, "Wrong size on AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim, bLeftRewardSelected) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim::bLeftRewardSelected' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'AthenaSeasonItemRewardIcon_C_HandleMultipleRewardSelctedAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_Hover final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_Hover) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_Hover");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_Hover) == 0x000008, "Wrong size on AthenaSeasonItemRewardIcon_C_Hover");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_Hover, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_Hover::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_OnInitializeReward final
{
public:
	const class UFortItem*                        RewardItem;
	TSoftObjectPtr<class UTexture2D>              RewardTexture;
	bool                                          bHasAdditionalStylesToDisplay;
	uint8                                         Pad_31[0x3];
	int32                                         RewardLevel;
	bool                                          bRequiresBattlePass;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_OnInitializeReward) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_OnInitializeReward");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_OnInitializeReward) == 0x000040, "Wrong size on AthenaSeasonItemRewardIcon_C_OnInitializeReward");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_OnInitializeReward, RewardItem) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_OnInitializeReward::RewardItem' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_OnInitializeReward, RewardTexture) == 0x000008, "Member 'AthenaSeasonItemRewardIcon_C_OnInitializeReward::RewardTexture' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_OnInitializeReward, bHasAdditionalStylesToDisplay) == 0x000030, "Member 'AthenaSeasonItemRewardIcon_C_OnInitializeReward::bHasAdditionalStylesToDisplay' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_OnInitializeReward, RewardLevel) == 0x000034, "Member 'AthenaSeasonItemRewardIcon_C_OnInitializeReward::RewardLevel' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_OnInitializeReward, bRequiresBattlePass) == 0x000038, "Member 'AthenaSeasonItemRewardIcon_C_OnInitializeReward::bRequiresBattlePass' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward final
{
public:
	const class UFortItemSeriesDefinition*        SeriesData;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward) == 0x000008, "Wrong size on AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward, SeriesData) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_OnInitializeSeriesReward::SeriesData' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaSeasonItemRewardIcon_C_PreConstruct");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_PreConstruct) == 0x000001, "Wrong size on AthenaSeasonItemRewardIcon_C_PreConstruct");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_SelectedAnim final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_SelectedAnim) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_SelectedAnim");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_SelectedAnim) == 0x000010, "Wrong size on AthenaSeasonItemRewardIcon_C_SelectedAnim");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SelectedAnim, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_SelectedAnim::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SelectedAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'AthenaSeasonItemRewardIcon_C_SelectedAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_SetRarityColors final
{
public:
	struct FLinearColor                           Color1;
	struct FLinearColor                           Color2;
	struct FLinearColor                           Color3;
	struct FLinearColor                           Color4;
	struct FLinearColor                           Color5;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicOutlineMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_SetRarityColors) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_SetRarityColors");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_SetRarityColors) == 0x000070, "Wrong size on AthenaSeasonItemRewardIcon_C_SetRarityColors");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, Color1) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::Color1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, Color2) == 0x000010, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::Color2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, Color3) == 0x000020, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::Color3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, Color4) == 0x000030, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::Color4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, Color5) == 0x000040, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::Color5' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, CallFunc_GetDynamicOutlineMaterial_ReturnValue) == 0x000050, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::CallFunc_GetDynamicOutlineMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000058, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetRarityColors, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000068, "Member 'AthenaSeasonItemRewardIcon_C_SetRarityColors::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_SetupItemCardStyle final
{
public:
	class UFortItem*                              RewardItem;
	double                                        Temp_real_Variable;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	EFortItemType                                 CallFunc_GetType_ReturnValue;
	uint8                                         Pad_AA[0x6];
	double                                        Temp_real_Variable_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_BC[0x4];
	double                                        Temp_real_Variable_2;
	double                                        K2Node_Select_Default;
	double                                        Temp_real_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_D9[0x7];
	double                                        Temp_real_Variable_4;
	double                                        Temp_real_Variable_5;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_F1[0x7];
	double                                        Temp_real_Variable_6;
	double                                        K2Node_Select_Default_1;
	double                                        Temp_real_Variable_7;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_113[0x5];
	double                                        K2Node_Select_Default_2;
	double                                        Temp_real_Variable_8;
	double                                        K2Node_Select_Default_3;
	double                                        Temp_real_Variable_9;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_139[0x7];
	double                                        K2Node_Select_Default_4;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_SetupItemCardStyle");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle) == 0x000170, "Wrong size on AthenaSeasonItemRewardIcon_C_SetupItemCardStyle");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, RewardItem) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::RewardItem' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable) == 0x000008, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_GetRarity_ReturnValue) == 0x000010, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_BPGetRarityData_ReturnValue) == 0x000018, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000098, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x0000A0, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_GetType_ReturnValue) == 0x0000A9, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_1) == 0x0000B0, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B9, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_bool_Variable) == 0x0000BA, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_BooleanOR_ReturnValue) == 0x0000BB, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_2) == 0x0000C0, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_Select_Default) == 0x0000C8, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_3) == 0x0000D0, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_bool_Variable_1) == 0x0000D8, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_4) == 0x0000E0, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_5) == 0x0000E8, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_bool_Variable_2) == 0x0000F0, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_6) == 0x0000F8, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_Select_Default_1) == 0x000100, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_7) == 0x000108, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_BooleanOR_ReturnValue_1) == 0x000110, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_BooleanOR_ReturnValue_2) == 0x000111, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_bool_Variable_3) == 0x000112, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_Select_Default_2) == 0x000118, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_8) == 0x000120, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_8' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_Select_Default_3) == 0x000128, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_real_Variable_9) == 0x000130, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_real_Variable_9' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, Temp_bool_Variable_4) == 0x000138, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, K2Node_Select_Default_4) == 0x000140, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000148, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000150, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000154, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000158, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x00015C, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x000160, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x000164, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x000168, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_SetupItemCardStyle, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x00016C, "Member 'AthenaSeasonItemRewardIcon_C_SetupItemCardStyle::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");

struct AthenaSeasonItemRewardIcon_C_Unhover final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(AthenaSeasonItemRewardIcon_C_Unhover) == 0x000008, "Wrong alignment on AthenaSeasonItemRewardIcon_C_Unhover");
static_assert(sizeof(AthenaSeasonItemRewardIcon_C_Unhover) == 0x000008, "Wrong size on AthenaSeasonItemRewardIcon_C_Unhover");
static_assert(offsetof(AthenaSeasonItemRewardIcon_C_Unhover, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'AthenaSeasonItemRewardIcon_C_Unhover::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}
