#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortMobileActionButtonBehaviorExtension_BunkerKeyUse final : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FGameplayTag                           KeycardTag;
	struct FGameplayTag                           VaultDoorTag;
	class UPaperSprite*                           Sprite_Keycard;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehaviorExtension_BunkerKeyUse">();
	}
	static class UFortMobileActionButtonBehaviorExtension_BunkerKeyUse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehaviorExtension_BunkerKeyUse>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehaviorExtension_BunkerKeyUse) == 0x000008, "Wrong alignment on UFortMobileActionButtonBehaviorExtension_BunkerKeyUse");
static_assert(sizeof(UFortMobileActionButtonBehaviorExtension_BunkerKeyUse) == 0x000080, "Wrong size on UFortMobileActionButtonBehaviorExtension_BunkerKeyUse");
static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_BunkerKeyUse, KeycardTag) == 0x000070, "Member 'UFortMobileActionButtonBehaviorExtension_BunkerKeyUse::KeycardTag' has a wrong offset!");
static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_BunkerKeyUse, VaultDoorTag) == 0x000074, "Member 'UFortMobileActionButtonBehaviorExtension_BunkerKeyUse::VaultDoorTag' has a wrong offset!");
static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_BunkerKeyUse, Sprite_Keycard) == 0x000078, "Member 'UFortMobileActionButtonBehaviorExtension_BunkerKeyUse::Sprite_Keycard' has a wrong offset!");

}
