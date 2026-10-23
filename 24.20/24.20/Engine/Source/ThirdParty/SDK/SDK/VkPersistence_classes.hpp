#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UVkPersistence final : public UObject
{
public:
	uint8                                         Pad_28[0xA8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VkPersistence">();
	}
	static class UVkPersistence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVkPersistence>();
	}
};
static_assert(alignof(UVkPersistence) == 0x000008, "Wrong alignment on UVkPersistence");
static_assert(sizeof(UVkPersistence) == 0x0000D0, "Wrong size on UVkPersistence");

class UVkPersistenceManager final : public UObject
{
public:
	uint8                                         Pad_28[0x198];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VkPersistenceManager">();
	}
	static class UVkPersistenceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVkPersistenceManager>();
	}
};
static_assert(alignof(UVkPersistenceManager) == 0x000008, "Wrong alignment on UVkPersistenceManager");
static_assert(sizeof(UVkPersistenceManager) == 0x0001C0, "Wrong size on UVkPersistenceManager");

}
