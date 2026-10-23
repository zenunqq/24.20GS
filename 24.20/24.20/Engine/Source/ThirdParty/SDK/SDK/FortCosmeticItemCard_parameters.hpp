#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct FortCosmeticItemCard_C_OnUpdateItemCardMaterial final
{
public:
	class UMaterialInterface*                     Material;
};
static_assert(alignof(FortCosmeticItemCard_C_OnUpdateItemCardMaterial) == 0x000008, "Wrong alignment on FortCosmeticItemCard_C_OnUpdateItemCardMaterial");
static_assert(sizeof(FortCosmeticItemCard_C_OnUpdateItemCardMaterial) == 0x000008, "Wrong size on FortCosmeticItemCard_C_OnUpdateItemCardMaterial");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateItemCardMaterial, Material) == 0x000000, "Member 'FortCosmeticItemCard_C_OnUpdateItemCardMaterial::Material' has a wrong offset!");

struct FortCosmeticItemCard_C_OnUpdateItemCardIcon final
{
public:
	class UTexture2D*                             Icon;
	float                                         IconScale;
};
static_assert(alignof(FortCosmeticItemCard_C_OnUpdateItemCardIcon) == 0x000008, "Wrong alignment on FortCosmeticItemCard_C_OnUpdateItemCardIcon");
static_assert(sizeof(FortCosmeticItemCard_C_OnUpdateItemCardIcon) == 0x000010, "Wrong size on FortCosmeticItemCard_C_OnUpdateItemCardIcon");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateItemCardIcon, Icon) == 0x000000, "Member 'FortCosmeticItemCard_C_OnUpdateItemCardIcon::Icon' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateItemCardIcon, IconScale) == 0x000008, "Member 'FortCosmeticItemCard_C_OnUpdateItemCardIcon::IconScale' has a wrong offset!");

struct FortCosmeticItemCard_C_OnUpdateEnhanced final
{
public:
	bool                                          bEnhanced;
};
static_assert(alignof(FortCosmeticItemCard_C_OnUpdateEnhanced) == 0x000001, "Wrong alignment on FortCosmeticItemCard_C_OnUpdateEnhanced");
static_assert(sizeof(FortCosmeticItemCard_C_OnUpdateEnhanced) == 0x000001, "Wrong size on FortCosmeticItemCard_C_OnUpdateEnhanced");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateEnhanced, bEnhanced) == 0x000000, "Member 'FortCosmeticItemCard_C_OnUpdateEnhanced::bEnhanced' has a wrong offset!");

struct FortCosmeticItemCard_C_OnSizeChanged final
{
public:
	float                                         InCardWidth;
};
static_assert(alignof(FortCosmeticItemCard_C_OnSizeChanged) == 0x000004, "Wrong alignment on FortCosmeticItemCard_C_OnSizeChanged");
static_assert(sizeof(FortCosmeticItemCard_C_OnSizeChanged) == 0x000004, "Wrong size on FortCosmeticItemCard_C_OnSizeChanged");
static_assert(offsetof(FortCosmeticItemCard_C_OnSizeChanged, InCardWidth) == 0x000000, "Member 'FortCosmeticItemCard_C_OnSizeChanged::InCardWidth' has a wrong offset!");

struct FortCosmeticItemCard_C_HandleUpdateVisuals final
{
public:
	bool                                          bIsItem;
	bool                                          bIsBorderAnimated;
	bool                                          IsHero;
	bool                                          IsReward;
	bool                                          IsShuffleItem;
	bool                                          ShowAsArchived;
	bool                                          UseAnimations;
	uint8                                         Pad_7[0x1];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(FortCosmeticItemCard_C_HandleUpdateVisuals) == 0x000008, "Wrong alignment on FortCosmeticItemCard_C_HandleUpdateVisuals");
static_assert(sizeof(FortCosmeticItemCard_C_HandleUpdateVisuals) == 0x000028, "Wrong size on FortCosmeticItemCard_C_HandleUpdateVisuals");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, bIsItem) == 0x000000, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::bIsItem' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, bIsBorderAnimated) == 0x000001, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::bIsBorderAnimated' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, IsHero) == 0x000002, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::IsHero' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, IsReward) == 0x000003, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::IsReward' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, IsShuffleItem) == 0x000004, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::IsShuffleItem' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, ShowAsArchived) == 0x000005, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::ShowAsArchived' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, UseAnimations) == 0x000006, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::UseAnimations' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000010, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000018, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, CallFunc_Conv_BoolToFloat_ReturnValue_1) == 0x00001C, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::CallFunc_Conv_BoolToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000020, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateVisuals, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000024, "Member 'FortCosmeticItemCard_C_HandleUpdateVisuals::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct FortCosmeticItemCard_C_HandleUpdateRarity final
{
public:
	struct FFortColorPalette                      RarityColors;
};
static_assert(alignof(FortCosmeticItemCard_C_HandleUpdateRarity) == 0x000004, "Wrong alignment on FortCosmeticItemCard_C_HandleUpdateRarity");
static_assert(sizeof(FortCosmeticItemCard_C_HandleUpdateRarity) == 0x000050, "Wrong size on FortCosmeticItemCard_C_HandleUpdateRarity");
static_assert(offsetof(FortCosmeticItemCard_C_HandleUpdateRarity, RarityColors) == 0x000000, "Member 'FortCosmeticItemCard_C_HandleUpdateRarity::RarityColors' has a wrong offset!");

struct FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsItem;
	bool                                          K2Node_Event_bIsBorderAnimated;
	bool                                          K2Node_Event_bIsHero;
	bool                                          K2Node_Event_bReward;
	bool                                          K2Node_Event_bIsShuffleItem;
	bool                                          K2Node_Event_bShowAsArchived;
	bool                                          K2Node_Event_bUseAnimations;
	bool                                          K2Node_Event_bEnhanced;
	uint8                                         Pad_C[0x4];
	class UMaterialInterface*                     K2Node_Event_Material;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_1D[0x3];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UTexture2D*                             K2Node_Event_Icon;
	float                                         K2Node_Event_IconScale;
	struct FFortColorPalette                      K2Node_Event_ColorPalette;
	float                                         K2Node_Event_InCardWidth;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	uint8                                         Pad_AC[0x4];
	double                                        K2Node_VariableSet_BaseIconScale_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard) == 0x000008, "Wrong alignment on FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard");
static_assert(sizeof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard) == 0x0000C0, "Wrong size on FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, EntryPoint) == 0x000000, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bIsItem) == 0x000004, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bIsItem' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bIsBorderAnimated) == 0x000005, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bIsBorderAnimated' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bIsHero) == 0x000006, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bIsHero' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bReward) == 0x000007, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bReward' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bIsShuffleItem) == 0x000008, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bIsShuffleItem' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bShowAsArchived) == 0x000009, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bShowAsArchived' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bUseAnimations) == 0x00000A, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bUseAnimations' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_bEnhanced) == 0x00000B, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_bEnhanced' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_Material) == 0x000010, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_Material' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000018, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00001C, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_Icon) == 0x000038, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_Icon' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_IconScale) == 0x000040, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_IconScale' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_ColorPalette) == 0x000044, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_ColorPalette' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_Event_InCardWidth) == 0x000094, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_Event_InCardWidth' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000098, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000A0, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000A8, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, K2Node_VariableSet_BaseIconScale_ImplicitCast) == 0x0000B0, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::K2Node_VariableSet_BaseIconScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000B8, "Member 'FortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct FortCosmeticItemCard_C_ArchiveAnimation final
{
public:
	bool                                          IsArchived;
	bool                                          UseAnimations;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_D[0x3];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
};
static_assert(alignof(FortCosmeticItemCard_C_ArchiveAnimation) == 0x000008, "Wrong alignment on FortCosmeticItemCard_C_ArchiveAnimation");
static_assert(sizeof(FortCosmeticItemCard_C_ArchiveAnimation) == 0x000030, "Wrong size on FortCosmeticItemCard_C_ArchiveAnimation");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, IsArchived) == 0x000000, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::IsArchived' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, UseAnimations) == 0x000001, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::UseAnimations' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, Temp_bool_Variable) == 0x000002, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, Temp_byte_Variable) == 0x000003, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, Temp_byte_Variable_1) == 0x000004, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, K2Node_Select_Default) == 0x00000C, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, CallFunc_SelectFloat_B_ImplicitCast) == 0x000020, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_ArchiveAnimation, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000028, "Member 'FortCosmeticItemCard_C_ArchiveAnimation::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");

struct FortCosmeticItemCard_C_OnUpdateVisuals final
{
public:
	bool                                          bIsItem;
	bool                                          bIsBorderAnimated;
	bool                                          bIsHero;
	bool                                          bReward;
	bool                                          bIsShuffleItem;
	bool                                          bShowAsArchived;
	bool                                          bUseAnimations;
};
static_assert(alignof(FortCosmeticItemCard_C_OnUpdateVisuals) == 0x000001, "Wrong alignment on FortCosmeticItemCard_C_OnUpdateVisuals");
static_assert(sizeof(FortCosmeticItemCard_C_OnUpdateVisuals) == 0x000007, "Wrong size on FortCosmeticItemCard_C_OnUpdateVisuals");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bIsItem) == 0x000000, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bIsItem' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bIsBorderAnimated) == 0x000001, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bIsBorderAnimated' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bIsHero) == 0x000002, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bIsHero' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bReward) == 0x000003, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bReward' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bIsShuffleItem) == 0x000004, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bIsShuffleItem' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bShowAsArchived) == 0x000005, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bShowAsArchived' has a wrong offset!");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateVisuals, bUseAnimations) == 0x000006, "Member 'FortCosmeticItemCard_C_OnUpdateVisuals::bUseAnimations' has a wrong offset!");

struct FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors final
{
public:
	struct FFortColorPalette                      ColorPalette;
};
static_assert(alignof(FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors) == 0x000004, "Wrong alignment on FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors");
static_assert(sizeof(FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors) == 0x000050, "Wrong size on FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors");
static_assert(offsetof(FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors, ColorPalette) == 0x000000, "Member 'FortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors::ColorPalette' has a wrong offset!");

}
