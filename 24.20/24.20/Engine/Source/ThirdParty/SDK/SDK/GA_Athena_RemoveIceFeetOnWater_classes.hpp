#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_RemoveIceFeetOnWater_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void Added_ABAD1DEE46A337533ED461815C2B7BED();
	void ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_RemoveIceFeetOnWater_C">();
	}
	static class UGA_Athena_RemoveIceFeetOnWater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_RemoveIceFeetOnWater_C>();
	}
};
static_assert(alignof(UGA_Athena_RemoveIceFeetOnWater_C) == 0x000008, "Wrong alignment on UGA_Athena_RemoveIceFeetOnWater_C");
static_assert(sizeof(UGA_Athena_RemoveIceFeetOnWater_C) == 0x000B30, "Wrong size on UGA_Athena_RemoveIceFeetOnWater_C");
static_assert(offsetof(UGA_Athena_RemoveIceFeetOnWater_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_RemoveIceFeetOnWater_C::UberGraphFrame' has a wrong offset!");

}
