#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UJsonUtilitiesDummyObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JsonUtilitiesDummyObject">();
	}
	static class UJsonUtilitiesDummyObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJsonUtilitiesDummyObject>();
	}
};
static_assert(alignof(UJsonUtilitiesDummyObject) == 0x000008, "Wrong alignment on UJsonUtilitiesDummyObject");
static_assert(sizeof(UJsonUtilitiesDummyObject) == 0x000028, "Wrong size on UJsonUtilitiesDummyObject");

}
