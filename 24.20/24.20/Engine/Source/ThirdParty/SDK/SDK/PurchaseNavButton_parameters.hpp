#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector2D                              Temp_struct_Variable;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_25[0x3];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_33[0x5];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	class FString                                 CallFunc_Split_LeftS;
	class FString                                 CallFunc_Split_RightS;
	bool                                          CallFunc_Split_ReturnValue;
	uint8                                         Pad_81[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_D1[0x7];
	class UMaterialInterface*                     K2Node_Select_Default_1;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_E4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_FA[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_11A[0x6];
	struct FVector2D                              K2Node_Select_Default_2;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_2;
};
static_assert(alignof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton) == 0x000008, "Wrong alignment on PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton");
static_assert(sizeof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton) == 0x000148, "Wrong size on PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, EntryPoint) == 0x000000, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_struct_Variable) == 0x000008, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_bool_Variable) == 0x000024, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_byte_Variable) == 0x000030, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_byte_Variable_1) == 0x000031, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_bool_Variable_1) == 0x000032, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_object_Variable) == 0x000038, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_object_Variable_1) == 0x000040, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_Conv_TextToString_ReturnValue) == 0x000050, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_Split_LeftS) == 0x000060, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_Split_RightS) == 0x000070, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_Split_ReturnValue) == 0x000080, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, K2Node_MakeStruct_DataTableRowHandle) == 0x0000C0, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, K2Node_Select_Default) == 0x0000D0, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, K2Node_Select_Default_1) == 0x0000D8, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_GetEndTime_ReturnValue) == 0x0000E0, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000E8, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000F0, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, K2Node_Event_IsDesignTime) == 0x0000F8, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_IsUsingTouch_ReturnValue) == 0x0000F9, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000100, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_struct_Variable_1) == 0x000108, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_IsUsingTouch_ReturnValue_1) == 0x000118, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, Temp_bool_Variable_2) == 0x000119, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, K2Node_Select_Default_2) == 0x000120, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_SpawnSound2D_ReturnValue) == 0x000130, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000138, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton, CallFunc_SpawnSound2D_ReturnValue_2) == 0x000140, "Member 'PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton::CallFunc_SpawnSound2D_ReturnValue_2' has a wrong offset!");

struct PurchaseNavButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PurchaseNavButton_C_PreConstruct) == 0x000001, "Wrong alignment on PurchaseNavButton_C_PreConstruct");
static_assert(sizeof(PurchaseNavButton_C_PreConstruct) == 0x000001, "Wrong size on PurchaseNavButton_C_PreConstruct");
static_assert(offsetof(PurchaseNavButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PurchaseNavButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PurchaseNavButton_C_ResetHoverAnimation final
{
public:
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_14[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(PurchaseNavButton_C_ResetHoverAnimation) == 0x000008, "Wrong alignment on PurchaseNavButton_C_ResetHoverAnimation");
static_assert(sizeof(PurchaseNavButton_C_ResetHoverAnimation) == 0x000020, "Wrong size on PurchaseNavButton_C_ResetHoverAnimation");
static_assert(offsetof(PurchaseNavButton_C_ResetHoverAnimation, CallFunc_IsUsingTouch_ReturnValue) == 0x000000, "Member 'PurchaseNavButton_C_ResetHoverAnimation::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ResetHoverAnimation, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'PurchaseNavButton_C_ResetHoverAnimation::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ResetHoverAnimation, CallFunc_GetEndTime_ReturnValue) == 0x000010, "Member 'PurchaseNavButton_C_ResetHoverAnimation::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_ResetHoverAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'PurchaseNavButton_C_ResetHoverAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct PurchaseNavButton_C_UpdateTextSize final
{
public:
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_79[0x7];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo_1;
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(PurchaseNavButton_C_UpdateTextSize) == 0x000008, "Wrong alignment on PurchaseNavButton_C_UpdateTextSize");
static_assert(sizeof(PurchaseNavButton_C_UpdateTextSize) == 0x0000E0, "Wrong size on PurchaseNavButton_C_UpdateTextSize");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, CallFunc_GetDesiredSize_ReturnValue) == 0x000000, "Member 'PurchaseNavButton_C_UpdateTextSize::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, K2Node_MakeStruct_SlateFontInfo) == 0x000010, "Member 'PurchaseNavButton_C_UpdateTextSize::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, CallFunc_BreakVector2D_X) == 0x000068, "Member 'PurchaseNavButton_C_UpdateTextSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, CallFunc_BreakVector2D_Y) == 0x000070, "Member 'PurchaseNavButton_C_UpdateTextSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'PurchaseNavButton_C_UpdateTextSize::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, K2Node_MakeStruct_SlateFontInfo_1) == 0x000080, "Member 'PurchaseNavButton_C_UpdateTextSize::K2Node_MakeStruct_SlateFontInfo_1' has a wrong offset!");
static_assert(offsetof(PurchaseNavButton_C_UpdateTextSize, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x0000D8, "Member 'PurchaseNavButton_C_UpdateTextSize::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}
