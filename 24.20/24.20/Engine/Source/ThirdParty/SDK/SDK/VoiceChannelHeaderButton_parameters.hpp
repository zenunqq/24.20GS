#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged");
static_assert(sizeof(VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged");
static_assert(offsetof(VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'VoiceChannelHeaderButton_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

struct VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	bool                                          K2Node_Event_bIsActiveAndListening;
	bool                                          K2Node_Event_bIsActiveOrAvailable;
	bool                                          K2Node_Event_bIsAvailableAndNotActive;
	bool                                          K2Node_Event_bIsListening;
	bool                                          K2Node_Event_bShowingRestriction;
	uint8                                         Pad_36[0x2];
	int32                                         CallFunc_SelectInt_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_3F[0x1];
	struct FVector2D                              K2Node_Select_Default_3;
	double                                        CallFunc_SelectFloat_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_4;
	uint8                                         Pad_59[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          CallFunc_IsActiveChannel_ReturnValue;
	bool                                          CallFunc_IsActiveChannel_ReturnValue_1;
	EUMGSequencePlayMode                          Temp_byte_Variable_8;
	uint8                                         Pad_8B[0x5];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	EUMGSequencePlayMode                          Temp_byte_Variable_9;
	uint8                                         Pad_99[0x3];
	int32                                         CallFunc_SelectInt_ReturnValue_1;
	bool                                          Temp_bool_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_10;
	ESlateVisibility                              Temp_byte_Variable_11;
	bool                                          CallFunc_CanJoinChannel_ReturnValue;
	bool                                          CallFunc_CanJoinChannel_ReturnValue_1;
	uint8                                         Pad_A5[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	bool                                          CallFunc_IsListItemExpanded_ReturnValue;
	uint8                                         Pad_AD[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UObject*                                K2Node_Event_ListItemObject;
	bool                                          K2Node_Event_bIsExpanded;
	EUMGSequencePlayMode                          K2Node_Select_Default_5;
	uint8                                         Pad_C2[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          Temp_bool_Variable_6;
	uint8                                         Pad_D1[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	ESlateVisibility                              K2Node_Select_Default_6;
	uint8                                         Pad_F9[0x3];
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;
};
static_assert(alignof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton) == 0x000008, "Wrong alignment on VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton");
static_assert(sizeof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton) == 0x000108, "Wrong size on VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, EntryPoint) == 0x000000, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable) == 0x000004, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable) == 0x000005, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_1) == 0x000006, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable_1) == 0x000007, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_struct_Variable) == 0x000008, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_struct_Variable_1) == 0x000018, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable_2) == 0x000028, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_2) == 0x000029, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_3) == 0x00002A, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable_3) == 0x00002B, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_4) == 0x00002C, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_5) == 0x00002D, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable_4) == 0x00002E, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_6) == 0x00002F, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_7) == 0x000030, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_bIsActiveAndListening) == 0x000031, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_bIsActiveAndListening' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_bIsActiveOrAvailable) == 0x000032, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_bIsActiveOrAvailable' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_bIsAvailableAndNotActive) == 0x000033, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_bIsAvailableAndNotActive' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_bIsListening) == 0x000034, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_bIsListening' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_bShowingRestriction) == 0x000035, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_bShowingRestriction' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SelectInt_ReturnValue) == 0x000038, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default) == 0x00003C, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default_1) == 0x00003D, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default_2) == 0x00003E, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default_3) == 0x000040, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SelectFloat_ReturnValue) == 0x000050, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default_4) == 0x000058, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SelectFloat_ReturnValue_1) == 0x000060, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000068, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000070, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000078, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000080, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_IsActiveChannel_ReturnValue) == 0x000088, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_IsActiveChannel_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_IsActiveChannel_ReturnValue_1) == 0x000089, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_IsActiveChannel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_8) == 0x00008A, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000090, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_9) == 0x000098, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SelectInt_ReturnValue_1) == 0x00009C, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable_5) == 0x0000A0, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_10) == 0x0000A1, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_byte_Variable_11) == 0x0000A2, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_CanJoinChannel_ReturnValue) == 0x0000A3, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_CanJoinChannel_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_CanJoinChannel_ReturnValue_1) == 0x0000A4, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_CanJoinChannel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_GetEndTime_ReturnValue) == 0x0000A8, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_IsListItemExpanded_ReturnValue) == 0x0000AC, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_IsListItemExpanded_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_ListItemObject) == 0x0000B8, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Event_bIsExpanded) == 0x0000C0, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default_5) == 0x0000C1, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, Temp_bool_Variable_6) == 0x0000D0, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SelectColor_ReturnValue) == 0x0000D4, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_MakeStruct_SlateColor) == 0x0000E4, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, K2Node_Select_Default_6) == 0x0000F8, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000FC, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x000100, "Member 'VoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

struct VoiceChannelHeaderButton_C_OnListItemObjectSet_1 final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(VoiceChannelHeaderButton_C_OnListItemObjectSet_1) == 0x000008, "Wrong alignment on VoiceChannelHeaderButton_C_OnListItemObjectSet_1");
static_assert(sizeof(VoiceChannelHeaderButton_C_OnListItemObjectSet_1) == 0x000008, "Wrong size on VoiceChannelHeaderButton_C_OnListItemObjectSet_1");
static_assert(offsetof(VoiceChannelHeaderButton_C_OnListItemObjectSet_1, ListItemObject) == 0x000000, "Member 'VoiceChannelHeaderButton_C_OnListItemObjectSet_1::ListItemObject' has a wrong offset!");

struct VoiceChannelHeaderButton_C_OnUpdateVisuals final
{
public:
	bool                                          bIsActiveAndListening;
	bool                                          bIsActiveOrAvailable;
	bool                                          bIsAvailableAndNotActive;
	bool                                          bIsListening;
	bool                                          bShowingRestriction;
};
static_assert(alignof(VoiceChannelHeaderButton_C_OnUpdateVisuals) == 0x000001, "Wrong alignment on VoiceChannelHeaderButton_C_OnUpdateVisuals");
static_assert(sizeof(VoiceChannelHeaderButton_C_OnUpdateVisuals) == 0x000005, "Wrong size on VoiceChannelHeaderButton_C_OnUpdateVisuals");
static_assert(offsetof(VoiceChannelHeaderButton_C_OnUpdateVisuals, bIsActiveAndListening) == 0x000000, "Member 'VoiceChannelHeaderButton_C_OnUpdateVisuals::bIsActiveAndListening' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_OnUpdateVisuals, bIsActiveOrAvailable) == 0x000001, "Member 'VoiceChannelHeaderButton_C_OnUpdateVisuals::bIsActiveOrAvailable' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_OnUpdateVisuals, bIsAvailableAndNotActive) == 0x000002, "Member 'VoiceChannelHeaderButton_C_OnUpdateVisuals::bIsAvailableAndNotActive' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_OnUpdateVisuals, bIsListening) == 0x000003, "Member 'VoiceChannelHeaderButton_C_OnUpdateVisuals::bIsListening' has a wrong offset!");
static_assert(offsetof(VoiceChannelHeaderButton_C_OnUpdateVisuals, bShowingRestriction) == 0x000004, "Member 'VoiceChannelHeaderButton_C_OnUpdateVisuals::bShowingRestriction' has a wrong offset!");

}
