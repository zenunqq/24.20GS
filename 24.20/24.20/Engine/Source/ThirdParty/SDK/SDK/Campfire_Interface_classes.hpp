#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class ICampfire_Interface_C final : public IInterface
{
public:
	void GetLocationToSpawnFireVFX(struct FVector* WorldLocation);
	void GetWoodComponent(class UStaticMeshComponent** WoodComponent);
	void IsStoked(bool* IsStoked_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Campfire_Interface_C">();
	}
	static class ICampfire_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICampfire_Interface_C>();
	}
};
static_assert(alignof(ICampfire_Interface_C) == 0x000008, "Wrong alignment on ICampfire_Interface_C");
static_assert(sizeof(ICampfire_Interface_C) == 0x000028, "Wrong size on ICampfire_Interface_C");

}
