#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class AB_CameraLens_SwimBoost_C final : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_B_CameraLens_SwimBoost(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraLens_SwimBoost_C">();
	}
	static class AB_CameraLens_SwimBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraLens_SwimBoost_C>();
	}
};
static_assert(alignof(AB_CameraLens_SwimBoost_C) == 0x000010, "Wrong alignment on AB_CameraLens_SwimBoost_C");
static_assert(sizeof(AB_CameraLens_SwimBoost_C) == 0x000380, "Wrong size on AB_CameraLens_SwimBoost_C");
static_assert(offsetof(AB_CameraLens_SwimBoost_C, UberGraphFrame) == 0x000370, "Member 'AB_CameraLens_SwimBoost_C::UberGraphFrame' has a wrong offset!");

}
