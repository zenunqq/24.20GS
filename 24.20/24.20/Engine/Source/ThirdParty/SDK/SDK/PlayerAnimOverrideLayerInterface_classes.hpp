#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class IPlayerAnimOverrideLayerInterface_C final : public IAnimLayerInterface
{
public:
	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK_0);
	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerAnimOverrideLayerInterface_C">();
	}
	static class IPlayerAnimOverrideLayerInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPlayerAnimOverrideLayerInterface_C>();
	}
};
static_assert(alignof(IPlayerAnimOverrideLayerInterface_C) == 0x000008, "Wrong alignment on IPlayerAnimOverrideLayerInterface_C");
static_assert(sizeof(IPlayerAnimOverrideLayerInterface_C) == 0x000028, "Wrong size on IPlayerAnimOverrideLayerInterface_C");

}
