#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup) == 0x000008, "Wrong alignment on StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup");
static_assert(sizeof(StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup) == 0x000010, "Wrong size on StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup");
static_assert(offsetof(StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup, EntryPoint) == 0x000000, "Member 'StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
