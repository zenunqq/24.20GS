#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningLocalPlayerController_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
};
static_assert(alignof(BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector) == 0x000008, "Wrong alignment on BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector");
static_assert(sizeof(BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector) == 0x000020, "Wrong size on BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector");
static_assert(offsetof(BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector, EntryPoint) == 0x000000, "Member 'BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector, CallFunc_GetOwningLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector::CallFunc_GetOwningLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector, CallFunc_IsInZone_ReturnValue) == 0x000018, "Member 'BP_KoalaUIDirector_C_ExecuteUbergraph_BP_KoalaUIDirector::CallFunc_IsInZone_ReturnValue' has a wrong offset!");

}
