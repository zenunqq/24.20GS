#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortAirJellyfishAnimInstance final : public UFortAnimInstance
{
public:
	float                                         RotatorLerpRate;
	float                                         VelocityDirectionScalar;
	struct FRotator                               RootRotation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAirJellyfishAnimInstance">();
	}
	static class UFortAirJellyfishAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAirJellyfishAnimInstance>();
	}
};
static_assert(alignof(UFortAirJellyfishAnimInstance) == 0x000010, "Wrong alignment on UFortAirJellyfishAnimInstance");
static_assert(sizeof(UFortAirJellyfishAnimInstance) == 0x000550, "Wrong size on UFortAirJellyfishAnimInstance");
static_assert(offsetof(UFortAirJellyfishAnimInstance, RotatorLerpRate) == 0x000530, "Member 'UFortAirJellyfishAnimInstance::RotatorLerpRate' has a wrong offset!");
static_assert(offsetof(UFortAirJellyfishAnimInstance, VelocityDirectionScalar) == 0x000534, "Member 'UFortAirJellyfishAnimInstance::VelocityDirectionScalar' has a wrong offset!");
static_assert(offsetof(UFortAirJellyfishAnimInstance, RootRotation) == 0x000538, "Member 'UFortAirJellyfishAnimInstance::RootRotation' has a wrong offset!");

}
