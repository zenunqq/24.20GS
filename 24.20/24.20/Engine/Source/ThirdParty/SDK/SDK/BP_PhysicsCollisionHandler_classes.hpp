#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBP_PhysicsCollisionHandler_C final : public UFortPhysicsCollisionHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhysicsCollisionHandler_C">();
	}
	static class UBP_PhysicsCollisionHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PhysicsCollisionHandler_C>();
	}
};
static_assert(alignof(UBP_PhysicsCollisionHandler_C) == 0x000008, "Wrong alignment on UBP_PhysicsCollisionHandler_C");
static_assert(sizeof(UBP_PhysicsCollisionHandler_C) == 0x0000A8, "Wrong size on UBP_PhysicsCollisionHandler_C");

}
