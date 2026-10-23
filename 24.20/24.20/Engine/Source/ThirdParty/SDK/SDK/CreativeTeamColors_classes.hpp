#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UCreativeTeamColors_C final : public USceneComponent
{
public:
	TArray<struct FLinearColor>                   TeamLightColors;
	TArray<struct FLinearColor>                   TeamSelectorColors;
	TArray<struct FLinearColor>                   TeamBoldColors;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreativeTeamColors_C">();
	}
	static class UCreativeTeamColors_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeTeamColors_C>();
	}
};
static_assert(alignof(UCreativeTeamColors_C) == 0x000010, "Wrong alignment on UCreativeTeamColors_C");
static_assert(sizeof(UCreativeTeamColors_C) == 0x0002D0, "Wrong size on UCreativeTeamColors_C");
static_assert(offsetof(UCreativeTeamColors_C, TeamLightColors) == 0x0002A0, "Member 'UCreativeTeamColors_C::TeamLightColors' has a wrong offset!");
static_assert(offsetof(UCreativeTeamColors_C, TeamSelectorColors) == 0x0002B0, "Member 'UCreativeTeamColors_C::TeamSelectorColors' has a wrong offset!");
static_assert(offsetof(UCreativeTeamColors_C, TeamBoldColors) == 0x0002C0, "Member 'UCreativeTeamColors_C::TeamBoldColors' has a wrong offset!");

}
