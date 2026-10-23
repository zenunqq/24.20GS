#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry) == 0x000008, "Wrong alignment on EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry");
static_assert(sizeof(EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry) == 0x000018, "Wrong size on EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry");
static_assert(offsetof(EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry, EntryPoint) == 0x000000, "Member 'EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'EventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
