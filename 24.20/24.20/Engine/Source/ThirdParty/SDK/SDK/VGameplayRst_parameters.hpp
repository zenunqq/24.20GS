#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded final
{
public:
	class UVerseLevelStreamingComponentBase*      LevelStreamingComponent;
};
static_assert(alignof(VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded) == 0x000008, "Wrong alignment on VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded");
static_assert(sizeof(VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded) == 0x000008, "Wrong size on VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded");
static_assert(offsetof(VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded, LevelStreamingComponent) == 0x000000, "Member 'VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded::LevelStreamingComponent' has a wrong offset!");

struct VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded final
{
public:
	class UVerseLevelStreamingComponentBase*      LevelStreamingComponent;
};
static_assert(alignof(VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded) == 0x000008, "Wrong alignment on VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded");
static_assert(sizeof(VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded) == 0x000008, "Wrong size on VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded");
static_assert(offsetof(VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded, LevelStreamingComponent) == 0x000000, "Member 'VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded::LevelStreamingComponent' has a wrong offset!");

}
