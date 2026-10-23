#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USquadMarker_C final : public UAthenaSquadIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_SquadMarker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadMarker_C">();
	}
	static class USquadMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadMarker_C>();
	}
};
static_assert(alignof(USquadMarker_C) == 0x000008, "Wrong alignment on USquadMarker_C");
static_assert(sizeof(USquadMarker_C) == 0x000798, "Wrong size on USquadMarker_C");
static_assert(offsetof(USquadMarker_C, UberGraphFrame) == 0x000790, "Member 'USquadMarker_C::UberGraphFrame' has a wrong offset!");

}
