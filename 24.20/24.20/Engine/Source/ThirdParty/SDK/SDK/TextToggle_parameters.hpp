#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TextToggle_C_SwitchToggle final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(TextToggle_C_SwitchToggle) == 0x000001, "Wrong alignment on TextToggle_C_SwitchToggle");
static_assert(sizeof(TextToggle_C_SwitchToggle) == 0x000001, "Wrong size on TextToggle_C_SwitchToggle");
static_assert(offsetof(TextToggle_C_SwitchToggle, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'TextToggle_C_SwitchToggle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct TextToggle_C_SetToggleState final
{
public:
	bool                                          isOn_0;
};
static_assert(alignof(TextToggle_C_SetToggleState) == 0x000001, "Wrong alignment on TextToggle_C_SetToggleState");
static_assert(sizeof(TextToggle_C_SetToggleState) == 0x000001, "Wrong size on TextToggle_C_SetToggleState");
static_assert(offsetof(TextToggle_C_SetToggleState, isOn_0) == 0x000000, "Member 'TextToggle_C_SetToggleState::isOn_0' has a wrong offset!");

struct TextToggle_C_Refresh final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(TextToggle_C_Refresh) == 0x000008, "Wrong alignment on TextToggle_C_Refresh");
static_assert(sizeof(TextToggle_C_Refresh) == 0x000018, "Wrong size on TextToggle_C_Refresh");
static_assert(offsetof(TextToggle_C_Refresh, Temp_bool_Variable) == 0x000000, "Member 'TextToggle_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TextToggle_C_Refresh, K2Node_Select_Default) == 0x000008, "Member 'TextToggle_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TextToggle_C_Refresh, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'TextToggle_C_Refresh::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct TextToggle_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(TextToggle_C_PreConstruct) == 0x000001, "Wrong alignment on TextToggle_C_PreConstruct");
static_assert(sizeof(TextToggle_C_PreConstruct) == 0x000001, "Wrong size on TextToggle_C_PreConstruct");
static_assert(offsetof(TextToggle_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TextToggle_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct TextToggle_C_ExecuteUbergraph_TextToggle final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(TextToggle_C_ExecuteUbergraph_TextToggle) == 0x000004, "Wrong alignment on TextToggle_C_ExecuteUbergraph_TextToggle");
static_assert(sizeof(TextToggle_C_ExecuteUbergraph_TextToggle) == 0x000008, "Wrong size on TextToggle_C_ExecuteUbergraph_TextToggle");
static_assert(offsetof(TextToggle_C_ExecuteUbergraph_TextToggle, EntryPoint) == 0x000000, "Member 'TextToggle_C_ExecuteUbergraph_TextToggle::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextToggle_C_ExecuteUbergraph_TextToggle, K2Node_Event_IsDesignTime) == 0x000004, "Member 'TextToggle_C_ExecuteUbergraph_TextToggle::K2Node_Event_IsDesignTime' has a wrong offset!");

}
