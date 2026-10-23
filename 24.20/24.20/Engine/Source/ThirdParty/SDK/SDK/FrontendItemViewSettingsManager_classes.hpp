#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFrontendItemViewSettingsManager_C final : public UFortFrontendItemViewSettingsManager
{
public:
	struct FFortItemViewSettings GetItemViewSettings(const EFrontEndCamera Camera, const ESubGame GameMode, const class UFortItemDefinition* ItemDefinition, const int32 SubslotIndex) const;
	bool Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, int32 SubslotIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendItemViewSettingsManager_C">();
	}
	static class UFrontendItemViewSettingsManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendItemViewSettingsManager_C>();
	}
};
static_assert(alignof(UFrontendItemViewSettingsManager_C) == 0x000008, "Wrong alignment on UFrontendItemViewSettingsManager_C");
static_assert(sizeof(UFrontendItemViewSettingsManager_C) == 0x000028, "Wrong size on UFrontendItemViewSettingsManager_C");

}
