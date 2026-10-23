#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCreativeSentryAnimInstance final : public UFortDefenderAnimInstance
{
public:
	float                                         RotateAimAnimationPitch;
	float                                         CounterRotateAimAnimationPitch;
	bool                                          bIsRelaxedLevel1OrNotTargeting;
	uint8                                         Pad_591[0x3];
	float                                         RightHandIKAlpha;
	float                                         OneMinusLeftHandFK;
	float                                         LeftHandIKAlpha;
	float                                         RetargetHandIKBonesToFKPositionWeight;
	uint8                                         Pad_5A4[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeSentryAnimInstance">();
	}
	static class UCreativeSentryAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeSentryAnimInstance>();
	}
};
static_assert(alignof(UCreativeSentryAnimInstance) == 0x000010, "Wrong alignment on UCreativeSentryAnimInstance");
static_assert(sizeof(UCreativeSentryAnimInstance) == 0x0005B0, "Wrong size on UCreativeSentryAnimInstance");
static_assert(offsetof(UCreativeSentryAnimInstance, RotateAimAnimationPitch) == 0x000588, "Member 'UCreativeSentryAnimInstance::RotateAimAnimationPitch' has a wrong offset!");
static_assert(offsetof(UCreativeSentryAnimInstance, CounterRotateAimAnimationPitch) == 0x00058C, "Member 'UCreativeSentryAnimInstance::CounterRotateAimAnimationPitch' has a wrong offset!");
static_assert(offsetof(UCreativeSentryAnimInstance, bIsRelaxedLevel1OrNotTargeting) == 0x000590, "Member 'UCreativeSentryAnimInstance::bIsRelaxedLevel1OrNotTargeting' has a wrong offset!");
static_assert(offsetof(UCreativeSentryAnimInstance, RightHandIKAlpha) == 0x000594, "Member 'UCreativeSentryAnimInstance::RightHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UCreativeSentryAnimInstance, OneMinusLeftHandFK) == 0x000598, "Member 'UCreativeSentryAnimInstance::OneMinusLeftHandFK' has a wrong offset!");
static_assert(offsetof(UCreativeSentryAnimInstance, LeftHandIKAlpha) == 0x00059C, "Member 'UCreativeSentryAnimInstance::LeftHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UCreativeSentryAnimInstance, RetargetHandIKBonesToFKPositionWeight) == 0x0005A0, "Member 'UCreativeSentryAnimInstance::RetargetHandIKBonesToFKPositionWeight' has a wrong offset!");

}
