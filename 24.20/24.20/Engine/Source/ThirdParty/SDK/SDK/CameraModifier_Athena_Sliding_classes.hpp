#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCameraModifier_Athena_Sliding_C final : public USlidingCameraModifier
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void BlendOut();
	void ExecuteUbergraph_CameraModifier_Athena_Sliding(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraModifier_Athena_Sliding_C">();
	}
	static class UCameraModifier_Athena_Sliding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraModifier_Athena_Sliding_C>();
	}
};
static_assert(alignof(UCameraModifier_Athena_Sliding_C) == 0x000008, "Wrong alignment on UCameraModifier_Athena_Sliding_C");
static_assert(sizeof(UCameraModifier_Athena_Sliding_C) == 0x000108, "Wrong size on UCameraModifier_Athena_Sliding_C");
static_assert(offsetof(UCameraModifier_Athena_Sliding_C, UberGraphFrame) == 0x000100, "Member 'UCameraModifier_Athena_Sliding_C::UberGraphFrame' has a wrong offset!");

}
