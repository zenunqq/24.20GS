#pragma once

#include "Basic.hpp"

#include "BGA_RiftPortal_Item_Athena_classes.hpp"

namespace SDK
{

class ABGA_Rift_Portal_VM_C final : public ABGA_RiftPortal_Item_Athena_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Rift_Portal_VM_C">();
	}
	static class ABGA_Rift_Portal_VM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Rift_Portal_VM_C>();
	}
};
static_assert(alignof(ABGA_Rift_Portal_VM_C) == 0x000008, "Wrong alignment on ABGA_Rift_Portal_VM_C");
static_assert(sizeof(ABGA_Rift_Portal_VM_C) == 0x000D30, "Wrong size on ABGA_Rift_Portal_VM_C");

}
