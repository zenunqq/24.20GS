#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "VerseGameplayTags_classes.hpp"

namespace SDK
{

class AVerseActorPayloadWrapper final : public AActor
{
public:
	uint8                                         Pad_288[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseActorPayloadWrapper">();
	}
	static class AVerseActorPayloadWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVerseActorPayloadWrapper>();
	}
};
static_assert(alignof(AVerseActorPayloadWrapper) == 0x000008, "Wrong alignment on AVerseActorPayloadWrapper");
static_assert(sizeof(AVerseActorPayloadWrapper) == 0x000290, "Wrong size on AVerseActorPayloadWrapper");

class UVerseFortniteBRTeamCollection : public UObject
{
public:
	uint8                                         Pad_28[0x68];

public:
	void OnActiveTeamArrayBuilt();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteBRTeamCollection">();
	}
	static class UVerseFortniteBRTeamCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteBRTeamCollection>();
	}
};
static_assert(alignof(UVerseFortniteBRTeamCollection) == 0x000008, "Wrong alignment on UVerseFortniteBRTeamCollection");
static_assert(sizeof(UVerseFortniteBRTeamCollection) == 0x000090, "Wrong size on UVerseFortniteBRTeamCollection");

class UVerseFortniteMinigameTeamCollection : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	void OnMinigameDestroyed(class AActor* DestroyedMinigame);
	void OnMinigameSetUp(class AFortMinigame* InMinigame);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteMinigameTeamCollection">();
	}
	static class UVerseFortniteMinigameTeamCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteMinigameTeamCollection>();
	}
};
static_assert(alignof(UVerseFortniteMinigameTeamCollection) == 0x000008, "Wrong alignment on UVerseFortniteMinigameTeamCollection");
static_assert(sizeof(UVerseFortniteMinigameTeamCollection) == 0x000048, "Wrong size on UVerseFortniteMinigameTeamCollection");

class UVerseFortniteActorWrapper : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	void OnActorDestroyed(class AActor* DestroyedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteActorWrapper">();
	}
	static class UVerseFortniteActorWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteActorWrapper>();
	}
};
static_assert(alignof(UVerseFortniteActorWrapper) == 0x000008, "Wrong alignment on UVerseFortniteActorWrapper");
static_assert(sizeof(UVerseFortniteActorWrapper) == 0x000048, "Wrong size on UVerseFortniteActorWrapper");

class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{
public:
	uint8                                         Pad_48[0x8];

public:
	void HandlePawnEliminated(class AFortPlayerPawnAthena* EliminatedPawn);
	void HandlePosessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteCharacter">();
	}
	static class UVerseFortniteCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteCharacter>();
	}
};
static_assert(alignof(UVerseFortniteCharacter) == 0x000008, "Wrong alignment on UVerseFortniteCharacter");
static_assert(sizeof(UVerseFortniteCharacter) == 0x000050, "Wrong size on UVerseFortniteCharacter");

class UTaggedObjectQueryWorldSubsystem final : public UTaggedObjectQueryWorldSubsystemBase
{
public:
	uint8                                         Pad_30[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TaggedObjectQueryWorldSubsystem">();
	}
	static class UTaggedObjectQueryWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTaggedObjectQueryWorldSubsystem>();
	}
};
static_assert(alignof(UTaggedObjectQueryWorldSubsystem) == 0x000008, "Wrong alignment on UTaggedObjectQueryWorldSubsystem");
static_assert(sizeof(UTaggedObjectQueryWorldSubsystem) == 0x000080, "Wrong size on UTaggedObjectQueryWorldSubsystem");

class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{
public:
	uint8                                         Pad_48[0x20];
	TArray<class UVerseFortnitePlayspaceExtensionBase*> Extensions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortnitePlayspace">();
	}
	static class UVerseFortnitePlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortnitePlayspace>();
	}
};
static_assert(alignof(UVerseFortnitePlayspace) == 0x000008, "Wrong alignment on UVerseFortnitePlayspace");
static_assert(sizeof(UVerseFortnitePlayspace) == 0x000078, "Wrong size on UVerseFortnitePlayspace");
static_assert(offsetof(UVerseFortnitePlayspace, Extensions) == 0x000068, "Member 'UVerseFortnitePlayspace::Extensions' has a wrong offset!");

class UVerseFortnitePlayspaceExtensionBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortnitePlayspaceExtensionBase">();
	}
	static class UVerseFortnitePlayspaceExtensionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortnitePlayspaceExtensionBase>();
	}
};
static_assert(alignof(UVerseFortnitePlayspaceExtensionBase) == 0x000008, "Wrong alignment on UVerseFortnitePlayspaceExtensionBase");
static_assert(sizeof(UVerseFortnitePlayspaceExtensionBase) == 0x000028, "Wrong size on UVerseFortnitePlayspaceExtensionBase");

class UVerseFortniteSubsystem final : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class AActor>, class UVerseFortniteActorWrapper*> ActorToWrapperMap;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseFortniteSubsystem">();
	}
	static class UVerseFortniteSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseFortniteSubsystem>();
	}
};
static_assert(alignof(UVerseFortniteSubsystem) == 0x000008, "Wrong alignment on UVerseFortniteSubsystem");
static_assert(sizeof(UVerseFortniteSubsystem) == 0x000080, "Wrong size on UVerseFortniteSubsystem");
static_assert(offsetof(UVerseFortniteSubsystem, ActorToWrapperMap) == 0x000030, "Member 'UVerseFortniteSubsystem::ActorToWrapperMap' has a wrong offset!");

}
