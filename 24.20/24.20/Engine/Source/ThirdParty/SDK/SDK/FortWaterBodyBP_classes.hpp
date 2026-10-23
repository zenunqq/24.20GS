#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortWaterBodyBP_C final : public AFortWaterBodyActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class ABP_FluidSim_FN_C*                      FluidSimBP;

public:
	void ExecuteUbergraph_FortWaterBodyBP(int32 EntryPoint);
	void OnReceivedBulletImpact(const struct FHitResult& Hit);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortWaterBodyBP_C">();
	}
	static class AFortWaterBodyBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortWaterBodyBP_C>();
	}
};
static_assert(alignof(AFortWaterBodyBP_C) == 0x000008, "Wrong alignment on AFortWaterBodyBP_C");
static_assert(sizeof(AFortWaterBodyBP_C) == 0x0003B8, "Wrong size on AFortWaterBodyBP_C");
static_assert(offsetof(AFortWaterBodyBP_C, UberGraphFrame) == 0x0003A8, "Member 'AFortWaterBodyBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFortWaterBodyBP_C, FluidSimBP) == 0x0003B0, "Member 'AFortWaterBodyBP_C::FluidSimBP' has a wrong offset!");

}
