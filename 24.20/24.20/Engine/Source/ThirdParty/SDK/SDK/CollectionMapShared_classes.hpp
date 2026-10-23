#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{
public:
	class UAthenaFullScreenMapBase*               MapWidget;
	TSubclassOf<class UAthenaMapCollectionIcon>   CollectionIconType;
	TMap<struct FGameplayTag, class UAthenaMapCollectionIcon*> MapCollectionIcons;
	uint8                                         Pad_688[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaCollectionScreenMapBase">();
	}
	static class UAthenaCollectionScreenMapBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCollectionScreenMapBase>();
	}
};
static_assert(alignof(UAthenaCollectionScreenMapBase) == 0x000008, "Wrong alignment on UAthenaCollectionScreenMapBase");
static_assert(sizeof(UAthenaCollectionScreenMapBase) == 0x0006B0, "Wrong size on UAthenaCollectionScreenMapBase");
static_assert(offsetof(UAthenaCollectionScreenMapBase, MapWidget) == 0x000628, "Member 'UAthenaCollectionScreenMapBase::MapWidget' has a wrong offset!");
static_assert(offsetof(UAthenaCollectionScreenMapBase, CollectionIconType) == 0x000630, "Member 'UAthenaCollectionScreenMapBase::CollectionIconType' has a wrong offset!");
static_assert(offsetof(UAthenaCollectionScreenMapBase, MapCollectionIcons) == 0x000638, "Member 'UAthenaCollectionScreenMapBase::MapCollectionIcons' has a wrong offset!");

class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{
public:
	void SetIsKnown(const bool bIsKnown);
	void SetSecondaryIcon(const TSoftObjectPtr<class UObject>& SecondaryIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaMapCollectionIcon">();
	}
	static class UAthenaMapCollectionIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMapCollectionIcon>();
	}
};
static_assert(alignof(UAthenaMapCollectionIcon) == 0x000008, "Wrong alignment on UAthenaMapCollectionIcon");
static_assert(sizeof(UAthenaMapCollectionIcon) == 0x000330, "Wrong size on UAthenaMapCollectionIcon");

}
