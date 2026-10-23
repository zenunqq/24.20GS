#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ATVPostProcessBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBillboardComponent*                    Billboard;
	class USceneComponent*                        Root;
	bool                                          DisableOnStartup;

public:
	void UserConstructionScript();
	void IsEnabledForCurrentSubgame(bool* bEnabled);
	void FrontEndCameraSwitch();
	void ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint);
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TVPostProcessBP_C">();
	}
	static class ATVPostProcessBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATVPostProcessBP_C>();
	}
};
static_assert(alignof(ATVPostProcessBP_C) == 0x000008, "Wrong alignment on ATVPostProcessBP_C");
static_assert(sizeof(ATVPostProcessBP_C) == 0x0002A8, "Wrong size on ATVPostProcessBP_C");
static_assert(offsetof(ATVPostProcessBP_C, UberGraphFrame) == 0x000288, "Member 'ATVPostProcessBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Billboard) == 0x000290, "Member 'ATVPostProcessBP_C::Billboard' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, Root) == 0x000298, "Member 'ATVPostProcessBP_C::Root' has a wrong offset!");
static_assert(offsetof(ATVPostProcessBP_C, DisableOnStartup) == 0x0002A0, "Member 'ATVPostProcessBP_C::DisableOnStartup' has a wrong offset!");

}
