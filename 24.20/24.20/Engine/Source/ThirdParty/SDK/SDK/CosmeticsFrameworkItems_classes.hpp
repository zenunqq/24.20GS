#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

class UCosmeticDataComponent final : public UActorComponent
{
public:
	TMap<struct FGameplayTag, struct FInstancedStructContainer> PropertyContainers;

public:
	bool BP_AddOrOverrideProperty(const struct FGameplayTag& SlotTag, const struct FCosmeticPropertyBase& Property);
	bool BP_FindProperty(const struct FGameplayTag& SlotTag, const struct FGameplayTag& PropertyTag, struct FCosmeticPropertyBase* OutProperty);
	void ResetProperties();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CosmeticDataComponent">();
	}
	static class UCosmeticDataComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticDataComponent>();
	}
};
static_assert(alignof(UCosmeticDataComponent) == 0x000008, "Wrong alignment on UCosmeticDataComponent");
static_assert(sizeof(UCosmeticDataComponent) == 0x0000F0, "Wrong size on UCosmeticDataComponent");
static_assert(offsetof(UCosmeticDataComponent, PropertyContainers) == 0x0000A0, "Member 'UCosmeticDataComponent::PropertyContainers' has a wrong offset!");

}
