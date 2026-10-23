#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetOwningLocalPlayerController_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	class AFortLiveBroadcastController*           K2Node_DynamicCast_AsFort_Live_Broadcast_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsInZone_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_InEditorOrPIE_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector) == 0x000008, "Wrong alignment on PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector");
static_assert(sizeof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector) == 0x000028, "Wrong size on PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, EntryPoint) == 0x000000, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_GetOwningLocalPlayerController_ReturnValue) == 0x000008, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_GetOwningLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000010, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, K2Node_DynamicCast_AsFort_Live_Broadcast_Controller) == 0x000018, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::K2Node_DynamicCast_AsFort_Live_Broadcast_Controller' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_IsInZone_ReturnValue) == 0x000021, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_GetValueAsBool_ReturnValue) == 0x000022, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_IsUsingTouch_ReturnValue) == 0x000023, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_InEditorOrPIE_ReturnValue) == 0x000024, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_InEditorOrPIE_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_IsMobileGame_ReturnValue) == 0x000025, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_BooleanAND_ReturnValue) == 0x000026, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector, CallFunc_BooleanOR_ReturnValue) == 0x000027, "Member 'PlayerAugmentsUIDirector_C_ExecuteUbergraph_PlayerAugmentsUIDirector::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
