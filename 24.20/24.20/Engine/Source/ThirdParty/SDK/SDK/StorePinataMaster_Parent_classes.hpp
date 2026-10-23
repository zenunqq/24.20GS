#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class AStorePinataMaster_Parent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        PinataSceneRoot;

public:
	void InitiatePinata();
	void ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint);
	void CameraTransitionComplete();
	void CameraResetComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StorePinataMaster_Parent_C">();
	}
	static class AStorePinataMaster_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStorePinataMaster_Parent_C>();
	}
};
static_assert(alignof(AStorePinataMaster_Parent_C) == 0x000008, "Wrong alignment on AStorePinataMaster_Parent_C");
static_assert(sizeof(AStorePinataMaster_Parent_C) == 0x000298, "Wrong size on AStorePinataMaster_Parent_C");
static_assert(offsetof(AStorePinataMaster_Parent_C, UberGraphFrame) == 0x000288, "Member 'AStorePinataMaster_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStorePinataMaster_Parent_C, PinataSceneRoot) == 0x000290, "Member 'AStorePinataMaster_Parent_C::PinataSceneRoot' has a wrong offset!");

}
