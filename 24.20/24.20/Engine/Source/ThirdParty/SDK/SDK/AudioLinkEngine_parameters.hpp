#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AudioLinkBlueprintInterface_PlayLink final
{
public:
	float                                         StartTime;
};
static_assert(alignof(AudioLinkBlueprintInterface_PlayLink) == 0x000004, "Wrong alignment on AudioLinkBlueprintInterface_PlayLink");
static_assert(sizeof(AudioLinkBlueprintInterface_PlayLink) == 0x000004, "Wrong size on AudioLinkBlueprintInterface_PlayLink");
static_assert(offsetof(AudioLinkBlueprintInterface_PlayLink, StartTime) == 0x000000, "Member 'AudioLinkBlueprintInterface_PlayLink::StartTime' has a wrong offset!");

struct AudioLinkBlueprintInterface_SetLinkSound final
{
public:
	class USoundBase*                             NewSound;
};
static_assert(alignof(AudioLinkBlueprintInterface_SetLinkSound) == 0x000008, "Wrong alignment on AudioLinkBlueprintInterface_SetLinkSound");
static_assert(sizeof(AudioLinkBlueprintInterface_SetLinkSound) == 0x000008, "Wrong size on AudioLinkBlueprintInterface_SetLinkSound");
static_assert(offsetof(AudioLinkBlueprintInterface_SetLinkSound, NewSound) == 0x000000, "Member 'AudioLinkBlueprintInterface_SetLinkSound::NewSound' has a wrong offset!");

struct AudioLinkBlueprintInterface_IsLinkPlaying final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(AudioLinkBlueprintInterface_IsLinkPlaying) == 0x000001, "Wrong alignment on AudioLinkBlueprintInterface_IsLinkPlaying");
static_assert(sizeof(AudioLinkBlueprintInterface_IsLinkPlaying) == 0x000001, "Wrong size on AudioLinkBlueprintInterface_IsLinkPlaying");
static_assert(offsetof(AudioLinkBlueprintInterface_IsLinkPlaying, ReturnValue) == 0x000000, "Member 'AudioLinkBlueprintInterface_IsLinkPlaying::ReturnValue' has a wrong offset!");

}
