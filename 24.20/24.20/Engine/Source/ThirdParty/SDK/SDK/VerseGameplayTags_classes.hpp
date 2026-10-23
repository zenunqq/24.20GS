#pragma once

#include "Basic.hpp"

#include "VerseGameplayTags_structs.hpp"
#include "EntityCore_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UEntityTagContainerComponent : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x8];
	struct FVerseGameplayTagContainer             InternalTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityTagContainerComponent">();
	}
	static class UEntityTagContainerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityTagContainerComponent>();
	}
};
static_assert(alignof(UEntityTagContainerComponent) == 0x000008, "Wrong alignment on UEntityTagContainerComponent");
static_assert(sizeof(UEntityTagContainerComponent) == 0x000078, "Wrong size on UEntityTagContainerComponent");
static_assert(offsetof(UEntityTagContainerComponent, InternalTags) == 0x000068, "Member 'UEntityTagContainerComponent::InternalTags' has a wrong offset!");

class UVerseGameplayTagBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseGameplayTagBase">();
	}
	static class UVerseGameplayTagBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseGameplayTagBase>();
	}
};
static_assert(alignof(UVerseGameplayTagBase) == 0x000008, "Wrong alignment on UVerseGameplayTagBase");
static_assert(sizeof(UVerseGameplayTagBase) == 0x000028, "Wrong size on UVerseGameplayTagBase");

class UTaggedObjectQueryWorldSubsystemBase : public UWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TaggedObjectQueryWorldSubsystemBase">();
	}
	static class UTaggedObjectQueryWorldSubsystemBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTaggedObjectQueryWorldSubsystemBase>();
	}
};
static_assert(alignof(UTaggedObjectQueryWorldSubsystemBase) == 0x000008, "Wrong alignment on UTaggedObjectQueryWorldSubsystemBase");
static_assert(sizeof(UTaggedObjectQueryWorldSubsystemBase) == 0x000030, "Wrong size on UTaggedObjectQueryWorldSubsystemBase");

class UTagRegistrationHandler final : public UObject
{
public:
	uint8                                         Pad_28[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TagRegistrationHandler">();
	}
	static class UTagRegistrationHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTagRegistrationHandler>();
	}
};
static_assert(alignof(UTagRegistrationHandler) == 0x000008, "Wrong alignment on UTagRegistrationHandler");
static_assert(sizeof(UTagRegistrationHandler) == 0x000068, "Wrong size on UTagRegistrationHandler");

class UVerseGameplayTagContainerBase : public UObject
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseGameplayTagContainerBase">();
	}
	static class UVerseGameplayTagContainerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseGameplayTagContainerBase>();
	}
};
static_assert(alignof(UVerseGameplayTagContainerBase) == 0x000008, "Wrong alignment on UVerseGameplayTagContainerBase");
static_assert(sizeof(UVerseGameplayTagContainerBase) == 0x000038, "Wrong size on UVerseGameplayTagContainerBase");

class IVerseGameplayTagAssetInterface final : public IInterface
{
public:
	void GetOwnedGameplayTags(struct FVerseGameplayTagContainer* TagContainer) const;
	bool HasAllMatchingGameplayTags(const struct FVerseGameplayTagContainer& TagContainer) const;
	bool HasAnyMatchingGameplayTags(const struct FVerseGameplayTagContainer& TagContainer) const;
	bool HasMatchingGameplayTag(const struct FVerseGameplayTag& TagToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseGameplayTagAssetInterface">();
	}
	static class IVerseGameplayTagAssetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IVerseGameplayTagAssetInterface>();
	}
};
static_assert(alignof(IVerseGameplayTagAssetInterface) == 0x000008, "Wrong alignment on IVerseGameplayTagAssetInterface");
static_assert(sizeof(IVerseGameplayTagAssetInterface) == 0x000028, "Wrong size on IVerseGameplayTagAssetInterface");

class UVerseTagMarkupComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	struct FVerseGameplayTagContainer             InternalTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseTagMarkupComponent">();
	}
	static class UVerseTagMarkupComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseTagMarkupComponent>();
	}
};
static_assert(alignof(UVerseTagMarkupComponent) == 0x000008, "Wrong alignment on UVerseTagMarkupComponent");
static_assert(sizeof(UVerseTagMarkupComponent) == 0x0000B8, "Wrong size on UVerseTagMarkupComponent");
static_assert(offsetof(UVerseTagMarkupComponent, InternalTags) == 0x0000A8, "Member 'UVerseTagMarkupComponent::InternalTags' has a wrong offset!");

}
