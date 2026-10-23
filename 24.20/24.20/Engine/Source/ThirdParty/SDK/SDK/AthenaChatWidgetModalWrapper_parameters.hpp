#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UChatContainer_C*                       K2Node_DynamicCast_AsChat_Container;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper) == 0x000008, "Wrong alignment on AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper");
static_assert(sizeof(AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper) == 0x000018, "Wrong size on AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper, EntryPoint) == 0x000000, "Member 'AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper, K2Node_DynamicCast_AsChat_Container) == 0x000008, "Member 'AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper::K2Node_DynamicCast_AsChat_Container' has a wrong offset!");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct AthenaChatWidgetModalWrapper_C_FocusChat final
{
public:
	class UChatContainer_C*                       K2Node_DynamicCast_AsChat_Container;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AthenaChatWidgetModalWrapper_C_FocusChat) == 0x000008, "Wrong alignment on AthenaChatWidgetModalWrapper_C_FocusChat");
static_assert(sizeof(AthenaChatWidgetModalWrapper_C_FocusChat) == 0x000010, "Wrong size on AthenaChatWidgetModalWrapper_C_FocusChat");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_FocusChat, K2Node_DynamicCast_AsChat_Container) == 0x000000, "Member 'AthenaChatWidgetModalWrapper_C_FocusChat::K2Node_DynamicCast_AsChat_Container' has a wrong offset!");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_FocusChat, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'AthenaChatWidgetModalWrapper_C_FocusChat::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct AthenaChatWidgetModalWrapper_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaChatWidgetModalWrapper_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaChatWidgetModalWrapper_C_PreConstruct");
static_assert(sizeof(AthenaChatWidgetModalWrapper_C_PreConstruct) == 0x000001, "Wrong size on AthenaChatWidgetModalWrapper_C_PreConstruct");
static_assert(offsetof(AthenaChatWidgetModalWrapper_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaChatWidgetModalWrapper_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
