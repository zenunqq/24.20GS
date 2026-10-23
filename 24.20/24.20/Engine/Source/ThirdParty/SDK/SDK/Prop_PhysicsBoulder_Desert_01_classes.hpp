#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_PhysicsBoulder_Parent_classes.hpp"

namespace SDK
{

class AProp_PhysicsBoulder_Desert_01_C final : public AProp_PhysicsBoulder_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_PhysicsBoulder_Desert_01_C;

public:
	void ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_PhysicsBoulder_Desert_01_C">();
	}
	static class AProp_PhysicsBoulder_Desert_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_PhysicsBoulder_Desert_01_C>();
	}
};
static_assert(alignof(AProp_PhysicsBoulder_Desert_01_C) == 0x000008, "Wrong alignment on AProp_PhysicsBoulder_Desert_01_C");
static_assert(sizeof(AProp_PhysicsBoulder_Desert_01_C) == 0x000F80, "Wrong size on AProp_PhysicsBoulder_Desert_01_C");
static_assert(offsetof(AProp_PhysicsBoulder_Desert_01_C, UberGraphFrame_Prop_PhysicsBoulder_Desert_01_C) == 0x000F78, "Member 'AProp_PhysicsBoulder_Desert_01_C::UberGraphFrame_Prop_PhysicsBoulder_Desert_01_C' has a wrong offset!");

}
