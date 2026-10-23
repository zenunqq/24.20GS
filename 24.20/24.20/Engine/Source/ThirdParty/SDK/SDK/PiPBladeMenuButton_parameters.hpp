#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_LoggedIn;
	bool                                          K2Node_Event_Enabled;
	bool                                          K2Node_Event_ParentalControlsEnabled;
	uint8                                         Pad_7[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton) == 0x000008, "Wrong alignment on PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton");
static_assert(sizeof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton) == 0x000018, "Wrong size on PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton");
static_assert(offsetof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton, EntryPoint) == 0x000000, "Member 'PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton, K2Node_Event_LoggedIn) == 0x000004, "Member 'PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton::K2Node_Event_LoggedIn' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton, K2Node_Event_Enabled) == 0x000005, "Member 'PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton::K2Node_Event_Enabled' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton, K2Node_Event_ParentalControlsEnabled) == 0x000006, "Member 'PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton::K2Node_Event_ParentalControlsEnabled' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'PiPBladeMenuButton_C_ExecuteUbergraph_PiPBladeMenuButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct PiPBladeMenuButton_C_UpdatePiPStatusBP final
{
public:
	bool                                          LoggedIn;
	bool                                          Enabled;
	bool                                          ParentalControlsEnabled;
};
static_assert(alignof(PiPBladeMenuButton_C_UpdatePiPStatusBP) == 0x000001, "Wrong alignment on PiPBladeMenuButton_C_UpdatePiPStatusBP");
static_assert(sizeof(PiPBladeMenuButton_C_UpdatePiPStatusBP) == 0x000003, "Wrong size on PiPBladeMenuButton_C_UpdatePiPStatusBP");
static_assert(offsetof(PiPBladeMenuButton_C_UpdatePiPStatusBP, LoggedIn) == 0x000000, "Member 'PiPBladeMenuButton_C_UpdatePiPStatusBP::LoggedIn' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdatePiPStatusBP, Enabled) == 0x000001, "Member 'PiPBladeMenuButton_C_UpdatePiPStatusBP::Enabled' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdatePiPStatusBP, ParentalControlsEnabled) == 0x000002, "Member 'PiPBladeMenuButton_C_UpdatePiPStatusBP::ParentalControlsEnabled' has a wrong offset!");

struct PiPBladeMenuButton_C_UpdateStatus final
{
public:
	bool                                          IsEnabled;
	bool                                          IsLoggedIn;
	bool                                          IsParentalControlsEnabled;
	uint8                                         Pad_3[0x5];
	class FText                                   OffStatusText;
	class FText                                   OnStatusText;
	class FText                                   DisabledText;
	class FText                                   TurnOffText;
	class FText                                   TurnOnText;
	class FText                                   LogInText;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_9C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(PiPBladeMenuButton_C_UpdateStatus) == 0x000008, "Wrong alignment on PiPBladeMenuButton_C_UpdateStatus");
static_assert(sizeof(PiPBladeMenuButton_C_UpdateStatus) == 0x0000B0, "Wrong size on PiPBladeMenuButton_C_UpdateStatus");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, IsEnabled) == 0x000000, "Member 'PiPBladeMenuButton_C_UpdateStatus::IsEnabled' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, IsLoggedIn) == 0x000001, "Member 'PiPBladeMenuButton_C_UpdateStatus::IsLoggedIn' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, IsParentalControlsEnabled) == 0x000002, "Member 'PiPBladeMenuButton_C_UpdateStatus::IsParentalControlsEnabled' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, OffStatusText) == 0x000008, "Member 'PiPBladeMenuButton_C_UpdateStatus::OffStatusText' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, OnStatusText) == 0x000020, "Member 'PiPBladeMenuButton_C_UpdateStatus::OnStatusText' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, DisabledText) == 0x000038, "Member 'PiPBladeMenuButton_C_UpdateStatus::DisabledText' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, TurnOffText) == 0x000050, "Member 'PiPBladeMenuButton_C_UpdateStatus::TurnOffText' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, TurnOnText) == 0x000068, "Member 'PiPBladeMenuButton_C_UpdateStatus::TurnOnText' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, LogInText) == 0x000080, "Member 'PiPBladeMenuButton_C_UpdateStatus::LogInText' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, CallFunc_GetEndTime_ReturnValue) == 0x000098, "Member 'PiPBladeMenuButton_C_UpdateStatus::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'PiPBladeMenuButton_C_UpdateStatus::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPBladeMenuButton_C_UpdateStatus, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000A8, "Member 'PiPBladeMenuButton_C_UpdateStatus::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
