#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_AthenaEnterVehicle_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_AthenaEnterVehicle(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_AthenaEnterVehicle_C">();
	}
	static class UGA_AthenaEnterVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_AthenaEnterVehicle_C>();
	}
};
static_assert(alignof(UGA_AthenaEnterVehicle_C) == 0x000008, "Wrong alignment on UGA_AthenaEnterVehicle_C");
static_assert(sizeof(UGA_AthenaEnterVehicle_C) == 0x000B30, "Wrong size on UGA_AthenaEnterVehicle_C");
static_assert(offsetof(UGA_AthenaEnterVehicle_C, UberGraphFrame) == 0x000B28, "Member 'UGA_AthenaEnterVehicle_C::UberGraphFrame' has a wrong offset!");

}
