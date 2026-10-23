#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CrewUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct CrewPurchaseScreen_C_BeginProgress final
{
public:
	class FText                                   ProgressLabel;
};
static_assert(alignof(CrewPurchaseScreen_C_BeginProgress) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_BeginProgress");
static_assert(sizeof(CrewPurchaseScreen_C_BeginProgress) == 0x000018, "Wrong size on CrewPurchaseScreen_C_BeginProgress");
static_assert(offsetof(CrewPurchaseScreen_C_BeginProgress, ProgressLabel) == 0x000000, "Member 'CrewPurchaseScreen_C_BeginProgress::ProgressLabel' has a wrong offset!");

struct CrewPurchaseScreen_C_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(CrewPurchaseScreen_C_BlockScreenContent) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_BlockScreenContent");
static_assert(sizeof(CrewPurchaseScreen_C_BlockScreenContent) == 0x000020, "Wrong size on CrewPurchaseScreen_C_BlockScreenContent");
static_assert(offsetof(CrewPurchaseScreen_C_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'CrewPurchaseScreen_C_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'CrewPurchaseScreen_C_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct CrewPurchaseScreen_C_ContentBlocked final
{
public:
	bool                                          isContentBlocked;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(CrewPurchaseScreen_C_ContentBlocked) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_ContentBlocked");
static_assert(sizeof(CrewPurchaseScreen_C_ContentBlocked) == 0x000028, "Wrong size on CrewPurchaseScreen_C_ContentBlocked");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, isContentBlocked) == 0x000000, "Member 'CrewPurchaseScreen_C_ContentBlocked::isContentBlocked' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, ContentBlockedText) == 0x000008, "Member 'CrewPurchaseScreen_C_ContentBlocked::ContentBlockedText' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, Temp_bool_Variable) == 0x000020, "Member 'CrewPurchaseScreen_C_ContentBlocked::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, Temp_byte_Variable) == 0x000021, "Member 'CrewPurchaseScreen_C_ContentBlocked::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, Temp_byte_Variable_1) == 0x000022, "Member 'CrewPurchaseScreen_C_ContentBlocked::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, Temp_bool_Variable_1) == 0x000023, "Member 'CrewPurchaseScreen_C_ContentBlocked::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, K2Node_Select_Default) == 0x000024, "Member 'CrewPurchaseScreen_C_ContentBlocked::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, Temp_byte_Variable_2) == 0x000025, "Member 'CrewPurchaseScreen_C_ContentBlocked::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, Temp_byte_Variable_3) == 0x000026, "Member 'CrewPurchaseScreen_C_ContentBlocked::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ContentBlocked, K2Node_Select_Default_1) == 0x000027, "Member 'CrewPurchaseScreen_C_ContentBlocked::K2Node_Select_Default_1' has a wrong offset!");

struct CrewPurchaseScreen_C_DownFromRecurringRewards final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
	int32                                         NumTilesPerRow;
	int32                                         SelectedTileColumn;
	int32                                         SelectedTileRow;
	uint8                                         Pad_1C[0x4];
	class UWidget*                                LocalReward;
	int32                                         SelectedTileIndex;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_2D[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_34[0x4];
	class UWidget*                                Temp_object_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_41[0x3];
	int32                                         K2Node_MathExpression_ReturnValue;
	int32                                         K2Node_MathExpression_ReturnValue_1;
	uint8                                         Pad_4C[0x4];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_GetNumEntries_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_6D[0x3];
	int32                                         CallFunc_Min_ReturnValue;
	uint8                                         Pad_74[0x4];
	class UUserWidget*                            CallFunc_Array_Get_Item;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_81[0x7];
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_1;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	class UUserWidget*                            CallFunc_Array_Get_Item_1;
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D1[0x7];
	double                                        CallFunc_BreakVector2D_X_1;
	double                                        CallFunc_BreakVector2D_Y_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_E9[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int32                                         CallFunc_Divide_IntInt_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_114[0x4];
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_121[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	class UWidget*                                K2Node_Select_Default;
	class UWidget*                                K2Node_Select_Default_1;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_2;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_3;
	class UUserWidget*                            CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	uint8                                         Pad_164[0x4];
	class UCommonButtonBase*                      K2Node_DynamicCast_AsCommon_Button_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_171[0x3];
	int32                                         CallFunc_Min_ReturnValue_1;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_179[0x7];
	class UUserWidget*                            CallFunc_Array_Get_Item_3;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_189[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(CrewPurchaseScreen_C_DownFromRecurringRewards) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_DownFromRecurringRewards");
static_assert(sizeof(CrewPurchaseScreen_C_DownFromRecurringRewards) == 0x000198, "Wrong size on CrewPurchaseScreen_C_DownFromRecurringRewards");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, Navigation_0) == 0x000000, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::Navigation_0' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, ReturnValue) == 0x000008, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, NumTilesPerRow) == 0x000010, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::NumTilesPerRow' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, SelectedTileColumn) == 0x000014, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::SelectedTileColumn' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, SelectedTileRow) == 0x000018, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::SelectedTileRow' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, LocalReward) == 0x000020, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::LocalReward' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, SelectedTileIndex) == 0x000028, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::SelectedTileIndex' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002C, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, Temp_int_Array_Index_Variable) == 0x000030, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, Temp_object_Variable) == 0x000038, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, Temp_bool_Variable) == 0x000040, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, K2Node_MathExpression_ReturnValue) == 0x000044, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, K2Node_MathExpression_ReturnValue_1) == 0x000048, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::K2Node_MathExpression_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetAllEntries_ReturnValue) == 0x000050, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetNumEntries_ReturnValue) == 0x000064, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetNumEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Subtract_IntInt_ReturnValue) == 0x000068, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Greater_IntInt_ReturnValue) == 0x00006C, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Min_ReturnValue) == 0x000070, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_Get_Item) == 0x000078, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, Temp_bool_Variable_1) == 0x000080, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetDesiredSize_ReturnValue) == 0x000088, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetAllEntries_ReturnValue_1) == 0x000098, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetAllEntries_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_BreakVector2D_X) == 0x0000A8, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_BreakVector2D_Y) == 0x0000B0, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetDesiredSize_ReturnValue_1) == 0x0000C0, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetDesiredSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_BreakVector2D_X_1) == 0x0000D8, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_BreakVector2D_Y_1) == 0x0000E0, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_IsValid_ReturnValue_1) == 0x0000E8, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_SelectFloat_ReturnValue) == 0x0000F0, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000F8, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Divide_IntInt_ReturnValue) == 0x000100, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_FTrunc_ReturnValue) == 0x000104, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Max_ReturnValue) == 0x000108, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Percent_IntInt_ReturnValue) == 0x00010C, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, Temp_int_Loop_Counter_Variable) == 0x000110, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetActiveWidget_ReturnValue) == 0x000118, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_IsValid_ReturnValue_2) == 0x000120, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Add_IntInt_ReturnValue_3) == 0x000124, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, K2Node_Select_Default) == 0x000128, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, K2Node_Select_Default_1) == 0x000130, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetAllEntries_ReturnValue_2) == 0x000138, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetAllEntries_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetAllEntries_ReturnValue_3) == 0x000148, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetAllEntries_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_Get_Item_2) == 0x000158, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_LastIndex_ReturnValue) == 0x000160, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, K2Node_DynamicCast_AsCommon_Button_Base) == 0x000168, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::K2Node_DynamicCast_AsCommon_Button_Base' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Min_ReturnValue_1) == 0x000174, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Min_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_GetSelected_ReturnValue) == 0x000178, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_Get_Item_3) == 0x000180, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_IsValid_ReturnValue_3) == 0x000188, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Array_Length_ReturnValue_1) == 0x00018C, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_DownFromRecurringRewards, CallFunc_Less_IntInt_ReturnValue) == 0x000190, "Member 'CrewPurchaseScreen_C_DownFromRecurringRewards::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	EVerticalAlignment                            Temp_byte_Variable;
	EVerticalAlignment                            Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	EVerticalAlignment                            Temp_byte_Variable_2;
	EVerticalAlignment                            Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_3;
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_15[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class UTexture2D*                             K2Node_Event_NewBackground;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        Temp_real_Variable_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_44[0x4];
	double                                        Temp_real_Variable_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	TArray<class UBorder*>                        K2Node_MakeArray_Array;
	class UPurchaseNavButton_C*                   K2Node_DynamicCast_AsPurchase_Nav_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_72[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	class UBorder*                                CallFunc_Array_Get_Item;
	double                                        K2Node_Select_Default;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_89[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_B9[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	struct FVector2D                              K2Node_Select_Default_1;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          K2Node_Event_bVisible;
	uint8                                         Pad_EA[0x6];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	bool                                          K2Node_Event_bTabsVisible;
	uint8                                         Pad_F9[0x3];
	float                                         K2Node_Event_SpacingAdjustmentForTabs;
	bool                                          K2Node_Event_bShowNotification;
	uint8                                         Pad_101[0x7];
	class FText                                   K2Node_Event_NotificationText;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_121[0x7];
	class FText                                   K2Node_Event_UserInformationText1;
	class FText                                   K2Node_Event_UserInformationText2;
	EMcpSubscriptionState                         K2Node_Event_SubscriptionState;
	uint8                                         Pad_159[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_169[0x7];
	class UScaleBoxSlot*                          CallFunc_SlotAsScaleBoxSlot_ReturnValue;
	EVerticalAlignment                            K2Node_Select_Default_2;
	EVerticalAlignment                            K2Node_Select_Default_3;
	uint8                                         Pad_17A[0x2];
	float                                         K2Node_Select_Default_4;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_184[0x4];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_191[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          K2Node_Event_bBlockScreen;
	uint8                                         Pad_1A9[0x7];
	class FText                                   K2Node_Event_ContentBlockedText;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              K2Node_Select_Default_5;
	uint8                                         Pad_1CA[0x2];
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
	double                                        CallFunc_UpdateLayoutForTabs_SpacingAdjustmentForTabs_ImplicitCast;
};
static_assert(alignof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen");
static_assert(sizeof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen) == 0x0001D8, "Wrong size on CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, EntryPoint) == 0x000000, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_bool_Variable) == 0x000004, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_bool_Variable_1) == 0x000005, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_byte_Variable) == 0x000006, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_byte_Variable_1) == 0x000007, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_bool_Variable_2) == 0x000008, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_byte_Variable_2) == 0x000009, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_byte_Variable_3) == 0x00000A, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_bool_Variable_3) == 0x00000B, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_real_Variable) == 0x00000C, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_real_Variable_1) == 0x000010, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_IsDesignTime) == 0x000014, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_NewBackground) == 0x000020, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_NewBackground' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_real_Variable_2) == 0x000030, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_GetEndTime_ReturnValue) == 0x000040, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_real_Variable_3) == 0x000048, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_MakeArray_Array) == 0x000058, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_DynamicCast_AsPurchase_Nav_Button) == 0x000068, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_DynamicCast_AsPurchase_Nav_Button' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_bool_Variable_4) == 0x000071, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_int_Array_Index_Variable) == 0x000074, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_Array_Get_Item) == 0x000078, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Select_Default) == 0x000080, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000088, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_2) == 0x000090, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_struct_Variable) == 0x000098, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_struct_Variable_1) == 0x0000A8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_bool_Variable_5) == 0x0000B8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000C0, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Select_Default_1) == 0x0000C8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000D8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_DynamicCast_AsTexture) == 0x0000E0, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_bVisible) == 0x0000E9, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x0000F0, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_bTabsVisible) == 0x0000F8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_bTabsVisible' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_SpacingAdjustmentForTabs) == 0x0000FC, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_SpacingAdjustmentForTabs' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_bShowNotification) == 0x000100, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_bShowNotification' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_NotificationText) == 0x000108, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_NotificationText' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_byte_Variable_4) == 0x000120, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_UserInformationText1) == 0x000128, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_UserInformationText1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_UserInformationText2) == 0x000140, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_UserInformationText2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_SubscriptionState) == 0x000158, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_SubscriptionState' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000160, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_IsMobileGame_ReturnValue) == 0x000168, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_SlotAsScaleBoxSlot_ReturnValue) == 0x000170, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_SlotAsScaleBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Select_Default_2) == 0x000178, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Select_Default_3) == 0x000179, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Select_Default_4) == 0x00017C, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_int_Loop_Counter_Variable) == 0x000180, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x000188, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_Less_IntInt_ReturnValue) == 0x000190, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_MakeStruct_Margin) == 0x000194, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_Add_IntInt_ReturnValue) == 0x0001A4, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_bBlockScreen) == 0x0001A8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_bBlockScreen' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Event_ContentBlockedText) == 0x0001B0, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Event_ContentBlockedText' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, Temp_byte_Variable_5) == 0x0001C8, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_Select_Default_5) == 0x0001C9, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, K2Node_MakeStruct_Left_ImplicitCast) == 0x0001CC, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen, CallFunc_UpdateLayoutForTabs_SpacingAdjustmentForTabs_ImplicitCast) == 0x0001D0, "Member 'CrewPurchaseScreen_C_ExecuteUbergraph_CrewPurchaseScreen::CallFunc_UpdateLayoutForTabs_SpacingAdjustmentForTabs_ImplicitCast' has a wrong offset!");

struct CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x3];
	float                                         SpacingAdjustmentForTabs;
};
static_assert(alignof(CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated) == 0x000004, "Wrong alignment on CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated");
static_assert(sizeof(CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated) == 0x000008, "Wrong size on CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated");
static_assert(offsetof(CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated, bTabsVisible) == 0x000000, "Member 'CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated::bTabsVisible' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated, SpacingAdjustmentForTabs) == 0x000004, "Member 'CrewPurchaseScreen_C_OnContainerTabVisibilityUpdated::SpacingAdjustmentForTabs' has a wrong offset!");

struct CrewPurchaseScreen_C_OnDownloadBackgroundComplete final
{
public:
	class UTexture2D*                             NewBackground;
};
static_assert(alignof(CrewPurchaseScreen_C_OnDownloadBackgroundComplete) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_OnDownloadBackgroundComplete");
static_assert(sizeof(CrewPurchaseScreen_C_OnDownloadBackgroundComplete) == 0x000008, "Wrong size on CrewPurchaseScreen_C_OnDownloadBackgroundComplete");
static_assert(offsetof(CrewPurchaseScreen_C_OnDownloadBackgroundComplete, NewBackground) == 0x000000, "Member 'CrewPurchaseScreen_C_OnDownloadBackgroundComplete::NewBackground' has a wrong offset!");

struct CrewPurchaseScreen_C_OnSetNavButtonNotificationText final
{
public:
	class FText                                   NotificationText;
};
static_assert(alignof(CrewPurchaseScreen_C_OnSetNavButtonNotificationText) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_OnSetNavButtonNotificationText");
static_assert(sizeof(CrewPurchaseScreen_C_OnSetNavButtonNotificationText) == 0x000018, "Wrong size on CrewPurchaseScreen_C_OnSetNavButtonNotificationText");
static_assert(offsetof(CrewPurchaseScreen_C_OnSetNavButtonNotificationText, NotificationText) == 0x000000, "Member 'CrewPurchaseScreen_C_OnSetNavButtonNotificationText::NotificationText' has a wrong offset!");

struct CrewPurchaseScreen_C_OnShowNavButtonNotification final
{
public:
	bool                                          bShowNotification;
};
static_assert(alignof(CrewPurchaseScreen_C_OnShowNavButtonNotification) == 0x000001, "Wrong alignment on CrewPurchaseScreen_C_OnShowNavButtonNotification");
static_assert(sizeof(CrewPurchaseScreen_C_OnShowNavButtonNotification) == 0x000001, "Wrong size on CrewPurchaseScreen_C_OnShowNavButtonNotification");
static_assert(offsetof(CrewPurchaseScreen_C_OnShowNavButtonNotification, bShowNotification) == 0x000000, "Member 'CrewPurchaseScreen_C_OnShowNavButtonNotification::bShowNotification' has a wrong offset!");

struct CrewPurchaseScreen_C_OnUpdatePurchaseButtonState final
{
public:
	ECrewPurchaseButtonState                      ButtonState;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ECrewPurchaseButtonState                      Temp_byte_Variable_3;
	ECrewPurchaseButtonState                      Temp_byte_Variable_4;
	uint8                                         Pad_6[0x2];
	const class UWidget*                          K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_OnUpdatePurchaseButtonState");
static_assert(sizeof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState) == 0x000018, "Wrong size on CrewPurchaseScreen_C_OnUpdatePurchaseButtonState");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, ButtonState) == 0x000000, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::ButtonState' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, Temp_byte_Variable) == 0x000001, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, Temp_byte_Variable_1) == 0x000002, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, Temp_byte_Variable_2) == 0x000003, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, Temp_byte_Variable_3) == 0x000004, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, Temp_byte_Variable_4) == 0x000005, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, K2Node_Select_Default) == 0x000008, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdatePurchaseButtonState, K2Node_Select_Default_1) == 0x000010, "Member 'CrewPurchaseScreen_C_OnUpdatePurchaseButtonState::K2Node_Select_Default_1' has a wrong offset!");

struct CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility) == 0x000001, "Wrong alignment on CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility");
static_assert(sizeof(CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility) == 0x000001, "Wrong size on CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility");
static_assert(offsetof(CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility, bVisible) == 0x000000, "Member 'CrewPurchaseScreen_C_OnUpdateVBuckRefundVisibility::bVisible' has a wrong offset!");

struct CrewPurchaseScreen_C_OnUserInformationTextsUpdated final
{
public:
	class FText                                   UserInformationText1;
	class FText                                   UserInformationText2;
	EMcpSubscriptionState                         SubscriptionState;
};
static_assert(alignof(CrewPurchaseScreen_C_OnUserInformationTextsUpdated) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_OnUserInformationTextsUpdated");
static_assert(sizeof(CrewPurchaseScreen_C_OnUserInformationTextsUpdated) == 0x000038, "Wrong size on CrewPurchaseScreen_C_OnUserInformationTextsUpdated");
static_assert(offsetof(CrewPurchaseScreen_C_OnUserInformationTextsUpdated, UserInformationText1) == 0x000000, "Member 'CrewPurchaseScreen_C_OnUserInformationTextsUpdated::UserInformationText1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUserInformationTextsUpdated, UserInformationText2) == 0x000018, "Member 'CrewPurchaseScreen_C_OnUserInformationTextsUpdated::UserInformationText2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_OnUserInformationTextsUpdated, SubscriptionState) == 0x000030, "Member 'CrewPurchaseScreen_C_OnUserInformationTextsUpdated::SubscriptionState' has a wrong offset!");

struct CrewPurchaseScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(CrewPurchaseScreen_C_PreConstruct) == 0x000001, "Wrong alignment on CrewPurchaseScreen_C_PreConstruct");
static_assert(sizeof(CrewPurchaseScreen_C_PreConstruct) == 0x000001, "Wrong size on CrewPurchaseScreen_C_PreConstruct");
static_assert(offsetof(CrewPurchaseScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CrewPurchaseScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct CrewPurchaseScreen_C_Set_Up_Error_Info_Flags final
{
public:
	class FText                                   UserInformationText_1;
	class FText                                   UserInformationText_2;
	EMcpSubscriptionState                         SubscriptionState;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(CrewPurchaseScreen_C_Set_Up_Error_Info_Flags) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_Set_Up_Error_Info_Flags");
static_assert(sizeof(CrewPurchaseScreen_C_Set_Up_Error_Info_Flags) == 0x000038, "Wrong size on CrewPurchaseScreen_C_Set_Up_Error_Info_Flags");
static_assert(offsetof(CrewPurchaseScreen_C_Set_Up_Error_Info_Flags, UserInformationText_1) == 0x000000, "Member 'CrewPurchaseScreen_C_Set_Up_Error_Info_Flags::UserInformationText_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_Set_Up_Error_Info_Flags, UserInformationText_2) == 0x000018, "Member 'CrewPurchaseScreen_C_Set_Up_Error_Info_Flags::UserInformationText_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_Set_Up_Error_Info_Flags, SubscriptionState) == 0x000030, "Member 'CrewPurchaseScreen_C_Set_Up_Error_Info_Flags::SubscriptionState' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_Set_Up_Error_Info_Flags, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'CrewPurchaseScreen_C_Set_Up_Error_Info_Flags::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct CrewPurchaseScreen_C_UpdateLayoutForTabs final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x7];
	double                                        SpacingAdjustmentForTabs;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x7];
	double                                        Temp_real_Variable;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        K2Node_Select_Default;
	struct FMargin                                K2Node_MakeStruct_Margin;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
};
static_assert(alignof(CrewPurchaseScreen_C_UpdateLayoutForTabs) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_UpdateLayoutForTabs");
static_assert(sizeof(CrewPurchaseScreen_C_UpdateLayoutForTabs) == 0x000050, "Wrong size on CrewPurchaseScreen_C_UpdateLayoutForTabs");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, bTabsVisible) == 0x000000, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::bTabsVisible' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, SpacingAdjustmentForTabs) == 0x000008, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::SpacingAdjustmentForTabs' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, Temp_bool_Variable) == 0x000010, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, Temp_real_Variable) == 0x000018, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000020, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, K2Node_Select_Default) == 0x000030, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Margin) == 0x000038, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Top_ImplicitCast) == 0x000048, "Member 'CrewPurchaseScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

struct CrewPurchaseScreen_C_UpFromLimitedTimeRewards final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
	int32                                         NumRows;
	int32                                         SelectedTileColumn;
	int32                                         SelectedTileIndex;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1D[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_24[0x4];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	int32                                         CallFunc_GetNumEntries_ReturnValue;
	uint8                                         Pad_3C[0x4];
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_1;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue_1;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_2;
	double                                        CallFunc_BreakVector2D_X_1;
	double                                        CallFunc_BreakVector2D_Y_1;
	class UUserWidget*                            CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_B4[0x4];
	class UCommonButtonBase*                      K2Node_DynamicCast_AsCommon_Button_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_C3[0x5];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_E5[0x3];
	int32                                         K2Node_MathExpression_ReturnValue;
	uint8                                         Pad_EC[0x4];
	class UUserWidget*                            CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
};
static_assert(alignof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_UpFromLimitedTimeRewards");
static_assert(sizeof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards) == 0x000100, "Wrong size on CrewPurchaseScreen_C_UpFromLimitedTimeRewards");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, Navigation_0) == 0x000000, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::Navigation_0' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, ReturnValue) == 0x000008, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, NumRows) == 0x000010, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::NumRows' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, SelectedTileColumn) == 0x000014, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::SelectedTileColumn' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, SelectedTileIndex) == 0x000018, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::SelectedTileIndex' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, Temp_int_Array_Index_Variable) == 0x000020, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetAllEntries_ReturnValue) == 0x000028, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetNumEntries_ReturnValue) == 0x000038, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetNumEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetDesiredSize_ReturnValue) == 0x000040, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetAllEntries_ReturnValue_1) == 0x000050, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetAllEntries_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_BreakVector2D_X) == 0x000060, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_BreakVector2D_Y) == 0x000068, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Array_Get_Item) == 0x000070, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetDesiredSize_ReturnValue_1) == 0x000078, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetDesiredSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetAllEntries_ReturnValue_2) == 0x000088, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetAllEntries_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_BreakVector2D_X_1) == 0x000098, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_BreakVector2D_Y_1) == 0x0000A0, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, K2Node_DynamicCast_AsCommon_Button_Base) == 0x0000B8, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::K2Node_DynamicCast_AsCommon_Button_Base' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_GetSelected_ReturnValue) == 0x0000C2, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_SelectFloat_ReturnValue) == 0x0000C8, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, Temp_int_Loop_Counter_Variable) == 0x0000D8, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_FTrunc_ReturnValue) == 0x0000DC, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Max_ReturnValue) == 0x0000E0, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, K2Node_MathExpression_ReturnValue) == 0x0000E8, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Array_Get_Item_2) == 0x0000F0, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpFromLimitedTimeRewards, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F8, "Member 'CrewPurchaseScreen_C_UpFromLimitedTimeRewards::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

struct CrewPurchaseScreen_C_UpToFirstTile final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
	class UWidget*                                Temp_object_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_1A[0x6];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue_1;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	class UUserWidget*                            CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_52[0x6];
	class UWidget*                                K2Node_Select_Default;
	class UWidget*                                K2Node_Select_Default_1;
};
static_assert(alignof(CrewPurchaseScreen_C_UpToFirstTile) == 0x000008, "Wrong alignment on CrewPurchaseScreen_C_UpToFirstTile");
static_assert(sizeof(CrewPurchaseScreen_C_UpToFirstTile) == 0x000068, "Wrong size on CrewPurchaseScreen_C_UpToFirstTile");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, Navigation_0) == 0x000000, "Member 'CrewPurchaseScreen_C_UpToFirstTile::Navigation_0' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, ReturnValue) == 0x000008, "Member 'CrewPurchaseScreen_C_UpToFirstTile::ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, Temp_object_Variable) == 0x000010, "Member 'CrewPurchaseScreen_C_UpToFirstTile::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, Temp_bool_Variable) == 0x000018, "Member 'CrewPurchaseScreen_C_UpToFirstTile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, Temp_bool_Variable_1) == 0x000019, "Member 'CrewPurchaseScreen_C_UpToFirstTile::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, CallFunc_GetAllEntries_ReturnValue) == 0x000020, "Member 'CrewPurchaseScreen_C_UpToFirstTile::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, CallFunc_GetAllEntries_ReturnValue_1) == 0x000030, "Member 'CrewPurchaseScreen_C_UpToFirstTile::CallFunc_GetAllEntries_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, CallFunc_Array_Get_Item) == 0x000040, "Member 'CrewPurchaseScreen_C_UpToFirstTile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'CrewPurchaseScreen_C_UpToFirstTile::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'CrewPurchaseScreen_C_UpToFirstTile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'CrewPurchaseScreen_C_UpToFirstTile::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, K2Node_Select_Default) == 0x000058, "Member 'CrewPurchaseScreen_C_UpToFirstTile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_C_UpToFirstTile, K2Node_Select_Default_1) == 0x000060, "Member 'CrewPurchaseScreen_C_UpToFirstTile::K2Node_Select_Default_1' has a wrong offset!");

}
