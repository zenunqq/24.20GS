#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_CustomEvent_Value;
	int32                                         K2Node_CustomEvent_NumPips;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_15[0x3];
	float                                         CallFunc_SetProgress_Progress_ImplicitCast;
	float                                         CallFunc_AnimateProgressFromCurrent_End_ImplicitCast;
};
static_assert(alignof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar) == 0x000008, "Wrong alignment on NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar");
static_assert(sizeof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar) == 0x000020, "Wrong size on NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar");
static_assert(offsetof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar, EntryPoint) == 0x000000, "Member 'NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar, K2Node_CustomEvent_Value) == 0x000008, "Member 'NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar, K2Node_CustomEvent_NumPips) == 0x000010, "Member 'NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar::K2Node_CustomEvent_NumPips' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar, K2Node_Event_IsDesignTime) == 0x000014, "Member 'NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar, CallFunc_SetProgress_Progress_ImplicitCast) == 0x000018, "Member 'NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar::CallFunc_SetProgress_Progress_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar, CallFunc_AnimateProgressFromCurrent_End_ImplicitCast) == 0x00001C, "Member 'NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar::CallFunc_AnimateProgressFromCurrent_End_ImplicitCast' has a wrong offset!");

struct NPCStatusWidgetBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(NPCStatusWidgetBar_C_PreConstruct) == 0x000001, "Wrong alignment on NPCStatusWidgetBar_C_PreConstruct");
static_assert(sizeof(NPCStatusWidgetBar_C_PreConstruct) == 0x000001, "Wrong size on NPCStatusWidgetBar_C_PreConstruct");
static_assert(offsetof(NPCStatusWidgetBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NPCStatusWidgetBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth final
{
public:
	double                                        CurrentPercentage;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;
	bool                                          Temp_bool_Variable_4;
	struct FLinearColor                           K2Node_Select_Default;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_3;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_4;
	uint8                                         Pad_22[0x2];
	struct FLinearColor                           K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_5;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_5;
	uint8                                         Pad_36[0x2];
	struct FLinearColor                           K2Node_Select_Default_2;
	struct FLinearColor                           K2Node_Select_Default_3;
	struct FLinearColor                           K2Node_Select_Default_4;
	struct FLinearColor                           K2Node_Select_Default_5;
};
static_assert(alignof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth) == 0x000008, "Wrong alignment on NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth");
static_assert(sizeof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth) == 0x000078, "Wrong size on NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CurrentPercentage) == 0x000000, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CurrentPercentage' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, Temp_bool_Variable) == 0x000008, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, Temp_bool_Variable_1) == 0x000009, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, Temp_bool_Variable_2) == 0x00000A, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, Temp_bool_Variable_3) == 0x00000B, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00000C, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x00000D, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x00000E, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, Temp_bool_Variable_4) == 0x00000F, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, K2Node_Select_Default) == 0x000010, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CallFunc_Less_DoubleDouble_ReturnValue_3) == 0x000020, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CallFunc_Less_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CallFunc_Less_DoubleDouble_ReturnValue_4) == 0x000021, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CallFunc_Less_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, K2Node_Select_Default_1) == 0x000024, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, Temp_bool_Variable_5) == 0x000034, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, CallFunc_Less_DoubleDouble_ReturnValue_5) == 0x000035, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::CallFunc_Less_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, K2Node_Select_Default_2) == 0x000038, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, K2Node_Select_Default_3) == 0x000048, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, K2Node_Select_Default_4) == 0x000058, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth, K2Node_Select_Default_5) == 0x000068, "Member 'NPCStatusWidgetBar_C_SetHealthBarColorDependingHealth::K2Node_Select_Default_5' has a wrong offset!");

struct NPCStatusWidgetBar_C_SetNumPips final
{
public:
	int32                                         NumPips;
};
static_assert(alignof(NPCStatusWidgetBar_C_SetNumPips) == 0x000004, "Wrong alignment on NPCStatusWidgetBar_C_SetNumPips");
static_assert(sizeof(NPCStatusWidgetBar_C_SetNumPips) == 0x000004, "Wrong size on NPCStatusWidgetBar_C_SetNumPips");
static_assert(offsetof(NPCStatusWidgetBar_C_SetNumPips, NumPips) == 0x000000, "Member 'NPCStatusWidgetBar_C_SetNumPips::NumPips' has a wrong offset!");

struct NPCStatusWidgetBar_C_SetPercent final
{
public:
	double                                        Value;
};
static_assert(alignof(NPCStatusWidgetBar_C_SetPercent) == 0x000008, "Wrong alignment on NPCStatusWidgetBar_C_SetPercent");
static_assert(sizeof(NPCStatusWidgetBar_C_SetPercent) == 0x000008, "Wrong size on NPCStatusWidgetBar_C_SetPercent");
static_assert(offsetof(NPCStatusWidgetBar_C_SetPercent, Value) == 0x000000, "Member 'NPCStatusWidgetBar_C_SetPercent::Value' has a wrong offset!");

}
