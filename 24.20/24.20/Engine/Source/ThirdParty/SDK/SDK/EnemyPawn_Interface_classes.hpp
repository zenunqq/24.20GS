#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IEnemyPawn_Interface_C final : public IInterface
{
public:
	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void TriggerDeathFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyPawn_Interface_C">();
	}
	static class IEnemyPawn_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEnemyPawn_Interface_C>();
	}
};
static_assert(alignof(IEnemyPawn_Interface_C) == 0x000008, "Wrong alignment on IEnemyPawn_Interface_C");
static_assert(sizeof(IEnemyPawn_Interface_C) == 0x000028, "Wrong size on IEnemyPawn_Interface_C");

}
