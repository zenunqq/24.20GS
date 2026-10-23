#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PinCodeButton_C_ExecuteUbergraph_PinCodeButton final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(PinCodeButton_C_ExecuteUbergraph_PinCodeButton) == 0x000004, "Wrong alignment on PinCodeButton_C_ExecuteUbergraph_PinCodeButton");
static_assert(sizeof(PinCodeButton_C_ExecuteUbergraph_PinCodeButton) == 0x000008, "Wrong size on PinCodeButton_C_ExecuteUbergraph_PinCodeButton");
static_assert(offsetof(PinCodeButton_C_ExecuteUbergraph_PinCodeButton, EntryPoint) == 0x000000, "Member 'PinCodeButton_C_ExecuteUbergraph_PinCodeButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PinCodeButton_C_ExecuteUbergraph_PinCodeButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PinCodeButton_C_ExecuteUbergraph_PinCodeButton::K2Node_Event_IsDesignTime' has a wrong offset!");

struct PinCodeButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PinCodeButton_C_PreConstruct) == 0x000001, "Wrong alignment on PinCodeButton_C_PreConstruct");
static_assert(sizeof(PinCodeButton_C_PreConstruct) == 0x000001, "Wrong size on PinCodeButton_C_PreConstruct");
static_assert(offsetof(PinCodeButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PinCodeButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PinCodeButton_C_Set_Pin_Number final
{
public:
	class FString                                 Pin;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
};
static_assert(alignof(PinCodeButton_C_Set_Pin_Number) == 0x000008, "Wrong alignment on PinCodeButton_C_Set_Pin_Number");
static_assert(sizeof(PinCodeButton_C_Set_Pin_Number) == 0x000028, "Wrong size on PinCodeButton_C_Set_Pin_Number");
static_assert(offsetof(PinCodeButton_C_Set_Pin_Number, Pin) == 0x000000, "Member 'PinCodeButton_C_Set_Pin_Number::Pin' has a wrong offset!");
static_assert(offsetof(PinCodeButton_C_Set_Pin_Number, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'PinCodeButton_C_Set_Pin_Number::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
