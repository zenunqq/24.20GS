#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UBP_AthenaCollectionPlayerProgressTrack_C* K2Node_CustomEvent_PlayerProgressContainer;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter) == 0x000008, "Wrong alignment on BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter");
static_assert(sizeof(BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter) == 0x000018, "Wrong size on BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter");
static_assert(offsetof(BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter, EntryPoint) == 0x000000, "Member 'BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter, K2Node_CustomEvent_PlayerProgressContainer) == 0x000008, "Member 'BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter::K2Node_CustomEvent_PlayerProgressContainer' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0 final
{
public:
	class UBP_AthenaCollectionPlayerProgressTrack_C* PlayerProgressContainer_0;
};
static_assert(alignof(BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0) == 0x000008, "Wrong alignment on BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0");
static_assert(sizeof(BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0) == 0x000008, "Wrong size on BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0");
static_assert(offsetof(BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0, PlayerProgressContainer_0) == 0x000000, "Member 'BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0::PlayerProgressContainer_0' has a wrong offset!");

}
