#pragma once

#include "Basic.hpp"

#include "ModularGameplay_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GameFrameworkComponentManager_AddReceiver final
{
public:
	class AActor*                                 Receiver;
	bool                                          bAddOnlyInGameWorlds;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameFrameworkComponentManager_AddReceiver) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_AddReceiver");
static_assert(sizeof(GameFrameworkComponentManager_AddReceiver) == 0x000010, "Wrong size on GameFrameworkComponentManager_AddReceiver");
static_assert(offsetof(GameFrameworkComponentManager_AddReceiver, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_AddReceiver::Receiver' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_AddReceiver, bAddOnlyInGameWorlds) == 0x000008, "Member 'GameFrameworkComponentManager_AddReceiver::bAddOnlyInGameWorlds' has a wrong offset!");

struct GameFrameworkComponentManager_RegisterAndCallForActorInitState final
{
public:
	class AActor*                                 Actor;
	class FName                                   FeatureName;
	struct FGameplayTag                           RequiredState;
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;
	bool                                          bCallImmediately;
	bool                                          ReturnValue;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(GameFrameworkComponentManager_RegisterAndCallForActorInitState) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_RegisterAndCallForActorInitState");
static_assert(sizeof(GameFrameworkComponentManager_RegisterAndCallForActorInitState) == 0x000020, "Wrong size on GameFrameworkComponentManager_RegisterAndCallForActorInitState");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, Actor) == 0x000000, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::Actor' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, FeatureName) == 0x000008, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::FeatureName' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, RequiredState) == 0x00000C, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::RequiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, Delegate) == 0x000010, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, bCallImmediately) == 0x00001C, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::bCallImmediately' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForActorInitState, ReturnValue) == 0x00001D, "Member 'GameFrameworkComponentManager_RegisterAndCallForActorInitState::ReturnValue' has a wrong offset!");

struct GameFrameworkComponentManager_RegisterAndCallForClassInitState final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;
	class FName                                   FeatureName;
	struct FGameplayTag                           RequiredState;
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;
	bool                                          bCallImmediately;
	bool                                          ReturnValue;
	uint8                                         Pad_3E[0x2];
};
static_assert(alignof(GameFrameworkComponentManager_RegisterAndCallForClassInitState) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_RegisterAndCallForClassInitState");
static_assert(sizeof(GameFrameworkComponentManager_RegisterAndCallForClassInitState) == 0x000040, "Wrong size on GameFrameworkComponentManager_RegisterAndCallForClassInitState");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, ActorClass) == 0x000000, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::ActorClass' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, FeatureName) == 0x000028, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::FeatureName' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, RequiredState) == 0x00002C, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::RequiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, Delegate) == 0x000030, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, bCallImmediately) == 0x00003C, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::bCallImmediately' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_RegisterAndCallForClassInitState, ReturnValue) == 0x00003D, "Member 'GameFrameworkComponentManager_RegisterAndCallForClassInitState::ReturnValue' has a wrong offset!");

struct GameFrameworkComponentManager_RemoveReceiver final
{
public:
	class AActor*                                 Receiver;
};
static_assert(alignof(GameFrameworkComponentManager_RemoveReceiver) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_RemoveReceiver");
static_assert(sizeof(GameFrameworkComponentManager_RemoveReceiver) == 0x000008, "Wrong size on GameFrameworkComponentManager_RemoveReceiver");
static_assert(offsetof(GameFrameworkComponentManager_RemoveReceiver, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_RemoveReceiver::Receiver' has a wrong offset!");

struct GameFrameworkComponentManager_SendExtensionEvent final
{
public:
	class AActor*                                 Receiver;
	class FName                                   EventName;
	bool                                          bOnlyInGameWorlds;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(GameFrameworkComponentManager_SendExtensionEvent) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_SendExtensionEvent");
static_assert(sizeof(GameFrameworkComponentManager_SendExtensionEvent) == 0x000010, "Wrong size on GameFrameworkComponentManager_SendExtensionEvent");
static_assert(offsetof(GameFrameworkComponentManager_SendExtensionEvent, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_SendExtensionEvent::Receiver' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_SendExtensionEvent, EventName) == 0x000008, "Member 'GameFrameworkComponentManager_SendExtensionEvent::EventName' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_SendExtensionEvent, bOnlyInGameWorlds) == 0x00000C, "Member 'GameFrameworkComponentManager_SendExtensionEvent::bOnlyInGameWorlds' has a wrong offset!");

struct GameFrameworkComponentManager_UnregisterActorInitStateDelegate final
{
public:
	class AActor*                                 Actor;
	TDelegate<void(struct FActorInitStateChangedParams& Params)> DelegateToRemove;
	bool                                          ReturnValue;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_UnregisterActorInitStateDelegate");
static_assert(sizeof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate) == 0x000018, "Wrong size on GameFrameworkComponentManager_UnregisterActorInitStateDelegate");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate, Actor) == 0x000000, "Member 'GameFrameworkComponentManager_UnregisterActorInitStateDelegate::Actor' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate, DelegateToRemove) == 0x000008, "Member 'GameFrameworkComponentManager_UnregisterActorInitStateDelegate::DelegateToRemove' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterActorInitStateDelegate, ReturnValue) == 0x000014, "Member 'GameFrameworkComponentManager_UnregisterActorInitStateDelegate::ReturnValue' has a wrong offset!");

struct GameFrameworkComponentManager_UnregisterClassInitStateDelegate final
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;
	TDelegate<void(struct FActorInitStateChangedParams& Params)> DelegateToRemove;
	bool                                          ReturnValue;
	uint8                                         Pad_35[0x3];
};
static_assert(alignof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate) == 0x000008, "Wrong alignment on GameFrameworkComponentManager_UnregisterClassInitStateDelegate");
static_assert(sizeof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate) == 0x000038, "Wrong size on GameFrameworkComponentManager_UnregisterClassInitStateDelegate");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate, ActorClass) == 0x000000, "Member 'GameFrameworkComponentManager_UnregisterClassInitStateDelegate::ActorClass' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate, DelegateToRemove) == 0x000028, "Member 'GameFrameworkComponentManager_UnregisterClassInitStateDelegate::DelegateToRemove' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_UnregisterClassInitStateDelegate, ReturnValue) == 0x000034, "Member 'GameFrameworkComponentManager_UnregisterClassInitStateDelegate::ReturnValue' has a wrong offset!");

struct GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange final
{
public:
	struct FGameplayTag                           RequiredState;
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;
	bool                                          bCallImmediately;
	bool                                          ReturnValue;
	uint8                                         Pad_12[0x2];
};
static_assert(alignof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange");
static_assert(sizeof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange) == 0x000014, "Wrong size on GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, RequiredState) == 0x000000, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::RequiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, Delegate) == 0x000004, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, bCallImmediately) == 0x000010, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::bCallImmediately' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, ReturnValue) == 0x000011, "Member 'GameFrameworkInitStateInterface_RegisterAndCallForInitStateChange::ReturnValue' has a wrong offset!");

struct GameFrameworkInitStateInterface_UnregisterInitStateDelegate final
{
public:
	TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_UnregisterInitStateDelegate");
static_assert(sizeof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate) == 0x000010, "Wrong size on GameFrameworkInitStateInterface_UnregisterInitStateDelegate");
static_assert(offsetof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate, Delegate) == 0x000000, "Member 'GameFrameworkInitStateInterface_UnregisterInitStateDelegate::Delegate' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_UnregisterInitStateDelegate, ReturnValue) == 0x00000C, "Member 'GameFrameworkInitStateInterface_UnregisterInitStateDelegate::ReturnValue' has a wrong offset!");

struct GameFrameworkInitStateInterface_GetFeatureName final
{
public:
	class FName                                   ReturnValue;
};
static_assert(alignof(GameFrameworkInitStateInterface_GetFeatureName) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_GetFeatureName");
static_assert(sizeof(GameFrameworkInitStateInterface_GetFeatureName) == 0x000004, "Wrong size on GameFrameworkInitStateInterface_GetFeatureName");
static_assert(offsetof(GameFrameworkInitStateInterface_GetFeatureName, ReturnValue) == 0x000000, "Member 'GameFrameworkInitStateInterface_GetFeatureName::ReturnValue' has a wrong offset!");

struct GameFrameworkInitStateInterface_GetInitState final
{
public:
	struct FGameplayTag                           ReturnValue;
};
static_assert(alignof(GameFrameworkInitStateInterface_GetInitState) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_GetInitState");
static_assert(sizeof(GameFrameworkInitStateInterface_GetInitState) == 0x000004, "Wrong size on GameFrameworkInitStateInterface_GetInitState");
static_assert(offsetof(GameFrameworkInitStateInterface_GetInitState, ReturnValue) == 0x000000, "Member 'GameFrameworkInitStateInterface_GetInitState::ReturnValue' has a wrong offset!");

struct GameFrameworkInitStateInterface_HasReachedInitState final
{
public:
	struct FGameplayTag                           DesiredState;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(GameFrameworkInitStateInterface_HasReachedInitState) == 0x000004, "Wrong alignment on GameFrameworkInitStateInterface_HasReachedInitState");
static_assert(sizeof(GameFrameworkInitStateInterface_HasReachedInitState) == 0x000008, "Wrong size on GameFrameworkInitStateInterface_HasReachedInitState");
static_assert(offsetof(GameFrameworkInitStateInterface_HasReachedInitState, DesiredState) == 0x000000, "Member 'GameFrameworkInitStateInterface_HasReachedInitState::DesiredState' has a wrong offset!");
static_assert(offsetof(GameFrameworkInitStateInterface_HasReachedInitState, ReturnValue) == 0x000004, "Member 'GameFrameworkInitStateInterface_HasReachedInitState::ReturnValue' has a wrong offset!");

}
