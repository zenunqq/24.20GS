#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct RichTextButton_C_ExecuteUbergraph_RichTextButton final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(RichTextButton_C_ExecuteUbergraph_RichTextButton) == 0x000004, "Wrong alignment on RichTextButton_C_ExecuteUbergraph_RichTextButton");
static_assert(sizeof(RichTextButton_C_ExecuteUbergraph_RichTextButton) == 0x000008, "Wrong size on RichTextButton_C_ExecuteUbergraph_RichTextButton");
static_assert(offsetof(RichTextButton_C_ExecuteUbergraph_RichTextButton, EntryPoint) == 0x000000, "Member 'RichTextButton_C_ExecuteUbergraph_RichTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(RichTextButton_C_ExecuteUbergraph_RichTextButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'RichTextButton_C_ExecuteUbergraph_RichTextButton::K2Node_Event_IsDesignTime' has a wrong offset!");

struct RichTextButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(RichTextButton_C_PreConstruct) == 0x000001, "Wrong alignment on RichTextButton_C_PreConstruct");
static_assert(sizeof(RichTextButton_C_PreConstruct) == 0x000001, "Wrong size on RichTextButton_C_PreConstruct");
static_assert(offsetof(RichTextButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RichTextButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
