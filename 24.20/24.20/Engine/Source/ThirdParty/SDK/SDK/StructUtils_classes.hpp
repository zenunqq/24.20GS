#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

class UPropertyBagMissingObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyBagMissingObject">();
	}
	static class UPropertyBagMissingObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyBagMissingObject>();
	}
};
static_assert(alignof(UPropertyBagMissingObject) == 0x000008, "Wrong alignment on UPropertyBagMissingObject");
static_assert(sizeof(UPropertyBagMissingObject) == 0x000028, "Wrong size on UPropertyBagMissingObject");

class UPropertyBag final : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>       PropertyDescs;
	uint8                                         Pad_D0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyBag">();
	}
	static class UPropertyBag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyBag>();
	}
};
static_assert(alignof(UPropertyBag) == 0x000008, "Wrong alignment on UPropertyBag");
static_assert(sizeof(UPropertyBag) == 0x0000D8, "Wrong size on UPropertyBag");
static_assert(offsetof(UPropertyBag, PropertyDescs) == 0x0000C0, "Member 'UPropertyBag::PropertyDescs' has a wrong offset!");

}
