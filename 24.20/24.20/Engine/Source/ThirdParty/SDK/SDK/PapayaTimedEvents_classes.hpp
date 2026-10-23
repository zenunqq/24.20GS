#pragma once

#include "Basic.hpp"

#include "PapayaTimedEvents_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APapayaTimedEvents final : public AActor
{
public:
	TMap<class FString, class UMediaPlayer*>      MediaPlayerMap;
	class UPapayaTimedEventsResponderComponent*   MeshEventResponder;
	TArray<class AActor*>                         TimedEventActorTargets;
	uint8                                         Pad_2F0[0x8];
	struct FMediaTimeEventArray                   TimedEventsArray;
	uint8                                         Pad_410[0x18];
	class FString                                 ScreenName;
	uint8                                         Pad_438[0x28];

public:
	void AddTimedEvent_Native(const class FString& EventName, int64 Time, const class FString& EventParam);
	void OnRep_ScreenName(const class FString& PreviousValue);
	void OnRep_TimedEventsArray(const struct FMediaTimeEventArray& PreviousValue);
	void ResetTimedEvents_Native();
	void SetupTimedEvents_Native(const class FString& ScreenName_0);
	void ShutdownTimedEvents_Native();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PapayaTimedEvents">();
	}
	static class APapayaTimedEvents* GetDefaultObj()
	{
		return GetDefaultObjImpl<APapayaTimedEvents>();
	}
};
static_assert(alignof(APapayaTimedEvents) == 0x000008, "Wrong alignment on APapayaTimedEvents");
static_assert(sizeof(APapayaTimedEvents) == 0x000460, "Wrong size on APapayaTimedEvents");
static_assert(offsetof(APapayaTimedEvents, MediaPlayerMap) == 0x000288, "Member 'APapayaTimedEvents::MediaPlayerMap' has a wrong offset!");
static_assert(offsetof(APapayaTimedEvents, MeshEventResponder) == 0x0002D8, "Member 'APapayaTimedEvents::MeshEventResponder' has a wrong offset!");
static_assert(offsetof(APapayaTimedEvents, TimedEventActorTargets) == 0x0002E0, "Member 'APapayaTimedEvents::TimedEventActorTargets' has a wrong offset!");
static_assert(offsetof(APapayaTimedEvents, TimedEventsArray) == 0x0002F8, "Member 'APapayaTimedEvents::TimedEventsArray' has a wrong offset!");
static_assert(offsetof(APapayaTimedEvents, ScreenName) == 0x000428, "Member 'APapayaTimedEvents::ScreenName' has a wrong offset!");

class UPapayaTimedEventsResponderComponent final : public UFortEventResponderComponent
{
public:
	uint8                                         Pad_E8[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PapayaTimedEventsResponderComponent">();
	}
	static class UPapayaTimedEventsResponderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPapayaTimedEventsResponderComponent>();
	}
};
static_assert(alignof(UPapayaTimedEventsResponderComponent) == 0x000008, "Wrong alignment on UPapayaTimedEventsResponderComponent");
static_assert(sizeof(UPapayaTimedEventsResponderComponent) == 0x000160, "Wrong size on UPapayaTimedEventsResponderComponent");

}
