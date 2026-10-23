#pragma once

#include "Basic.hpp"

#include "BP_BattleMapBaseNode_classes.hpp"

namespace SDK
{

class ABP_BattleMapZoneNode_C final : public ABP_BattleMapBaseNode_C
{
public:
	class UStaticMeshComponent*                   StaticMesh_Inverted;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapZoneNode_C">();
	}
	static class ABP_BattleMapZoneNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapZoneNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapZoneNode_C) == 0x000008, "Wrong alignment on ABP_BattleMapZoneNode_C");
static_assert(sizeof(ABP_BattleMapZoneNode_C) == 0x0003D0, "Wrong size on ABP_BattleMapZoneNode_C");
static_assert(offsetof(ABP_BattleMapZoneNode_C, StaticMesh_Inverted) == 0x0003C8, "Member 'ABP_BattleMapZoneNode_C::StaticMesh_Inverted' has a wrong offset!");

}
