#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_AthenaInVehicle_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  ExitTag;

public:
	void ExecuteUbergraph_GA_AthenaInVehicle(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_AthenaInVehicle_C">();
	}
	static class UGA_AthenaInVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_AthenaInVehicle_C>();
	}
};
static_assert(alignof(UGA_AthenaInVehicle_C) == 0x000008, "Wrong alignment on UGA_AthenaInVehicle_C");
static_assert(sizeof(UGA_AthenaInVehicle_C) == 0x000B50, "Wrong size on UGA_AthenaInVehicle_C");
static_assert(offsetof(UGA_AthenaInVehicle_C, UberGraphFrame) == 0x000B28, "Member 'UGA_AthenaInVehicle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_AthenaInVehicle_C, ExitTag) == 0x000B30, "Member 'UGA_AthenaInVehicle_C::ExitTag' has a wrong offset!");

}
