#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayEventRouter_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAsyncAction_StartListeningToEvent final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class UAsyncAction_StartListeningToEvent* ProxyObject)> OnEventReceived;
	uint8                                         Pad_40[0x40];

public:
	static class UAsyncAction_StartListeningToEvent* StartListeningToEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule);

	bool GetPayload(int32& OutPayload);
	void StopListeningToEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_StartListeningToEvent">();
	}
	static class UAsyncAction_StartListeningToEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_StartListeningToEvent>();
	}
};
static_assert(alignof(UAsyncAction_StartListeningToEvent) == 0x000008, "Wrong alignment on UAsyncAction_StartListeningToEvent");
static_assert(sizeof(UAsyncAction_StartListeningToEvent) == 0x000080, "Wrong size on UAsyncAction_StartListeningToEvent");
static_assert(offsetof(UAsyncAction_StartListeningToEvent, OnEventReceived) == 0x000030, "Member 'UAsyncAction_StartListeningToEvent::OnEventReceived' has a wrong offset!");

class UAsyncAction_StartListeningToStatefulEvent final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class UAsyncAction_StartListeningToStatefulEvent* ProxyObject)> OnEventReceived;
	TMulticastInlineDelegate<void(class UAsyncAction_StartListeningToStatefulEvent* ProxyObject)> OnSavedEventStateExists;
	TMulticastInlineDelegate<void(class UAsyncAction_StartListeningToStatefulEvent* ProxyObject)> OnEventStateCleared;
	uint8                                         Pad_60[0x40];

public:
	static class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(class UObject* WorldContextObject, class UGameplayEventRouterComponent* Target, class UScriptStruct* EventType, class UObject* Context, EEventBubblingRule EventBubblingRule);

	bool GetPayload(int32& OutPayload);
	void StopListeningToStatefulEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_StartListeningToStatefulEvent">();
	}
	static class UAsyncAction_StartListeningToStatefulEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_StartListeningToStatefulEvent>();
	}
};
static_assert(alignof(UAsyncAction_StartListeningToStatefulEvent) == 0x000008, "Wrong alignment on UAsyncAction_StartListeningToStatefulEvent");
static_assert(sizeof(UAsyncAction_StartListeningToStatefulEvent) == 0x0000A0, "Wrong size on UAsyncAction_StartListeningToStatefulEvent");
static_assert(offsetof(UAsyncAction_StartListeningToStatefulEvent, OnEventReceived) == 0x000030, "Member 'UAsyncAction_StartListeningToStatefulEvent::OnEventReceived' has a wrong offset!");
static_assert(offsetof(UAsyncAction_StartListeningToStatefulEvent, OnSavedEventStateExists) == 0x000040, "Member 'UAsyncAction_StartListeningToStatefulEvent::OnSavedEventStateExists' has a wrong offset!");
static_assert(offsetof(UAsyncAction_StartListeningToStatefulEvent, OnEventStateCleared) == 0x000050, "Member 'UAsyncAction_StartListeningToStatefulEvent::OnEventStateCleared' has a wrong offset!");

class UGameplayEventRouterComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x228];

public:
	void ClearEventState(const class UScriptStruct* EventType);
	void ClearEventStateByContext(const class UScriptStruct* EventType, const class UObject* Context);
	bool K2_BroadcastEvent(const int32& EventData, class UObject* EventContext);
	bool K2_BroadcastStatefulEvent(const int32& EventData, class UObject* EventContext);
	void StopListeningToEvent(struct FGameplayEventListenerHandle& HandleToRemove);

	bool HasValidEventState(const class UScriptStruct* EventType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventRouterComponent">();
	}
	static class UGameplayEventRouterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayEventRouterComponent>();
	}
};
static_assert(alignof(UGameplayEventRouterComponent) == 0x000008, "Wrong alignment on UGameplayEventRouterComponent");
static_assert(sizeof(UGameplayEventRouterComponent) == 0x0002C8, "Wrong size on UGameplayEventRouterComponent");

class IGameplayEventRouterOwnerInterface final : public IInterface
{
public:
	TSubclassOf<class UGameplayEventRouterComponent> GetEventRouterClass() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventRouterOwnerInterface">();
	}
	static class IGameplayEventRouterOwnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayEventRouterOwnerInterface>();
	}
};
static_assert(alignof(IGameplayEventRouterOwnerInterface) == 0x000008, "Wrong alignment on IGameplayEventRouterOwnerInterface");
static_assert(sizeof(IGameplayEventRouterOwnerInterface) == 0x000028, "Wrong size on IGameplayEventRouterOwnerInterface");

class UGameplayEventRouterSubsytem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0xB0];

public:
	static class UGameplayEventRouterComponent* GetEventRouter(class UClass* Scope, class AActor* ContextActor);
	static class UGameplayEventRouterComponent* GetGlobalEventRouter(const class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayEventRouterSubsytem">();
	}
	static class UGameplayEventRouterSubsytem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayEventRouterSubsytem>();
	}
};
static_assert(alignof(UGameplayEventRouterSubsytem) == 0x000008, "Wrong alignment on UGameplayEventRouterSubsytem");
static_assert(sizeof(UGameplayEventRouterSubsytem) == 0x0000E0, "Wrong size on UGameplayEventRouterSubsytem");

}
