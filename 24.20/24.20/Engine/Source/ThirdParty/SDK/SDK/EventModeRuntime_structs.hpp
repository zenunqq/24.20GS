#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

enum class EFortEventModeEmoteToPlay : uint8
{
	Emote1                                   = 0,
	Emote2                                   = 1,
	Emote3                                   = 2,
	RandomEmote                              = 3,
	QuickEmotes                              = 4,
	EFortEventModeEmoteToPlay_MAX            = 5,
};

struct FEventModeFocusActor final
{
public:
	TSoftObjectPtr<class AActor>                  Target;
	float                                         Distance;
	uint8                                         Pad_2C[0x4];
	struct FVector                                Offset;
	float                                         FOV;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FEventModeFocusActor) == 0x000008, "Wrong alignment on FEventModeFocusActor");
static_assert(sizeof(FEventModeFocusActor) == 0x000050, "Wrong size on FEventModeFocusActor");
static_assert(offsetof(FEventModeFocusActor, Target) == 0x000000, "Member 'FEventModeFocusActor::Target' has a wrong offset!");
static_assert(offsetof(FEventModeFocusActor, Distance) == 0x000028, "Member 'FEventModeFocusActor::Distance' has a wrong offset!");
static_assert(offsetof(FEventModeFocusActor, Offset) == 0x000030, "Member 'FEventModeFocusActor::Offset' has a wrong offset!");
static_assert(offsetof(FEventModeFocusActor, FOV) == 0x000048, "Member 'FEventModeFocusActor::FOV' has a wrong offset!");

struct FEventModeWidgetCachedData final
{
public:
	EUIExtensionSlot                              Slot;
	uint8                                         Pad_1[0x3];
	TWeakObjectPtr<class UUserWidget>             Widget;
};
static_assert(alignof(FEventModeWidgetCachedData) == 0x000004, "Wrong alignment on FEventModeWidgetCachedData");
static_assert(sizeof(FEventModeWidgetCachedData) == 0x00000C, "Wrong size on FEventModeWidgetCachedData");
static_assert(offsetof(FEventModeWidgetCachedData, Slot) == 0x000000, "Member 'FEventModeWidgetCachedData::Slot' has a wrong offset!");
static_assert(offsetof(FEventModeWidgetCachedData, Widget) == 0x000004, "Member 'FEventModeWidgetCachedData::Widget' has a wrong offset!");

}
