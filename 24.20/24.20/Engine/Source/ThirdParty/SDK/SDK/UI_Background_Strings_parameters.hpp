#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct UI_Background_Strings_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(UI_Background_Strings_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Background_Strings_C_PreConstruct");
static_assert(sizeof(UI_Background_Strings_C_PreConstruct) == 0x000001, "Wrong size on UI_Background_Strings_C_PreConstruct");
static_assert(offsetof(UI_Background_Strings_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Background_Strings_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings) == 0x000004, "Wrong alignment on UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings");
static_assert(sizeof(UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings) == 0x000008, "Wrong size on UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings");
static_assert(offsetof(UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings, EntryPoint) == 0x000000, "Member 'UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_Background_Strings_C_ExecuteUbergraph_UI_Background_Strings::K2Node_Event_IsDesignTime' has a wrong offset!");

}
