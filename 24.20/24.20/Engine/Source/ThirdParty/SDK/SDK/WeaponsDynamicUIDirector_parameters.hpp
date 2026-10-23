#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningLocalPlayerController_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
};
static_assert(alignof(WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector) == 0x000008, "Wrong alignment on WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector");
static_assert(sizeof(WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector) == 0x000020, "Wrong size on WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector");
static_assert(offsetof(WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector, EntryPoint) == 0x000000, "Member 'WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector, CallFunc_GetOwningLocalPlayerController_ReturnValue) == 0x000008, "Member 'WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector::CallFunc_GetOwningLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector, CallFunc_IsInZone_ReturnValue) == 0x000018, "Member 'WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector::CallFunc_IsInZone_ReturnValue' has a wrong offset!");

}
