#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class IFauna_Jump_AnimInterface_C final : public IAnimLayerInterface
{
public:
	void Fauna_Jump(struct FPoseLink* Fauna_Jump_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fauna_Jump_AnimInterface_C">();
	}
	static class IFauna_Jump_AnimInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFauna_Jump_AnimInterface_C>();
	}
};
static_assert(alignof(IFauna_Jump_AnimInterface_C) == 0x000008, "Wrong alignment on IFauna_Jump_AnimInterface_C");
static_assert(sizeof(IFauna_Jump_AnimInterface_C) == 0x000028, "Wrong size on IFauna_Jump_AnimInterface_C");

}
