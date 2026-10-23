#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class IFauna_Idle_AnimInterface_C final : public IAnimLayerInterface
{
public:
	void Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle_0);
	void Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fauna_Idle_AnimInterface_C">();
	}
	static class IFauna_Idle_AnimInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFauna_Idle_AnimInterface_C>();
	}
};
static_assert(alignof(IFauna_Idle_AnimInterface_C) == 0x000008, "Wrong alignment on IFauna_Idle_AnimInterface_C");
static_assert(sizeof(IFauna_Idle_AnimInterface_C) == 0x000028, "Wrong size on IFauna_Idle_AnimInterface_C");

}
