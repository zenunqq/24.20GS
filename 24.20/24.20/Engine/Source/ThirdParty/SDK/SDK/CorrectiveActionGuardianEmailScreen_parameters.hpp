#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_FailureReason;
	bool                                          K2Node_Event_bShowProcessing;
	uint8                                         Pad_21[0x7];
	class UWBP_InputField_C*                      K2Node_DynamicCast_AsWBP_Input_Field;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen) == 0x000008, "Wrong alignment on CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen");
static_assert(sizeof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen) == 0x000038, "Wrong size on CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen, EntryPoint) == 0x000000, "Member 'CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen, K2Node_Event_FailureReason) == 0x000008, "Member 'CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen::K2Node_Event_FailureReason' has a wrong offset!");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen, K2Node_Event_bShowProcessing) == 0x000020, "Member 'CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen::K2Node_Event_bShowProcessing' has a wrong offset!");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen, K2Node_DynamicCast_AsWBP_Input_Field) == 0x000028, "Member 'CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen::K2Node_DynamicCast_AsWBP_Input_Field' has a wrong offset!");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason final
{
public:
	class FText                                   FailureReason;
};
static_assert(alignof(CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason) == 0x000008, "Wrong alignment on CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason");
static_assert(sizeof(CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason) == 0x000018, "Wrong size on CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason, FailureReason) == 0x000000, "Member 'CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason::FailureReason' has a wrong offset!");

struct CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing final
{
public:
	bool                                          bShowProcessing;
};
static_assert(alignof(CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing) == 0x000001, "Wrong alignment on CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing");
static_assert(sizeof(CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing) == 0x000001, "Wrong size on CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing");
static_assert(offsetof(CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing, bShowProcessing) == 0x000000, "Member 'CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing::bShowProcessing' has a wrong offset!");

}
