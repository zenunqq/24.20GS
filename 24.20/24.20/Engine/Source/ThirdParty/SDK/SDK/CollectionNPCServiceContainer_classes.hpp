#pragma once

#include "Basic.hpp"

#include "CharacterCollectionMapScreen_classes.hpp"

namespace SDK
{

class UCollectionNPCServiceContainer_C final : public UCollectionNPCServiceContainer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionNPCServiceContainer_C">();
	}
	static class UCollectionNPCServiceContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceContainer_C>();
	}
};
static_assert(alignof(UCollectionNPCServiceContainer_C) == 0x000008, "Wrong alignment on UCollectionNPCServiceContainer_C");
static_assert(sizeof(UCollectionNPCServiceContainer_C) == 0x000278, "Wrong size on UCollectionNPCServiceContainer_C");

}
