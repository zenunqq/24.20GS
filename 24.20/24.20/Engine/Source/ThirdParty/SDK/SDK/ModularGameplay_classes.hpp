#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UGameFrameworkComponent : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkComponent">();
	}
	static class UGameFrameworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFrameworkComponent>();
	}
};
static_assert(alignof(UGameFrameworkComponent) == 0x000008, "Wrong alignment on UGameFrameworkComponent");
static_assert(sizeof(UGameFrameworkComponent) == 0x0000A0, "Wrong size on UGameFrameworkComponent");

class UControllerComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControllerComponent">();
	}
	static class UControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerComponent>();
	}
};
static_assert(alignof(UControllerComponent) == 0x000008, "Wrong alignment on UControllerComponent");
static_assert(sizeof(UControllerComponent) == 0x0000A0, "Wrong size on UControllerComponent");

class UGameFrameworkComponentManager final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x208];

public:
	void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
	bool RegisterAndCallForActorInitState(class AActor* Actor, class FName FeatureName, const struct FGameplayTag& RequiredState, TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate, bool bCallImmediately);
	bool RegisterAndCallForClassInitState(TSoftClassPtr<class UClass> ActorClass, class FName FeatureName, const struct FGameplayTag& RequiredState, TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate, bool bCallImmediately);
	void RemoveReceiver(class AActor* Receiver);
	void SendExtensionEvent(class AActor* Receiver, class FName EventName, bool bOnlyInGameWorlds);
	bool UnregisterActorInitStateDelegate(class AActor* Actor, TDelegate<void(struct FActorInitStateChangedParams& Params)> DelegateToRemove);
	bool UnregisterClassInitStateDelegate(TSoftClassPtr<class UClass> ActorClass, TDelegate<void(struct FActorInitStateChangedParams& Params)> DelegateToRemove);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkComponentManager">();
	}
	static class UGameFrameworkComponentManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFrameworkComponentManager>();
	}
};
static_assert(alignof(UGameFrameworkComponentManager) == 0x000008, "Wrong alignment on UGameFrameworkComponentManager");
static_assert(sizeof(UGameFrameworkComponentManager) == 0x000238, "Wrong size on UGameFrameworkComponentManager");

class IGameFrameworkInitStateInterface final : public IInterface
{
public:
	bool RegisterAndCallForInitStateChange(const struct FGameplayTag& RequiredState, TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate, bool bCallImmediately);
	bool UnregisterInitStateDelegate(TDelegate<void(struct FActorInitStateChangedParams& Params)> Delegate);

	class FName GetFeatureName() const;
	struct FGameplayTag GetInitState() const;
	bool HasReachedInitState(const struct FGameplayTag& DesiredState) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkInitStateInterface">();
	}
	static class IGameFrameworkInitStateInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameFrameworkInitStateInterface>();
	}
};
static_assert(alignof(IGameFrameworkInitStateInterface) == 0x000008, "Wrong alignment on IGameFrameworkInitStateInterface");
static_assert(sizeof(IGameFrameworkInitStateInterface) == 0x000028, "Wrong size on IGameFrameworkInitStateInterface");

class UGameStateComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameStateComponent">();
	}
	static class UGameStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameStateComponent>();
	}
};
static_assert(alignof(UGameStateComponent) == 0x000008, "Wrong alignment on UGameStateComponent");
static_assert(sizeof(UGameStateComponent) == 0x0000A0, "Wrong size on UGameStateComponent");

class UPawnComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnComponent">();
	}
	static class UPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnComponent>();
	}
};
static_assert(alignof(UPawnComponent) == 0x000008, "Wrong alignment on UPawnComponent");
static_assert(sizeof(UPawnComponent) == 0x0000A0, "Wrong size on UPawnComponent");

class UPlayerStateComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerStateComponent">();
	}
	static class UPlayerStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerStateComponent>();
	}
};
static_assert(alignof(UPlayerStateComponent) == 0x000008, "Wrong alignment on UPlayerStateComponent");
static_assert(sizeof(UPlayerStateComponent) == 0x0000A0, "Wrong size on UPlayerStateComponent");

}
