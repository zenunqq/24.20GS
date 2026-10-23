#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PinModal_C_CollectPinButtons final
{
public:
	TArray<class UFortPinButton*>                 ReturnValue;
	TArray<class UFortPinButton*>                 K2Node_MakeArray_Array;
};
static_assert(alignof(PinModal_C_CollectPinButtons) == 0x000008, "Wrong alignment on PinModal_C_CollectPinButtons");
static_assert(sizeof(PinModal_C_CollectPinButtons) == 0x000020, "Wrong size on PinModal_C_CollectPinButtons");
static_assert(offsetof(PinModal_C_CollectPinButtons, ReturnValue) == 0x000000, "Member 'PinModal_C_CollectPinButtons::ReturnValue' has a wrong offset!");
static_assert(offsetof(PinModal_C_CollectPinButtons, K2Node_MakeArray_Array) == 0x000010, "Member 'PinModal_C_CollectPinButtons::K2Node_MakeArray_Array' has a wrong offset!");

struct PinModal_C_ExecuteUbergraph_PinModal final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	EPinModalValidityState                        K2Node_Event_PinModalState;
};
static_assert(alignof(PinModal_C_ExecuteUbergraph_PinModal) == 0x000004, "Wrong alignment on PinModal_C_ExecuteUbergraph_PinModal");
static_assert(sizeof(PinModal_C_ExecuteUbergraph_PinModal) == 0x000008, "Wrong size on PinModal_C_ExecuteUbergraph_PinModal");
static_assert(offsetof(PinModal_C_ExecuteUbergraph_PinModal, EntryPoint) == 0x000000, "Member 'PinModal_C_ExecuteUbergraph_PinModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(PinModal_C_ExecuteUbergraph_PinModal, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PinModal_C_ExecuteUbergraph_PinModal::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PinModal_C_ExecuteUbergraph_PinModal, K2Node_Event_PinModalState) == 0x000005, "Member 'PinModal_C_ExecuteUbergraph_PinModal::K2Node_Event_PinModalState' has a wrong offset!");

struct PinModal_C_OnSetPinState final
{
public:
	EPinModalValidityState                        PinModalState;
};
static_assert(alignof(PinModal_C_OnSetPinState) == 0x000001, "Wrong alignment on PinModal_C_OnSetPinState");
static_assert(sizeof(PinModal_C_OnSetPinState) == 0x000001, "Wrong size on PinModal_C_OnSetPinState");
static_assert(offsetof(PinModal_C_OnSetPinState, PinModalState) == 0x000000, "Member 'PinModal_C_OnSetPinState::PinModalState' has a wrong offset!");

struct PinModal_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PinModal_C_PreConstruct) == 0x000001, "Wrong alignment on PinModal_C_PreConstruct");
static_assert(sizeof(PinModal_C_PreConstruct) == 0x000001, "Wrong size on PinModal_C_PreConstruct");
static_assert(offsetof(PinModal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PinModal_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PinModal_C_Set_Visual_States final
{
public:
	EPinModalValidityState                        Pin_States;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	EPinModalValidityState                        Temp_byte_Variable;
	EPinModalValidityState                        Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	EPinModalValidityState                        Temp_byte_Variable_6;
	ESlateVisibility                              K2Node_Select_Default;
	struct FLinearColor                           K2Node_Select_Default_1;
	uint8                                         Pad_5C[0x4];
	const class UWidget*                          K2Node_Select_Default_2;
};
static_assert(alignof(PinModal_C_Set_Visual_States) == 0x000008, "Wrong alignment on PinModal_C_Set_Visual_States");
static_assert(sizeof(PinModal_C_Set_Visual_States) == 0x000068, "Wrong size on PinModal_C_Set_Visual_States");
static_assert(offsetof(PinModal_C_Set_Visual_States, Pin_States) == 0x000000, "Member 'PinModal_C_Set_Visual_States::Pin_States' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_struct_Variable) == 0x000004, "Member 'PinModal_C_Set_Visual_States::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_struct_Variable_1) == 0x000014, "Member 'PinModal_C_Set_Visual_States::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_struct_Variable_2) == 0x000024, "Member 'PinModal_C_Set_Visual_States::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_struct_Variable_3) == 0x000034, "Member 'PinModal_C_Set_Visual_States::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable) == 0x000044, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable_1) == 0x000045, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable_2) == 0x000046, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable_3) == 0x000047, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable_4) == 0x000048, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable_5) == 0x000049, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, Temp_byte_Variable_6) == 0x00004A, "Member 'PinModal_C_Set_Visual_States::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, K2Node_Select_Default) == 0x00004B, "Member 'PinModal_C_Set_Visual_States::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, K2Node_Select_Default_1) == 0x00004C, "Member 'PinModal_C_Set_Visual_States::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PinModal_C_Set_Visual_States, K2Node_Select_Default_2) == 0x000060, "Member 'PinModal_C_Set_Visual_States::K2Node_Select_Default_2' has a wrong offset!");

struct PinModal_C_SetPreviewData final
{
public:
	class UPinCodeButton_C*                       NewLocalVar_0;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	TArray<class UPinCodeButton_C*>               K2Node_MakeArray_Array;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class UPinCodeButton_C*                       CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(PinModal_C_SetPreviewData) == 0x000008, "Wrong alignment on PinModal_C_SetPreviewData");
static_assert(sizeof(PinModal_C_SetPreviewData) == 0x000040, "Wrong size on PinModal_C_SetPreviewData");
static_assert(offsetof(PinModal_C_SetPreviewData, NewLocalVar_0) == 0x000000, "Member 'PinModal_C_SetPreviewData::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, Temp_int_Array_Index_Variable) == 0x000008, "Member 'PinModal_C_SetPreviewData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'PinModal_C_SetPreviewData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PinModal_C_SetPreviewData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, K2Node_MakeArray_Array) == 0x000018, "Member 'PinModal_C_SetPreviewData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'PinModal_C_SetPreviewData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, CallFunc_Array_Get_Item) == 0x000030, "Member 'PinModal_C_SetPreviewData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PinModal_C_SetPreviewData, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'PinModal_C_SetPreviewData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}
