#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct DynamicUIDirectorBase_AddScene final
{
public:
	const class UDynamicUIScene*                  Scene;
};
static_assert(alignof(DynamicUIDirectorBase_AddScene) == 0x000008, "Wrong alignment on DynamicUIDirectorBase_AddScene");
static_assert(sizeof(DynamicUIDirectorBase_AddScene) == 0x000008, "Wrong size on DynamicUIDirectorBase_AddScene");
static_assert(offsetof(DynamicUIDirectorBase_AddScene, Scene) == 0x000000, "Member 'DynamicUIDirectorBase_AddScene::Scene' has a wrong offset!");

struct DynamicUIDirectorBase_RemoveScene final
{
public:
	const class UDynamicUIScene*                  Scene;
};
static_assert(alignof(DynamicUIDirectorBase_RemoveScene) == 0x000008, "Wrong alignment on DynamicUIDirectorBase_RemoveScene");
static_assert(sizeof(DynamicUIDirectorBase_RemoveScene) == 0x000008, "Wrong size on DynamicUIDirectorBase_RemoveScene");
static_assert(offsetof(DynamicUIDirectorBase_RemoveScene, Scene) == 0x000000, "Member 'DynamicUIDirectorBase_RemoveScene::Scene' has a wrong offset!");

struct DynamicUIDirectorBase_GetOwnedEventRouter final
{
public:
	class UGameplayEventRouterComponent*          ReturnValue;
};
static_assert(alignof(DynamicUIDirectorBase_GetOwnedEventRouter) == 0x000008, "Wrong alignment on DynamicUIDirectorBase_GetOwnedEventRouter");
static_assert(sizeof(DynamicUIDirectorBase_GetOwnedEventRouter) == 0x000008, "Wrong size on DynamicUIDirectorBase_GetOwnedEventRouter");
static_assert(offsetof(DynamicUIDirectorBase_GetOwnedEventRouter, ReturnValue) == 0x000000, "Member 'DynamicUIDirectorBase_GetOwnedEventRouter::ReturnValue' has a wrong offset!");

struct DynamicUIDirectorBase_GetOwningLocalPlayer final
{
public:
	class ULocalPlayer*                           ReturnValue;
};
static_assert(alignof(DynamicUIDirectorBase_GetOwningLocalPlayer) == 0x000008, "Wrong alignment on DynamicUIDirectorBase_GetOwningLocalPlayer");
static_assert(sizeof(DynamicUIDirectorBase_GetOwningLocalPlayer) == 0x000008, "Wrong size on DynamicUIDirectorBase_GetOwningLocalPlayer");
static_assert(offsetof(DynamicUIDirectorBase_GetOwningLocalPlayer, ReturnValue) == 0x000000, "Member 'DynamicUIDirectorBase_GetOwningLocalPlayer::ReturnValue' has a wrong offset!");

struct DynamicUIDirectorBase_GetOwningLocalPlayerController final
{
public:
	class APlayerController*                      ReturnValue;
};
static_assert(alignof(DynamicUIDirectorBase_GetOwningLocalPlayerController) == 0x000008, "Wrong alignment on DynamicUIDirectorBase_GetOwningLocalPlayerController");
static_assert(sizeof(DynamicUIDirectorBase_GetOwningLocalPlayerController) == 0x000008, "Wrong size on DynamicUIDirectorBase_GetOwningLocalPlayerController");
static_assert(offsetof(DynamicUIDirectorBase_GetOwningLocalPlayerController, ReturnValue) == 0x000000, "Member 'DynamicUIDirectorBase_GetOwningLocalPlayerController::ReturnValue' has a wrong offset!");

struct DynamicUIManager_AddScene final
{
public:
	const class UDynamicUIScene*                  Scene;
	class APlayerController*                      Player;
};
static_assert(alignof(DynamicUIManager_AddScene) == 0x000008, "Wrong alignment on DynamicUIManager_AddScene");
static_assert(sizeof(DynamicUIManager_AddScene) == 0x000010, "Wrong size on DynamicUIManager_AddScene");
static_assert(offsetof(DynamicUIManager_AddScene, Scene) == 0x000000, "Member 'DynamicUIManager_AddScene::Scene' has a wrong offset!");
static_assert(offsetof(DynamicUIManager_AddScene, Player) == 0x000008, "Member 'DynamicUIManager_AddScene::Player' has a wrong offset!");

struct DynamicUIManager_AddScenes final
{
public:
	TArray<class UDynamicUIScene*>                Scenes;
	class APlayerController*                      Player;
};
static_assert(alignof(DynamicUIManager_AddScenes) == 0x000008, "Wrong alignment on DynamicUIManager_AddScenes");
static_assert(sizeof(DynamicUIManager_AddScenes) == 0x000018, "Wrong size on DynamicUIManager_AddScenes");
static_assert(offsetof(DynamicUIManager_AddScenes, Scenes) == 0x000000, "Member 'DynamicUIManager_AddScenes::Scenes' has a wrong offset!");
static_assert(offsetof(DynamicUIManager_AddScenes, Player) == 0x000010, "Member 'DynamicUIManager_AddScenes::Player' has a wrong offset!");

struct DynamicUIManager_AddSceneToFirstLocalPlayer final
{
public:
	const class UDynamicUIScene*                  Scene;
};
static_assert(alignof(DynamicUIManager_AddSceneToFirstLocalPlayer) == 0x000008, "Wrong alignment on DynamicUIManager_AddSceneToFirstLocalPlayer");
static_assert(sizeof(DynamicUIManager_AddSceneToFirstLocalPlayer) == 0x000008, "Wrong size on DynamicUIManager_AddSceneToFirstLocalPlayer");
static_assert(offsetof(DynamicUIManager_AddSceneToFirstLocalPlayer, Scene) == 0x000000, "Member 'DynamicUIManager_AddSceneToFirstLocalPlayer::Scene' has a wrong offset!");

struct DynamicUIManager_RemoveScene final
{
public:
	const class UDynamicUIScene*                  Scene;
	class APlayerController*                      Player;
};
static_assert(alignof(DynamicUIManager_RemoveScene) == 0x000008, "Wrong alignment on DynamicUIManager_RemoveScene");
static_assert(sizeof(DynamicUIManager_RemoveScene) == 0x000010, "Wrong size on DynamicUIManager_RemoveScene");
static_assert(offsetof(DynamicUIManager_RemoveScene, Scene) == 0x000000, "Member 'DynamicUIManager_RemoveScene::Scene' has a wrong offset!");
static_assert(offsetof(DynamicUIManager_RemoveScene, Player) == 0x000008, "Member 'DynamicUIManager_RemoveScene::Player' has a wrong offset!");

struct DynamicUIManager_RemoveSceneFromFirstLocalPlayer final
{
public:
	const class UDynamicUIScene*                  Scene;
};
static_assert(alignof(DynamicUIManager_RemoveSceneFromFirstLocalPlayer) == 0x000008, "Wrong alignment on DynamicUIManager_RemoveSceneFromFirstLocalPlayer");
static_assert(sizeof(DynamicUIManager_RemoveSceneFromFirstLocalPlayer) == 0x000008, "Wrong size on DynamicUIManager_RemoveSceneFromFirstLocalPlayer");
static_assert(offsetof(DynamicUIManager_RemoveSceneFromFirstLocalPlayer, Scene) == 0x000000, "Member 'DynamicUIManager_RemoveSceneFromFirstLocalPlayer::Scene' has a wrong offset!");

struct DynamicUIManager_RemoveScenes final
{
public:
	TArray<class UDynamicUIScene*>                Scenes;
	class APlayerController*                      Player;
};
static_assert(alignof(DynamicUIManager_RemoveScenes) == 0x000008, "Wrong alignment on DynamicUIManager_RemoveScenes");
static_assert(sizeof(DynamicUIManager_RemoveScenes) == 0x000018, "Wrong size on DynamicUIManager_RemoveScenes");
static_assert(offsetof(DynamicUIManager_RemoveScenes, Scenes) == 0x000000, "Member 'DynamicUIManager_RemoveScenes::Scenes' has a wrong offset!");
static_assert(offsetof(DynamicUIManager_RemoveScenes, Player) == 0x000010, "Member 'DynamicUIManager_RemoveScenes::Player' has a wrong offset!");

}
