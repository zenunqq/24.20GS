#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	bool                                          K2Node_Event_bIsComplete;
	bool                                          K2Node_Event_bIsLocked;
	bool                                          K2Node_Event_bHasIconOverride;
	float                                         K2Node_Event_Progress;
	bool                                          K2Node_Event_bShouldShowBang;
	bool                                          K2Node_Event_bIsPinned;
	bool                                          K2Node_Event_bChallengeSelected;
	uint8                                         Pad_23[0x5];
	const class UTexture2D*                       K2Node_Event_Icon;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_32[0x2];
	int32                                         K2Node_Event_NewStackCount;
	int32                                         K2Node_Event_NonCompletedCount;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_3F[0x1];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	int32                                         CallFunc_GetSelectStackedDataIndex_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_6;
	uint8                                         Pad_69[0x7];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_7;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_8A[0x6];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_ShouldCycleAutomatically_ReturnValue;
	uint8                                         Pad_A1[0x7];
	double                                        Temp_real_Variable;
	bool                                          K2Node_Event_bHasLocation;
	bool                                          K2Node_Event_bIsInGame;
	uint8                                         Pad_B2[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;
	class UTexture*                               CallFunc_K2_GetTextureParameterValue_ReturnValue;
	bool                                          K2Node_Event_bUserInteraction_3;
	bool                                          K2Node_Event_bUserInteraction_2;
	bool                                          K2Node_Event_bUserInteraction_1;
	bool                                          K2Node_Event_bUserInteraction;
	bool                                          CallFunc_IsIconSelected_ReturnValue;
	bool                                          CallFunc_IsIconSelected_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_E7[0x1];
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_F1[0x7];
	double                                        K2Node_Select_Default_3;
	bool                                          K2Node_Event_bShouldShow;
	ESlateVisibility                              K2Node_Select_Default_4;
	uint8                                         Pad_102[0x2];
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges) == 0x000008, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges) == 0x000110, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, EntryPoint) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable) == 0x000010, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_1) == 0x000011, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_bool_Variable) == 0x000012, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_2) == 0x000013, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_3) == 0x000014, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_bool_Variable_1) == 0x000015, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_4) == 0x000016, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_5) == 0x000017, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_bool_Variable_2) == 0x000018, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bIsComplete) == 0x000019, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bIsComplete' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bIsLocked) == 0x00001A, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bIsLocked' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bHasIconOverride) == 0x00001B, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bHasIconOverride' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_Progress) == 0x00001C, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_Progress' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bShouldShowBang) == 0x000020, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bShouldShowBang' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bIsPinned) == 0x000021, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bIsPinned' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bChallengeSelected) == 0x000022, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bChallengeSelected' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_Icon) == 0x000028, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_Icon' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Select_Default) == 0x000030, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_BooleanOR_ReturnValue) == 0x000031, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_NewStackCount) == 0x000034, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_NewStackCount' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_NonCompletedCount) == 0x000038, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_NonCompletedCount' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_BooleanOR_ReturnValue_1) == 0x00003C, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_Greater_IntInt_ReturnValue) == 0x00003D, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Select_Default_1) == 0x00003E, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_GetSelectStackedDataIndex_ReturnValue) == 0x000060, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_GetSelectStackedDataIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_6) == 0x000068, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000070, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_byte_Variable_7) == 0x000088, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_bool_Variable_3) == 0x000089, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_RandomFloatInRange_ReturnValue) == 0x000090, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_PlayAnimation_ReturnValue_2) == 0x000098, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_ShouldCycleAutomatically_ReturnValue) == 0x0000A0, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_ShouldCycleAutomatically_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_real_Variable) == 0x0000A8, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bHasLocation) == 0x0000B0, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bHasLocation' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bIsInGame) == 0x0000B1, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bIsInGame' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000B8, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000C0, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x0000C8, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x0000D0, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_K2_GetTextureParameterValue_ReturnValue) == 0x0000D8, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_K2_GetTextureParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bUserInteraction_3) == 0x0000E0, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bUserInteraction_3' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bUserInteraction_2) == 0x0000E1, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bUserInteraction_2' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bUserInteraction_1) == 0x0000E2, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bUserInteraction_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bUserInteraction) == 0x0000E3, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bUserInteraction' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_IsIconSelected_ReturnValue) == 0x0000E4, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_IsIconSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_IsIconSelected_ReturnValue_1) == 0x0000E5, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_IsIconSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Select_Default_2) == 0x0000E6, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_real_Variable_1) == 0x0000E8, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, Temp_bool_Variable_4) == 0x0000F0, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Select_Default_3) == 0x0000F8, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Event_bShouldShow) == 0x000100, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Event_bShouldShow' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, K2Node_Select_Default_4) == 0x000101, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_Delay_Duration_ImplicitCast) == 0x000104, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000108, "Member 'AthenaMapNavigableIconStackOfChallenges_C_ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden final
{
public:
	const class UTexture2D*                       Icon;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden) == 0x000008, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden) == 0x000008, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden, Icon) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeIconOverriden::Icon' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet final
{
public:
	bool                                          bIsComplete;
	bool                                          bIsLocked;
	bool                                          bHasIconOverride;
	uint8                                         Pad_3[0x1];
	float                                         Progress;
	bool                                          bShouldShowBang;
	bool                                          bIsPinned;
	bool                                          bChallengeSelected;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet) == 0x000004, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet) == 0x00000C, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, bIsComplete) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::bIsComplete' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, bIsLocked) == 0x000001, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::bIsLocked' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, bHasIconOverride) == 0x000002, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::bHasIconOverride' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, Progress) == 0x000004, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::Progress' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, bShouldShowBang) == 0x000008, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::bShouldShowBang' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, bIsPinned) == 0x000009, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::bIsPinned' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet, bChallengeSelected) == 0x00000A, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChallengeSet::bChallengeSelected' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility final
{
public:
	bool                                          bShouldShow;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility, bShouldShow) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChangeBangVisibility::bShouldShow' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData final
{
public:
	int32                                         NewStackCount;
	int32                                         NonCompletedCount;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData) == 0x000004, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData) == 0x000008, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData, NewStackCount) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData::NewStackCount' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData, NonCompletedCount) == 0x000004, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnChangedStackData::NonCompletedCount' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnHovered final
{
public:
	bool                                          bUserInteraction;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnHovered) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnHovered");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnHovered) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnHovered");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnHovered, bUserInteraction) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnHovered::bUserInteraction' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnSelected final
{
public:
	bool                                          bUserInteraction;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnSelected) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnSelected");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnSelected) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnSelected");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnSelected, bUserInteraction) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnSelected::bUserInteraction' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation final
{
public:
	bool                                          bHasLocation;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation, bHasLocation) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnSetHasLocation::bHasLocation' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame final
{
public:
	bool                                          bIsInGame;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame, bIsInGame) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnSetIsInGame::bIsInGame' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered final
{
public:
	bool                                          bUserInteraction;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered, bUserInteraction) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnUnhovered::bUserInteraction' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_OnUnselected final
{
public:
	bool                                          bUserInteraction;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_OnUnselected) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_OnUnselected");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_OnUnselected) == 0x000001, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_OnUnselected");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_OnUnselected, bUserInteraction) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_OnUnselected::bUserInteraction' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState final
{
public:
	bool                                          bIsAnytimeChallenge;
	uint8                                         Pad_1[0x7];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState) == 0x000008, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState) == 0x000060, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState, bIsAnytimeChallenge) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState::bIsAnytimeChallenge' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState, K2Node_MakeStruct_SlateFontInfo) == 0x000008, "Member 'AthenaMapNavigableIconStackOfChallenges_C_SetAnywhereState::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

struct AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState final
{
public:
	bool                                          Complete;
	bool                                          Locked;
	bool                                          HasIconOverride;
};
static_assert(alignof(AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState) == 0x000001, "Wrong alignment on AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState");
static_assert(sizeof(AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState) == 0x000003, "Wrong size on AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState, Complete) == 0x000000, "Member 'AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState::Complete' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState, Locked) == 0x000001, "Member 'AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState::Locked' has a wrong offset!");
static_assert(offsetof(AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState, HasIconOverride) == 0x000002, "Member 'AthenaMapNavigableIconStackOfChallenges_C_SetMaterialState::HasIconOverride' has a wrong offset!");

}
