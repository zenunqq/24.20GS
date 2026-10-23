#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "LagerRuntime_classes.hpp"

namespace SDK
{

class AFortQuestLivingWorldVolume final : public AFortAthenaLivingWorldVolume
{
public:
	struct FGameplayTagContainer                  NoPlayerNeedsQuestFilterTags;
	struct FGameplayTagContainer                  PlayerNeedsQuestFilterTags;
	class UFortQuestItemDefinition*               RequiredQuest;
	uint8                                         Pad_600[0x8];

public:
	void HandlePIEQuestsUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestLivingWorldVolume">();
	}
	static class AFortQuestLivingWorldVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortQuestLivingWorldVolume>();
	}
};
static_assert(alignof(AFortQuestLivingWorldVolume) == 0x000008, "Wrong alignment on AFortQuestLivingWorldVolume");
static_assert(sizeof(AFortQuestLivingWorldVolume) == 0x000608, "Wrong size on AFortQuestLivingWorldVolume");
static_assert(offsetof(AFortQuestLivingWorldVolume, NoPlayerNeedsQuestFilterTags) == 0x0005B8, "Member 'AFortQuestLivingWorldVolume::NoPlayerNeedsQuestFilterTags' has a wrong offset!");
static_assert(offsetof(AFortQuestLivingWorldVolume, PlayerNeedsQuestFilterTags) == 0x0005D8, "Member 'AFortQuestLivingWorldVolume::PlayerNeedsQuestFilterTags' has a wrong offset!");
static_assert(offsetof(AFortQuestLivingWorldVolume, RequiredQuest) == 0x0005F8, "Member 'AFortQuestLivingWorldVolume::RequiredQuest' has a wrong offset!");

}
