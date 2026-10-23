#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct TournamentDetails_C_AnimTransition final
{
public:
	bool                                          In;
	uint8                                         Pad_1[0x7];
	class UWidgetAnimation*                       Animation;
	double                                        PlaySpeed;
};
static_assert(alignof(TournamentDetails_C_AnimTransition) == 0x000008, "Wrong alignment on TournamentDetails_C_AnimTransition");
static_assert(sizeof(TournamentDetails_C_AnimTransition) == 0x000018, "Wrong size on TournamentDetails_C_AnimTransition");
static_assert(offsetof(TournamentDetails_C_AnimTransition, In) == 0x000000, "Member 'TournamentDetails_C_AnimTransition::In' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_AnimTransition, Animation) == 0x000008, "Member 'TournamentDetails_C_AnimTransition::Animation' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_AnimTransition, PlaySpeed) == 0x000010, "Member 'TournamentDetails_C_AnimTransition::PlaySpeed' has a wrong offset!");

struct TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentDetails_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'TournamentDetails_C_BndEvt__TournamentDetails_FloatingLeaderboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct TournamentDetails_C_CreateScoringWidgets final
{
public:
	class FString                                 TournamentSeriesId;
	class FString                                 TournamentId;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_24[0x4];
	TArray<struct FFortShowdownScoringRuleInfo>   CallFunc_FindTournamentScoringRules_ReturnValue;
	TArray<struct FFortShowdownScoringRuleInfo>   CallFunc_RemoveInvalidScoringRules_FilteredScoringRules;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_4C[0x4];
	struct FFortShowdownScoringRuleInfo           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Divide_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_82[0x2];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	class UShowdownTournamentDetailsScoringRule_C* CallFunc_Create_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_91[0x3];
	int32                                         K2Node_Select_Default;
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_A9[0x3];
	int32                                         K2Node_Select_Default_1;
};
static_assert(alignof(TournamentDetails_C_CreateScoringWidgets) == 0x000008, "Wrong alignment on TournamentDetails_C_CreateScoringWidgets");
static_assert(sizeof(TournamentDetails_C_CreateScoringWidgets) == 0x0000B0, "Wrong size on TournamentDetails_C_CreateScoringWidgets");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, TournamentSeriesId) == 0x000000, "Member 'TournamentDetails_C_CreateScoringWidgets::TournamentSeriesId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, TournamentId) == 0x000010, "Member 'TournamentDetails_C_CreateScoringWidgets::TournamentId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, Temp_int_Array_Index_Variable) == 0x000020, "Member 'TournamentDetails_C_CreateScoringWidgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_FindTournamentScoringRules_ReturnValue) == 0x000028, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_FindTournamentScoringRules_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_RemoveInvalidScoringRules_FilteredScoringRules) == 0x000038, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_RemoveInvalidScoringRules_FilteredScoringRules' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'TournamentDetails_C_CreateScoringWidgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Array_Get_Item) == 0x000050, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Divide_IntInt_ReturnValue) == 0x00007C, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000081, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Subtract_IntInt_ReturnValue) == 0x000084, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_Create_ReturnValue) == 0x000088, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, Temp_bool_Variable) == 0x000090, "Member 'TournamentDetails_C_CreateScoringWidgets::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, K2Node_Select_Default) == 0x000094, "Member 'TournamentDetails_C_CreateScoringWidgets::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000098, "Member 'TournamentDetails_C_CreateScoringWidgets::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, Temp_int_Variable) == 0x0000A0, "Member 'TournamentDetails_C_CreateScoringWidgets::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, Temp_int_Variable_1) == 0x0000A4, "Member 'TournamentDetails_C_CreateScoringWidgets::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, Temp_bool_Variable_1) == 0x0000A8, "Member 'TournamentDetails_C_CreateScoringWidgets::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_CreateScoringWidgets, K2Node_Select_Default_1) == 0x0000AC, "Member 'TournamentDetails_C_CreateScoringWidgets::K2Node_Select_Default_1' has a wrong offset!");

struct TournamentDetails_C_EventCenterEventWindow final
{
public:
	class UWidget*                                Widget;
};
static_assert(alignof(TournamentDetails_C_EventCenterEventWindow) == 0x000008, "Wrong alignment on TournamentDetails_C_EventCenterEventWindow");
static_assert(sizeof(TournamentDetails_C_EventCenterEventWindow) == 0x000008, "Wrong size on TournamentDetails_C_EventCenterEventWindow");
static_assert(offsetof(TournamentDetails_C_EventCenterEventWindow, Widget) == 0x000000, "Member 'TournamentDetails_C_EventCenterEventWindow::Widget' has a wrong offset!");

struct TournamentDetails_C_EventDeselectWindows final
{
public:
	class UWidget*                                SelectedWidget;
};
static_assert(alignof(TournamentDetails_C_EventDeselectWindows) == 0x000008, "Wrong alignment on TournamentDetails_C_EventDeselectWindows");
static_assert(sizeof(TournamentDetails_C_EventDeselectWindows) == 0x000008, "Wrong size on TournamentDetails_C_EventDeselectWindows");
static_assert(offsetof(TournamentDetails_C_EventDeselectWindows, SelectedWidget) == 0x000000, "Member 'TournamentDetails_C_EventDeselectWindows::SelectedWidget' has a wrong offset!");

struct TournamentDetails_C_EventShowWindowDetails final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(TournamentDetails_C_EventShowWindowDetails) == 0x000008, "Wrong alignment on TournamentDetails_C_EventShowWindowDetails");
static_assert(sizeof(TournamentDetails_C_EventShowWindowDetails) == 0x000008, "Wrong size on TournamentDetails_C_EventShowWindowDetails");
static_assert(offsetof(TournamentDetails_C_EventShowWindowDetails, Button) == 0x000000, "Member 'TournamentDetails_C_EventShowWindowDetails::Button' has a wrong offset!");

struct TournamentDetails_C_EventToggleFullScreenContent final
{
public:
	bool                                          In;
};
static_assert(alignof(TournamentDetails_C_EventToggleFullScreenContent) == 0x000001, "Wrong alignment on TournamentDetails_C_EventToggleFullScreenContent");
static_assert(sizeof(TournamentDetails_C_EventToggleFullScreenContent) == 0x000001, "Wrong size on TournamentDetails_C_EventToggleFullScreenContent");
static_assert(offsetof(TournamentDetails_C_EventToggleFullScreenContent, In) == 0x000000, "Member 'TournamentDetails_C_EventToggleFullScreenContent::In' has a wrong offset!");

struct TournamentDetails_C_EventViewFullLeaderboard final
{
public:
	class FString                                 TournamentId;
	class FString                                 EventId;
};
static_assert(alignof(TournamentDetails_C_EventViewFullLeaderboard) == 0x000008, "Wrong alignment on TournamentDetails_C_EventViewFullLeaderboard");
static_assert(sizeof(TournamentDetails_C_EventViewFullLeaderboard) == 0x000020, "Wrong size on TournamentDetails_C_EventViewFullLeaderboard");
static_assert(offsetof(TournamentDetails_C_EventViewFullLeaderboard, TournamentId) == 0x000000, "Member 'TournamentDetails_C_EventViewFullLeaderboard::TournamentId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_EventViewFullLeaderboard, EventId) == 0x000010, "Member 'TournamentDetails_C_EventViewFullLeaderboard::EventId' has a wrong offset!");

struct TournamentDetails_C_EventViewPayout final
{
public:
	class FString                                 EventWindowId;
	class FString                                 EventId;
};
static_assert(alignof(TournamentDetails_C_EventViewPayout) == 0x000008, "Wrong alignment on TournamentDetails_C_EventViewPayout");
static_assert(sizeof(TournamentDetails_C_EventViewPayout) == 0x000020, "Wrong size on TournamentDetails_C_EventViewPayout");
static_assert(offsetof(TournamentDetails_C_EventViewPayout, EventWindowId) == 0x000000, "Member 'TournamentDetails_C_EventViewPayout::EventWindowId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_EventViewPayout, EventId) == 0x000010, "Member 'TournamentDetails_C_EventViewPayout::EventId' has a wrong offset!");

struct TournamentDetails_C_ExecuteUbergraph_TournamentDetails final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          K2Node_CustomEvent_In_1;
	uint8                                         Pad_32[0x6];
	class UWidgetAnimation*                       K2Node_CustomEvent_Animation;
	double                                        K2Node_CustomEvent_PlaySpeed;
	float                                         CallFunc_PauseAnimation_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	float                                         CallFunc_GetStartTime_ReturnValue;
	float                                         CallFunc_PauseAnimation_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_61[0x7];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_74[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_8C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_9C[0x4];
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue;
	uint8                                         Pad_AC[0x4];
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_B9[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_C3[0x1];
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;
	int32                                         CallFunc_GetChildrenCount_ReturnValue_2;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_CD[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	uint8                                         Pad_D4[0x4];
	double                                        Temp_real_Variable;
	class UWidget*                                K2Node_CustomEvent_SelectedWidget;
	int32                                         CallFunc_GetChildIndex_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue_3;
	int32                                         Temp_int_Variable_1;
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_105[0x3];
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_119[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_122[0x6];
	class UWidget*                                K2Node_CustomEvent_Widget;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_131[0x7];
	class UCommonButtonLegacy*                    K2Node_DynamicCast_AsCommon_Button_Legacy;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_141[0x3];
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_155[0x3];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	uint8                                         Pad_19C[0x4];
	struct FVector4                               CallFunc_GetSafeZonePadding_SafePadding;
	struct FVector2D                              CallFunc_GetSafeZonePadding_SafePaddingScale;
	struct FVector4                               CallFunc_GetSafeZonePadding_SpillOverPadding;
	double                                        CallFunc_BreakVector4_X;
	double                                        CallFunc_BreakVector4_Y;
	double                                        CallFunc_BreakVector4_Z;
	double                                        CallFunc_BreakVector4_W;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_21A[0x6];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_4;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_5;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_4;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_3;
	class FString                                 K2Node_CustomEvent_TournamentId;
	class FString                                 K2Node_CustomEvent_EventId_1;
	bool                                          K2Node_CustomEvent_In;
	uint8                                         Pad_2B1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_2E1[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_DoCalloutMFARequirement_ReturnValue;
	uint8                                         Pad_2F9[0x7];
	class UEnableMultiFactorAuthModalBP_C*        CallFunc_Create_ReturnValue;
	bool                                          CallFunc_QueueModal_ReturnValue;
	uint8                                         Pad_309[0x7];
	class FString                                 K2Node_CustomEvent_EventWindowId;
	class FString                                 K2Node_CustomEvent_EventId;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_332[0x2];
	int32                                         Temp_int_Variable_2;
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile_4;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;
	uint8                                         Pad_34A[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	int32                                         Temp_int_Variable_3;
	uint8                                         Pad_35C[0x4];
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_3;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	uint8                                         Pad_369[0x7];
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile_5;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_37B[0x1];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_381[0x7];
	double                                        K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	TDelegate<void(const class FString& EventWindowId, const class FString& EventId)> K2Node_CreateDelegate_OutputDelegate_7;
	uint8                                         Pad_3A4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_3C9[0x3];
	int32                                         CallFunc_GetChildrenCount_ReturnValue_4;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_3D1[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_4;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue;
	bool                                          CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue_1;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_3E6[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_3F5[0x3];
	TDelegate<void(const class FString& TournamentId, const class FString& EventId)> K2Node_CreateDelegate_OutputDelegate_9;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1;
	uint8                                         Pad_40C[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	uint8                                         Pad_43C[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_4;
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1;
	uint8                                         Pad_47C[0x4];
	double                                        CallFunc_FMax_A_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails) == 0x000010, "Wrong alignment on TournamentDetails_C_ExecuteUbergraph_TournamentDetails");
static_assert(sizeof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails) == 0x000490, "Wrong size on TournamentDetails_C_ExecuteUbergraph_TournamentDetails");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, EntryPoint) == 0x000000, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsShowdown_Event_Tile) == 0x000010, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsShowdown_Event_Tile' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_Button) == 0x000020, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsShowdown_Event_Tile_1) == 0x000028, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsShowdown_Event_Tile_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_In_1) == 0x000031, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_In_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_Animation) == 0x000038, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_Animation' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_PlaySpeed) == 0x000040, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_PlaySpeed' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PauseAnimation_ReturnValue) == 0x000048, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetStartTime_ReturnValue) == 0x000058, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PauseAnimation_ReturnValue_1) == 0x00005C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000060, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetEndTime_ReturnValue) == 0x000070, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000080, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_int_Variable) == 0x000088, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_ReturnValue_1) == 0x000090, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildAt_ReturnValue) == 0x0000A0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildrenCount_ReturnValue) == 0x0000A8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsShowdown_Event_Tile_2) == 0x0000B0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsShowdown_Event_Tile_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000BC, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_bool_Variable) == 0x0000C1, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Not_PreBool_ReturnValue) == 0x0000C2, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0000C4, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildrenCount_ReturnValue_2) == 0x0000C8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildrenCount_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Greater_IntInt_ReturnValue) == 0x0000CC, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000D0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_real_Variable) == 0x0000D8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_SelectedWidget) == 0x0000E0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_SelectedWidget' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildIndex_ReturnValue) == 0x0000E8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildrenCount_ReturnValue_3) == 0x0000EC, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildrenCount_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_int_Variable_1) == 0x0000F0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_LinearColor) == 0x0000F4, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000104, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildAt_ReturnValue_1) == 0x000108, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsShowdown_Event_Tile_3) == 0x000110, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsShowdown_Event_Tile_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess_3) == 0x000118, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_IntInt_ReturnValue_1) == 0x00011C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Not_PreBool_ReturnValue_1) == 0x000120, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000121, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_Widget) == 0x000128, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_BooleanAND_ReturnValue) == 0x000130, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsCommon_Button_Legacy) == 0x000138, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsCommon_Button_Legacy' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess_4) == 0x000140, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_LinearColor_1) == 0x000144, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_byte_Variable) == 0x000154, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_Event_MyGeometry) == 0x000158, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_Event_InDeltaTime) == 0x000198, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetSafeZonePadding_SafePadding) == 0x0001A0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetSafeZonePadding_SafePadding' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetSafeZonePadding_SafePaddingScale) == 0x0001C0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetSafeZonePadding_SafePaddingScale' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetSafeZonePadding_SpillOverPadding) == 0x0001D0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetSafeZonePadding_SpillOverPadding' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_BreakVector4_X) == 0x0001F0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_BreakVector4_X' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_BreakVector4_Y) == 0x0001F8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_BreakVector4_Y' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_BreakVector4_Z) == 0x000200, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_BreakVector4_Z' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_BreakVector4_W) == 0x000208, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_BreakVector4_W' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000210, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_byte_Variable_1) == 0x000218, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_bool_Variable_1) == 0x000219, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000220, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000228, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x000230, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_ReturnValue_4) == 0x000238, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_Margin) == 0x000240, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000250, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_SlotAsOverlaySlot_ReturnValue_2) == 0x000258, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_SlotAsOverlaySlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_2) == 0x000260, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_3) == 0x00026C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_ComponentBoundEvent_Button_5) == 0x000278, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_ComponentBoundEvent_Button_5' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_ComponentBoundEvent_Button_4) == 0x000280, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_ComponentBoundEvent_Button_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_ComponentBoundEvent_Button_3) == 0x000288, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_TournamentId) == 0x000290, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_TournamentId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_EventId_1) == 0x0002A0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_EventId_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_In) == 0x0002B0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_In' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002B4, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_5) == 0x0002C0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_6) == 0x0002CC, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetActiveWidget_ReturnValue) == 0x0002D8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002E0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_ComponentBoundEvent_Button_2) == 0x0002E8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetOwningPlayer_ReturnValue) == 0x0002F0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_DoCalloutMFARequirement_ReturnValue) == 0x0002F8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_DoCalloutMFARequirement_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Create_ReturnValue) == 0x000300, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_QueueModal_ReturnValue) == 0x000308, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_QueueModal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_EventWindowId) == 0x000310, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_EventWindowId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CustomEvent_EventId) == 0x000320, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CustomEvent_EventId' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_IsValid_ReturnValue) == 0x000330, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_IsValid_ReturnValue_1) == 0x000331, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_int_Variable_2) == 0x000334, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildAt_ReturnValue_2) == 0x000338, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsShowdown_Event_Tile_4) == 0x000340, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsShowdown_Event_Tile_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess_5) == 0x000348, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000349, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_IntInt_ReturnValue_2) == 0x00034C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_ComponentBoundEvent_Button_1) == 0x000350, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_int_Variable_3) == 0x000358, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildAt_ReturnValue_3) == 0x000360, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildAt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000368, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_AsShowdown_Event_Tile_5) == 0x000370, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_AsShowdown_Event_Tile_5' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_DynamicCast_bSuccess_6) == 0x000378, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetSelected_ReturnValue) == 0x000379, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00037A, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_IntInt_ReturnValue_3) == 0x00037C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_bool_Variable_2) == 0x000380, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_Select_Default) == 0x000388, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_ReturnValue_2) == 0x000390, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_7) == 0x000398, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_ComponentBoundEvent_Button) == 0x0003A8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetTournamentId_ReturnValue) == 0x0003B0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_FMax_ReturnValue) == 0x0003C0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_IsValid_ReturnValue_2) == 0x0003C8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildrenCount_ReturnValue_4) == 0x0003CC, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildrenCount_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_byte_Variable_2) == 0x0003D0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0003D4, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_GetChildAt_ReturnValue_4) == 0x0003D8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_GetChildAt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_byte_Variable_3) == 0x0003E0, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue) == 0x0003E1, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue_1) == 0x0003E2, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, Temp_bool_Variable_3) == 0x0003E3, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_Select_Default_1) == 0x0003E4, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_Select_Default_2) == 0x0003E5, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_8) == 0x0003E8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_IsMobileGame_ReturnValue) == 0x0003F4, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_CreateDelegate_OutputDelegate_9) == 0x0003F8, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x000404, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1) == 0x000408, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000410, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000418, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000420, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000428, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000430, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000438, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000440, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x000448, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2) == 0x000450, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3) == 0x000458, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_4) == 0x000460, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x000468, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_Right_ImplicitCast) == 0x00046C, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_Top_ImplicitCast) == 0x000470, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, K2Node_MakeStruct_Left_ImplicitCast) == 0x000474, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x000478, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_FMax_A_ImplicitCast) == 0x000480, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_ExecuteUbergraph_TournamentDetails, CallFunc_Delay_Duration_ImplicitCast) == 0x000488, "Member 'TournamentDetails_C_ExecuteUbergraph_TournamentDetails::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct TournamentDetails_C_Handle_Back final
{
public:
	bool                                          PassThrough;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
};
static_assert(alignof(TournamentDetails_C_Handle_Back) == 0x000004, "Wrong alignment on TournamentDetails_C_Handle_Back");
static_assert(sizeof(TournamentDetails_C_Handle_Back) == 0x00000C, "Wrong size on TournamentDetails_C_Handle_Back");
static_assert(offsetof(TournamentDetails_C_Handle_Back, PassThrough) == 0x000000, "Member 'TournamentDetails_C_Handle_Back::PassThrough' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Handle_Back, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'TournamentDetails_C_Handle_Back::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Handle_Back, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'TournamentDetails_C_Handle_Back::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Handle_Back, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000009, "Member 'TournamentDetails_C_Handle_Back::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Handle_Back, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000A, "Member 'TournamentDetails_C_Handle_Back::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

struct TournamentDetails_C_Is_Scoring_Rule_Valid final
{
public:
	struct FFortShowdownScoringRuleInfo           ScoringRuleInfo;
	bool                                          IsValid;
	uint8                                         Pad_21[0x7];
	class UCMSContext*                            CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_HasScoringRuleDisplayInfo_ReturnValue;
};
static_assert(alignof(TournamentDetails_C_Is_Scoring_Rule_Valid) == 0x000008, "Wrong alignment on TournamentDetails_C_Is_Scoring_Rule_Valid");
static_assert(sizeof(TournamentDetails_C_Is_Scoring_Rule_Valid) == 0x000038, "Wrong size on TournamentDetails_C_Is_Scoring_Rule_Valid");
static_assert(offsetof(TournamentDetails_C_Is_Scoring_Rule_Valid, ScoringRuleInfo) == 0x000000, "Member 'TournamentDetails_C_Is_Scoring_Rule_Valid::ScoringRuleInfo' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Is_Scoring_Rule_Valid, IsValid) == 0x000020, "Member 'TournamentDetails_C_Is_Scoring_Rule_Valid::IsValid' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Is_Scoring_Rule_Valid, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'TournamentDetails_C_Is_Scoring_Rule_Valid::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Is_Scoring_Rule_Valid, CallFunc_HasScoringRuleDisplayInfo_ReturnValue) == 0x000030, "Member 'TournamentDetails_C_Is_Scoring_Rule_Valid::CallFunc_HasScoringRuleDisplayInfo_ReturnValue' has a wrong offset!");

struct TournamentDetails_C_OnHandleBack final
{
public:
	bool                                          bResult;
	bool                                          CallFunc_Handle_Back_Passthrough;
};
static_assert(alignof(TournamentDetails_C_OnHandleBack) == 0x000001, "Wrong alignment on TournamentDetails_C_OnHandleBack");
static_assert(sizeof(TournamentDetails_C_OnHandleBack) == 0x000002, "Wrong size on TournamentDetails_C_OnHandleBack");
static_assert(offsetof(TournamentDetails_C_OnHandleBack, bResult) == 0x000000, "Member 'TournamentDetails_C_OnHandleBack::bResult' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_OnHandleBack, CallFunc_Handle_Back_Passthrough) == 0x000001, "Member 'TournamentDetails_C_OnHandleBack::CallFunc_Handle_Back_Passthrough' has a wrong offset!");

struct TournamentDetails_C_Refresh final
{
public:
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	class FString                                 CallFunc_GetTournamentNextEvent_ReturnValue;
};
static_assert(alignof(TournamentDetails_C_Refresh) == 0x000008, "Wrong alignment on TournamentDetails_C_Refresh");
static_assert(sizeof(TournamentDetails_C_Refresh) == 0x000020, "Wrong size on TournamentDetails_C_Refresh");
static_assert(offsetof(TournamentDetails_C_Refresh, CallFunc_GetTournamentId_ReturnValue) == 0x000000, "Member 'TournamentDetails_C_Refresh::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Refresh, CallFunc_GetTournamentNextEvent_ReturnValue) == 0x000010, "Member 'TournamentDetails_C_Refresh::CallFunc_GetTournamentNextEvent_ReturnValue' has a wrong offset!");

struct TournamentDetails_C_RefreshDetailsPanel final
{
public:
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_9[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1C[0x4];
	TArray<class UEventsSimpleButton_C*>          K2Node_MakeArray_Array;
	class UEventsSimpleButton_C*                  CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_3C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_5A[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_69[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_71[0x7];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_91[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_C9[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	float                                         CallFunc_BreakColor_R;
	float                                         CallFunc_BreakColor_G;
	float                                         CallFunc_BreakColor_B;
	float                                         CallFunc_BreakColor_A;
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	float                                         CallFunc_RGBToHSV_H;
	float                                         CallFunc_RGBToHSV_S;
	float                                         CallFunc_RGBToHSV_V;
	float                                         CallFunc_RGBToHSV_A;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_119[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	uint8                                         Pad_144[0x4];
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(TournamentDetails_C_RefreshDetailsPanel) == 0x000008, "Wrong alignment on TournamentDetails_C_RefreshDetailsPanel");
static_assert(sizeof(TournamentDetails_C_RefreshDetailsPanel) == 0x000160, "Wrong size on TournamentDetails_C_RefreshDetailsPanel");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper) == 0x000000, "Member 'TournamentDetails_C_RefreshDetailsPanel::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'TournamentDetails_C_RefreshDetailsPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_GetEffectMaterial_ReturnValue) == 0x000010, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_GetEffectMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, Temp_int_Array_Index_Variable) == 0x000018, "Member 'TournamentDetails_C_RefreshDetailsPanel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, K2Node_MakeArray_Array) == 0x000020, "Member 'TournamentDetails_C_RefreshDetailsPanel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Array_Get_Item) == 0x000030, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000040, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_GetEffectMaterial_ReturnValue_1) == 0x000050, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_GetEffectMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, Temp_byte_Variable) == 0x000058, "Member 'TournamentDetails_C_RefreshDetailsPanel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, Temp_byte_Variable_1) == 0x000059, "Member 'TournamentDetails_C_RefreshDetailsPanel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'TournamentDetails_C_RefreshDetailsPanel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000060, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, Temp_bool_Variable) == 0x000070, "Member 'TournamentDetails_C_RefreshDetailsPanel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Conv_IntToText_ReturnValue) == 0x000078, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Greater_IntInt_ReturnValue) == 0x000090, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_TextToUpper_ReturnValue) == 0x0000B0, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, K2Node_Select_Default) == 0x0000C8, "Member 'TournamentDetails_C_RefreshDetailsPanel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_BreakColor_R) == 0x0000E8, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_BreakColor_G) == 0x0000EC, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_BreakColor_B) == 0x0000F0, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_BreakColor_A) == 0x0000F4, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_MakeColor_ReturnValue) == 0x0000F8, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_RGBToHSV_H) == 0x000108, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_RGBToHSV_S) == 0x00010C, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_RGBToHSV_V) == 0x000110, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_RGBToHSV_A) == 0x000114, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000118, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, K2Node_MakeStruct_SlateColor) == 0x00011C, "Member 'TournamentDetails_C_RefreshDetailsPanel::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, K2Node_MakeStruct_SlateColor_1) == 0x000130, "Member 'TournamentDetails_C_RefreshDetailsPanel::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_GetTournamentId_ReturnValue) == 0x000148, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshDetailsPanel, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000158, "Member 'TournamentDetails_C_RefreshDetailsPanel::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct TournamentDetails_C_RefreshEvents final
{
public:
	bool                                          CallFunc_CanGroupTournamentEventsByVisualRoundNumber_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UShowdownEventTile_C*                   CallFunc_Create_ReturnValue;
	TArray<class FString>                         CallFunc_GetTournamentEvents_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_24[0x4];
	class FString                                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	TDelegate<void(class UCommonButtonLegacy* Button)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_4D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_54[0x4];
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	class UShowdownEventEmptySpacer_C*            CallFunc_Create_ReturnValue_1;
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;
};
static_assert(alignof(TournamentDetails_C_RefreshEvents) == 0x000008, "Wrong alignment on TournamentDetails_C_RefreshEvents");
static_assert(sizeof(TournamentDetails_C_RefreshEvents) == 0x000080, "Wrong size on TournamentDetails_C_RefreshEvents");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_CanGroupTournamentEventsByVisualRoundNumber_ReturnValue) == 0x000000, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_CanGroupTournamentEventsByVisualRoundNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_Create_ReturnValue) == 0x000008, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_GetTournamentEvents_ReturnValue) == 0x000010, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_GetTournamentEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, Temp_int_Array_Index_Variable) == 0x000020, "Member 'TournamentDetails_C_RefreshEvents::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_Array_Get_Item) == 0x000028, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'TournamentDetails_C_RefreshEvents::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'TournamentDetails_C_RefreshEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_GetTournamentId_ReturnValue) == 0x000058, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_Create_ReturnValue_1) == 0x000068, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_AddChild_ReturnValue) == 0x000070, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshEvents, CallFunc_AddChild_ReturnValue_1) == 0x000078, "Member 'TournamentDetails_C_RefreshEvents::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

struct TournamentDetails_C_RefreshOverviewPanel final
{
public:
	class FText                                   Temp_text_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	EFortShowdownMatchType                        Temp_byte_Variable;
	uint8                                         Pad_51[0x7];
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	class FText                                   Temp_text_Variable_5;
	class FText                                   Temp_text_Variable_6;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_B9[0x7];
	class FText                                   Temp_text_Variable_7;
	EFortShowdownEventState                       Temp_byte_Variable_1;
	uint8                                         Pad_D9[0x7];
	class FText                                   Temp_text_Variable_8;
	class FText                                   Temp_text_Variable_9;
	class FText                                   Temp_text_Variable_10;
	class FText                                   Temp_text_Variable_11;
	class FText                                   Temp_text_Variable_12;
	class FText                                   Temp_text_Variable_13;
	class FText                                   Temp_text_Variable_14;
	class FText                                   Temp_text_Variable_15;
	class FText                                   Temp_text_Variable_16;
	EFortShowdownEventState                       CallFunc_GetTournamentTimeState_ReturnValue;
	uint8                                         Pad_1B9[0x7];
	class FText                                   Temp_text_Variable_17;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue;
	EFortShowdownMatchType                        CallFunc_GetTournamentMatchType_ReturnValue;
	uint8                                         Pad_1DB[0x5];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   K2Node_Select_Default;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;
	class FText                                   CallFunc_TextToUpper_ReturnValue_2;
	struct FTimespan                              CallFunc_GetTournamentTimeLeft_ReturnValue;
	class FText                                   CallFunc_GetEventTimespanAsText_ReturnValue;
	int32                                         CallFunc_BreakTimespan_Days;
	int32                                         CallFunc_BreakTimespan_Hours;
	int32                                         CallFunc_BreakTimespan_Minutes;
	int32                                         CallFunc_BreakTimespan_Seconds;
	int32                                         CallFunc_BreakTimespan_Milliseconds;
	uint8                                         Pad_2BC[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_311[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_329[0x7];
	class FText                                   K2Node_Select_Default_1;
	class FText                                   K2Node_Select_Default_2;
	class FText                                   K2Node_Select_Default_3;
	class FText                                   K2Node_Select_Default_4;
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue_3;
};
static_assert(alignof(TournamentDetails_C_RefreshOverviewPanel) == 0x000008, "Wrong alignment on TournamentDetails_C_RefreshOverviewPanel");
static_assert(sizeof(TournamentDetails_C_RefreshOverviewPanel) == 0x0003D0, "Wrong size on TournamentDetails_C_RefreshOverviewPanel");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable) == 0x000000, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_bool_Variable) == 0x000018, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_1) == 0x000020, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_2) == 0x000038, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_byte_Variable) == 0x000050, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_3) == 0x000058, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_4) == 0x000070, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_5) == 0x000088, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_6) == 0x0000A0, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_bool_Variable_1) == 0x0000B8, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_7) == 0x0000C0, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_byte_Variable_1) == 0x0000D8, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_8) == 0x0000E0, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_9) == 0x0000F8, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_9' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_10) == 0x000110, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_10' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_11) == 0x000128, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_11' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_12) == 0x000140, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_12' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_13) == 0x000158, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_13' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_14) == 0x000170, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_14' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_15) == 0x000188, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_15' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_16) == 0x0001A0, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_16' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_GetTournamentTimeState_ReturnValue) == 0x0001B8, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_GetTournamentTimeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_text_Variable_17) == 0x0001C0, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_text_Variable_17' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, Temp_bool_Variable_2) == 0x0001D8, "Member 'TournamentDetails_C_RefreshOverviewPanel::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue) == 0x0001D9, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_IsSeriesPointLeaderboardAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_GetTournamentMatchType_ReturnValue) == 0x0001DA, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_GetTournamentMatchType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E0, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_Select_Default) == 0x0001F8, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_TextToUpper_ReturnValue) == 0x000210, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000228, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000240, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_TextToUpper_ReturnValue_1) == 0x000258, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_TextToUpper_ReturnValue_2) == 0x000270, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_TextToUpper_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_GetTournamentTimeLeft_ReturnValue) == 0x000288, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_GetTournamentTimeLeft_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_GetEventTimespanAsText_ReturnValue) == 0x000290, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_GetEventTimespanAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_BreakTimespan_Days) == 0x0002A8, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_BreakTimespan_Hours) == 0x0002AC, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_BreakTimespan_Minutes) == 0x0002B0, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_BreakTimespan_Seconds) == 0x0002B4, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_BreakTimespan_Milliseconds) == 0x0002B8, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_MakeStruct_FormatArgumentData) == 0x0002C0, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000310, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_MakeArray_Array) == 0x000318, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000328, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_Select_Default_1) == 0x000330, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_Select_Default_2) == 0x000348, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_Select_Default_3) == 0x000360, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, K2Node_Select_Default_4) == 0x000378, "Member 'TournamentDetails_C_RefreshOverviewPanel::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_GetTournamentId_ReturnValue) == 0x000390, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_Format_ReturnValue) == 0x0003A0, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshOverviewPanel, CallFunc_TextToUpper_ReturnValue_3) == 0x0003B8, "Member 'TournamentDetails_C_RefreshOverviewPanel::CallFunc_TextToUpper_ReturnValue_3' has a wrong offset!");

struct TournamentDetails_C_RefreshScoringRules final
{
public:
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(TournamentDetails_C_RefreshScoringRules) == 0x000008, "Wrong alignment on TournamentDetails_C_RefreshScoringRules");
static_assert(sizeof(TournamentDetails_C_RefreshScoringRules) == 0x000020, "Wrong size on TournamentDetails_C_RefreshScoringRules");
static_assert(offsetof(TournamentDetails_C_RefreshScoringRules, CallFunc_GetTournamentId_ReturnValue) == 0x000000, "Member 'TournamentDetails_C_RefreshScoringRules::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshScoringRules, K2Node_DynamicCast_AsShowdown_Event_Tile) == 0x000010, "Member 'TournamentDetails_C_RefreshScoringRules::K2Node_DynamicCast_AsShowdown_Event_Tile' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshScoringRules, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TournamentDetails_C_RefreshScoringRules::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct TournamentDetails_C_RefreshViolators final
{
public:
	class UShowdownEventTile_C*                   FocusedEvent;
	int32                                         CallFunc_GetNumEventVisualRounds_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_D[0x3];
	class FText                                   CallFunc_GetWindowRoundDisplayString_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	int32                                         CallFunc_GetEventWindowVisualRoundNumber_ReturnValue;
	bool                                          CallFunc_IsNullItem_Is_Null_Item;
	bool                                          CallFunc_IsNullItem_Is_Null_Item_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_61[0x7];
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_89[0x3];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_94[0x4];
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;
	int32                                         CallFunc_GetChildrenCount_ReturnValue;
	uint8                                         Pad_A4[0x4];
	class UShowdownEventTile_C*                   K2Node_DynamicCast_AsShowdown_Event_Tile_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_B2[0x2];
	int32                                         CallFunc_GetEventWindowVisualRoundNumber_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(TournamentDetails_C_RefreshViolators) == 0x000008, "Wrong alignment on TournamentDetails_C_RefreshViolators");
static_assert(sizeof(TournamentDetails_C_RefreshViolators) == 0x0000C0, "Wrong size on TournamentDetails_C_RefreshViolators");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, FocusedEvent) == 0x000000, "Member 'TournamentDetails_C_RefreshViolators::FocusedEvent' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_GetNumEventVisualRounds_ReturnValue) == 0x000008, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_GetNumEventVisualRounds_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_GetWindowRoundDisplayString_ReturnValue) == 0x000010, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_GetWindowRoundDisplayString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_TextToUpper_ReturnValue) == 0x000028, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_GetEventWindowVisualRoundNumber_ReturnValue) == 0x000040, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_GetEventWindowVisualRoundNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_IsNullItem_Is_Null_Item) == 0x000044, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_IsNullItem_Is_Null_Item' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_IsNullItem_Is_Null_Item_1) == 0x000045, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_IsNullItem_Is_Null_Item_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_BooleanOR_ReturnValue) == 0x000046, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_Not_PreBool_ReturnValue) == 0x000047, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_TextToUpper_ReturnValue_1) == 0x000068, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, K2Node_DynamicCast_AsShowdown_Event_Tile) == 0x000080, "Member 'TournamentDetails_C_RefreshViolators::K2Node_DynamicCast_AsShowdown_Event_Tile' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'TournamentDetails_C_RefreshViolators::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, Temp_int_Variable) == 0x00008C, "Member 'TournamentDetails_C_RefreshViolators::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_GetChildAt_ReturnValue) == 0x000098, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_GetChildrenCount_ReturnValue) == 0x0000A0, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, K2Node_DynamicCast_AsShowdown_Event_Tile_1) == 0x0000A8, "Member 'TournamentDetails_C_RefreshViolators::K2Node_DynamicCast_AsShowdown_Event_Tile_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'TournamentDetails_C_RefreshViolators::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000B1, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_GetEventWindowVisualRoundNumber_ReturnValue_1) == 0x0000B4, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_GetEventWindowVisualRoundNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RefreshViolators, CallFunc_BooleanAND_ReturnValue) == 0x0000B9, "Member 'TournamentDetails_C_RefreshViolators::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct TournamentDetails_C_RemoveInvalidScoringRules final
{
public:
	TArray<struct FFortShowdownScoringRuleInfo>   UnfilteredScoringRules;
	TArray<struct FFortShowdownScoringRuleInfo>   FilteredScoringRules;
	TArray<struct FFortShowdownScoringRuleInfo>   FilteredTournamentRules;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_3C[0x4];
	struct FFortShowdownScoringRuleInfo           CallFunc_Array_Get_Item;
	bool                                          CallFunc_Is_Scoring_Rule_Valid_IsValid;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_62[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(TournamentDetails_C_RemoveInvalidScoringRules) == 0x000008, "Wrong alignment on TournamentDetails_C_RemoveInvalidScoringRules");
static_assert(sizeof(TournamentDetails_C_RemoveInvalidScoringRules) == 0x000070, "Wrong size on TournamentDetails_C_RemoveInvalidScoringRules");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, UnfilteredScoringRules) == 0x000000, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::UnfilteredScoringRules' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, FilteredScoringRules) == 0x000010, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::FilteredScoringRules' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, FilteredTournamentRules) == 0x000020, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::FilteredTournamentRules' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, Temp_int_Array_Index_Variable) == 0x000034, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, CallFunc_Array_Get_Item) == 0x000040, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, CallFunc_Is_Scoring_Rule_Valid_IsValid) == 0x000060, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::CallFunc_Is_Scoring_Rule_Valid_IsValid' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_RemoveInvalidScoringRules, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'TournamentDetails_C_RemoveInvalidScoringRules::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct TournamentDetails_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(TournamentDetails_C_Tick) == 0x000008, "Wrong alignment on TournamentDetails_C_Tick");
static_assert(sizeof(TournamentDetails_C_Tick) == 0x000048, "Wrong size on TournamentDetails_C_Tick");
static_assert(offsetof(TournamentDetails_C_Tick, MyGeometry) == 0x000000, "Member 'TournamentDetails_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_Tick, InDeltaTime) == 0x000040, "Member 'TournamentDetails_C_Tick::InDeltaTime' has a wrong offset!");

struct TournamentDetails_C_UpdateDefaultTournamentEvent final
{
public:
	TArray<class FString>                         TournamentEvents;
	class FString                                 CallFunc_GetTournamentNextEvent_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_IsEmpty_ReturnValue;
	uint8                                         Pad_29[0x7];
	class FString                                 CallFunc_Array_Get_Item;
};
static_assert(alignof(TournamentDetails_C_UpdateDefaultTournamentEvent) == 0x000008, "Wrong alignment on TournamentDetails_C_UpdateDefaultTournamentEvent");
static_assert(sizeof(TournamentDetails_C_UpdateDefaultTournamentEvent) == 0x000040, "Wrong size on TournamentDetails_C_UpdateDefaultTournamentEvent");
static_assert(offsetof(TournamentDetails_C_UpdateDefaultTournamentEvent, TournamentEvents) == 0x000000, "Member 'TournamentDetails_C_UpdateDefaultTournamentEvent::TournamentEvents' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_UpdateDefaultTournamentEvent, CallFunc_GetTournamentNextEvent_ReturnValue) == 0x000010, "Member 'TournamentDetails_C_UpdateDefaultTournamentEvent::CallFunc_GetTournamentNextEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_UpdateDefaultTournamentEvent, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'TournamentDetails_C_UpdateDefaultTournamentEvent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_UpdateDefaultTournamentEvent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'TournamentDetails_C_UpdateDefaultTournamentEvent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_UpdateDefaultTournamentEvent, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'TournamentDetails_C_UpdateDefaultTournamentEvent::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDetails_C_UpdateDefaultTournamentEvent, CallFunc_Array_Get_Item) == 0x000030, "Member 'TournamentDetails_C_UpdateDefaultTournamentEvent::CallFunc_Array_Get_Item' has a wrong offset!");

}
