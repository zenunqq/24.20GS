#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct VerseUEInputComponentBase_ServerTriggerAction final
{
public:
	class FName                                   ActionName;
	EInputEvent                                   InputEvent;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(VerseUEInputComponentBase_ServerTriggerAction) == 0x000004, "Wrong alignment on VerseUEInputComponentBase_ServerTriggerAction");
static_assert(sizeof(VerseUEInputComponentBase_ServerTriggerAction) == 0x000008, "Wrong size on VerseUEInputComponentBase_ServerTriggerAction");
static_assert(offsetof(VerseUEInputComponentBase_ServerTriggerAction, ActionName) == 0x000000, "Member 'VerseUEInputComponentBase_ServerTriggerAction::ActionName' has a wrong offset!");
static_assert(offsetof(VerseUEInputComponentBase_ServerTriggerAction, InputEvent) == 0x000004, "Member 'VerseUEInputComponentBase_ServerTriggerAction::InputEvent' has a wrong offset!");

struct VerseUEInputComponentBase_ServerTriggerAxis final
{
public:
	class FName                                   AxisName;
	float                                         Value;
};
static_assert(alignof(VerseUEInputComponentBase_ServerTriggerAxis) == 0x000004, "Wrong alignment on VerseUEInputComponentBase_ServerTriggerAxis");
static_assert(sizeof(VerseUEInputComponentBase_ServerTriggerAxis) == 0x000008, "Wrong size on VerseUEInputComponentBase_ServerTriggerAxis");
static_assert(offsetof(VerseUEInputComponentBase_ServerTriggerAxis, AxisName) == 0x000000, "Member 'VerseUEInputComponentBase_ServerTriggerAxis::AxisName' has a wrong offset!");
static_assert(offsetof(VerseUEInputComponentBase_ServerTriggerAxis, Value) == 0x000004, "Member 'VerseUEInputComponentBase_ServerTriggerAxis::Value' has a wrong offset!");

}
