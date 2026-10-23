#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UDoorSoundIndicatorComponent_C final : public UFortSoundIndicatorComponent
{
public:
	TArray<EFortTeamAffiliation> GetAffiliationsToShowFor() const;
	bool ShouldShowSoundIndicator(class AFortPlayerController* PlayerController) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DoorSoundIndicatorComponent_C">();
	}
	static class UDoorSoundIndicatorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoorSoundIndicatorComponent_C>();
	}
};
static_assert(alignof(UDoorSoundIndicatorComponent_C) == 0x000008, "Wrong alignment on UDoorSoundIndicatorComponent_C");
static_assert(sizeof(UDoorSoundIndicatorComponent_C) == 0x000150, "Wrong size on UDoorSoundIndicatorComponent_C");

}
