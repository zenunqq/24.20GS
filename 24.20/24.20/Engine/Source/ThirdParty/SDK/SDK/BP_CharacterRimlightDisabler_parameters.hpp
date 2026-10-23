#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_CharacterRimlightDisabler_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(BP_CharacterRimlightDisabler_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_CharacterRimlightDisabler_C_ReceiveEndPlay");
static_assert(sizeof(BP_CharacterRimlightDisabler_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_CharacterRimlightDisabler_C_ReceiveEndPlay");
static_assert(offsetof(BP_CharacterRimlightDisabler_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_CharacterRimlightDisabler_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
};
static_assert(alignof(BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler) == 0x000004, "Wrong alignment on BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler");
static_assert(sizeof(BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler) == 0x000008, "Wrong size on BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler");
static_assert(offsetof(BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler, EntryPoint) == 0x000000, "Member 'BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000005, "Member 'BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler, K2Node_Event_EndPlayReason) == 0x000006, "Member 'BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler::K2Node_Event_EndPlayReason' has a wrong offset!");

}
