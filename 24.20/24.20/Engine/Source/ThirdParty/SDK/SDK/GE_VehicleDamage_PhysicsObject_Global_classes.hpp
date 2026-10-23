#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGE_VehicleDamage_PhysicsObject_Global_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_VehicleDamage_PhysicsObject_Global_C">();
	}
	static class UGE_VehicleDamage_PhysicsObject_Global_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_VehicleDamage_PhysicsObject_Global_C>();
	}
};
static_assert(alignof(UGE_VehicleDamage_PhysicsObject_Global_C) == 0x000008, "Wrong alignment on UGE_VehicleDamage_PhysicsObject_Global_C");
static_assert(sizeof(UGE_VehicleDamage_PhysicsObject_Global_C) == 0x000858, "Wrong size on UGE_VehicleDamage_PhysicsObject_Global_C");

}
