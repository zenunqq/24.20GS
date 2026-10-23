#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class AB_CameraRainDrops_01_C final : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         Alpha_Alpha_06897833405CC2B231B02C93C4E725A3;
	ETimelineDirection                            Alpha__Direction_06897833405CC2B231B02C93C4E725A3;
	uint8                                         Pad_37D[0x3];
	class UTimelineComponent*                     Alpha;

public:
	void ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint);
	void Alpha__UpdateFunc();
	void ReceiveBeginPlay();
	void Alpha__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraRainDrops_01_C">();
	}
	static class AB_CameraRainDrops_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraRainDrops_01_C>();
	}
};
static_assert(alignof(AB_CameraRainDrops_01_C) == 0x000010, "Wrong alignment on AB_CameraRainDrops_01_C");
static_assert(sizeof(AB_CameraRainDrops_01_C) == 0x000390, "Wrong size on AB_CameraRainDrops_01_C");
static_assert(offsetof(AB_CameraRainDrops_01_C, UberGraphFrame) == 0x000370, "Member 'AB_CameraRainDrops_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_CameraRainDrops_01_C, Alpha_Alpha_06897833405CC2B231B02C93C4E725A3) == 0x000378, "Member 'AB_CameraRainDrops_01_C::Alpha_Alpha_06897833405CC2B231B02C93C4E725A3' has a wrong offset!");
static_assert(offsetof(AB_CameraRainDrops_01_C, Alpha__Direction_06897833405CC2B231B02C93C4E725A3) == 0x00037C, "Member 'AB_CameraRainDrops_01_C::Alpha__Direction_06897833405CC2B231B02C93C4E725A3' has a wrong offset!");
static_assert(offsetof(AB_CameraRainDrops_01_C, Alpha) == 0x000380, "Member 'AB_CameraRainDrops_01_C::Alpha' has a wrong offset!");

}
