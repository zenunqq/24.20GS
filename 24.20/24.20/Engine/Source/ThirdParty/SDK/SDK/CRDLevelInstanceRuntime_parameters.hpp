#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor final
{
public:
	class AFortLevelInstanceSaveActor*            ReturnValue;
};
static_assert(alignof(LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor");
static_assert(sizeof(LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor) == 0x000008, "Wrong size on LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor");
static_assert(offsetof(LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor, ReturnValue) == 0x000000, "Member 'LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor::ReturnValue' has a wrong offset!");

struct LevelInstanceGameplayVolume_HandleActorHealthChanged final
{
public:
	class AActor*                                 Actor;
	float                                         NewHealth;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(LevelInstanceGameplayVolume_HandleActorHealthChanged) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_HandleActorHealthChanged");
static_assert(sizeof(LevelInstanceGameplayVolume_HandleActorHealthChanged) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_HandleActorHealthChanged");
static_assert(offsetof(LevelInstanceGameplayVolume_HandleActorHealthChanged, Actor) == 0x000000, "Member 'LevelInstanceGameplayVolume_HandleActorHealthChanged::Actor' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_HandleActorHealthChanged, NewHealth) == 0x000008, "Member 'LevelInstanceGameplayVolume_HandleActorHealthChanged::NewHealth' has a wrong offset!");

struct LevelInstanceGameplayVolume_LevelInstanceContentChanged final
{
public:
	const class AActor*                           InstigatorActor;
};
static_assert(alignof(LevelInstanceGameplayVolume_LevelInstanceContentChanged) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_LevelInstanceContentChanged");
static_assert(sizeof(LevelInstanceGameplayVolume_LevelInstanceContentChanged) == 0x000008, "Wrong size on LevelInstanceGameplayVolume_LevelInstanceContentChanged");
static_assert(offsetof(LevelInstanceGameplayVolume_LevelInstanceContentChanged, InstigatorActor) == 0x000000, "Member 'LevelInstanceGameplayVolume_LevelInstanceContentChanged::InstigatorActor' has a wrong offset!");

struct LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged final
{
public:
	const class AActor*                           InstigatorActor;
	TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection;
};
static_assert(alignof(LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged");
static_assert(sizeof(LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged) == 0x000030, "Wrong size on LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged");
static_assert(offsetof(LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged, InstigatorActor) == 0x000000, "Member 'LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged::InstigatorActor' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged, ContentCollection) == 0x000008, "Member 'LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged::ContentCollection' has a wrong offset!");

struct LevelInstanceGameplayVolume_LevelInstanceNameChanged final
{
public:
	class FString                                 Name_0;
};
static_assert(alignof(LevelInstanceGameplayVolume_LevelInstanceNameChanged) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_LevelInstanceNameChanged");
static_assert(sizeof(LevelInstanceGameplayVolume_LevelInstanceNameChanged) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_LevelInstanceNameChanged");
static_assert(offsetof(LevelInstanceGameplayVolume_LevelInstanceNameChanged, Name_0) == 0x000000, "Member 'LevelInstanceGameplayVolume_LevelInstanceNameChanged::Name_0' has a wrong offset!");

struct LevelInstanceGameplayVolume_LevelInstanceSizeChanged final
{
public:
	const class AActor*                           InstigatorActor;
};
static_assert(alignof(LevelInstanceGameplayVolume_LevelInstanceSizeChanged) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_LevelInstanceSizeChanged");
static_assert(sizeof(LevelInstanceGameplayVolume_LevelInstanceSizeChanged) == 0x000008, "Wrong size on LevelInstanceGameplayVolume_LevelInstanceSizeChanged");
static_assert(offsetof(LevelInstanceGameplayVolume_LevelInstanceSizeChanged, InstigatorActor) == 0x000000, "Member 'LevelInstanceGameplayVolume_LevelInstanceSizeChanged::InstigatorActor' has a wrong offset!");

struct LevelInstanceGameplayVolume_OnMinigameStateChanged final
{
public:
	class AFortMinigame*                          Minigame;
	EFortMinigameState                            MinigameState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(LevelInstanceGameplayVolume_OnMinigameStateChanged) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_OnMinigameStateChanged");
static_assert(sizeof(LevelInstanceGameplayVolume_OnMinigameStateChanged) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_OnMinigameStateChanged");
static_assert(offsetof(LevelInstanceGameplayVolume_OnMinigameStateChanged, Minigame) == 0x000000, "Member 'LevelInstanceGameplayVolume_OnMinigameStateChanged::Minigame' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_OnMinigameStateChanged, MinigameState) == 0x000008, "Member 'LevelInstanceGameplayVolume_OnMinigameStateChanged::MinigameState' has a wrong offset!");

struct LevelInstanceGameplayVolume_RemoveActorWhenDied final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(LevelInstanceGameplayVolume_RemoveActorWhenDied) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_RemoveActorWhenDied");
static_assert(sizeof(LevelInstanceGameplayVolume_RemoveActorWhenDied) == 0x000060, "Wrong size on LevelInstanceGameplayVolume_RemoveActorWhenDied");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, DamagedActor) == 0x000000, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, Damage) == 0x000008, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::Damage' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, InstigatedBy) == 0x000010, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, DamageCauser) == 0x000018, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, HitLocation) == 0x000020, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::HitLocation' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, FHitComponent) == 0x000038, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, BoneName) == 0x000040, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::BoneName' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenDied, Momentum) == 0x000048, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenDied::Momentum' has a wrong offset!");

struct LevelInstanceGameplayVolume_RemoveActorWhenEndPlay final
{
public:
	class AActor*                                 Actor;
	EEndPlayReason                                EndPlayReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(LevelInstanceGameplayVolume_RemoveActorWhenEndPlay) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_RemoveActorWhenEndPlay");
static_assert(sizeof(LevelInstanceGameplayVolume_RemoveActorWhenEndPlay) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_RemoveActorWhenEndPlay");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenEndPlay, Actor) == 0x000000, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(LevelInstanceGameplayVolume_RemoveActorWhenEndPlay, EndPlayReason) == 0x000008, "Member 'LevelInstanceGameplayVolume_RemoveActorWhenEndPlay::EndPlayReason' has a wrong offset!");

struct LevelInstanceGameplayVolume_SetEditMode final
{
public:
	bool                                          bInEditMode;
};
static_assert(alignof(LevelInstanceGameplayVolume_SetEditMode) == 0x000001, "Wrong alignment on LevelInstanceGameplayVolume_SetEditMode");
static_assert(sizeof(LevelInstanceGameplayVolume_SetEditMode) == 0x000001, "Wrong size on LevelInstanceGameplayVolume_SetEditMode");
static_assert(offsetof(LevelInstanceGameplayVolume_SetEditMode, bInEditMode) == 0x000000, "Member 'LevelInstanceGameplayVolume_SetEditMode::bInEditMode' has a wrong offset!");

struct LevelInstanceGameplayVolume_SetLevelInstanceActorGuid final
{
public:
	struct FGuid                                  InLevelInstanceActorGuid;
};
static_assert(alignof(LevelInstanceGameplayVolume_SetLevelInstanceActorGuid) == 0x000004, "Wrong alignment on LevelInstanceGameplayVolume_SetLevelInstanceActorGuid");
static_assert(sizeof(LevelInstanceGameplayVolume_SetLevelInstanceActorGuid) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_SetLevelInstanceActorGuid");
static_assert(offsetof(LevelInstanceGameplayVolume_SetLevelInstanceActorGuid, InLevelInstanceActorGuid) == 0x000000, "Member 'LevelInstanceGameplayVolume_SetLevelInstanceActorGuid::InLevelInstanceActorGuid' has a wrong offset!");

struct LevelInstanceGameplayVolume_SetLevelInstanceContentCollection final
{
public:
	TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection;
};
static_assert(alignof(LevelInstanceGameplayVolume_SetLevelInstanceContentCollection) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_SetLevelInstanceContentCollection");
static_assert(sizeof(LevelInstanceGameplayVolume_SetLevelInstanceContentCollection) == 0x000028, "Wrong size on LevelInstanceGameplayVolume_SetLevelInstanceContentCollection");
static_assert(offsetof(LevelInstanceGameplayVolume_SetLevelInstanceContentCollection, ContentCollection) == 0x000000, "Member 'LevelInstanceGameplayVolume_SetLevelInstanceContentCollection::ContentCollection' has a wrong offset!");

struct LevelInstanceGameplayVolume_SetLevelInstanceName final
{
public:
	class FString                                 InName;
};
static_assert(alignof(LevelInstanceGameplayVolume_SetLevelInstanceName) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_SetLevelInstanceName");
static_assert(sizeof(LevelInstanceGameplayVolume_SetLevelInstanceName) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_SetLevelInstanceName");
static_assert(offsetof(LevelInstanceGameplayVolume_SetLevelInstanceName, InName) == 0x000000, "Member 'LevelInstanceGameplayVolume_SetLevelInstanceName::InName' has a wrong offset!");

struct LevelInstanceGameplayVolume_SetReadyForInstantiation final
{
public:
	bool                                          bReady;
};
static_assert(alignof(LevelInstanceGameplayVolume_SetReadyForInstantiation) == 0x000001, "Wrong alignment on LevelInstanceGameplayVolume_SetReadyForInstantiation");
static_assert(sizeof(LevelInstanceGameplayVolume_SetReadyForInstantiation) == 0x000001, "Wrong size on LevelInstanceGameplayVolume_SetReadyForInstantiation");
static_assert(offsetof(LevelInstanceGameplayVolume_SetReadyForInstantiation, bReady) == 0x000000, "Member 'LevelInstanceGameplayVolume_SetReadyForInstantiation::bReady' has a wrong offset!");

struct LevelInstanceGameplayVolume_SetWantsLevelLoaded final
{
public:
	bool                                          bInWantsLevelLoaded;
};
static_assert(alignof(LevelInstanceGameplayVolume_SetWantsLevelLoaded) == 0x000001, "Wrong alignment on LevelInstanceGameplayVolume_SetWantsLevelLoaded");
static_assert(sizeof(LevelInstanceGameplayVolume_SetWantsLevelLoaded) == 0x000001, "Wrong size on LevelInstanceGameplayVolume_SetWantsLevelLoaded");
static_assert(offsetof(LevelInstanceGameplayVolume_SetWantsLevelLoaded, bInWantsLevelLoaded) == 0x000000, "Member 'LevelInstanceGameplayVolume_SetWantsLevelLoaded::bInWantsLevelLoaded' has a wrong offset!");

struct LevelInstanceGameplayVolume_GetLevelInstanceName final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(LevelInstanceGameplayVolume_GetLevelInstanceName) == 0x000008, "Wrong alignment on LevelInstanceGameplayVolume_GetLevelInstanceName");
static_assert(sizeof(LevelInstanceGameplayVolume_GetLevelInstanceName) == 0x000010, "Wrong size on LevelInstanceGameplayVolume_GetLevelInstanceName");
static_assert(offsetof(LevelInstanceGameplayVolume_GetLevelInstanceName, ReturnValue) == 0x000000, "Member 'LevelInstanceGameplayVolume_GetLevelInstanceName::ReturnValue' has a wrong offset!");

struct LevelInstanceGameplayVolume_IsDisabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LevelInstanceGameplayVolume_IsDisabled) == 0x000001, "Wrong alignment on LevelInstanceGameplayVolume_IsDisabled");
static_assert(sizeof(LevelInstanceGameplayVolume_IsDisabled) == 0x000001, "Wrong size on LevelInstanceGameplayVolume_IsDisabled");
static_assert(offsetof(LevelInstanceGameplayVolume_IsDisabled, ReturnValue) == 0x000000, "Member 'LevelInstanceGameplayVolume_IsDisabled::ReturnValue' has a wrong offset!");

struct LevelInstanceGameplayVolume_IsInEditMode final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LevelInstanceGameplayVolume_IsInEditMode) == 0x000001, "Wrong alignment on LevelInstanceGameplayVolume_IsInEditMode");
static_assert(sizeof(LevelInstanceGameplayVolume_IsInEditMode) == 0x000001, "Wrong size on LevelInstanceGameplayVolume_IsInEditMode");
static_assert(offsetof(LevelInstanceGameplayVolume_IsInEditMode, ReturnValue) == 0x000000, "Member 'LevelInstanceGameplayVolume_IsInEditMode::ReturnValue' has a wrong offset!");

struct LevelInstanceGameplayVolume_IsPreviewActor final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LevelInstanceGameplayVolume_IsPreviewActor) == 0x000001, "Wrong alignment on LevelInstanceGameplayVolume_IsPreviewActor");
static_assert(sizeof(LevelInstanceGameplayVolume_IsPreviewActor) == 0x000001, "Wrong size on LevelInstanceGameplayVolume_IsPreviewActor");
static_assert(offsetof(LevelInstanceGameplayVolume_IsPreviewActor, ReturnValue) == 0x000000, "Member 'LevelInstanceGameplayVolume_IsPreviewActor::ReturnValue' has a wrong offset!");

}
