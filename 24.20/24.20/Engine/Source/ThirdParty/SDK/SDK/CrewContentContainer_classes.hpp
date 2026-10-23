#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UCrewContentContainer_C final : public UCrewSubscriptionContentContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonActionWidget*                    NextTabAction;
	class UCommonActionWidget*                    PreviousTabAction;
	class USafeZone*                              SafeZone_0;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_CrewContentContainer(int32 EntryPoint);
	void OnTabSelected(int32 TabIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewContentContainer_C">();
	}
	static class UCrewContentContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewContentContainer_C>();
	}
};
static_assert(alignof(UCrewContentContainer_C) == 0x000008, "Wrong alignment on UCrewContentContainer_C");
static_assert(sizeof(UCrewContentContainer_C) == 0x000468, "Wrong size on UCrewContentContainer_C");
static_assert(offsetof(UCrewContentContainer_C, UberGraphFrame) == 0x000448, "Member 'UCrewContentContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewContentContainer_C, NextTabAction) == 0x000450, "Member 'UCrewContentContainer_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UCrewContentContainer_C, PreviousTabAction) == 0x000458, "Member 'UCrewContentContainer_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UCrewContentContainer_C, SafeZone_0) == 0x000460, "Member 'UCrewContentContainer_C::SafeZone_0' has a wrong offset!");

}
