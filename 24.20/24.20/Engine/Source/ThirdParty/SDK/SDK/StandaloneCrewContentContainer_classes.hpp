#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UStandaloneCrewContentContainer_C final : public UCrewStandaloneSubscriptionContentContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USafeZone*                              SafeZone_1;

public:
	void ExecuteUbergraph_StandaloneCrewContentContainer(int32 EntryPoint);
	void OnCameraLevelLoaded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StandaloneCrewContentContainer_C">();
	}
	static class UStandaloneCrewContentContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandaloneCrewContentContainer_C>();
	}
};
static_assert(alignof(UStandaloneCrewContentContainer_C) == 0x000008, "Wrong alignment on UStandaloneCrewContentContainer_C");
static_assert(sizeof(UStandaloneCrewContentContainer_C) == 0x0005F8, "Wrong size on UStandaloneCrewContentContainer_C");
static_assert(offsetof(UStandaloneCrewContentContainer_C, UberGraphFrame) == 0x0005E8, "Member 'UStandaloneCrewContentContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStandaloneCrewContentContainer_C, SafeZone_1) == 0x0005F0, "Member 'UStandaloneCrewContentContainer_C::SafeZone_1' has a wrong offset!");

}
