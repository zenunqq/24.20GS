#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UWBP_Augments_CollectionPlayerProgressTrack_C* K2Node_CustomEvent_PlayerProgressContainer;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen) == 0x000008, "Wrong alignment on WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen");
static_assert(sizeof(WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen) == 0x000018, "Wrong size on WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen");
static_assert(offsetof(WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen, EntryPoint) == 0x000000, "Member 'WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen, K2Node_CustomEvent_PlayerProgressContainer) == 0x000008, "Member 'WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen::K2Node_CustomEvent_PlayerProgressContainer' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event final
{
public:
	class UWBP_Augments_CollectionPlayerProgressTrack_C* PlayerProgressContainer_0;
};
static_assert(alignof(WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event) == 0x000008, "Wrong alignment on WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event");
static_assert(sizeof(WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event) == 0x000008, "Wrong size on WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event");
static_assert(offsetof(WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event, PlayerProgressContainer_0) == 0x000000, "Member 'WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event::PlayerProgressContainer_0' has a wrong offset!");

struct WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen final
{
public:
	class UWBP_Augments_CollectionPlayerProgressTrack_C* PlayerProgressContainer_0;
};
static_assert(alignof(WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen) == 0x000008, "Wrong alignment on WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen");
static_assert(sizeof(WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen) == 0x000008, "Wrong size on WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen");
static_assert(offsetof(WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen, PlayerProgressContainer_0) == 0x000000, "Member 'WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen::PlayerProgressContainer_0' has a wrong offset!");

}
