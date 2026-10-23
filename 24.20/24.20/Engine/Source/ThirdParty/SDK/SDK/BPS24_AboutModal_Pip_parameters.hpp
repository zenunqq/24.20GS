#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip) == 0x000008, "Wrong alignment on BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip");
static_assert(sizeof(BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip) == 0x000018, "Wrong size on BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip");
static_assert(offsetof(BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip, EntryPoint) == 0x000000, "Member 'BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct BPS24_AboutModal_Pip_C_Is_Focused final
{
public:
	bool                                          Is_Focused_0;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(BPS24_AboutModal_Pip_C_Is_Focused) == 0x000008, "Wrong alignment on BPS24_AboutModal_Pip_C_Is_Focused");
static_assert(sizeof(BPS24_AboutModal_Pip_C_Is_Focused) == 0x000018, "Wrong size on BPS24_AboutModal_Pip_C_Is_Focused");
static_assert(offsetof(BPS24_AboutModal_Pip_C_Is_Focused, Is_Focused_0) == 0x000000, "Member 'BPS24_AboutModal_Pip_C_Is_Focused::Is_Focused_0' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_Pip_C_Is_Focused, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BPS24_AboutModal_Pip_C_Is_Focused::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_Pip_C_Is_Focused, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'BPS24_AboutModal_Pip_C_Is_Focused::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
