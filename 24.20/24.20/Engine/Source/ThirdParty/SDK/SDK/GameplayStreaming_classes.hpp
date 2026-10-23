#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UBaseGameplayStreamingHandler : public UObject
{
public:
	uint8                                         Pad_28[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseGameplayStreamingHandler">();
	}
	static class UBaseGameplayStreamingHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseGameplayStreamingHandler>();
	}
};
static_assert(alignof(UBaseGameplayStreamingHandler) == 0x000008, "Wrong alignment on UBaseGameplayStreamingHandler");
static_assert(sizeof(UBaseGameplayStreamingHandler) == 0x000078, "Wrong size on UBaseGameplayStreamingHandler");

class UGFNGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GFNGameplayStreamingHandler">();
	}
	static class UGFNGameplayStreamingHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGFNGameplayStreamingHandler>();
	}
};
static_assert(alignof(UGFNGameplayStreamingHandler) == 0x000008, "Wrong alignment on UGFNGameplayStreamingHandler");
static_assert(sizeof(UGFNGameplayStreamingHandler) == 0x000078, "Wrong size on UGFNGameplayStreamingHandler");

class ULunaGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LunaGameplayStreamingHandler">();
	}
	static class ULunaGameplayStreamingHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULunaGameplayStreamingHandler>();
	}
};
static_assert(alignof(ULunaGameplayStreamingHandler) == 0x000008, "Wrong alignment on ULunaGameplayStreamingHandler");
static_assert(sizeof(ULunaGameplayStreamingHandler) == 0x000078, "Wrong size on ULunaGameplayStreamingHandler");

class UGameplayStreamingClassLoader final : public UObject
{
public:
	struct FSoftClassPath                         GameplayStreamingServiceClassName;
	uint8                                         Pad_40[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayStreamingClassLoader">();
	}
	static class UGameplayStreamingClassLoader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayStreamingClassLoader>();
	}
};
static_assert(alignof(UGameplayStreamingClassLoader) == 0x000008, "Wrong alignment on UGameplayStreamingClassLoader");
static_assert(sizeof(UGameplayStreamingClassLoader) == 0x000048, "Wrong size on UGameplayStreamingClassLoader");
static_assert(offsetof(UGameplayStreamingClassLoader, GameplayStreamingServiceClassName) == 0x000028, "Member 'UGameplayStreamingClassLoader::GameplayStreamingServiceClassName' has a wrong offset!");

class UGameplayStreamingService : public UObject
{
public:
	class UBaseGameplayStreamingHandler*          ActiveHandler;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayStreamingService">();
	}
	static class UGameplayStreamingService* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayStreamingService>();
	}
};
static_assert(alignof(UGameplayStreamingService) == 0x000008, "Wrong alignment on UGameplayStreamingService");
static_assert(sizeof(UGameplayStreamingService) == 0x000030, "Wrong size on UGameplayStreamingService");
static_assert(offsetof(UGameplayStreamingService, ActiveHandler) == 0x000028, "Member 'UGameplayStreamingService::ActiveHandler' has a wrong offset!");

}
