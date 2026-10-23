#pragma once

#include "Basic.hpp"

#include "CharacterCollectionMapScreen_classes.hpp"

namespace SDK
{

class UCollectionNPCServiceGroup_C final : public UCollectionNPCServiceGroup
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionNPCServiceGroup_C">();
	}
	static class UCollectionNPCServiceGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionNPCServiceGroup_C>();
	}
};
static_assert(alignof(UCollectionNPCServiceGroup_C) == 0x000008, "Wrong alignment on UCollectionNPCServiceGroup_C");
static_assert(sizeof(UCollectionNPCServiceGroup_C) == 0x000270, "Wrong size on UCollectionNPCServiceGroup_C");

}
