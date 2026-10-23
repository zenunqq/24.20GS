#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;
	bool                                          bIsSelected;
};
static_assert(alignof(ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(sizeof(ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(offsetof(ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature, Item) == 0x000000, "Member 'ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature, bIsSelected) == 0x000008, "Member 'ShowdownScreen_C_BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature::bIsSelected' has a wrong offset!");

struct ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	uint8                                         Pad_C[0x4];
	class UShowdownTournamentTile_C*              K2Node_DynamicCast_AsShowdown_Tournament_Tile;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class UTournamentListEntryData*               CallFunc_GetTournamentListEntryData_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_2D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          K2Node_Event_bUsingGamepad;
	uint8                                         Pad_49[0x7];
	struct FVector4                               CallFunc_GetSafeZonePadding_SafePadding;
	struct FVector2D                              CallFunc_GetSafeZonePadding_SafePaddingScale;
	struct FVector4                               CallFunc_GetSafeZonePadding_SpillOverPadding;
	double                                        CallFunc_BreakVector4_X;
	double                                        CallFunc_BreakVector4_Y;
	double                                        CallFunc_BreakVector4_Z;
	double                                        CallFunc_BreakVector4_W;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_C9[0x7];
	class UWidget*                                K2Node_CustomEvent_CurrentWidget;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_3;
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	struct FMargin                                K2Node_MakeStruct_Margin;
	bool                                          K2Node_Event_bFrontIsSelected;
	bool                                          K2Node_Event_bEndIsSelected;
	uint8                                         Pad_14E[0x2];
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_171[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_182[0x2];
	int32                                         CallFunc_GetIndexForItem_ReturnValue;
	int32                                         CallFunc_GetNumItems_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_196[0x2];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_19E[0x2];
	class UUserWidget*                            CallFunc_GetEntryAtIndex_ReturnValue;
	class UShowdownTournamentTile_C*              K2Node_DynamicCast_AsShowdown_Tournament_Tile_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1B1[0x7];
	class UShowdownTournamentTile_C*              K2Node_DynamicCast_AsShowdown_Tournament_Tile_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1C1[0x7];
	class UObject*                                K2Node_ComponentBoundEvent_Item;
	bool                                          K2Node_ComponentBoundEvent_bIsSelected;
	uint8                                         Pad_1D1[0x3];
	int32                                         CallFunc_GetNumItems_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_1D9[0x7];
	class UWidget*                                K2Node_Select_Default_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1E9[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3;
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
};
static_assert(alignof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen) == 0x000010, "Wrong alignment on ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen");
static_assert(sizeof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen) == 0x000220, "Wrong size on ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, EntryPoint) == 0x000000, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, Temp_byte_Variable) == 0x000004, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, Temp_int_Variable) == 0x000008, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_DynamicCast_AsShowdown_Tournament_Tile) == 0x000010, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_DynamicCast_AsShowdown_Tournament_Tile' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetTournamentListEntryData_ReturnValue) == 0x000020, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetTournamentListEntryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Event_IsDesignTime) == 0x00002C, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_ComponentBoundEvent_Button_1) == 0x000038, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_ComponentBoundEvent_Button) == 0x000040, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Event_bUsingGamepad) == 0x000048, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Event_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetSafeZonePadding_SafePadding) == 0x000050, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetSafeZonePadding_SafePadding' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetSafeZonePadding_SafePaddingScale) == 0x000070, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetSafeZonePadding_SafePaddingScale' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetSafeZonePadding_SpillOverPadding) == 0x000080, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetSafeZonePadding_SpillOverPadding' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_BreakVector4_X) == 0x0000A0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_BreakVector4_X' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_BreakVector4_Y) == 0x0000A8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_BreakVector4_Y' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_BreakVector4_Z) == 0x0000B0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_BreakVector4_Z' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_BreakVector4_W) == 0x0000B8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_BreakVector4_W' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000C0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, Temp_byte_Variable_1) == 0x0000C8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_CustomEvent_CurrentWidget) == 0x0000D0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_CustomEvent_CurrentWidget' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0000E8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_ReturnValue_3) == 0x0000F0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Event_MyGeometry) == 0x0000F8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Event_InDeltaTime) == 0x000138, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_Margin) == 0x00013C, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Event_bFrontIsSelected) == 0x00014C, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Event_bFrontIsSelected' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Event_bEndIsSelected) == 0x00014D, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Event_bEndIsSelected' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_DataTableRowHandle) == 0x000150, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_DataTableRowHandle_1) == 0x000160, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_DataTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, Temp_bool_Variable) == 0x000170, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetContext_ReturnValue) == 0x000178, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Select_Default) == 0x000180, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, Temp_bool_Variable_1) == 0x000181, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetIndexForItem_ReturnValue) == 0x000184, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetIndexForItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetNumItems_ReturnValue) == 0x000188, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetNumItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Add_IntInt_ReturnValue_1) == 0x00018C, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_IntInt_ReturnValue) == 0x000190, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Greater_IntInt_ReturnValue) == 0x000194, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000195, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000198, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Less_IntInt_ReturnValue) == 0x00019C, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_BooleanOR_ReturnValue) == 0x00019D, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetEntryAtIndex_ReturnValue) == 0x0001A0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetEntryAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_DynamicCast_AsShowdown_Tournament_Tile_1) == 0x0001A8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_DynamicCast_AsShowdown_Tournament_Tile_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_DynamicCast_AsShowdown_Tournament_Tile_2) == 0x0001B8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_DynamicCast_AsShowdown_Tournament_Tile_2' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_DynamicCast_bSuccess_2) == 0x0001C0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_ComponentBoundEvent_Item) == 0x0001C8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_ComponentBoundEvent_bIsSelected) == 0x0001D0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_ComponentBoundEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_GetNumItems_ReturnValue_1) == 0x0001D4, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_GetNumItems_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0001D8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_Select_Default_1) == 0x0001E0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_BooleanAND_ReturnValue) == 0x0001E8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0001F0, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0001F8, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2) == 0x000200, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3) == 0x000208, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x000210, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_Right_ImplicitCast) == 0x000214, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_Top_ImplicitCast) == 0x000218, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen, K2Node_MakeStruct_Left_ImplicitCast) == 0x00021C, "Member 'ShowdownScreen_C_ExecuteUbergraph_ShowdownScreen::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");

struct ShowdownScreen_C_OnInputModeChanged final
{
public:
	bool                                          bUsingGamepad;
};
static_assert(alignof(ShowdownScreen_C_OnInputModeChanged) == 0x000001, "Wrong alignment on ShowdownScreen_C_OnInputModeChanged");
static_assert(sizeof(ShowdownScreen_C_OnInputModeChanged) == 0x000001, "Wrong size on ShowdownScreen_C_OnInputModeChanged");
static_assert(offsetof(ShowdownScreen_C_OnInputModeChanged, bUsingGamepad) == 0x000000, "Member 'ShowdownScreen_C_OnInputModeChanged::bUsingGamepad' has a wrong offset!");

struct ShowdownScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ShowdownScreen_C_PreConstruct) == 0x000001, "Wrong alignment on ShowdownScreen_C_PreConstruct");
static_assert(sizeof(ShowdownScreen_C_PreConstruct) == 0x000001, "Wrong size on ShowdownScreen_C_PreConstruct");
static_assert(offsetof(ShowdownScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShowdownScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ShowdownScreen_C_SelectedEndTournament final
{
public:
	bool                                          bEndIsSelected;
};
static_assert(alignof(ShowdownScreen_C_SelectedEndTournament) == 0x000001, "Wrong alignment on ShowdownScreen_C_SelectedEndTournament");
static_assert(sizeof(ShowdownScreen_C_SelectedEndTournament) == 0x000001, "Wrong size on ShowdownScreen_C_SelectedEndTournament");
static_assert(offsetof(ShowdownScreen_C_SelectedEndTournament, bEndIsSelected) == 0x000000, "Member 'ShowdownScreen_C_SelectedEndTournament::bEndIsSelected' has a wrong offset!");

struct ShowdownScreen_C_SelectedFrontTournament final
{
public:
	bool                                          bFrontIsSelected;
};
static_assert(alignof(ShowdownScreen_C_SelectedFrontTournament) == 0x000001, "Wrong alignment on ShowdownScreen_C_SelectedFrontTournament");
static_assert(sizeof(ShowdownScreen_C_SelectedFrontTournament) == 0x000001, "Wrong size on ShowdownScreen_C_SelectedFrontTournament");
static_assert(offsetof(ShowdownScreen_C_SelectedFrontTournament, bFrontIsSelected) == 0x000000, "Member 'ShowdownScreen_C_SelectedFrontTournament::bFrontIsSelected' has a wrong offset!");

struct ShowdownScreen_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(ShowdownScreen_C_Tick) == 0x000008, "Wrong alignment on ShowdownScreen_C_Tick");
static_assert(sizeof(ShowdownScreen_C_Tick) == 0x000048, "Wrong size on ShowdownScreen_C_Tick");
static_assert(offsetof(ShowdownScreen_C_Tick, MyGeometry) == 0x000000, "Member 'ShowdownScreen_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ShowdownScreen_C_Tick, InDeltaTime) == 0x000040, "Member 'ShowdownScreen_C_Tick::InDeltaTime' has a wrong offset!");

struct ShowdownScreen_C_TournamentListSelect final
{
public:
	class UWidget*                                CurrentWidget;
};
static_assert(alignof(ShowdownScreen_C_TournamentListSelect) == 0x000008, "Wrong alignment on ShowdownScreen_C_TournamentListSelect");
static_assert(sizeof(ShowdownScreen_C_TournamentListSelect) == 0x000008, "Wrong size on ShowdownScreen_C_TournamentListSelect");
static_assert(offsetof(ShowdownScreen_C_TournamentListSelect, CurrentWidget) == 0x000000, "Member 'ShowdownScreen_C_TournamentListSelect::CurrentWidget' has a wrong offset!");

}
