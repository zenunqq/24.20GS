#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct KeyPlayerInfoWidget_HandleGameplayTagEvent final
{
public:
	struct FGameplayTag                           UpdatedTag;
	int32                                         TagCount;
};
static_assert(alignof(KeyPlayerInfoWidget_HandleGameplayTagEvent) == 0x000004, "Wrong alignment on KeyPlayerInfoWidget_HandleGameplayTagEvent");
static_assert(sizeof(KeyPlayerInfoWidget_HandleGameplayTagEvent) == 0x000008, "Wrong size on KeyPlayerInfoWidget_HandleGameplayTagEvent");
static_assert(offsetof(KeyPlayerInfoWidget_HandleGameplayTagEvent, UpdatedTag) == 0x000000, "Member 'KeyPlayerInfoWidget_HandleGameplayTagEvent::UpdatedTag' has a wrong offset!");
static_assert(offsetof(KeyPlayerInfoWidget_HandleGameplayTagEvent, TagCount) == 0x000004, "Member 'KeyPlayerInfoWidget_HandleGameplayTagEvent::TagCount' has a wrong offset!");

struct KeyPlayerInfoWidget_OnKeyStatusActivated final
{
public:
	class AFortPlayerStateAthena*                 InPlayerState;
	bool                                          bActivated;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(KeyPlayerInfoWidget_OnKeyStatusActivated) == 0x000008, "Wrong alignment on KeyPlayerInfoWidget_OnKeyStatusActivated");
static_assert(sizeof(KeyPlayerInfoWidget_OnKeyStatusActivated) == 0x000010, "Wrong size on KeyPlayerInfoWidget_OnKeyStatusActivated");
static_assert(offsetof(KeyPlayerInfoWidget_OnKeyStatusActivated, InPlayerState) == 0x000000, "Member 'KeyPlayerInfoWidget_OnKeyStatusActivated::InPlayerState' has a wrong offset!");
static_assert(offsetof(KeyPlayerInfoWidget_OnKeyStatusActivated, bActivated) == 0x000008, "Member 'KeyPlayerInfoWidget_OnKeyStatusActivated::bActivated' has a wrong offset!");

}
