#pragma once

#include "Basic.hpp"

#include "OnlineSubsystemUtils_classes.hpp"

namespace SDK
{

class UNetConnectionEOS final : public UIpConnection
{
public:
	uint8                                         Pad_1E88[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetConnectionEOS">();
	}
	static class UNetConnectionEOS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetConnectionEOS>();
	}
};
static_assert(alignof(UNetConnectionEOS) == 0x000008, "Wrong alignment on UNetConnectionEOS");
static_assert(sizeof(UNetConnectionEOS) == 0x001E90, "Wrong size on UNetConnectionEOS");

class UNetDriverEOSBase : public UIpNetDriver
{
public:
	bool                                          bIsPassthrough;
	bool                                          bIsUsingP2PSockets;
	uint8                                         Pad_84A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDriverEOSBase">();
	}
	static class UNetDriverEOSBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDriverEOSBase>();
	}
};
static_assert(alignof(UNetDriverEOSBase) == 0x000008, "Wrong alignment on UNetDriverEOSBase");
static_assert(sizeof(UNetDriverEOSBase) == 0x000850, "Wrong size on UNetDriverEOSBase");
static_assert(offsetof(UNetDriverEOSBase, bIsPassthrough) == 0x000848, "Member 'UNetDriverEOSBase::bIsPassthrough' has a wrong offset!");
static_assert(offsetof(UNetDriverEOSBase, bIsUsingP2PSockets) == 0x000849, "Member 'UNetDriverEOSBase::bIsUsingP2PSockets' has a wrong offset!");

}
