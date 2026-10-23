#pragma once

#include "Basic.hpp"

#include "AIDebuggerRuntime_structs.hpp"
#include "GameplayMessages_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct AIDebuggerCheatManager_EnableNavMeshVisualizer final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(AIDebuggerCheatManager_EnableNavMeshVisualizer) == 0x000001, "Wrong alignment on AIDebuggerCheatManager_EnableNavMeshVisualizer");
static_assert(sizeof(AIDebuggerCheatManager_EnableNavMeshVisualizer) == 0x000001, "Wrong size on AIDebuggerCheatManager_EnableNavMeshVisualizer");
static_assert(offsetof(AIDebuggerCheatManager_EnableNavMeshVisualizer, bEnable) == 0x000000, "Member 'AIDebuggerCheatManager_EnableNavMeshVisualizer::bEnable' has a wrong offset!");

struct AIDebuggerCheatManager_StartAIDebugger final
{
public:
	class FString                                 AIDebuggerSoftClassPath;
};
static_assert(alignof(AIDebuggerCheatManager_StartAIDebugger) == 0x000008, "Wrong alignment on AIDebuggerCheatManager_StartAIDebugger");
static_assert(sizeof(AIDebuggerCheatManager_StartAIDebugger) == 0x000010, "Wrong size on AIDebuggerCheatManager_StartAIDebugger");
static_assert(offsetof(AIDebuggerCheatManager_StartAIDebugger, AIDebuggerSoftClassPath) == 0x000000, "Member 'AIDebuggerCheatManager_StartAIDebugger::AIDebuggerSoftClassPath' has a wrong offset!");

struct FortControllerComponent_AIDebugger_OnPlayerExitedIsland final
{
public:
	struct FEventMessageTag                       Channel;
	uint8                                         Pad_4[0x4];
	struct FPlayerExitSpatialActorContext         PlayerExitSpatialActorContext;
};
static_assert(alignof(FortControllerComponent_AIDebugger_OnPlayerExitedIsland) == 0x000008, "Wrong alignment on FortControllerComponent_AIDebugger_OnPlayerExitedIsland");
static_assert(sizeof(FortControllerComponent_AIDebugger_OnPlayerExitedIsland) == 0x000018, "Wrong size on FortControllerComponent_AIDebugger_OnPlayerExitedIsland");
static_assert(offsetof(FortControllerComponent_AIDebugger_OnPlayerExitedIsland, Channel) == 0x000000, "Member 'FortControllerComponent_AIDebugger_OnPlayerExitedIsland::Channel' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_AIDebugger_OnPlayerExitedIsland, PlayerExitSpatialActorContext) == 0x000008, "Member 'FortControllerComponent_AIDebugger_OnPlayerExitedIsland::PlayerExitSpatialActorContext' has a wrong offset!");

struct FortControllerComponent_AIDebugger_SetVisualizationEnable final
{
public:
	EAIDebuggerVisualization                      VisualizationType;
	bool                                          bEnable;
};
static_assert(alignof(FortControllerComponent_AIDebugger_SetVisualizationEnable) == 0x000001, "Wrong alignment on FortControllerComponent_AIDebugger_SetVisualizationEnable");
static_assert(sizeof(FortControllerComponent_AIDebugger_SetVisualizationEnable) == 0x000002, "Wrong size on FortControllerComponent_AIDebugger_SetVisualizationEnable");
static_assert(offsetof(FortControllerComponent_AIDebugger_SetVisualizationEnable, VisualizationType) == 0x000000, "Member 'FortControllerComponent_AIDebugger_SetVisualizationEnable::VisualizationType' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_AIDebugger_SetVisualizationEnable, bEnable) == 0x000001, "Member 'FortControllerComponent_AIDebugger_SetVisualizationEnable::bEnable' has a wrong offset!");

struct FortControllerComponent_AIDebugger_VisualizeNavMeshID final
{
public:
	int32                                         NavMeshID;
};
static_assert(alignof(FortControllerComponent_AIDebugger_VisualizeNavMeshID) == 0x000004, "Wrong alignment on FortControllerComponent_AIDebugger_VisualizeNavMeshID");
static_assert(sizeof(FortControllerComponent_AIDebugger_VisualizeNavMeshID) == 0x000004, "Wrong size on FortControllerComponent_AIDebugger_VisualizeNavMeshID");
static_assert(offsetof(FortControllerComponent_AIDebugger_VisualizeNavMeshID, NavMeshID) == 0x000000, "Member 'FortControllerComponent_AIDebugger_VisualizeNavMeshID::NavMeshID' has a wrong offset!");

struct FortControllerComponent_AIDebugger_GetOrCreateRenderer final
{
public:
	class UAIDebuggerRendererComponent*           ReturnValue;
};
static_assert(alignof(FortControllerComponent_AIDebugger_GetOrCreateRenderer) == 0x000008, "Wrong alignment on FortControllerComponent_AIDebugger_GetOrCreateRenderer");
static_assert(sizeof(FortControllerComponent_AIDebugger_GetOrCreateRenderer) == 0x000008, "Wrong size on FortControllerComponent_AIDebugger_GetOrCreateRenderer");
static_assert(offsetof(FortControllerComponent_AIDebugger_GetOrCreateRenderer, ReturnValue) == 0x000000, "Member 'FortControllerComponent_AIDebugger_GetOrCreateRenderer::ReturnValue' has a wrong offset!");

struct FortControllerComponent_AIDebugger_IsVisualizationEnabled final
{
public:
	EAIDebuggerVisualization                      VisualizationType;
	bool                                          ReturnValue;
};
static_assert(alignof(FortControllerComponent_AIDebugger_IsVisualizationEnabled) == 0x000001, "Wrong alignment on FortControllerComponent_AIDebugger_IsVisualizationEnabled");
static_assert(sizeof(FortControllerComponent_AIDebugger_IsVisualizationEnabled) == 0x000002, "Wrong size on FortControllerComponent_AIDebugger_IsVisualizationEnabled");
static_assert(offsetof(FortControllerComponent_AIDebugger_IsVisualizationEnabled, VisualizationType) == 0x000000, "Member 'FortControllerComponent_AIDebugger_IsVisualizationEnabled::VisualizationType' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_AIDebugger_IsVisualizationEnabled, ReturnValue) == 0x000001, "Member 'FortControllerComponent_AIDebugger_IsVisualizationEnabled::ReturnValue' has a wrong offset!");

}
