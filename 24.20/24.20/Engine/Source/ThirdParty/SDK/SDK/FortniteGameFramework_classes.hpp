#pragma once

#include "Basic.hpp"

#include "StateTreeModule_classes.hpp"
#include "Engine_classes.hpp"
#include "FortniteGameFramework_structs.hpp"

namespace SDK
{

class AFGF_Character : public ACharacter
{
public:
	uint8                                         Pad_620[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FGF_Character">();
	}
	static class AFGF_Character* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFGF_Character>();
	}
};
static_assert(alignof(AFGF_Character) == 0x000010, "Wrong alignment on AFGF_Character");
static_assert(sizeof(AFGF_Character) == 0x000680, "Wrong size on AFGF_Character");

class AFGF_GameMode : public AGameMode
{
public:
	uint8                                         Pad_370[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FGF_GameMode">();
	}
	static class AFGF_GameMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFGF_GameMode>();
	}
};
static_assert(alignof(AFGF_GameMode) == 0x000008, "Wrong alignment on AFGF_GameMode");
static_assert(sizeof(AFGF_GameMode) == 0x0003C8, "Wrong size on AFGF_GameMode");

class AFGF_GameState : public AGameState
{
public:
	uint8                                         Pad_2F8[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FGF_GameState">();
	}
	static class AFGF_GameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFGF_GameState>();
	}
};
static_assert(alignof(AFGF_GameState) == 0x000008, "Wrong alignment on AFGF_GameState");
static_assert(sizeof(AFGF_GameState) == 0x000358, "Wrong size on AFGF_GameState");

class AFGF_PlayerController : public APlayerController
{
public:
	uint8                                         Pad_848[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FGF_PlayerController">();
	}
	static class AFGF_PlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFGF_PlayerController>();
	}
};
static_assert(alignof(AFGF_PlayerController) == 0x000008, "Wrong alignment on AFGF_PlayerController");
static_assert(sizeof(AFGF_PlayerController) == 0x0008A0, "Wrong size on AFGF_PlayerController");

class AFGF_PlayerState : public APlayerState
{
public:
	uint8                                         Pad_340[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FGF_PlayerState">();
	}
	static class AFGF_PlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFGF_PlayerState>();
	}
};
static_assert(alignof(AFGF_PlayerState) == 0x000008, "Wrong alignment on AFGF_PlayerState");
static_assert(sizeof(AFGF_PlayerState) == 0x000398, "Wrong size on AFGF_PlayerState");

class UObjectBasedStateTreeSchema final : public UStateTreeSchema
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectBasedStateTreeSchema">();
	}
	static class UObjectBasedStateTreeSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectBasedStateTreeSchema>();
	}
};
static_assert(alignof(UObjectBasedStateTreeSchema) == 0x000008, "Wrong alignment on UObjectBasedStateTreeSchema");
static_assert(sizeof(UObjectBasedStateTreeSchema) == 0x000028, "Wrong size on UObjectBasedStateTreeSchema");

class UStateTreeManagerComponent final : public UActorComponent
{
public:
	TArray<struct FStateTreeRuntimeData>          StateTreeRuntimeDataList;
	TArray<struct FStateTreeClientSimulationData> SimulatedDataList;
	struct FStateChangeDataArray                  ReplicatedStateChanges;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeManagerComponent">();
	}
	static class UStateTreeManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeManagerComponent>();
	}
};
static_assert(alignof(UStateTreeManagerComponent) == 0x000008, "Wrong alignment on UStateTreeManagerComponent");
static_assert(sizeof(UStateTreeManagerComponent) == 0x0001E0, "Wrong size on UStateTreeManagerComponent");
static_assert(offsetof(UStateTreeManagerComponent, StateTreeRuntimeDataList) == 0x0000A0, "Member 'UStateTreeManagerComponent::StateTreeRuntimeDataList' has a wrong offset!");
static_assert(offsetof(UStateTreeManagerComponent, SimulatedDataList) == 0x0000B0, "Member 'UStateTreeManagerComponent::SimulatedDataList' has a wrong offset!");
static_assert(offsetof(UStateTreeManagerComponent, ReplicatedStateChanges) == 0x0000C0, "Member 'UStateTreeManagerComponent::ReplicatedStateChanges' has a wrong offset!");

class UStateTreeTaskObject final : public UStateTreeTaskBlueprintBase
{
public:
	bool                                          bReplicates;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeTaskObject">();
	}
	static class UStateTreeTaskObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeTaskObject>();
	}
};
static_assert(alignof(UStateTreeTaskObject) == 0x000008, "Wrong alignment on UStateTreeTaskObject");
static_assert(sizeof(UStateTreeTaskObject) == 0x000050, "Wrong size on UStateTreeTaskObject");
static_assert(offsetof(UStateTreeTaskObject, bReplicates) == 0x000048, "Member 'UStateTreeTaskObject::bReplicates' has a wrong offset!");

}
