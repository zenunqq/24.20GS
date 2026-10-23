#pragma once

#include "Basic.hpp"

#include "Rejoin_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class URejoinCheck : public UObject
{
public:
	ERejoinStatus                                 LastKnownStatus;
	bool                                          bRejoinAfterCheck;
	bool                                          bAttemptingRejoin;
	uint8                                         Pad_2B[0x15D];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RejoinCheck">();
	}
	static class URejoinCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<URejoinCheck>();
	}
};
static_assert(alignof(URejoinCheck) == 0x000008, "Wrong alignment on URejoinCheck");
static_assert(sizeof(URejoinCheck) == 0x000188, "Wrong size on URejoinCheck");
static_assert(offsetof(URejoinCheck, LastKnownStatus) == 0x000028, "Member 'URejoinCheck::LastKnownStatus' has a wrong offset!");
static_assert(offsetof(URejoinCheck, bRejoinAfterCheck) == 0x000029, "Member 'URejoinCheck::bRejoinAfterCheck' has a wrong offset!");
static_assert(offsetof(URejoinCheck, bAttemptingRejoin) == 0x00002A, "Member 'URejoinCheck::bAttemptingRejoin' has a wrong offset!");

}
