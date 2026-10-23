#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCL_Cornfield_Movement_C final : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPlayerPawn*                        TargetPawn;

public:
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Cornfield_Movement_C">();
	}
	static class AGCL_Cornfield_Movement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Cornfield_Movement_C>();
	}
};
static_assert(alignof(AGCL_Cornfield_Movement_C) == 0x000008, "Wrong alignment on AGCL_Cornfield_Movement_C");
static_assert(sizeof(AGCL_Cornfield_Movement_C) == 0x000968, "Wrong size on AGCL_Cornfield_Movement_C");
static_assert(offsetof(AGCL_Cornfield_Movement_C, TargetPawn) == 0x000960, "Member 'AGCL_Cornfield_Movement_C::TargetPawn' has a wrong offset!");

}
