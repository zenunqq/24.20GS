#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PriceChangeAcknowledgeTextEntry_C_SetText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(PriceChangeAcknowledgeTextEntry_C_SetText) == 0x000008, "Wrong alignment on PriceChangeAcknowledgeTextEntry_C_SetText");
static_assert(sizeof(PriceChangeAcknowledgeTextEntry_C_SetText) == 0x000018, "Wrong size on PriceChangeAcknowledgeTextEntry_C_SetText");
static_assert(offsetof(PriceChangeAcknowledgeTextEntry_C_SetText, InText) == 0x000000, "Member 'PriceChangeAcknowledgeTextEntry_C_SetText::InText' has a wrong offset!");

struct PriceChangeAcknowledgeTextEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PriceChangeAcknowledgeTextEntry_C_PreConstruct) == 0x000001, "Wrong alignment on PriceChangeAcknowledgeTextEntry_C_PreConstruct");
static_assert(sizeof(PriceChangeAcknowledgeTextEntry_C_PreConstruct) == 0x000001, "Wrong size on PriceChangeAcknowledgeTextEntry_C_PreConstruct");
static_assert(offsetof(PriceChangeAcknowledgeTextEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PriceChangeAcknowledgeTextEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class FText                                   K2Node_CustomEvent_InText;
};
static_assert(alignof(PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry) == 0x000008, "Wrong alignment on PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry");
static_assert(sizeof(PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry) == 0x000020, "Wrong size on PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry");
static_assert(offsetof(PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry, EntryPoint) == 0x000000, "Member 'PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry, K2Node_CustomEvent_InText) == 0x000008, "Member 'PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry::K2Node_CustomEvent_InText' has a wrong offset!");

}
