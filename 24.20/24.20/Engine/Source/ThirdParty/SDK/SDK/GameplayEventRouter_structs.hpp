#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EEventBubblingRule : uint8
{
	None                                     = 0,
	Down                                     = 1,
	Up                                       = 2,
	EEventBubblingRule_MAX                   = 3,
};

struct alignas(0x04) FGameplayEventId final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FGameplayEventId) == 0x000004, "Wrong alignment on FGameplayEventId");
static_assert(sizeof(FGameplayEventId) == 0x000010, "Wrong size on FGameplayEventId");

struct FGameplayEventListenerHandle final
{
public:
	uint8                                         Pad_0[0x10];
	int32                                         Handle;
	uint8                                         Pad_14[0x8];
};
static_assert(alignof(FGameplayEventListenerHandle) == 0x000004, "Wrong alignment on FGameplayEventListenerHandle");
static_assert(sizeof(FGameplayEventListenerHandle) == 0x00001C, "Wrong size on FGameplayEventListenerHandle");
static_assert(offsetof(FGameplayEventListenerHandle, Handle) == 0x000010, "Member 'FGameplayEventListenerHandle::Handle' has a wrong offset!");

struct alignas(0x10) FGameplayEventListenerData final
{
public:
	uint8                                         Pad_0[0xC0];
	class UScriptStruct*                          EventType;
	class UObject*                                EventContext;
	uint8                                         Pad_D0[0x20];
};
static_assert(alignof(FGameplayEventListenerData) == 0x000010, "Wrong alignment on FGameplayEventListenerData");
static_assert(sizeof(FGameplayEventListenerData) == 0x0000F0, "Wrong size on FGameplayEventListenerData");
static_assert(offsetof(FGameplayEventListenerData, EventType) == 0x0000C0, "Member 'FGameplayEventListenerData::EventType' has a wrong offset!");
static_assert(offsetof(FGameplayEventListenerData, EventContext) == 0x0000C8, "Member 'FGameplayEventListenerData::EventContext' has a wrong offset!");

struct alignas(0x08) FGameplayEventListenerList final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FGameplayEventListenerList) == 0x000008, "Wrong alignment on FGameplayEventListenerList");
static_assert(sizeof(FGameplayEventListenerList) == 0x000038, "Wrong size on FGameplayEventListenerList");

}
