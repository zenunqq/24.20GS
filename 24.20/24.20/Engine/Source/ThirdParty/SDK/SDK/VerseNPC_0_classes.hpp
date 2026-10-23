#pragma once

#include "Basic.hpp"

#include "VerseAIBase_classes.hpp"
#include "FortniteAIServer_classes.hpp"
#include "EntityCore_classes.hpp"

namespace SDK
{

class UFortAthenaBTTask_VerseNPCMoveTo final : public UFortAthenaBTTask_MoveTo
{
public:
	class FName                                   AcceptableRadiusKeyName;
	class FName                                   AllowStrafeKeyName;
	class FName                                   AllowPartialPathName;
	uint8                                         Pad_CC[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_VerseNPCMoveTo">();
	}
	static class UFortAthenaBTTask_VerseNPCMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_VerseNPCMoveTo>();
	}
};
static_assert(alignof(UFortAthenaBTTask_VerseNPCMoveTo) == 0x000008, "Wrong alignment on UFortAthenaBTTask_VerseNPCMoveTo");
static_assert(sizeof(UFortAthenaBTTask_VerseNPCMoveTo) == 0x0000D8, "Wrong size on UFortAthenaBTTask_VerseNPCMoveTo");
static_assert(offsetof(UFortAthenaBTTask_VerseNPCMoveTo, AcceptableRadiusKeyName) == 0x0000C0, "Member 'UFortAthenaBTTask_VerseNPCMoveTo::AcceptableRadiusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_VerseNPCMoveTo, AllowStrafeKeyName) == 0x0000C4, "Member 'UFortAthenaBTTask_VerseNPCMoveTo::AllowStrafeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_VerseNPCMoveTo, AllowPartialPathName) == 0x0000C8, "Member 'UFortAthenaBTTask_VerseNPCMoveTo::AllowPartialPathName' has a wrong offset!");

class UInventoryComponentBase : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x18];
	class AFortInventory*                         CachedFortInventory;
	class AFortPawn*                              CachedFortPawn;
	class UBlackboardComponent*                   CachedBlackboardComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InventoryComponentBase">();
	}
	static class UInventoryComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryComponentBase>();
	}
};
static_assert(alignof(UInventoryComponentBase) == 0x000008, "Wrong alignment on UInventoryComponentBase");
static_assert(sizeof(UInventoryComponentBase) == 0x000090, "Wrong size on UInventoryComponentBase");
static_assert(offsetof(UInventoryComponentBase, CachedFortInventory) == 0x000078, "Member 'UInventoryComponentBase::CachedFortInventory' has a wrong offset!");
static_assert(offsetof(UInventoryComponentBase, CachedFortPawn) == 0x000080, "Member 'UInventoryComponentBase::CachedFortPawn' has a wrong offset!");
static_assert(offsetof(UInventoryComponentBase, CachedBlackboardComponent) == 0x000088, "Member 'UInventoryComponentBase::CachedBlackboardComponent' has a wrong offset!");

class ULeashComponentBase : public UAIComponent
{
public:
	uint8                                         Pad_98[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LeashComponentBase">();
	}
	static class ULeashComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeashComponentBase>();
	}
};
static_assert(alignof(ULeashComponentBase) == 0x000008, "Wrong alignment on ULeashComponentBase");
static_assert(sizeof(ULeashComponentBase) == 0x0000A8, "Wrong size on ULeashComponentBase");

}
