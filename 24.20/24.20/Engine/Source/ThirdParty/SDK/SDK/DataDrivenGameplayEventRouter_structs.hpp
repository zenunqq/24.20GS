#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayEventRouter_structs.hpp"

namespace SDK
{

enum class EGameplayEventNetPolicy : uint8
{
	ServerOnly                               = 0,
	ClientOrServer                           = 1,
	EGameplayEventNetPolicy_MAX              = 2,
};

struct FGameplayEventDefinition final
{
public:
	class UScriptStruct*                          EventType;
	bool                                          bIsStateful;
	EGameplayEventNetPolicy                       NetPolicy;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FGameplayEventDefinition) == 0x000008, "Wrong alignment on FGameplayEventDefinition");
static_assert(sizeof(FGameplayEventDefinition) == 0x000010, "Wrong size on FGameplayEventDefinition");
static_assert(offsetof(FGameplayEventDefinition, EventType) == 0x000000, "Member 'FGameplayEventDefinition::EventType' has a wrong offset!");
static_assert(offsetof(FGameplayEventDefinition, bIsStateful) == 0x000008, "Member 'FGameplayEventDefinition::bIsStateful' has a wrong offset!");
static_assert(offsetof(FGameplayEventDefinition, NetPolicy) == 0x000009, "Member 'FGameplayEventDefinition::NetPolicy' has a wrong offset!");

struct alignas(0x08) FGameplayEventDescriptor final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FGameplayEventDescriptor) == 0x000008, "Wrong alignment on FGameplayEventDescriptor");
static_assert(sizeof(FGameplayEventDescriptor) == 0x000008, "Wrong size on FGameplayEventDescriptor");

struct FGameplayEventSubscription final
{
public:
	TSoftObjectPtr<class UObject>                 Object;
	struct FMemberReference                       EventDescriptor;
	struct FGameplayEventListenerHandle           EventHandle;
	uint8                                         Pad_74[0x4];
};
static_assert(alignof(FGameplayEventSubscription) == 0x000008, "Wrong alignment on FGameplayEventSubscription");
static_assert(sizeof(FGameplayEventSubscription) == 0x000078, "Wrong size on FGameplayEventSubscription");
static_assert(offsetof(FGameplayEventSubscription, Object) == 0x000000, "Member 'FGameplayEventSubscription::Object' has a wrong offset!");
static_assert(offsetof(FGameplayEventSubscription, EventDescriptor) == 0x000028, "Member 'FGameplayEventSubscription::EventDescriptor' has a wrong offset!");
static_assert(offsetof(FGameplayEventSubscription, EventHandle) == 0x000058, "Member 'FGameplayEventSubscription::EventHandle' has a wrong offset!");

struct FGameplayEventHandlerFunction final
{
public:
	struct FMemberReference                       EventHandlerFunction;
	TMap<class FName, class FString>              EventHandlerFunctionDefaultValues;
};
static_assert(alignof(FGameplayEventHandlerFunction) == 0x000008, "Wrong alignment on FGameplayEventHandlerFunction");
static_assert(sizeof(FGameplayEventHandlerFunction) == 0x000080, "Wrong size on FGameplayEventHandlerFunction");
static_assert(offsetof(FGameplayEventHandlerFunction, EventHandlerFunction) == 0x000000, "Member 'FGameplayEventHandlerFunction::EventHandlerFunction' has a wrong offset!");
static_assert(offsetof(FGameplayEventHandlerFunction, EventHandlerFunctionDefaultValues) == 0x000030, "Member 'FGameplayEventHandlerFunction::EventHandlerFunctionDefaultValues' has a wrong offset!");

struct FGameplayEventHandlerFunctions final
{
public:
	struct FGameplayEventHandlerFunction          OnEventReceived;
	struct FGameplayEventHandlerFunction          OnStatefulEventApplied;
	struct FGameplayEventHandlerFunction          OnStatefulEventCleared;
};
static_assert(alignof(FGameplayEventHandlerFunctions) == 0x000008, "Wrong alignment on FGameplayEventHandlerFunctions");
static_assert(sizeof(FGameplayEventHandlerFunctions) == 0x000180, "Wrong size on FGameplayEventHandlerFunctions");
static_assert(offsetof(FGameplayEventHandlerFunctions, OnEventReceived) == 0x000000, "Member 'FGameplayEventHandlerFunctions::OnEventReceived' has a wrong offset!");
static_assert(offsetof(FGameplayEventHandlerFunctions, OnStatefulEventApplied) == 0x000080, "Member 'FGameplayEventHandlerFunctions::OnStatefulEventApplied' has a wrong offset!");
static_assert(offsetof(FGameplayEventHandlerFunctions, OnStatefulEventCleared) == 0x000100, "Member 'FGameplayEventHandlerFunctions::OnStatefulEventCleared' has a wrong offset!");

struct FGameplayEventFunction final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<struct FGameplayEventSubscription>     EventSubscriptions;
};
static_assert(alignof(FGameplayEventFunction) == 0x000008, "Wrong alignment on FGameplayEventFunction");
static_assert(sizeof(FGameplayEventFunction) == 0x000018, "Wrong size on FGameplayEventFunction");
static_assert(offsetof(FGameplayEventFunction, EventSubscriptions) == 0x000008, "Member 'FGameplayEventFunction::EventSubscriptions' has a wrong offset!");

}
