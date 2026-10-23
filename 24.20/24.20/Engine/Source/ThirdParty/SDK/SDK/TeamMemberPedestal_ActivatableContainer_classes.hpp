#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UTeamMemberPedestal_ActivatableContainer_C final : public UCommonActivatableWidget
{
public:
	class UNamedSlot*                             NamedSlot_Button;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_ActivatableContainer_C">();
	}
	static class UTeamMemberPedestal_ActivatableContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_ActivatableContainer_C>();
	}
};
static_assert(alignof(UTeamMemberPedestal_ActivatableContainer_C) == 0x000008, "Wrong alignment on UTeamMemberPedestal_ActivatableContainer_C");
static_assert(sizeof(UTeamMemberPedestal_ActivatableContainer_C) == 0x0003B0, "Wrong size on UTeamMemberPedestal_ActivatableContainer_C");
static_assert(offsetof(UTeamMemberPedestal_ActivatableContainer_C, NamedSlot_Button) == 0x0003A8, "Member 'UTeamMemberPedestal_ActivatableContainer_C::NamedSlot_Button' has a wrong offset!");

}
