#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct Valet_GasPumpIndicatorManagerV2_C_AddGasPump final
{
public:
	class UB_GasPump_Valet_Component_C*           Gas_Pump;
	bool                                          FoundNearbyFuelIndicator;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_A[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	uint8                                         Pad_18[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9A[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;
	class AFuelIndicator_C*                       K2Node_DynamicCast_AsFuel_Indicator;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_C2[0x2];
	int32                                         CallFunc_Array_Add_ReturnValue;
	class AFuelIndicator_C*                       CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
	uint8                                         Pad_D4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_F1[0x7];
	double                                        CallFunc_Vector_Distance2DSquared_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_101[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump) == 0x000010, "Wrong alignment on Valet_GasPumpIndicatorManagerV2_C_AddGasPump");
static_assert(sizeof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump) == 0x000110, "Wrong size on Valet_GasPumpIndicatorManagerV2_C_AddGasPump");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, Gas_Pump) == 0x000000, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::Gas_Pump' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, FoundNearbyFuelIndicator) == 0x000008, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::FoundNearbyFuelIndicator' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, Temp_bool_True_if_break_was_hit_Variable) == 0x000009, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Not_PreBool_ReturnValue) == 0x000098, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, Temp_int_Array_Index_Variable) == 0x00009C, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, Temp_int_Loop_Counter_Variable) == 0x0000A0, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A8, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B0, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, K2Node_DynamicCast_AsFuel_Indicator) == 0x0000B8, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::K2Node_DynamicCast_AsFuel_Indicator' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_IsValid_ReturnValue_1) == 0x0000C1, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Array_Add_ReturnValue) == 0x0000C4, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Array_AddUnique_ReturnValue) == 0x0000D0, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000D8, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_IsValid_ReturnValue_2) == 0x0000F0, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Vector_Distance2DSquared_ReturnValue) == 0x0000F8, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Vector_Distance2DSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000100, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Array_Length_ReturnValue) == 0x000104, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_Less_IntInt_ReturnValue) == 0x000108, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_AddGasPump, CallFunc_BooleanAND_ReturnValue) == 0x000109, "Member 'Valet_GasPumpIndicatorManagerV2_C_AddGasPump::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump final
{
public:
	class UB_GasPump_Valet_Component_C*           Gas_Pump;
	bool                                          FoundNearbyGasPump;
	uint8                                         Pad_9[0x7];
	TArray<class AFuelIndicator_C*>               RemovalList;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_25[0x3];
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_35[0x3];
	int32                                         Temp_int_Array_Index_Variable_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_3D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_1;
	uint8                                         Pad_44[0x4];
	class AFuelIndicator_C*                       CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_55[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	class UB_GasPump_Valet_Component_C*           CallFunc_Array_Get_Item_1;
	class AFuelIndicator_C*                       CallFunc_Array_Get_Item_2;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_85[0x3];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_A1[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	double                                        CallFunc_Vector_Distance2DSquared_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_CE[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump) == 0x000008, "Wrong alignment on Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump");
static_assert(sizeof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump) == 0x0000D8, "Wrong size on Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Gas_Pump) == 0x000000, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Gas_Pump' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, FoundNearbyGasPump) == 0x000008, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::FoundNearbyGasPump' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, RemovalList) == 0x000010, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::RemovalList' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_int_Array_Index_Variable) == 0x000020, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_bool_True_if_break_was_hit_Variable) == 0x000034, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_int_Array_Index_Variable_2) == 0x000038, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_int_Loop_Counter_Variable_1) == 0x000040, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Get_Item) == 0x000048, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, Temp_int_Loop_Counter_Variable_2) == 0x00005C, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_RemoveItem_ReturnValue) == 0x000060, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Add_IntInt_ReturnValue_2) == 0x000064, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Get_Item_2) == 0x000070, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_GetOwner_ReturnValue) == 0x000078, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Add_ReturnValue) == 0x000080, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_IsValid_ReturnValue_1) == 0x000084, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000088, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_IsValid_ReturnValue_2) == 0x0000A0, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000A8, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Vector_Distance2DSquared_ReturnValue) == 0x0000C0, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Vector_Distance2DSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000CC, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000CD, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_Length_ReturnValue_2) == 0x0000D0, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000D4, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x0000D5, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump, CallFunc_BooleanAND_ReturnValue) == 0x0000D6, "Member 'Valet_GasPumpIndicatorManagerV2_C_RemoveGasPump::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
