#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ECardinalDirection_structs.hpp"

namespace SDK
{

class UAthenaConsumablesSharedFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Get_Actor_Forward_Cardinal_Direction(class AActor* Actor, class UObject* __WorldContext, ECardinalDirection* OutCardinalDirection, double* OutYaw);

	void IsOverlappingDeployableBlockVolume(class UObject* WorldContextObject, float BlockingAreaCheckRadius, const struct FVector& Location, class UObject* __WorldContext, bool* bOverlapping) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaConsumablesSharedFunctionLibrary_C">();
	}
	static class UAthenaConsumablesSharedFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaConsumablesSharedFunctionLibrary_C>();
	}
};
static_assert(alignof(UAthenaConsumablesSharedFunctionLibrary_C) == 0x000008, "Wrong alignment on UAthenaConsumablesSharedFunctionLibrary_C");
static_assert(sizeof(UAthenaConsumablesSharedFunctionLibrary_C) == 0x000028, "Wrong size on UAthenaConsumablesSharedFunctionLibrary_C");

}
