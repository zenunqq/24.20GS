#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_CollisionEffects_Parent_C : public UGameplayCueBurst_CollisionEffect_Parent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_CollisionEffects_Parent_C">();
	}
	static class UGCN_CollisionEffects_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_CollisionEffects_Parent_C>();
	}
};
static_assert(alignof(UGCN_CollisionEffects_Parent_C) == 0x000008, "Wrong alignment on UGCN_CollisionEffects_Parent_C");
static_assert(sizeof(UGCN_CollisionEffects_Parent_C) == 0x000368, "Wrong size on UGCN_CollisionEffects_Parent_C");

}
