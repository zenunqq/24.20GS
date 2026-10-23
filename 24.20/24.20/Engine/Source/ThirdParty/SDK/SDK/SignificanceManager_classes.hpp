#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class USignificanceManager : public UObject
{
public:
	uint8                                         Pad_28[0xF8];
	struct FSoftClassPath                         SignificanceManagerClassName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SignificanceManager">();
	}
	static class USignificanceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USignificanceManager>();
	}
};
static_assert(alignof(USignificanceManager) == 0x000008, "Wrong alignment on USignificanceManager");
static_assert(sizeof(USignificanceManager) == 0x000138, "Wrong size on USignificanceManager");
static_assert(offsetof(USignificanceManager, SignificanceManagerClassName) == 0x000120, "Member 'USignificanceManager::SignificanceManagerClassName' has a wrong offset!");

}
