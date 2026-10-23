#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UGauntletTestController : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GauntletTestController">();
	}
	static class UGauntletTestController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGauntletTestController>();
	}
};
static_assert(alignof(UGauntletTestController) == 0x000008, "Wrong alignment on UGauntletTestController");
static_assert(sizeof(UGauntletTestController) == 0x000030, "Wrong size on UGauntletTestController");

class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GauntletTestControllerBootTest">();
	}
	static class UGauntletTestControllerBootTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGauntletTestControllerBootTest>();
	}
};
static_assert(alignof(UGauntletTestControllerBootTest) == 0x000008, "Wrong alignment on UGauntletTestControllerBootTest");
static_assert(sizeof(UGauntletTestControllerBootTest) == 0x000030, "Wrong size on UGauntletTestControllerBootTest");

class UGauntletTestControllerErrorTest final : public UGauntletTestController
{
public:
	uint8                                         Pad_30[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GauntletTestControllerErrorTest">();
	}
	static class UGauntletTestControllerErrorTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGauntletTestControllerErrorTest>();
	}
};
static_assert(alignof(UGauntletTestControllerErrorTest) == 0x000008, "Wrong alignment on UGauntletTestControllerErrorTest");
static_assert(sizeof(UGauntletTestControllerErrorTest) == 0x000050, "Wrong size on UGauntletTestControllerErrorTest");

}
