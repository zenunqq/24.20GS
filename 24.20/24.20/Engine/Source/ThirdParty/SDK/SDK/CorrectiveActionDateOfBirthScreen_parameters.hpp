#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing final
{
public:
	bool                                          bShowProcessing;
};
static_assert(alignof(CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing) == 0x000001, "Wrong alignment on CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing");
static_assert(sizeof(CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing) == 0x000001, "Wrong size on CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing, bShowProcessing) == 0x000000, "Member 'CorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing::bShowProcessing' has a wrong offset!");

struct CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UWBP_InputField_C*                      K2Node_DynamicCast_AsWBP_Input_Field;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_Event_bShowProcessing;
	uint8                                         Pad_12[0x6];
	class FText                                   K2Node_Event_FailureReason;
};
static_assert(alignof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen) == 0x000008, "Wrong alignment on CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen");
static_assert(sizeof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen) == 0x000030, "Wrong size on CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen, EntryPoint) == 0x000000, "Member 'CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen, K2Node_DynamicCast_AsWBP_Input_Field) == 0x000008, "Member 'CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen::K2Node_DynamicCast_AsWBP_Input_Field' has a wrong offset!");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen, K2Node_Event_bShowProcessing) == 0x000011, "Member 'CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen::K2Node_Event_bShowProcessing' has a wrong offset!");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen, K2Node_Event_FailureReason) == 0x000018, "Member 'CorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen::K2Node_Event_FailureReason' has a wrong offset!");

struct CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason final
{
public:
	class FText                                   FailureReason;
};
static_assert(alignof(CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason) == 0x000008, "Wrong alignment on CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason");
static_assert(sizeof(CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason) == 0x000018, "Wrong size on CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason");
static_assert(offsetof(CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason, FailureReason) == 0x000000, "Member 'CorrectiveActionDateOfBirthScreen_C_OnShowFailureReason::FailureReason' has a wrong offset!");

}
