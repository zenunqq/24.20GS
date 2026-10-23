#pragma once

#include "Basic.hpp"

#include "BattlePassBase_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor final
{
public:
	bool                                          Hover;
	ECommonInputType                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_6[0x2];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_6;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor");
static_assert(sizeof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor) == 0x000020, "Wrong size on BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Hover) == 0x000000, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Hover' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable) == 0x000001, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_1) == 0x000002, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_2) == 0x000003, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_3) == 0x000004, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_4) == 0x000005, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_bool_Variable) == 0x000010, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, CallFunc_GetCurrentInputType_ReturnValue) == 0x000011, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_5) == 0x000012, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, K2Node_Select_Default) == 0x000013, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_6) == 0x000014, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_bool_Variable_1) == 0x000015, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, K2Node_Select_Default_1) == 0x000016, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_7) == 0x000017, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, Temp_byte_Variable_8) == 0x000018, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor, K2Node_Select_Default_2) == 0x000019, "Member 'BPS24_LandingPageButton_C_ConvertWhiteTextToHoveredColor::K2Node_Select_Default_2' has a wrong offset!");

struct BPS24_LandingPageButton_C_DetermineSelectedAnim final
{
public:
	bool                                          Hover;
	uint8                                         Pad_1[0x7];
	class UWidgetAnimation*                       ReturnValue;
};
static_assert(alignof(BPS24_LandingPageButton_C_DetermineSelectedAnim) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_DetermineSelectedAnim");
static_assert(sizeof(BPS24_LandingPageButton_C_DetermineSelectedAnim) == 0x000010, "Wrong size on BPS24_LandingPageButton_C_DetermineSelectedAnim");
static_assert(offsetof(BPS24_LandingPageButton_C_DetermineSelectedAnim, Hover) == 0x000000, "Member 'BPS24_LandingPageButton_C_DetermineSelectedAnim::Hover' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_DetermineSelectedAnim, ReturnValue) == 0x000008, "Member 'BPS24_LandingPageButton_C_DetermineSelectedAnim::ReturnValue' has a wrong offset!");

struct BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_19[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	ECommonInputType                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_2D[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;
	uint8                                         Pad_3A[0x6];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_4B[0x5];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue_3;
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_HasPurchasedSeasonBook_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_63[0x5];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UTexture2D*                             K2Node_Event_Texture;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	uint8                                         Pad_A4[0x4];
	struct FBattlePassLandingPageButtonDisplayDetails CallFunc_GetBattlePassDisplayDetails_ReturnValue;
	struct FBattlePassLandingPageButtonDisplayDetails K2Node_Event_NewDisplayDetails;
	struct FBattlePassLandingPageButtonDisplayDetails CallFunc_GetBattlePassDisplayDetails_ReturnValue_1;
	struct FBattlePassLandingPageButtonDisplayDetails CallFunc_GetBattlePassDisplayDetails_ReturnValue_2;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          K2Node_CustomEvent_ExtraLock;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue_4;
	uint8                                         Pad_26D[0x3];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_289[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UWidgetAnimation*                       CallFunc_DetermineSelectedAnim_ReturnValue;
	class UWidgetAnimation*                       CallFunc_DetermineSelectedAnim_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          K2Node_SwitchString_CmpSuccess;
	ESlateVisibility                              Temp_byte_Variable_6;
	uint8                                         Pad_2B3[0x5];
	struct FBattlePassLandingPageButtonDisplayDetails CallFunc_GetBattlePassDisplayDetails_ReturnValue_3;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_329[0x7];
	class UMaterialInstance*                      K2Node_Event_Material;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	bool                                          CallFunc_BooleanOR_ReturnValue_5;
	bool                                          K2Node_Select_Default_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_6;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_33F[0x1];
	struct FBattlePassLandingPageButtonDisplayDetails CallFunc_GetBattlePassDisplayDetails_ReturnValue_4;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	uint8                                         Pad_3B2[0x6];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton");
static_assert(sizeof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton) == 0x0003C0, "Wrong size on BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, EntryPoint) == 0x000000, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable) == 0x000028, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable_1) == 0x000029, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable_2) == 0x00002A, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable_3) == 0x00002B, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable_4) == 0x00002C, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetContext_ReturnValue_1) == 0x000030, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Select_Default) == 0x000038, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000039, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetContext_ReturnValue_2) == 0x000040, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetCurrentInputType_ReturnValue_2) == 0x000049, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetCurrentInputType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00004A, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetContext_ReturnValue_3) == 0x000050, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetAthenaProfile_ReturnValue) == 0x000058, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetAthenaProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_bool_Variable) == 0x000060, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_HasPurchasedSeasonBook_ReturnValue) == 0x000061, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_HasPurchasedSeasonBook_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_bool_Variable_1) == 0x000062, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000070, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000078, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Event_Texture) == 0x000080, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Event_Texture' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000088, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetContext_ReturnValue_4) == 0x000090, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetContext_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000098, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000099, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanAND_ReturnValue) == 0x00009A, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00009B, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00009C, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanAND_ReturnValue_1) == 0x00009D, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue) == 0x00009E, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue_1) == 0x00009F, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0000A0, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0000A1, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanAND_ReturnValue_2) == 0x0000A2, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue_2) == 0x0000A3, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetBattlePassDisplayDetails_ReturnValue) == 0x0000A8, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetBattlePassDisplayDetails_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Event_NewDisplayDetails) == 0x000118, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Event_NewDisplayDetails' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetBattlePassDisplayDetails_ReturnValue_1) == 0x000188, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetBattlePassDisplayDetails_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetBattlePassDisplayDetails_ReturnValue_2) == 0x0001F8, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetBattlePassDisplayDetails_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_TextIsEmpty_ReturnValue) == 0x000268, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_Not_PreBool_ReturnValue) == 0x000269, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_CustomEvent_ExtraLock) == 0x00026A, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_CustomEvent_ExtraLock' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue_3) == 0x00026B, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue_4) == 0x00026C, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000270, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_MakeVector2D_ReturnValue) == 0x000278, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_CustomEvent_bNewInputType) == 0x000288, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000290, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000298, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_DetermineSelectedAnim_ReturnValue) == 0x0002A0, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_DetermineSelectedAnim_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_DetermineSelectedAnim_ReturnValue_1) == 0x0002A8, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_DetermineSelectedAnim_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable_5) == 0x0002B0, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_SwitchString_CmpSuccess) == 0x0002B1, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_byte_Variable_6) == 0x0002B2, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetBattlePassDisplayDetails_ReturnValue_3) == 0x0002B8, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetBattlePassDisplayDetails_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, Temp_bool_Variable_2) == 0x000328, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Event_Material) == 0x000330, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Event_Material' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000338, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000339, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue_5) == 0x00033A, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Select_Default_1) == 0x00033B, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_BooleanOR_ReturnValue_6) == 0x00033C, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_IsUsingTouch_ReturnValue) == 0x00033D, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Select_Default_2) == 0x00033E, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_GetBattlePassDisplayDetails_ReturnValue_4) == 0x000340, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_GetBattlePassDisplayDetails_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, K2Node_Event_IsDesignTime) == 0x0003B0, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_IsUsingTouch_ReturnValue_1) == 0x0003B1, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0003B8, "Member 'BPS24_LandingPageButton_C_ExecuteUbergraph_BPS24_LandingPageButton::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct BPS24_LandingPageButton_C_InputChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(BPS24_LandingPageButton_C_InputChanged) == 0x000001, "Wrong alignment on BPS24_LandingPageButton_C_InputChanged");
static_assert(sizeof(BPS24_LandingPageButton_C_InputChanged) == 0x000001, "Wrong size on BPS24_LandingPageButton_C_InputChanged");
static_assert(offsetof(BPS24_LandingPageButton_C_InputChanged, bNewInputType) == 0x000000, "Member 'BPS24_LandingPageButton_C_InputChanged::bNewInputType' has a wrong offset!");

struct BPS24_LandingPageButton_C_IsCompetingButtonSelected final
{
public:
	bool                                          Return;
	uint8                                         Pad_1[0x7];
	TArray<class UWidget*>                        LocButtons;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_24[0x4];
	class UWidget*                                CallFunc_Array_Get_Item;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
	uint8                                         Pad_31[0x7];
	class UBPS24_LandingPageButton_C*             K2Node_DynamicCast_AsBPS24_Landing_Page_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(BPS24_LandingPageButton_C_IsCompetingButtonSelected) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_IsCompetingButtonSelected");
static_assert(sizeof(BPS24_LandingPageButton_C_IsCompetingButtonSelected) == 0x000050, "Wrong size on BPS24_LandingPageButton_C_IsCompetingButtonSelected");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, Return) == 0x000000, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::Return' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, LocButtons) == 0x000008, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::LocButtons' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, CallFunc_Array_Get_Item) == 0x000028, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, CallFunc_Array_RemoveItem_ReturnValue) == 0x000030, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, K2Node_DynamicCast_AsBPS24_Landing_Page_Button) == 0x000038, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::K2Node_DynamicCast_AsBPS24_Landing_Page_Button' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_IsCompetingButtonSelected, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BPS24_LandingPageButton_C_IsCompetingButtonSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct BPS24_LandingPageButton_C_OnDisplayDetailsUpdated final
{
public:
	struct FBattlePassLandingPageButtonDisplayDetails NewDisplayDetails;
};
static_assert(alignof(BPS24_LandingPageButton_C_OnDisplayDetailsUpdated) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_OnDisplayDetailsUpdated");
static_assert(sizeof(BPS24_LandingPageButton_C_OnDisplayDetailsUpdated) == 0x000070, "Wrong size on BPS24_LandingPageButton_C_OnDisplayDetailsUpdated");
static_assert(offsetof(BPS24_LandingPageButton_C_OnDisplayDetailsUpdated, NewDisplayDetails) == 0x000000, "Member 'BPS24_LandingPageButton_C_OnDisplayDetailsUpdated::NewDisplayDetails' has a wrong offset!");

struct BPS24_LandingPageButton_C_OnSetTileImageMaterial final
{
public:
	class UMaterialInstance*                      Material_0;
};
static_assert(alignof(BPS24_LandingPageButton_C_OnSetTileImageMaterial) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_OnSetTileImageMaterial");
static_assert(sizeof(BPS24_LandingPageButton_C_OnSetTileImageMaterial) == 0x000008, "Wrong size on BPS24_LandingPageButton_C_OnSetTileImageMaterial");
static_assert(offsetof(BPS24_LandingPageButton_C_OnSetTileImageMaterial, Material_0) == 0x000000, "Member 'BPS24_LandingPageButton_C_OnSetTileImageMaterial::Material_0' has a wrong offset!");

struct BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded final
{
public:
	class UTexture2D*                             Texture;
};
static_assert(alignof(BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded");
static_assert(sizeof(BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded) == 0x000008, "Wrong size on BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded");
static_assert(offsetof(BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded, Texture) == 0x000000, "Member 'BPS24_LandingPageButton_C_OnSubscriptionTextureLoaded::Texture' has a wrong offset!");

struct BPS24_LandingPageButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BPS24_LandingPageButton_C_PreConstruct) == 0x000001, "Wrong alignment on BPS24_LandingPageButton_C_PreConstruct");
static_assert(sizeof(BPS24_LandingPageButton_C_PreConstruct) == 0x000001, "Wrong size on BPS24_LandingPageButton_C_PreConstruct");
static_assert(offsetof(BPS24_LandingPageButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BPS24_LandingPageButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BPS24_LandingPageButton_C_SetExtraLock final
{
public:
	bool                                          ExtraLock;
};
static_assert(alignof(BPS24_LandingPageButton_C_SetExtraLock) == 0x000001, "Wrong alignment on BPS24_LandingPageButton_C_SetExtraLock");
static_assert(sizeof(BPS24_LandingPageButton_C_SetExtraLock) == 0x000001, "Wrong size on BPS24_LandingPageButton_C_SetExtraLock");
static_assert(offsetof(BPS24_LandingPageButton_C_SetExtraLock, ExtraLock) == 0x000000, "Member 'BPS24_LandingPageButton_C_SetExtraLock::ExtraLock' has a wrong offset!");

struct BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons final
{
public:
	TArray<class UWidget*>                        LocButtons;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class UWidget*                                CallFunc_Array_Get_Item;
	class UBPS24_LandingPageButton_C*             K2Node_DynamicCast_AsBPS24_Landing_Page_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
};
static_assert(alignof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons");
static_assert(sizeof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons) == 0x000040, "Wrong size on BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, LocButtons) == 0x000000, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::LocButtons' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, CallFunc_Array_Get_Item) == 0x000020, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, K2Node_DynamicCast_AsBPS24_Landing_Page_Button) == 0x000028, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::K2Node_DynamicCast_AsBPS24_Landing_Page_Button' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons, CallFunc_Array_RemoveItem_ReturnValue) == 0x000039, "Member 'BPS24_LandingPageButton_C_UnHoverOtherLandingPageButtons::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

struct BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData final
{
public:
	struct FBattlePassLandingPageButtonDisplayBehaviorData BehaviorData;
	bool                                          bIsDisplayActive;
	uint8                                         Pad_19[0x7];
	struct FTimespan                              BehaviorTimespan;
	struct FTimespan                              ButtonUnlockDelay;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_GetTotalSeconds_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_39[0x3];
	float                                         CallFunc_GetTotalSeconds_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_41[0x7];
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	int32                                         CallFunc_GetDays_ReturnValue;
	uint8                                         Pad_14C[0x4];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_161[0x7];
	class FText                                   CallFunc_Format_ReturnValue_1;
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue_2;
	int32                                         CallFunc_GetDays_ReturnValue_1;
	uint8                                         Pad_19C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_1F1[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;
	class FText                                   CallFunc_Format_ReturnValue_2;
	float                                         CallFunc_GetTotalSeconds_ReturnValue_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;
	uint8                                         Pad_225[0x3];
	struct FBattlePassLandingPageButtonDisplayDetails CallFunc_GetBattlePassDisplayDetails_ReturnValue;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
};
static_assert(alignof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData) == 0x000008, "Wrong alignment on BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData");
static_assert(sizeof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData) == 0x0002B0, "Wrong size on BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, BehaviorData) == 0x000000, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::BehaviorData' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, bIsDisplayActive) == 0x000018, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::bIsDisplayActive' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, BehaviorTimespan) == 0x000020, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::BehaviorTimespan' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, ButtonUnlockDelay) == 0x000028, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::ButtonUnlockDelay' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetTotalSeconds_ReturnValue) == 0x000034, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetTotalSeconds_ReturnValue_1) == 0x00003C, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetTotalSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000040, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetTimespanAsText_ReturnValue) == 0x000048, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetTimespanAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_MakeArray_Array) == 0x0000B0, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetTimespanAsText_ReturnValue_1) == 0x0000E0, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetTimespanAsText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F8, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetDays_ReturnValue) == 0x000148, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetDays_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_MakeArray_Array_1) == 0x000150, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000160, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Format_ReturnValue_1) == 0x000168, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetTimespanAsText_ReturnValue_2) == 0x000180, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetTimespanAsText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetDays_ReturnValue_1) == 0x000198, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetDays_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001A0, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001F0, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, K2Node_MakeArray_Array_2) == 0x0001F8, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Format_ReturnValue_2) == 0x000208, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetTotalSeconds_ReturnValue_2) == 0x000220, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetTotalSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000224, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_GetBattlePassDisplayDetails_ReturnValue) == 0x000228, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_GetBattlePassDisplayDetails_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000298, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x0002A0, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData, CallFunc_Greater_DoubleDouble_A_ImplicitCast_2) == 0x0002A8, "Member 'BPS24_LandingPageButton_C_UpdateDisplayBehaviorFromData::CallFunc_Greater_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");

}
