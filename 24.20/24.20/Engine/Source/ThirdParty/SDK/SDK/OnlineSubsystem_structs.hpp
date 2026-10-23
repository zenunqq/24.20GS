#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EInAppPurchaseState : uint8
{
	Unknown                                  = 0,
	Success                                  = 1,
	Failed                                   = 2,
	Cancelled                                = 3,
	Invalid                                  = 4,
	NotAllowed                               = 5,
	Restored                                 = 6,
	AlreadyOwned                             = 7,
	EInAppPurchaseState_MAX                  = 8,
};

enum class EMPMatchOutcome : uint8
{
	None                                     = 0,
	Quit                                     = 1,
	Won                                      = 2,
	Lost                                     = 3,
	Tied                                     = 4,
	TimeExpired                              = 5,
	First                                    = 6,
	Second                                   = 7,
	Third                                    = 8,
	Fourth                                   = 9,
	EMPMatchOutcome_MAX                      = 10,
};

struct FNamedInterface final
{
public:
	class FName                                   InterfaceName;
	uint8                                         Pad_4[0x4];
	class UObject*                                InterfaceObject;
};
static_assert(alignof(FNamedInterface) == 0x000008, "Wrong alignment on FNamedInterface");
static_assert(sizeof(FNamedInterface) == 0x000010, "Wrong size on FNamedInterface");
static_assert(offsetof(FNamedInterface, InterfaceName) == 0x000000, "Member 'FNamedInterface::InterfaceName' has a wrong offset!");
static_assert(offsetof(FNamedInterface, InterfaceObject) == 0x000008, "Member 'FNamedInterface::InterfaceObject' has a wrong offset!");

struct FNamedInterfaceDef final
{
public:
	class FName                                   InterfaceName;
	uint8                                         Pad_4[0x4];
	class FString                                 InterfaceClassName;
};
static_assert(alignof(FNamedInterfaceDef) == 0x000008, "Wrong alignment on FNamedInterfaceDef");
static_assert(sizeof(FNamedInterfaceDef) == 0x000018, "Wrong size on FNamedInterfaceDef");
static_assert(offsetof(FNamedInterfaceDef, InterfaceName) == 0x000000, "Member 'FNamedInterfaceDef::InterfaceName' has a wrong offset!");
static_assert(offsetof(FNamedInterfaceDef, InterfaceClassName) == 0x000008, "Member 'FNamedInterfaceDef::InterfaceClassName' has a wrong offset!");

}
