#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton final
{
public:
	int32                                         EntryPoint;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	bool                                          CallFunc_IsActiveChannel_ReturnValue;
	bool                                          CallFunc_IsActiveChannel_ReturnValue_1;
	bool                                          CallFunc_CanJoinChannel_ReturnValue;
	bool                                          CallFunc_CanJoinChannel_ReturnValue_1;
	bool                                          CallFunc_IsListItemExpanded_ReturnValue;
	uint8                                         Pad_1D[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_24[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UObject*                                K2Node_Event_ListItemObject;
	bool                                          K2Node_Event_bIsExpanded;
	uint8                                         Pad_39[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	int32                                         CallFunc_SelectInt_ReturnValue;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	bool                                          K2Node_Event_bIsActiveAndListening;
	bool                                          K2Node_Event_bIsActiveOrAvailable;
	bool                                          K2Node_Event_bIsAvailableAndNotActive;
	bool                                          K2Node_Event_bIsListening;
	bool                                          K2Node_Event_bShowingRestriction;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton) == 0x000008, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton) == 0x000070, "Wrong size on SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, EntryPoint) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, Temp_byte_Variable) == 0x000004, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_IsActiveChannel_ReturnValue) == 0x000018, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_IsActiveChannel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_IsActiveChannel_ReturnValue_1) == 0x000019, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_IsActiveChannel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_CanJoinChannel_ReturnValue) == 0x00001A, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_CanJoinChannel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_CanJoinChannel_ReturnValue_1) == 0x00001B, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_CanJoinChannel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_IsListItemExpanded_ReturnValue) == 0x00001C, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_IsListItemExpanded_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_GetEndTime_ReturnValue) == 0x000020, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_ListItemObject) == 0x000030, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_bIsExpanded) == 0x000038, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000040, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_SelectInt_ReturnValue) == 0x000048, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, Temp_byte_Variable_1) == 0x00004C, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, Temp_bool_Variable) == 0x00004D, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_IsDesignTime) == 0x00004E, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Select_Default) == 0x00004F, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000050, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000060, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_bIsActiveAndListening) == 0x000068, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_bIsActiveAndListening' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_bIsActiveOrAvailable) == 0x000069, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_bIsActiveOrAvailable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_bIsAvailableAndNotActive) == 0x00006A, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_bIsAvailableAndNotActive' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_bIsListening) == 0x00006B, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_bIsListening' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton, K2Node_Event_bShowingRestriction) == 0x00006C, "Member 'SidebarVoiceChannelHeaderButton_C_ExecuteUbergraph_SidebarVoiceChannelHeaderButton::K2Node_Event_bShowingRestriction' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1 final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1) == 0x000008, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1) == 0x000008, "Wrong size on SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1, ListItemObject) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_OnListItemObjectSet_1::ListItemObject' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals final
{
public:
	bool                                          bIsActiveAndListening;
	bool                                          bIsActiveOrAvailable;
	bool                                          bIsAvailableAndNotActive;
	bool                                          bIsListening;
	bool                                          bShowingRestriction;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals) == 0x000001, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals) == 0x000005, "Wrong size on SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals, bIsActiveAndListening) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals::bIsActiveAndListening' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals, bIsActiveOrAvailable) == 0x000001, "Member 'SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals::bIsActiveOrAvailable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals, bIsAvailableAndNotActive) == 0x000002, "Member 'SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals::bIsAvailableAndNotActive' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals, bIsListening) == 0x000003, "Member 'SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals::bIsListening' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals, bShowingRestriction) == 0x000004, "Member 'SidebarVoiceChannelHeaderButton_C_OnUpdateVisuals::bShowingRestriction' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_PreConstruct");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_PreConstruct) == 0x000001, "Wrong size on SidebarVoiceChannelHeaderButton_C_PreConstruct");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals final
{
public:
	bool                                          IsActiveAndListening;
	bool                                          IsRestricted_0;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_3[0x5];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	uint8                                         Pad_25[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_5E[0x2];
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals) == 0x000008, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals) == 0x000068, "Wrong size on SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, IsActiveAndListening) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::IsActiveAndListening' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, IsRestricted_0) == 0x000001, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::IsRestricted_0' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable) == 0x000002, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, CallFunc_SelectFloat_ReturnValue_1) == 0x000010, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_1) == 0x000018, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_bool_Variable) == 0x000019, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_2) == 0x00001A, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_3) == 0x00001B, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_bool_Variable_1) == 0x00001C, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, K2Node_Select_Default) == 0x00001D, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_4) == 0x00001E, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_5) == 0x00001F, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_bool_Variable_2) == 0x000020, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, K2Node_Select_Default_1) == 0x000021, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, K2Node_Select_Default_2) == 0x000022, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_6) == 0x000023, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_byte_Variable_7) == 0x000024, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, CallFunc_SelectColor_ReturnValue) == 0x000028, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, CallFunc_SelectColor_ReturnValue_1) == 0x000038, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, Temp_bool_Variable_3) == 0x00005C, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, K2Node_Select_Default_3) == 0x00005D, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000060, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x000064, "Member 'SidebarVoiceChannelHeaderButton_C_SetActiveAndListeningVisuals::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals final
{
public:
	bool                                          IsActiveOrAvailable;
	uint8                                         Pad_1[0x7];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_2D[0x3];
	struct FVector2D                              K2Node_Select_Default_1;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals) == 0x000008, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals) == 0x000040, "Wrong size on SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, IsActiveOrAvailable) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::IsActiveOrAvailable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, Temp_struct_Variable) == 0x000008, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, Temp_struct_Variable_1) == 0x000018, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, Temp_bool_Variable) == 0x000028, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, Temp_byte_Variable) == 0x000029, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, Temp_byte_Variable_1) == 0x00002A, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, Temp_bool_Variable_1) == 0x00002B, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, K2Node_Select_Default) == 0x00002C, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals, K2Node_Select_Default_1) == 0x000030, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsActiveOrAvailableVisuals::K2Node_Select_Default_1' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals final
{
public:
	bool                                          IsAvaliableAndNotActive;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals) == 0x000001, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals) == 0x000005, "Wrong size on SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals, IsAvaliableAndNotActive) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals::IsAvaliableAndNotActive' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals, Temp_bool_Variable) == 0x000001, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals, Temp_byte_Variable) == 0x000002, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals, Temp_byte_Variable_1) == 0x000003, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals, K2Node_Select_Default) == 0x000004, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsAvaliableAndNotActiveVisuals::K2Node_Select_Default' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals final
{
public:
	bool                                          IsListening;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_SelectInt_ReturnValue;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals) == 0x000004, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals) == 0x000008, "Wrong size on SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals, IsListening) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals::IsListening' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'SidebarVoiceChannelHeaderButton_C_SetIsListeningVisuals::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

struct SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals final
{
public:
	bool                                          IsRestricted_0;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_25[0x3];
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_49[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5D[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_77[0x1];
	struct FLinearColor                           K2Node_Select_Default_2;
};
static_assert(alignof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals) == 0x000004, "Wrong alignment on SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals");
static_assert(sizeof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals) == 0x000088, "Wrong size on SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, IsRestricted_0) == 0x000000, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::IsRestricted_0' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_struct_Variable) == 0x000004, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_struct_Variable_1) == 0x000014, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_bool_Variable) == 0x000024, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_struct_Variable_2) == 0x000028, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_struct_Variable_3) == 0x000038, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_bool_Variable_1) == 0x000048, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, K2Node_Select_Default) == 0x00004C, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_byte_Variable) == 0x00005C, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_byte_Variable_1) == 0x000074, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, K2Node_Select_Default_1) == 0x000075, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, Temp_bool_Variable_2) == 0x000076, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals, K2Node_Select_Default_2) == 0x000078, "Member 'SidebarVoiceChannelHeaderButton_C_SetRestrictedVisuals::K2Node_Select_Default_2' has a wrong offset!");

}
