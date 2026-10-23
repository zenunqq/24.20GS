#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator) == 0x000008, "Wrong alignment on W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator");
static_assert(sizeof(W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator) == 0x000018, "Wrong size on W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator, EntryPoint) == 0x000000, "Member 'W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator, K2Node_Event_IsDesignTime) == 0x000010, "Member 'W_PinnedQuestMarkerIndicator_C_ExecuteUbergraph_W_PinnedQuestMarkerIndicator::K2Node_Event_IsDesignTime' has a wrong offset!");

struct W_PinnedQuestMarkerIndicator_C_GetRemovalDuration final
{
public:
	float                                         ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
};
static_assert(alignof(W_PinnedQuestMarkerIndicator_C_GetRemovalDuration) == 0x000004, "Wrong alignment on W_PinnedQuestMarkerIndicator_C_GetRemovalDuration");
static_assert(sizeof(W_PinnedQuestMarkerIndicator_C_GetRemovalDuration) == 0x000008, "Wrong size on W_PinnedQuestMarkerIndicator_C_GetRemovalDuration");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_GetRemovalDuration, ReturnValue) == 0x000000, "Member 'W_PinnedQuestMarkerIndicator_C_GetRemovalDuration::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_GetRemovalDuration, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'W_PinnedQuestMarkerIndicator_C_GetRemovalDuration::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");

struct W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved) == 0x000008, "Wrong alignment on W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved");
static_assert(sizeof(W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved) == 0x000008, "Wrong size on W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'W_PinnedQuestMarkerIndicator_C_NotifyWillBeRemoved::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct W_PinnedQuestMarkerIndicator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(W_PinnedQuestMarkerIndicator_C_PreConstruct) == 0x000001, "Wrong alignment on W_PinnedQuestMarkerIndicator_C_PreConstruct");
static_assert(sizeof(W_PinnedQuestMarkerIndicator_C_PreConstruct) == 0x000001, "Wrong size on W_PinnedQuestMarkerIndicator_C_PreConstruct");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_PinnedQuestMarkerIndicator_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer final
{
public:
	EFortActorIndicatorContainerWidget            ContainerEnum;
	uint8                                         Pad_1[0x7];
	class UCanvasPanel*                           ReturnValue;
};
static_assert(alignof(W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer) == 0x000008, "Wrong alignment on W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer");
static_assert(sizeof(W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer) == 0x000010, "Wrong size on W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer, ContainerEnum) == 0x000000, "Member 'W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer::ContainerEnum' has a wrong offset!");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer, ReturnValue) == 0x000008, "Member 'W_PinnedQuestMarkerIndicator_C_GetCanvasPanelContainer::ReturnValue' has a wrong offset!");

struct W_PinnedQuestMarkerIndicator_C_GetIndicatedActor final
{
public:
	class AActor*                                 ReturnValue;
};
static_assert(alignof(W_PinnedQuestMarkerIndicator_C_GetIndicatedActor) == 0x000008, "Wrong alignment on W_PinnedQuestMarkerIndicator_C_GetIndicatedActor");
static_assert(sizeof(W_PinnedQuestMarkerIndicator_C_GetIndicatedActor) == 0x000008, "Wrong size on W_PinnedQuestMarkerIndicator_C_GetIndicatedActor");
static_assert(offsetof(W_PinnedQuestMarkerIndicator_C_GetIndicatedActor, ReturnValue) == 0x000000, "Member 'W_PinnedQuestMarkerIndicator_C_GetIndicatedActor::ReturnValue' has a wrong offset!");

}
