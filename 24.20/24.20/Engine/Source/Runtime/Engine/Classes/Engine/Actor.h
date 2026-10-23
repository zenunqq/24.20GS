#pragma once
#include "pch.h"

enum ESpawnActorNameMode : uint8
{
    Required_Fatal,
    Required_ErrorAndReturnNull,
    Required_ReturnNull,
    Requested
};

struct FActorSpawnParameters
{
public:
    FName Name;

    AActor* Template;
    AActor* Owner;
    APawn* Instigator;
    ULevel* OverrideLevel;
    UChildActorComponent* OverrideParentComponent;
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;

public:
    uint8	bRemoteOwned : 1;
public:
    uint8	bNoFail : 1;
    uint8	bDeferConstruction : 1;
    uint8	bAllowDuringConstructionScript : 1;
    ESpawnActorNameMode NameMode;
    EObjectFlags ObjectFlags;
    void* CallbackSum_Callable;
    void* CallbackSum_HeapAllocation;
};
