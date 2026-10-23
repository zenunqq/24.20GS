#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class alignas(0x10) UPointLightNativeComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x90];
	class UTimelineComponent*                     ShortCircuitTimelineComponent;
	uint8                                         Pad_138[0x18];
	struct FLinearColor                           FlickerColor;
	float                                         ShortCircuitMinDelay;
	float                                         ShortCircuitMaxDelay;
	uint8                                         Pad_168[0x8];

public:
	void StartRhythmUpdate(struct FTimerHandle* TimerHandle, float Rate);
	void StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline);
	void StopShortCircuitUpdate();
	void UpdateDeviceSettings(const struct FPointLightRhythmParameters& RhythmParameters);
	void UpdateShortCircuit();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PointLightNativeComponent">();
	}
	static class UPointLightNativeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPointLightNativeComponent>();
	}
};
static_assert(alignof(UPointLightNativeComponent) == 0x000010, "Wrong alignment on UPointLightNativeComponent");
static_assert(sizeof(UPointLightNativeComponent) == 0x000170, "Wrong size on UPointLightNativeComponent");
static_assert(offsetof(UPointLightNativeComponent, ShortCircuitTimelineComponent) == 0x000130, "Member 'UPointLightNativeComponent::ShortCircuitTimelineComponent' has a wrong offset!");
static_assert(offsetof(UPointLightNativeComponent, FlickerColor) == 0x000150, "Member 'UPointLightNativeComponent::FlickerColor' has a wrong offset!");
static_assert(offsetof(UPointLightNativeComponent, ShortCircuitMinDelay) == 0x000160, "Member 'UPointLightNativeComponent::ShortCircuitMinDelay' has a wrong offset!");
static_assert(offsetof(UPointLightNativeComponent, ShortCircuitMaxDelay) == 0x000164, "Member 'UPointLightNativeComponent::ShortCircuitMaxDelay' has a wrong offset!");

}
