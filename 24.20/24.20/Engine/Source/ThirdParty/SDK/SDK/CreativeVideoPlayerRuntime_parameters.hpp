#pragma once

#include "Basic.hpp"

#include "CreativeVideoPlayerRuntime_structs.hpp"

namespace SDK::Params
{

struct CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions final
{
public:
	struct FCreativeVideoPlayerFullscreenOptions  Options;
};
static_assert(alignof(CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions) == 0x000001, "Wrong alignment on CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions");
static_assert(sizeof(CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions) == 0x000002, "Wrong size on CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions");
static_assert(offsetof(CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions, Options) == 0x000000, "Member 'CreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions::Options' has a wrong offset!");

struct CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode final
{
public:
	class AController*                            Controller;
};
static_assert(alignof(CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode) == 0x000008, "Wrong alignment on CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode");
static_assert(sizeof(CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode) == 0x000008, "Wrong size on CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode");
static_assert(offsetof(CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode, Controller) == 0x000000, "Member 'CreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode::Controller' has a wrong offset!");

}
