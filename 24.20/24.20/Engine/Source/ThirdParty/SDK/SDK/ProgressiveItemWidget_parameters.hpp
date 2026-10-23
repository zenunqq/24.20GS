#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget final
{
public:
	int32                                         EntryPoint;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_2;
	EUMGSequencePlayMode                          Temp_byte_Variable_3;
	uint8                                         Pad_1C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_5;
	bool                                          K2Node_Event_bIsInPeekState;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_7A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          Temp_bool_Variable_1;
	EUMGSequencePlayMode                          K2Node_Select_Default_1;
	uint8                                         Pad_92[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          K2Node_Event_bSubscribed;
};
static_assert(alignof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget) == 0x000008, "Wrong alignment on ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget");
static_assert(sizeof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget) == 0x0000A8, "Wrong size on ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, EntryPoint) == 0x000000, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, Temp_byte_Variable) == 0x000004, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000010, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, Temp_byte_Variable_1) == 0x000018, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, Temp_bool_Variable) == 0x000019, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, Temp_byte_Variable_2) == 0x00001A, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, Temp_byte_Variable_3) == 0x00001B, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000038, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000040, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000048, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000050, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x000058, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationReverse_ReturnValue_3) == 0x000060, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationReverse_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationForward_ReturnValue_4) == 0x000068, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationForward_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimationForward_ReturnValue_5) == 0x000070, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimationForward_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, K2Node_Event_bIsInPeekState) == 0x000078, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::K2Node_Event_bIsInPeekState' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, K2Node_Select_Default) == 0x000079, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000080, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimation_ReturnValue_2) == 0x000088, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, Temp_bool_Variable_1) == 0x000090, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, K2Node_Select_Default_1) == 0x000091, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, CallFunc_PlayAnimation_ReturnValue_3) == 0x000098, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget, K2Node_Event_bSubscribed) == 0x0000A0, "Member 'ProgressiveItemWidget_C_ExecuteUbergraph_ProgressiveItemWidget::K2Node_Event_bSubscribed' has a wrong offset!");

struct ProgressiveItemWidget_C_OnPeekStateChanged final
{
public:
	bool                                          bIsInPeekState;
};
static_assert(alignof(ProgressiveItemWidget_C_OnPeekStateChanged) == 0x000001, "Wrong alignment on ProgressiveItemWidget_C_OnPeekStateChanged");
static_assert(sizeof(ProgressiveItemWidget_C_OnPeekStateChanged) == 0x000001, "Wrong size on ProgressiveItemWidget_C_OnPeekStateChanged");
static_assert(offsetof(ProgressiveItemWidget_C_OnPeekStateChanged, bIsInPeekState) == 0x000000, "Member 'ProgressiveItemWidget_C_OnPeekStateChanged::bIsInPeekState' has a wrong offset!");

struct ProgressiveItemWidget_C_OnStageItemChanged final
{
public:
	struct FProgressiveStageItemInfo              InStageItemInfo;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_76[0x2];
	class UFortVariantTokenType*                  CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FFortColorPalette                      CallFunc_GetRarityOrSeriesColors_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_D5[0x3];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(ProgressiveItemWidget_C_OnStageItemChanged) == 0x000008, "Wrong alignment on ProgressiveItemWidget_C_OnStageItemChanged");
static_assert(sizeof(ProgressiveItemWidget_C_OnStageItemChanged) == 0x0000E8, "Wrong size on ProgressiveItemWidget_C_OnStageItemChanged");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, InStageItemInfo) == 0x000000, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::InStageItemInfo' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, Temp_bool_Variable) == 0x000070, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, Temp_byte_Variable) == 0x000071, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, Temp_byte_Variable_1) == 0x000072, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, Temp_bool_Variable_1) == 0x000073, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, Temp_byte_Variable_2) == 0x000074, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, Temp_byte_Variable_3) == 0x000075, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, CallFunc_Array_Get_Item) == 0x000078, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, CallFunc_GetRarityOrSeriesColors_ReturnValue) == 0x000084, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::CallFunc_GetRarityOrSeriesColors_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D4, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000D8, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, K2Node_Select_Default) == 0x0000E0, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_OnStageItemChanged, K2Node_Select_Default_1) == 0x0000E1, "Member 'ProgressiveItemWidget_C_OnStageItemChanged::K2Node_Select_Default_1' has a wrong offset!");

struct ProgressiveItemWidget_C_OnTileMaterialLoaded final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(ProgressiveItemWidget_C_OnTileMaterialLoaded) == 0x000001, "Wrong alignment on ProgressiveItemWidget_C_OnTileMaterialLoaded");
static_assert(sizeof(ProgressiveItemWidget_C_OnTileMaterialLoaded) == 0x000001, "Wrong size on ProgressiveItemWidget_C_OnTileMaterialLoaded");
static_assert(offsetof(ProgressiveItemWidget_C_OnTileMaterialLoaded, bSubscribed) == 0x000000, "Member 'ProgressiveItemWidget_C_OnTileMaterialLoaded::bSubscribed' has a wrong offset!");

struct ProgressiveItemWidget_C_Update_Subscribed_Visuals final
{
public:
	bool                                          IsSubscribed;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_3;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_4;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_5;
	uint8                                         Pad_64[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(ProgressiveItemWidget_C_Update_Subscribed_Visuals) == 0x000008, "Wrong alignment on ProgressiveItemWidget_C_Update_Subscribed_Visuals");
static_assert(sizeof(ProgressiveItemWidget_C_Update_Subscribed_Visuals) == 0x000070, "Wrong size on ProgressiveItemWidget_C_Update_Subscribed_Visuals");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, IsSubscribed) == 0x000000, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::IsSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_1) == 0x000014, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_2) == 0x000024, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_3) == 0x000034, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_4) == 0x000044, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_5) == 0x000054, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ProgressiveItemWidget_C_Update_Subscribed_Visuals, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'ProgressiveItemWidget_C_Update_Subscribed_Visuals::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
