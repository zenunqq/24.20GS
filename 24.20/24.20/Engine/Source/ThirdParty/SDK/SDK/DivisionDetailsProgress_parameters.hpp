#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_NewPercent;
	bool                                          K2Node_Event_bIsInProgress;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_21[0x7];
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress) == 0x000008, "Wrong alignment on DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress");
static_assert(sizeof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress) == 0x000048, "Wrong size on DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, EntryPoint) == 0x000000, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, K2Node_Event_NewPercent) == 0x000004, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::K2Node_Event_NewPercent' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, K2Node_Event_bIsInProgress) == 0x000008, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::K2Node_Event_bIsInProgress' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000020, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, CallFunc_MakeVector2D_ReturnValue) == 0x000028, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000038, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'DivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct DivisionDetailsProgress_C_OnSetInProgress final
{
public:
	float                                         NewPercent;
	bool                                          bIsInProgress;
};
static_assert(alignof(DivisionDetailsProgress_C_OnSetInProgress) == 0x000004, "Wrong alignment on DivisionDetailsProgress_C_OnSetInProgress");
static_assert(sizeof(DivisionDetailsProgress_C_OnSetInProgress) == 0x000008, "Wrong size on DivisionDetailsProgress_C_OnSetInProgress");
static_assert(offsetof(DivisionDetailsProgress_C_OnSetInProgress, NewPercent) == 0x000000, "Member 'DivisionDetailsProgress_C_OnSetInProgress::NewPercent' has a wrong offset!");
static_assert(offsetof(DivisionDetailsProgress_C_OnSetInProgress, bIsInProgress) == 0x000004, "Member 'DivisionDetailsProgress_C_OnSetInProgress::bIsInProgress' has a wrong offset!");

}
