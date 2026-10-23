#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_RiftPortal_Teleported_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_RiftPortal_Teleported_C">();
	}
	static class UGE_RiftPortal_Teleported_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_RiftPortal_Teleported_C>();
	}
};
static_assert(alignof(UGE_RiftPortal_Teleported_C) == 0x000008, "Wrong alignment on UGE_RiftPortal_Teleported_C");
static_assert(sizeof(UGE_RiftPortal_Teleported_C) == 0x000858, "Wrong size on UGE_RiftPortal_Teleported_C");

}
