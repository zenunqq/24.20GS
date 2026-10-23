#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay) == 0x000008, "Wrong alignment on PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay");
static_assert(sizeof(PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay) == 0x000020, "Wrong size on PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay");
static_assert(offsetof(PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay, EntryPoint) == 0x000000, "Member 'PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay::EntryPoint' has a wrong offset!");
static_assert(offsetof(PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'PiPPickerOverlay_C_ExecuteUbergraph_PiPPickerOverlay::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
