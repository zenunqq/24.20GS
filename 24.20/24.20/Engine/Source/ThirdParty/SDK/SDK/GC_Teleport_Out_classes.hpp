#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGC_Teleport_Out_C final : public UFortGameplayCueNotify_Simple
{
public:
	double                                        Default_Play_Length;

public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Teleport_Out_C">();
	}
	static class UGC_Teleport_Out_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Teleport_Out_C>();
	}
};
static_assert(alignof(UGC_Teleport_Out_C) == 0x000008, "Wrong alignment on UGC_Teleport_Out_C");
static_assert(sizeof(UGC_Teleport_Out_C) == 0x000070, "Wrong size on UGC_Teleport_Out_C");
static_assert(offsetof(UGC_Teleport_Out_C, Default_Play_Length) == 0x000068, "Member 'UGC_Teleport_Out_C::Default_Play_Length' has a wrong offset!");

}
