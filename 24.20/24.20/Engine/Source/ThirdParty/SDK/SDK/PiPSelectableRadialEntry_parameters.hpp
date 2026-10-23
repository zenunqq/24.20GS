#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct PiPSelectableRadialEntry_C_BP_UpdateSelectionColor final
{
public:
	bool                                          Selected_0;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	struct FLinearColor                           K2Node_Select_Default;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor) == 0x000004, "Wrong alignment on PiPSelectableRadialEntry_C_BP_UpdateSelectionColor");
static_assert(sizeof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor) == 0x000028, "Wrong size on PiPSelectableRadialEntry_C_BP_UpdateSelectionColor");
static_assert(offsetof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor, Selected_0) == 0x000000, "Member 'PiPSelectableRadialEntry_C_BP_UpdateSelectionColor::Selected_0' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor, Temp_bool_Variable) == 0x000001, "Member 'PiPSelectableRadialEntry_C_BP_UpdateSelectionColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor, CallFunc_GetIsEnabled_ReturnValue) == 0x000002, "Member 'PiPSelectableRadialEntry_C_BP_UpdateSelectionColor::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'PiPSelectableRadialEntry_C_BP_UpdateSelectionColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor, K2Node_Select_Default) == 0x000004, "Member 'PiPSelectableRadialEntry_C_BP_UpdateSelectionColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_BP_UpdateSelectionColor, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'PiPSelectableRadialEntry_C_BP_UpdateSelectionColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

struct PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsAvailable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
};
static_assert(alignof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry) == 0x000008, "Wrong alignment on PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry");
static_assert(sizeof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry) == 0x000020, "Wrong size on PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry");
static_assert(offsetof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry, EntryPoint) == 0x000000, "Member 'PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry, K2Node_Event_bIsAvailable) == 0x000004, "Member 'PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry::K2Node_Event_bIsAvailable' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'PiPSelectableRadialEntry_C_ExecuteUbergraph_PiPSelectableRadialEntry::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

struct PiPSelectableRadialEntry_C_OnAvailabilityChanged final
{
public:
	bool                                          bIsAvailable;
};
static_assert(alignof(PiPSelectableRadialEntry_C_OnAvailabilityChanged) == 0x000001, "Wrong alignment on PiPSelectableRadialEntry_C_OnAvailabilityChanged");
static_assert(sizeof(PiPSelectableRadialEntry_C_OnAvailabilityChanged) == 0x000001, "Wrong size on PiPSelectableRadialEntry_C_OnAvailabilityChanged");
static_assert(offsetof(PiPSelectableRadialEntry_C_OnAvailabilityChanged, bIsAvailable) == 0x000000, "Member 'PiPSelectableRadialEntry_C_OnAvailabilityChanged::bIsAvailable' has a wrong offset!");

}
