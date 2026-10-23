#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class ASpecialEventsCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32 EntryPoint);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpecialEventsCamera_Blueprint_C">();
	}
	static class ASpecialEventsCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpecialEventsCamera_Blueprint_C>();
	}
};
static_assert(alignof(ASpecialEventsCamera_Blueprint_C) == 0x000010, "Wrong alignment on ASpecialEventsCamera_Blueprint_C");
static_assert(sizeof(ASpecialEventsCamera_Blueprint_C) == 0x000A00, "Wrong size on ASpecialEventsCamera_Blueprint_C");
static_assert(offsetof(ASpecialEventsCamera_Blueprint_C, UberGraphFrame) == 0x0009F0, "Member 'ASpecialEventsCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");

}
