#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "GameplayStreaming_classes.hpp"

namespace SDK
{

class UFortLocalPlayerAccountHelper final : public UObject
{
public:
	uint8                                         Pad_28[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLocalPlayerAccountHelper">();
	}
	static class UFortLocalPlayerAccountHelper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLocalPlayerAccountHelper>();
	}
};
static_assert(alignof(UFortLocalPlayerAccountHelper) == 0x000008, "Wrong alignment on UFortLocalPlayerAccountHelper");
static_assert(sizeof(UFortLocalPlayerAccountHelper) == 0x000050, "Wrong size on UFortLocalPlayerAccountHelper");

class UFortGFNGameplayStreamingHandler final : public UGFNGameplayStreamingHandler
{
public:
	uint8                                         Pad_78[0x8];
	class UFortLocalPlayerAccountHelper*          FortLocalPlayerAccountHelper;
	class UFortOnlineAccount*                     FortOnlineAccount;
	uint8                                         Pad_90[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGFNGameplayStreamingHandler">();
	}
	static class UFortGFNGameplayStreamingHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGFNGameplayStreamingHandler>();
	}
};
static_assert(alignof(UFortGFNGameplayStreamingHandler) == 0x000008, "Wrong alignment on UFortGFNGameplayStreamingHandler");
static_assert(sizeof(UFortGFNGameplayStreamingHandler) == 0x0000B0, "Wrong size on UFortGFNGameplayStreamingHandler");
static_assert(offsetof(UFortGFNGameplayStreamingHandler, FortLocalPlayerAccountHelper) == 0x000080, "Member 'UFortGFNGameplayStreamingHandler::FortLocalPlayerAccountHelper' has a wrong offset!");
static_assert(offsetof(UFortGFNGameplayStreamingHandler, FortOnlineAccount) == 0x000088, "Member 'UFortGFNGameplayStreamingHandler::FortOnlineAccount' has a wrong offset!");

class UFortLunaGameplayStreamingHandler final : public ULunaGameplayStreamingHandler
{
public:
	uint8                                         Pad_78[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLunaGameplayStreamingHandler">();
	}
	static class UFortLunaGameplayStreamingHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLunaGameplayStreamingHandler>();
	}
};
static_assert(alignof(UFortLunaGameplayStreamingHandler) == 0x000008, "Wrong alignment on UFortLunaGameplayStreamingHandler");
static_assert(sizeof(UFortLunaGameplayStreamingHandler) == 0x0000B8, "Wrong size on UFortLunaGameplayStreamingHandler");

class IFortGameplayStreamingHandler final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayStreamingHandler">();
	}
	static class IFortGameplayStreamingHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortGameplayStreamingHandler>();
	}
};
static_assert(alignof(IFortGameplayStreamingHandler) == 0x000008, "Wrong alignment on IFortGameplayStreamingHandler");
static_assert(sizeof(IFortGameplayStreamingHandler) == 0x000028, "Wrong size on IFortGameplayStreamingHandler");

class UFortGameplayStreamingService final : public UGameplayStreamingService
{
public:
	uint8                                         Pad_30[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayStreamingService">();
	}
	static class UFortGameplayStreamingService* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayStreamingService>();
	}
};
static_assert(alignof(UFortGameplayStreamingService) == 0x000008, "Wrong alignment on UFortGameplayStreamingService");
static_assert(sizeof(UFortGameplayStreamingService) == 0x000038, "Wrong size on UFortGameplayStreamingService");

}
