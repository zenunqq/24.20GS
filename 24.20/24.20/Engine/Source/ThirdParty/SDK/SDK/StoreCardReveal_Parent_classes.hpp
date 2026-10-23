#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class AStoreCardReveal_Parent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        PinataSceneRoot;

public:
	void InitiatePinata();
	void ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreCardReveal_Parent_C">();
	}
	static class AStoreCardReveal_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStoreCardReveal_Parent_C>();
	}
};
static_assert(alignof(AStoreCardReveal_Parent_C) == 0x000008, "Wrong alignment on AStoreCardReveal_Parent_C");
static_assert(sizeof(AStoreCardReveal_Parent_C) == 0x000298, "Wrong size on AStoreCardReveal_Parent_C");
static_assert(offsetof(AStoreCardReveal_Parent_C, UberGraphFrame) == 0x000288, "Member 'AStoreCardReveal_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStoreCardReveal_Parent_C, PinataSceneRoot) == 0x000290, "Member 'AStoreCardReveal_Parent_C::PinataSceneRoot' has a wrong offset!");

}
